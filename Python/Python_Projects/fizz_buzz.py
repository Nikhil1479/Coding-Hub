print("Welcome to Fizz Buzz Game")
n = int(input("Enter value of n"))
for game in range(1, n+1):
    if game % 3 == 0 and game % 5 == 0:
        game = str(game)
        game = "FizzBuzz"
    elif game % 3 == 0:
        game = str(game)
        game = "Fizz"
    elif game % 5 == 0:
        game = str(game)
        game = "Buzz"
    print(game)
