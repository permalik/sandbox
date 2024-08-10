#!bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 <project_name>"
fi

project_name=$1
cd_cmd="cd ${project_name}/src"
run_cmd="zig run main.zig"

${cd_cmd}
${run_cmd}
