import random

# !only generate random number between 0.000 to 1.000.....
random_num = random.random()

# * as multiplying a floating digit with a number extends it's range
random_num1 = round((random_num * 5), 2)
print(random_num1)
