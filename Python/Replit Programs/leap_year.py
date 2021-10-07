year = int(input("Enter Year: "))

if year % 4 == 0:
    if year % 100 != 0:
        if year % 400 == 0:
            print("Leap Year")
        else:
            print("Not a Leap Year")
    else:
        print("Not a Leap Year")
else:
    print("Not a Leap Year")

# ! check leap year using logical operators:

# year = int(input("Enter a Year: "))

# if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
#     print("Leap Year")
# else:
#     print("Not a leap year")
