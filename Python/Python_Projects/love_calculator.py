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

if love_score < 10 or love_score > 90:
    print(
        f"Your Love Score is {love_score}%, you go together like coke & mentos")
elif love_score >= 40 and love_score <= 50:
    print(f"Your Love Score is {love_score}%, and you are alright together")
else:
    print(f"Your Love Score is {love_score}%")