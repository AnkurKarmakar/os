echo -n  "Enter pattern length "
read N

for ((i = 1; i<=N; i++)) 
do
    for ((k=N-1; k>=$i; k--))
    do
    echo -n " "
    done
    
    for((j = 0; j<i; j++)) 
    do
    echo -n "$i "
        done
echo
done

