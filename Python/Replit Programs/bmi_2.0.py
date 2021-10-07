print("BMI Calculator")
weight = float(input("Enter Your weight in kg: "))
height = float(input("Enter your height in m: "))
bmi = weight / height ** 2
floatbmi = float(round(bmi))

if floatbmi < 18.5:
    print(f"Your bmi is {floatbmi} and you are underweight")

elif floatbmi > 18.5 and floatbmi < 25:
    print(f"Your bmi is {floatbmi} and you have normal weight")

elif floatbmi > 25 and floatbmi < 30:
    print(f"Your bmi is {floatbmi} and you are slightly overweight")

elif floatbmi > 30 and floatbmi < 35:
    print(f"Your bmi is {floatbmi} and you are obese")

else:
    print(f"Your bmi is {floatbmi} and you are clinically obese")
