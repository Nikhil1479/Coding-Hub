student_heights = input("Input a list of student heights ").split()
for n in range(0, len(student_heights)):
  student_heights[n] = int(student_heights[n])
# print(student_heights)

total_height = 0
for heights in student_heights:
    total_height += heights


total_students = 0
for counter in student_heights:
    total_students += 1

average_heighs = round(total_height / total_students)

print(f"Total Students in class: {total_students}\nAverage Height: {average_heighs}")