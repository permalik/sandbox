#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 arg1 [arg2 .. argN]"
    exit 1
fi

build_insertion_sort="/Users/au4/git/dsa_c/insertion_sort/build"

if [ "$1" == "insertion_sort" ]; then
    if [ -d "$build_insertion_sort" ]; then
        echo "tearing down build.."
        rm -rf /Users/au4/git/dsa_c/insertion_sort/build
        cd /Users/au4/git/dsa_c/insertion_sort
        echo "creating build directory.."
        mkdir build
        cd /Users/au4/git/dsa_c/insertion_sort/build
        echo "generating build assets.."
        cmake ..
        echo "compiling project.."
        cmake --build .
        echo "executing project.."
        ./insertion_sort
    else
        cd /Users/au4/git/dsa_c/insertion_sort
        echo "creating build directory.."
        mkdir build
        cd /Users/au4/git/dsa_c/insertion_sort/build
        echo "generating build assets.."
        cmake ..
        echo "compiling project.."
        cmake --build .
        echo "executing project.."
        ./insertion_sort
    fi
fi
