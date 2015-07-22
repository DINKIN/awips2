#!/bin/bash 
# DR #4360 - This scripts assigns a name to tables' unique constraints

PSQL="/awips2/psql/bin/psql"

cmdDir=`dirname $0`

source ${cmdDir}/commonFunctions.sh

# A table listed here doesn't need changes to any columns or the change
# is handled in some other script.
tables=("acarssounding" "bufrmosavn" "bufrmoseta" "bufrmosgfs" "bufrmoshpc"
"bufrmoslamp" "bufrmosmrf" "bufrmosngm" "goessounding" "poessounding" "qc")

echo "INFO: rename tables unique constraints"

for table in ${tables[@]} ; do
	renameConstraint ${table} uk_${table}_datauri_fields
done

echo "INFO: Done rename tables unique constraints"
