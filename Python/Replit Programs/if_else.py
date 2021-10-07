print("Welcome to Rollercoater!")

height = int(input("What is your height:"))

if height >= 120:
    print("You can ride the rollercoater!")
    age = int(input("Enter Your Age: "))
    if age <= 18:
        print("Pay $12")
    else:
        print("Pay $22")

else:
    print("Sorry, you have to grow taller before you ride!")
