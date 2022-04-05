echo "Enter 3 sides triangle "

echo "Enter side X"
read x

echo "Enter side Y"
read y

echo "Enter side Z"
read z

p=`expr $x \* $x`
q=`expr $y \* $y`
r=`expr $z \* $z`

expr1=`expr $p + $q`
expr2=`expr $q + $r`
expr3=`expr $r + $p`

if [ $expr1 -eq $r -o $expr2 -eq $p -o $expr3 -eq $q ]
then 
echo "Valid Right Angled Triangle"
else
echo "Not a valid Right Angled Triangle"
fi