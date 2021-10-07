import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("Welcome to the PyPassword Generator!")
no_letters = int(input("How many letters would you like in your password?\n")) 
no_symbols = int(input(f"How many symbols would you like?\n"))
no_numbers = int(input(f"How many numbers would you like?\n"))

passwordlist = []
for letter in range(1,no_letters+1):
    passwordlist += random.choice(letters)
# print(passwordlist)

for letter in range(1, no_symbols+1):
    passwordlist += random.choice(symbols)

for letter in range(1, no_numbers+1):
    passwordlist += random.choice(numbers)
password = ""
random.shuffle(passwordlist)
for char in passwordlist:
    password += char
print(f"Your Generated Password is: {password}")