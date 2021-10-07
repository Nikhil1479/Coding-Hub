print("Welcome to Love Calculator")
your_name = input("Enter Your Name: ").lower()
crush_name = input("Enter Your Crush Name: ").lower()
combine_name = your_name + crush_name

t = combine_name.count("t")
r = combine_name.count("r")
u = combine_name.count("u")
e = combine_name.count("e")

true = t + r + u + e

l = combine_name.count("l")
o = combine_name.count("o")
v = combine_name.count("v")
e = combine_name.count("e")

love = l + o + v + e

love_score = int(str(true) + str(love))

print(love_score)
