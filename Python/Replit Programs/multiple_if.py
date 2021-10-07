height = int(input("Enter Your Height: "))
bill = 0
if height >= 120:
    print("You can ride the roller coaster")
    age = int(input("What's Your age: "))
    if age < 12:
        bill = 5
        print("Your Bill is $5")
    elif age < 18:
        bill = 7
        print("Your Bill is $7")
    else:
        bill = 12
        print("Your Bill is  $12")

    want_photos = input("Do you want photos: ")
    if want_photos == "Y" or "y":
        bill += 3
    print(f"Your total bill is ${bill}")

else:
    print("Sorry you have to grow taller")
