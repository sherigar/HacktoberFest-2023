import random
print(logo)
print("I'm thinking of a number between 1 and 100.")
mode = input("Choose a difficulty. Type 'Easy' or 'Hard': ")
if mode == "easy":
  level = 10
else:
  level = 5

 
def compare(num,c_num):
  if num < c_num:
    print("Too Low")
    return level-1
  elif num > c_num :
    print("Too High")
    return level-1
  else :
    print("You Guessed it Right")
    return "win"
  


c_num = random.randint(1,100)

while level != 0 :
  print(f"You have {level} attempts remaining to guess the number.")
  num = int(input("Make a Guess : "))
  level = compare(num,c_num)
  if level == "win":
    print("You Win!!!!")
    level = 0
  elif level == 0 :
    print("You Loose.....")
    print(f"The answer was: {c_num}")
  else :
     print("Guess again..")
