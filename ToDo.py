import tkinter as tk
from tkinter import ttk

def add_task():
    task = entry.get()
    if task:
        listbox.insert(tk.END, task)
        entry.delete(0, tk.END)

def remove_task():
    selected_task = listbox.curselection()
    if selected_task:
        listbox.delete(selected_task)
        
    selected_complete_task = completed_listbox.curselection()
    if selected_complete_task:
        completed_listbox.delete(selected_complete_task)
    

def mark_completed():
    selected_task = listbox.curselection()
    if selected_task:
        task = listbox.get(selected_task)
        listbox.delete(selected_task)
        completed_listbox.insert(tk.END, task)

# Create the main window
root = tk.Tk()
root.title("To-Do List")

# Entry for adding tasks
entry_label = tk.Label(root, text="Write Something")
entry_label.pack()

entry = tk.Entry(root, width=40)
entry.pack()

# Buttons for adding, marking as completed, and removing tasks
add_button = tk.Button(root, text="Add Task", command=add_task)
mark_button = tk.Button(root, text="Mark Completed", command=mark_completed)
remove_button = tk.Button(root, text="Remove Task", command=remove_task)

add_button.pack()
mark_button.pack()
remove_button.pack()

# Lists for displaying tasks and completed tasks
listbox = tk.Listbox(root, selectmode=tk.SINGLE, height=10, width=40)
completed_listbox = tk.Listbox(root, selectmode=tk.SINGLE, height=10, width=40)

listbox.pack()
completed_listbox.pack()

root.mainloop()
