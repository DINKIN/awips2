/**
 * This software was developed and / or modified by Raytheon Company,
 * pursuant to Contract DG133W-05-CQ-1067 with the US Government.
 * 
 * U.S. EXPORT CONTROLLED TECHNICAL DATA
 * This software product contains export-restricted data whose
 * export/transfer/disclosure is restricted by U.S. law. Dissemination
 * to non-U.S. persons whether in the United States or abroad requires
 * an export license or other authorization.
 * 
 * Contractor Name:        Raytheon Company
 * Contractor Address:     6825 Pine Street, Suite 340
 *                         Mail Stop B8
 *                         Omaha, NE 68106
 *                         402.291.0100
 * 
 * See the AWIPS II Master Rights File ("Master Rights File.pdf") for
 * further licensing information.
 **/
package com.raytheon.uf.edex.registry.ebxml.services.query.types.canonical;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import oasis.names.tc.ebxml.regrep.xsd.query.v4.QueryResponse;
import oasis.names.tc.ebxml.regrep.xsd.rim.v4.QueryType;
import oasis.names.tc.ebxml.regrep.xsd.rim.v4.RegistryObjectType;
import oasis.names.tc.ebxml.regrep.xsd.rim.v4.RegistryPackageType;

import org.hibernate.criterion.DetachedCriteria;
import org.hibernate.criterion.Property;

import com.raytheon.uf.common.status.IUFStatusHandler;
import com.raytheon.uf.common.status.UFStatus;
import com.raytheon.uf.edex.database.DataAccessLayerException;
import com.raytheon.uf.edex.registry.ebxml.dao.RegistryObjectTypeDao;
import com.raytheon.uf.edex.registry.ebxml.exception.EbxmlRegistryException;
import com.raytheon.uf.edex.registry.ebxml.services.query.QueryConstants;
import com.raytheon.uf.edex.registry.ebxml.services.query.QueryParameters;
import com.raytheon.uf.edex.registry.ebxml.services.query.types.CanonicalEbxmlQuery;

/**
 * TODO Add Description
 * 
 * <pre>
 * 
 * SOFTWARE HISTORY
 * 
 * Date         Ticket#    Engineer    Description
 * ------------ ---------- ----------- --------------------------
 * Jan 18, 2012            bphillip     Initial creation
 * 3/18/2013    1802       bphillip    Modified to use transaction boundaries and spring dao injection
 * 
 * </pre>
 * 
 * @author bphillip
 * @version 1.0
 */

public class GetRegistryPackagesByMemberId extends CanonicalEbxmlQuery {

    /** The logger */
    protected static final transient IUFStatusHandler statusHandler = UFStatus
            .getHandler(GetAuditTrailByTimeInterval.class);

    public static final String QUERY_DEFINITION = QUERY_CANONICAL_PREFIX
            + "GetRegistryPackagesByMemberId";

    /** The list of valid parameters for this query */
    private static final List<String> QUERY_PARAMETERS = new ArrayList<String>();

    /* Initializes the list of parameters */
    static {
        QUERY_PARAMETERS.add(QueryConstants.MEMBER_ID);
    }

    private RegistryObjectTypeDao<RegistryPackageType> registryPackageDao;

    @Override
    protected <T extends RegistryObjectType> List<T> query(QueryType queryType,
            QueryResponse queryResponse) throws EbxmlRegistryException {
        QueryParameters parameters = getParameterMap(queryType.getSlot(),
                queryResponse);
        // The client did not specify the required parameter
        if (parameters.isEmpty()) {
            throw new EbxmlRegistryException("Canonical query ["
                    + this.getQueryDefinition()
                    + "] is missing required parameter ["
                    + QUERY_PARAMETERS.get(0) + "]");
        }

        String id = parameters.getFirstParameter(QueryConstants.MEMBER_ID);
        List<String> ids = new ArrayList<String>();
        if (id.contains("_") || id.contains("%")) {
            List<String> matchingIds = registryObjectDao.getMatchingIds(id);
            if (matchingIds.isEmpty()) {
                return Collections.emptyList();
            }
            ids.addAll(matchingIds);

        } else {
            ids.add(id);
        }

        DetachedCriteria theQuery = DetachedCriteria
                .forClass(RegistryPackageType.class);
        theQuery.createAlias("registryObjectList", "registryObjectList");
        theQuery.createAlias("registryObjectList.registryObject", "regObject");
        theQuery.add(Property.forName("regObject.id").in(ids));
        try {
            return registryPackageDao.executeCriteriaQuery(theQuery);
        } catch (DataAccessLayerException e) {
            throw new EbxmlRegistryException(
                    "Error executing GetRegistryPackages!", e);
        }
    }

    @Override
    protected List<String> getValidParameters() {
        return QUERY_PARAMETERS;
    }

    @Override
    public String getQueryDefinition() {
        return QUERY_DEFINITION;
    }

    public void setRegistryPackageDao(
            RegistryObjectTypeDao<RegistryPackageType> registryPackageDao) {
        this.registryPackageDao = registryPackageDao;
    }

}
