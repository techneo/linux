#!/bin/bash
echo "File exist checker"
if [ "$#" -ne 1 ]; then
   echo "no arg passed"
   # dolar 0 gives "bash"
   echo "Example $0 /etc"
   exit 1

fi

