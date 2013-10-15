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
package com.raytheon.uf.common.dataplugin.profiler;

import java.io.Serializable;

import com.raytheon.uf.common.serialization.annotations.DynamicSerialize;
import com.raytheon.uf.common.serialization.annotations.DynamicSerializeElement;

/**
 * ProfilerLevel contains the data for a single vertical level observation.
 * 
 * <pre>
 * SOFTWARE HISTORY
 * Date         Ticket#    Engineer    Description
 * ------------ ---------- ----------- --------------------------
 * 20080303            969 jkorman     Initial implementation.
 * Oct 15, 2013 2361       njensen     Remove XML annotations
 * 
 * </pre>
 * 
 * @author jkorman
 * @version 1.0
 */
@DynamicSerialize
public class ProfilerLevel implements Serializable, Comparable<ProfilerLevel> {

    private static final long serialVersionUID = 1L;

    @DynamicSerializeElement
    private Integer modeInfo;

    @DynamicSerializeElement
    private Integer levelQualCode;

    @DynamicSerializeElement
    private Double peakPower;

    @DynamicSerializeElement
    private Integer levelHeight;

    @DynamicSerializeElement
    private Double ucWind;

    @DynamicSerializeElement
    private Double vcWind;

    @DynamicSerializeElement
    private Double horzStdDev;

    @DynamicSerializeElement
    private Integer horzConsensus;

    @DynamicSerializeElement
    private Double wcWind;

    @DynamicSerializeElement
    private Double vertStdDev;

    @DynamicSerializeElement
    private Integer vertConsensus;

    /**
     * Construct an empty instance.
     */
    public ProfilerLevel() {
    }

    /**
     * Get the NOAA wind profiler mode information.
     * 
     * <pre>
     *  0 Wind Profiler operating in Submode A.
     *  1 Wind Profiler operating in Submode B.
     *  2 Reserved.
     *  3 Missing value.
     * </pre>
     * 
     * @return the modeInfo
     */
    public Integer getModeInfo() {
        return modeInfo;
    }

    /**
     * Set the NOAA wind profiler mode information.
     * 
     * @param modeInfo
     *            the modeInfo to set
     */
    public void setModeInfo(Integer modeInfo) {
        this.modeInfo = modeInfo;
    }

    /**
     * Get the NOAA wind profiler quality control test results.
     * 
     * <pre>
     *  bit 1 Test A performed and failed.
     *  bit 2 Test B performed and failed.
     *  bit 3 Test results inconclusive.
     *  All 4 Missing value.
     * </pre>
     * 
     * @return the levelQualCode
     */
    public Integer getLevelQualCode() {
        return levelQualCode;
    }

    /**
     * Set the NOAA wind profiler quality control test results.
     * 
     * @param levelQualCode
     *            the levelQualCode to set
     */
    public void setLevelQualCode(Integer levelQualCode) {
        this.levelQualCode = levelQualCode;
    }

    /**
     * Get the peak power in DB.
     * 
     * @return the peakPower
     */
    public Double getPeakPower() {
        return peakPower;
    }

    /**
     * Set the peak power in DB.
     * 
     * @param peakPower
     *            the peakPower to set
     */
    public void setPeakPower(Double peakPower) {
        this.peakPower = peakPower;
    }

    /**
     * Get the level height in meters.
     * 
     * @return the levelHeight
     */
    public Integer getLevelHeight() {
        return levelHeight;
    }

    /**
     * Set the level height in meters.
     * 
     * @param levelHeight
     *            the levelHeight to set
     */
    public void setLevelHeight(Integer levelHeight) {
        this.levelHeight = levelHeight;
    }

    /**
     * Get the u wind component of the horizontal wind.
     * 
     * @return the uWind
     */
    public Double getUcWind() {
        return ucWind;
    }

    /**
     * Set the u wind component of the horizontal wind.
     * 
     * @param wind
     *            the uWind to set
     */
    public void setUcWind(Double wind) {
        ucWind = wind;
    }

    /**
     * Get the v wind component of the horizontal wind.
     * 
     * @return the vWind
     */
    public Double getVcWind() {
        return vcWind;
    }

    /**
     * Set the v wind component of the horizontal wind.
     * 
     * @param wind
     *            the vWind to set
     */
    public void setVcWind(Double wind) {
        vcWind = wind;
    }

    /**
     * Get the standard deviation of the horizontal wind.
     * 
     * @return the horzStdDev
     */
    public Double getHorzStdDev() {
        return horzStdDev;
    }

    /**
     * Set the standard deviation of the horizontal wind.
     * 
     * @param horzStdDev
     *            the horzStdDev to set
     */
    public void setHorzStdDev(Double horzStdDev) {
        this.horzStdDev = horzStdDev;
    }

    /**
     * Get the reported horizontal consensus.
     * 
     * @return the horzConsensus
     */
    public Integer getHorzConsensus() {
        return horzConsensus;
    }

    /**
     * Set the reported horizontal consensus.
     * 
     * @param horzConsensus
     *            the horzConsensus to set
     */
    public void setHorzConsensus(Integer horzConsensus) {
        this.horzConsensus = horzConsensus;
    }

    /**
     * Get the w wind component of the vertical wind.
     * 
     * @return the wWind
     */
    public Double getWcWind() {
        return wcWind;
    }

    /**
     * Get the w wind component of the vertical wind.
     * 
     * @param wind
     *            the wWind to set
     */
    public void setWcWind(Double wind) {
        wcWind = wind;
    }

    /**
     * Set the standard deviation of the vertical wind.
     * 
     * @return the vertStdDev
     */
    public Double getVertStdDev() {
        return vertStdDev;
    }

    /**
     * Set the standard deviation of the horizontal wind.
     * 
     * @param vertStdDev
     *            the vertStdDev to set
     */
    public void setVertStdDev(Double vertStdDev) {
        this.vertStdDev = vertStdDev;
    }

    /**
     * Get the reported vertical consensus.
     * 
     * @return the vertConsensus
     */
    public Integer getVertConsensus() {
        return vertConsensus;
    }

    /**
     * Set the reported vertical consensus.
     * 
     * @param vertConsensus
     *            the vertConsensus to set
     */
    public void setVertConsensus(Integer vertConsensus) {
        this.vertConsensus = vertConsensus;
    }

    /**
     * 
     */
    @Override
    public int compareTo(ProfilerLevel other) {
        final int BEFORE = -1;
        final int EQUAL = 0;
        final int AFTER = 1;

        int result = 0;
        if (this == other) {
            result = EQUAL;
        } else {
            result = levelHeight.compareTo(other.levelHeight);
        }
        return result;
    }

}
