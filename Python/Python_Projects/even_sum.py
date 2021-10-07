first_num =int(input("Enter First Number: "))
second_num = int(input("Enter Second Number: "))
if first_num < second_num:
    sum = 0 
    for number in range(first_num, second_num + 1):
        if number % 2 == 0:
            sum += number
    print(f"Sum of even numbers from {first_num} to {second_num} is: {sum}")
else:
    print("Not a Valid Operation")