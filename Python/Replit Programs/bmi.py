height = input("Enter Your Height: ")
weight = input("Enter Your Weight: ")

floatheight = float(height)
floatweight = float(weight)

bmi = floatweight / floatheight ** 2

floatbmi = int(bmi)

print("Your BMI is:", floatbmi)
