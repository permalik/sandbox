#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 <project_name>"
fi

project_name=$1
build_dir="./${project_name}/src/build"

if [ -d "$build_dir" ]; then
    echo "tearing down build.."
    rm -rf ${build_dir}
    echo "creating build directory.."
    mkdir -p ${build_dir}
    cd ${build_dir}
    echo "generating build assets.."
    cmake ..
    echo "compiling project.."
    cmake --build .
    echo "executing project.."
    ./${project_name}
else
    echo "creating build directory.."
    mkdir ${build_dir}
    cd ${build_dir}
    echo "generating build assets.."
    cmake ..
    echo "compiling project.."
    cmake --build .
    echo "executing project.."
    ./${project_name}
fi
