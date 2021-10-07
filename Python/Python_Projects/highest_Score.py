stu_score = input("Enter Scores: ").split()
for n in range(0, len(stu_score)):
    stu_score[n] = int(stu_score[n])

highest = 0
for score in stu_score:
    if score > highest:
        highest = score
print(f"Highest score among all of these : {highest}")