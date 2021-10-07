print("Welcome to BMI Calculator")

weight = int(input("Enter Your Weight (in kg): "))
height = float(input("Enter Your Height (in m): "))

bmi = weight / (height ** 2)

float_bmi = float(round(bmi, 0))

if float_bmi < 18.5:
    print(f"Your BMI is {float_bmi}, and you are Underweight")
elif float_bmi > 18.5 and float_bmi < 25:
    print(f"Your BMI is {float_bmi}, and you have Normal Weight")
elif float_bmi > 25 and float_bmi < 30:
    print(f"Your BMI is{float_bmi}, and you are slightly Over Weight")
elif float_bmi > 30 and float_bmi < 35:
    print(f"Your BMI is {float_bmi}, and you are Obese")
else:
    print(f"Your BMI is {float_bmi} and you are Clinically Obese")