echo "enter no.of elements"
read n
for((i=0;i<n;i++))
do
echo "enter `expr $i + 1` number"
read arr[$i]
done
echo "the numbers you hav entered are"
for((i=0;i<n;i++))
do
echo ${arr[$i]}
done
