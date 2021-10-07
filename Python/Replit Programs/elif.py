print("Welcome to RollerCoaster")

height = int(input("Enter Your Height in cm: "))

if height >= 120:
    print("You can ride the rollercoaster")

    age = int(input("Enter Your Age: "))

    if age <= 12:

        print("Please Pay $5")

    elif age <= 18:

        print("Please Pay $7")

    else:

        print("Please Pay $12")

else:

    print("Sorry, You have to grow taller to enjoy the ride")
