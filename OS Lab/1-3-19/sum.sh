#!/bin/bash
if [ $# -ne 2 ] ; then
echo -e  " please provide correct number of arguments"
else
# $1 is first argument and $2 is second .
echo " sum of $1 + $2 is `expr $1 + $2` "
fi
