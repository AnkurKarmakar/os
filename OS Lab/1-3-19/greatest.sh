if [ $# -ne 3 ]
then
echo "$0:All numbers are not provided" >&2
exit 1
fi

if [ $1 -eq $2 ] && [ $1 -eq $3 ]
then
echo "All the three numbers are equal"
elif [ $1 -eq $2 ] && [ $1 -gt $3 ]
then
echo "$1 and $2 numbers are equal and are largest
numbers among $1 $2 and $3"
elif [ $1 -eq $3 ] && [ $1 -gt $2 ]
then
echo "$1 and $3 numbers are equal and are largest
numbers among $1 $2 and $3"
elif [ $2 -eq $3 ] && [ $2 -gt $1 ]
then
echo "$2 and $3 numbers are equal and are largest
numbers among $1 $2 and $3"
elif [ $1 -eq $2 ] && [ $1 -lt $3 ]
then
echo "$3 is largest number among $1 $2 and $3"
elif [ $1 -eq $3 ] && [ $1 -lt $2 ]
then
echo "$2 is largest number among $1 $2 and $3"
elif [ $2 -eq $3 ] && [ $2 -lt $1 ]
then
echo "$1 is largest number among $1 $2 and $3"
elif [ $1 -gt $2 ] && [ $1 -gt $3 ]
then
echo "$1 is largest number among $1 $2 and $3"
elif [ $2 -gt $1 ] && [ $2 -gt $3 ]
then
echo "$2 is largest number among $1 $2 and $3"
elif [ $3 -gt $1 ] && [ $3 -gt $2 ]
then
echo "$3 is largest number among $1 $2 and $3"
else
echo "I can not figure out which number is
largest"
fi
