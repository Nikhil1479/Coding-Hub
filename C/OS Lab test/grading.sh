echo "Enter total marks of a student"
read n
case $n in 
100)
echo "O" ;;
9[0-9]) echo "Student grade is O" ;;
8[0-9])echo "Student grade is E" ;;
7[0-9]) echo "Student grade is A" ;;
6[0-9]) echo "Student grade is B" ;;
5[0-9]) echo "Student grade is C" ;;
4[0-9]) echo "Student grade is D" ;;
*) 
echo "F";;
esac