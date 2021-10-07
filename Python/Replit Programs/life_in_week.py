age = input("What is Your Age: ")

intage = int(age)

days = (90 * 365) - (intage * 365)

week = (90 * 52) - (intage * 52)

month = (90 * 12) - (intage * 12)

print(f"You have {days} days {week} week and {month} months left")
