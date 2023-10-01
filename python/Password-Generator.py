import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("Welcome to the Password Generator!")
letter = int(input("How many letters would you like in your Password?\n")) 
symbol = int(input(f"How many Symbols would you like?\n"))
number = int(input(f"How many Numbers would you like?\n"))

passkey = []

for char in range(1,letter+1):
  passkey.append(random.choice(letters))

for char in range(1,symbol+1):
  passkey.append(random.choice(symbols))

for char in range(1,number+1):
  passkey.append(random.choice(numbers))

random.shuffle(passkey)

password =""
for char in passkey :
  password += char

print(f"Your Password is : {password}")
