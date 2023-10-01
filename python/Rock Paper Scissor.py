import random

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

while (1) :
 print("\nROCK-PAPER-SCISSOR\n")
 user = int(input("What do you choose? Type 0 for Rock, 1 for Paper, 2 for Scissors \n"))
 default = ["rock","paper","scissors"]
 computer = random.choice(default)

 if user == 0 and computer == "rock" :
  print(rock)
  print("computer chose :"+rock)
  print("Draw")
 elif user == 0 and computer == "paper" :
  print(rock)
  print("computer chose :"+paper)
  print("You Lose...")
 elif user == 0 and computer == "scissors" :
  print(rock)
  print("computer chose :"+scissors)
  print("You Win!!!!")
 elif user == 1 and computer == "rock" :
  print(paper)
  print("computer chose :"+rock)
  print("You Win!!!!")
 elif user == 1 and computer == "paper" :
  print(paper)
  print("computer chose :"+paper)
  print("Draw")
 elif user == 1 and computer == "scissors" :
  print(paper)
  print("computer chose :"+scissors)
  print("You Lose...")
 elif user == 2 and computer == "rock" :
  print(scissors)
  print("computer chose :"+rock)
  print("You Lose...")
 elif user == 2 and computer == "paper" :
  print(scissors)
  print("computer chose :"+paper)
  print("You Win!!!!")
 elif user == 2 and computer == "scissors" :
  print(scissors)
  print("computer chose :"+scissors)
  print("Draw")
 else :
  print("Enter a valid choice")