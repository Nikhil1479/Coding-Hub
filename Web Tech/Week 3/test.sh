echo "Enter the num"
read n

val=0
power=1

while [ $n  -ne 0 ]
       do
        r=`expr $n % 2`
        val=`expr $r \* $power + $val`
        power=`expr $power \* 10`
        n=`expr $n / 2`
      done

echo "Binary equivalent=$val"