import time

def intro():
    print("Welcome to Treasure Island!")
    time.sleep(2)
    print("Your mission is to find the hidden treasure.")
    time.sleep(2)
    print("You find yourself on a mysterious island...")
    time.sleep(2)

def choose_path():
    print("You stand at a crossroads. You can go left or right.")
    time.sleep(1)
    choice = input("Which path will you choose? (left/right): ").lower()
    if choice == "left":
        print("You've chosen to go left...")
        time.sleep(2)
        waterfall()
    elif choice == "right":
        print("You've chosen to go right...")
        time.sleep(2)
        snake_pit()
    else:
        print("Invalid choice. Try again.")
        choose_path()

def waterfall():
    print("You approach a beautiful waterfall.")
    time.sleep(2)
    print("Do you want to swim across or walk around it?")
    time.sleep(1)
    choice = input("Swim or walk? (swim/walk): ").lower()
    if choice == "walk":
        print("You've chosen to walk around the waterfall...")
        time.sleep(2)
        cave()
    elif choice == "swim":
        print("You've chosen to swim across the waterfall...")
        time.sleep(2)
        print("A strong current sweeps you away, and you find yourself back at the crossroads.")
        choose_path()
    else:
        print("Invalid choice. Try again.")
        waterfall()

def snake_pit():
    print("You encounter a pit full of venomous snakes!")
    time.sleep(2)
    print("Do you want to jump over the pit or find another way?")
    time.sleep(1)
    choice = input("Jump or find another way? (jump/another way): ").lower()
    if choice == "jump":
        print("You jump over the pit and continue your journey...")
        time.sleep(2)
        diamond_room()
    elif choice == "another way":
        print("You find another way around the pit and continue your journey...")
        time.sleep(2)
        diamond_room()
    else:
        print("Invalid choice. Try again.")
        snake_pit()

def cave():
    print("You enter a dark cave.")
    time.sleep(2)
    print("You see two doors. One is red, and one is blue.")
    time.sleep(1)
    choice = input("Which door do you choose? (red/blue): ").lower()
    if choice == "red":
        print("You open the red door and enter a room full of treasure!")
        time.sleep(2)
        print("Congratulations! You've found the hidden treasure and won the game.")
    elif choice == "blue":
        print("You open the blue door and are attacked by a giant dragon. You lose!")
    else:
        print("Invalid choice. Try again.")
        cave()

def diamond_room():
    print("You enter a room with three doors.")
    time.sleep(2)
    print("One door is made of gold, one is made of silver, and one is made of diamonds.")
    time.sleep(1)
    choice = input("Which door do you choose? (gold/silver/diamonds): ").lower()
    if choice == "gold":
        print("You open the gold door and find an empty room. You lose!")
    elif choice == "silver":
        print("You open the silver door and find an empty room. You lose!")
    elif choice == "diamonds":
        print("You open the diamond door and find the hidden treasure!")
        time.sleep(2)
        print("Congratulations! You've found the hidden treasure and won the game.")
    else:
        print("Invalid choice. Try again.")
        diamond_room()

def main():
    intro()
    choose_path()

if __name__ == "__main__":
    main()
