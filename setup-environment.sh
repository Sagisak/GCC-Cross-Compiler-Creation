#!/bin/sh

# Get the absolute path to the directory where this script is located
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

# Add the cross-compiler bin directory to the PATH
export PATH="$SCRIPT_DIR/cross/bin:$PATH"

# Optionally, export other necessary environment variables
# export OTHER_VAR=value

echo "Environment setup complete. PATH is now: $PATH"

#!/bin/sh is the interpreter that tells the system to use 'sh' to interpret and execute the commands in the script; more portable.

#SCRIPT_DIR stores the path we are currently, which is GCC-cross-compiler-creation and export PATH just add the SCRIPT_DIR with /cross/bin. $PATH is an envoriment variable that contains a colon-seperated list of directories that the shell searches to find the executable program. By colon-seperated list meant that the list contains directories that is seperated by ':' .



