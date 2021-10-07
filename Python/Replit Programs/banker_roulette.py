import random
name = input("Enter Everybody Name seperated by a comma: ")
name_list = name.split(", ")
len_name = len(name_list)
random_list = random.randint(0, len_name - 1)
person_pay = name_list[random_list]

print("Today" +" " + person_pay + " " + "Will pay the bill😭")

#!                                    OR

# *import random
# *name = input("Enter Everybody Name seperated by a comma: ")
# *name_list = name.split(", ")
# *random_list1 = random.choice(name_list)
# *print(f"{random_list1} Will pay the bill")