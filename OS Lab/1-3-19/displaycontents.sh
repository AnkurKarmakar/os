if [ $# -ne 3 ] 
then
	echo -e  " please provide correct number of arguments"
else
	echo "  Here print contains of 'myf' file from line number $1 to next $2 line of that file"
	cat -n $3 | sed -n $1,$2p
fi


