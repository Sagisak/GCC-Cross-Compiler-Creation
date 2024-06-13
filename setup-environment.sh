#!/bin/sh

# Get the absolute path to the directory where this script is located
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

# Add the cross-compiler bin directory to the PATH
export PATH="$SCRIPT_DIR/cross/bin:$PATH"

# Optionally, export other necessary environment variables
# export OTHER_VAR=value

echo "Environment setup complete. PATH is now: $PATH"

