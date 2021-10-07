import random
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
print("Welcome to rock paper and scissor game")
choice = int(input("Type 0 for Rock, 1 for Paper or 2 for Scissors:\n"))

computer_choice = random.randint(0,2)
if computer_choice == 0:
  random_rock = rock
elif computer_choice == 1:
  random_paper = paper
elif computer_choice == 2:
  random_scissor = scissors 

if choice == 0 and computer_choice == 1:
  print(f"You Choose:\n{rock}\nComputer Choose:\n{random_paper}\nYou Lose")
elif choice == 0 and computer_choice == 2:
    print(f"You Choose:\n{rock}\nComputer Choose:\n{random_scissor}\nYou Won")

elif choice == 1 and computer_choice == 0:  
    print(f"You Choose:\n{paper}\nComputer Choose:\n{random_rock}\nYou Won")
elif choice == 1 and computer_choice == 2:
    print(f"You Choose:\n{paper}\nComputer Choose:\n{random_scissor}\nYou Lose")

elif choice == 2 and computer_choice == 0:
    print(f"You Choose:\n{scissors}\nComputer Choose:\n{random_rock}\nYou Lose")
elif choice == 2 and computer_choice == 1:
    print(f"You Choose:\n{scissors}\nComputer Choose:\n{random_paper}\nYou Won")
elif choice == computer_choice:
    print("It's a Draw")
else:
    print(f"You typed an Invalid Number")