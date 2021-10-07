print("Welcome to Python Pizza")
pizza_size = input("What size of Pizza do you want? S, M, or L: ")
add_pepperoni = input("Do You want to add pepperoni? Y or N: ")
extra_cheese = input("Do You want to add extra cheese? Y or N:")
bill = 0

if pizza_size == "S":
    bill += 15
elif pizza_size == "M":
    bill += 20
else:
    bill += 25
if add_pepperoni == "Y":
    if pizza_size == "S":
        bill += 2
    else:
        bill += 3
if extra_cheese == "Y":
    bill += 1

print(f"Your total bill is ${bill}")
