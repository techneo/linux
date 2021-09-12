#!/bin/bash
# $# represents the number of command line arguments
if [ "$#" -ne 1 ]; then
   echo "no arg passed"
   # dolar 0 gives "bash"
   echo "Example $0 /etc"
   exit 1

fi

# $1 is the argument to the script
test -e $1
# $? = 0 means the file or directory was found
if [ "$?" -eq 0 ]; then
   echo "file or directory found"
elif [ "$?" -eq 1 ]; then
   echo "file or directory not found"
   exit 3
else
   echo "unknown error"
   exit 1
fi

exit 0
