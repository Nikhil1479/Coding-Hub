print("Welcome to Python Pizza")
pizza_size = input(
    "Which Size of Pizza do you want ? 'Small', 'Medium' or 'Large': ").lower()

if pizza_size == "small" or pizza_size == "medium" or pizza_size == "large":

    bill = 0
    add_pepperoni = input("Do you want to Add Pepperoni ? 'Y' or 'N': ").lower()
    extra_cheese = input("Do you want to add Extra Cheese ? 'Y' or 'N': ").lower()

    if pizza_size == "small":
        bill += 15
        if add_pepperoni == "y":
            bill += 2
            if extra_cheese == "y":
                bill += 1

    if pizza_size == "medium":
        bill += 20
        if add_pepperoni == "y":
            bill += 3
            if extra_cheese == "y":
                bill += 1

    if pizza_size == "large":
        bill += 25
        if add_pepperoni == "y":
            bill += 3
            if extra_cheese == "y":
                bill += 1
    print(
        f"You have ordered a {pizza_size} size pizza \n Pepperoni => {add_pepperoni} \n Extra Cheese => {extra_cheese}\n Total Bill => ${bill}")
else:
    print("Not a Valid Size")