#It's very begginer friendly game for all who are beginners in python

# Treasure Island game 

print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |                           
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/[TomekK]
*******************************************************************************''')

print("Welcome to the Treasure island")
print("Your mission is to find the treasure")
turn=input("You are at the cross road so do you want to turn left or right ? ").lower()
if turn=='right':
    print("sorry you fell in hole  :(( so GAME OVER!!!")
else:
    print("You have successfully passed level-1 ...Welcome to level-2 !!!")
    seaside=input("Now you are at the sea side so Do you want to swim or wait for the boat ??").lower()
    if seaside=='swim':
        print("Sorry the river is very deep and there are many crocodiles so you can't swim")
        print("GAME OVER !!! :(")
    else:
        print("You have successfully passed level 2 ...Welcome to the level 3")
        print("Now after passing river you are here infront of three doors")
        door=input("Which door do you want to select among red , blue and yellow ?? ").lower()
        if door=='Yellow':
            print("there  are wild animals in the yellow door so You can't save you life!!")
            print("GAME OVER!!!")
        elif door=='red':
            print("There is fire inside red door so You can't save your life..")
            print("GAME OVER!!!")
        else:
            print("You have successfully passed all the three level")
            print("CONGRATULATIONS  YOU SUCCESSFULLY FOUND THE TREASURE !!! YOU WON THE GAME!!")