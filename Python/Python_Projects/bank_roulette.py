import random 
names = input("Enter Your Names: ")
name_list = names.split(", ")
len_names = len(name_list)
random_name = random.randint(0, len_names)
who_will_pay = name_list[random_name]
print(f"Today {who_will_pay} will pay the Bill 😭 ")