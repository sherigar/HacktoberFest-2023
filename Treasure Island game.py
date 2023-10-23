import tkinter as tk
from tkinter import messagebox

def check_choice(choice):
    if choice == "left":
        label.config(text="You've come to a lake. There is an island in the middle of the lake.\n"
                          "Do you want to wait for a boat or swim across?")
        button1.config(text="Wait", command=lambda: check_choice("wait"))
        button2.config(text="Swim", command=lambda: check_choice("swim"))
    elif choice == "wait":
        label.config(text="You arrived at the island unharmed. There is a house with 3 doors.\n"
                          "One red, one yellow, and one blue. Which color do you choose?")
        button1.config(text="Red", command=lambda: check_choice("red"))
        button2.config(text="Yellow", command=lambda: check_choice("yellow"))
        button3.config(text="Blue", command=lambda: check_choice("blue"))
    elif choice == "blue" or choice == "right":
        messagebox.showinfo("Result", "You fell into a hole. Game Over.")
        root.destroy()
    elif choice == "red":
        messagebox.showinfo("Result", "It's a room full of fire. Game Over.")
        root.destroy()
    elif choice == "yellow":
        messagebox.showinfo("Result", "You found the treasure! You Win!")
        root.destroy()
    elif choice == "swim":
        messagebox.showinfo("Result", "You got attacked by an angry trout. Game Over.")
        root.destroy()

root = tk.Tk()
root.title("Treasure Island Game")
root.geometry("400x300")

label = tk.Label(root, text="Welcome to Treasure Island. You're at a crossroad.\n"
                            "Where do you want to go? Type 'left' or 'right'", wraplength=300)
label.pack(pady=20)

button_frame = tk.Frame(root)
button_frame.pack()

button1 = tk.Button(button_frame, text="Left", command=lambda: check_choice("left"))
button1.pack(side=tk.LEFT, padx=10)

button2 = tk.Button(button_frame, text="Right", command=lambda: check_choice("right"))
button2.pack(side=tk.LEFT, padx=10)

button3 = tk.Button(button_frame, text="Blue", state=tk.DISABLED)
button3.pack(side=tk.LEFT, padx=10)

root.mainloop()
