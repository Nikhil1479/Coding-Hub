print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/_____ /
*******************************************************************************
''')
print("Welcome to Treasure Island")
left_or_right = input("You have came across a castle π° and you have two ways where you want to go 'Left'π or 'Right'π:  ").lower()
if left_or_right == "left":
    swim_or_wait = input("Woohooo!! You have came to a river π and you have two choices 'Swim'πββοΈ or 'Wait'β. What would you like to chooseπ€π­: ").lower()
    if swim_or_wait == "wait":
        which_Door = input("Your wait was worth it!!You have came inside the castle but π there are three doors πͺ 'Red' π΄,'Blue'π΅ & 'Yellow' π‘. Which door you will choose π€π­: ").lower()
        if which_Door == "red":
            print("You have been burned by fire π₯. Game Over!!")
        elif which_Door == "blue":
            print("You have been eaten by beast π². Game Over!!")
        elif which_Door == "yellow":
            print("Congratuations π.You have found the treasure π₯. You Won!!")
        else:
            print("Not a valid door")
    else:
        print("You have been attacked by aligator π!! Game Over")

else:
    print("You have chosen a wrong β way and you have fall in the holeπ³")