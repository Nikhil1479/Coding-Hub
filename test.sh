#Display 1st and 2nd Element from Array
echo "Enter Size of Array: "
read n
echo "Enter $n Elements of Array: "
for ((i=0; i<n; i++))
do
    read a[i]
done
echo "1st element : ${a[0]}"
echo "2nd element : ${a[1]}"