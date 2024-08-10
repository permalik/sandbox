if [ -z "$1" ]; then
    echo "Usage: $0 <project_name>"
fi

project_name=$1
cd_cmd="cd ${project_name}"
ex_cmd="go run ."

${cd_cmd}
${ex_cmd}
