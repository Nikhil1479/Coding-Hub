print("Welcome to Tip Calculator")
bill = float(input("Enter the bill Amount: $ "))
tip = int(input("How much tip do you want to give: "))
split_bill = int(input("Between how may people do you like to split bill: "))
total_bill = bill * (tip/100)
grand_total_bill = bill + total_bill
split_total_bill = grand_total_bill / split_bill
float_split_bill = float(round(split_total_bill, 2))

print(f"Each Person should pay ${float_split_bill}")
