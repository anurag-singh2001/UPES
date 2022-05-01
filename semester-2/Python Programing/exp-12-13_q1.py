from tkinter import *

root = Tk()
root.geometry("444x433")
root.title("Anurag Singh")
def clicked():
    lb2 = Label(root, text="Button was clicked")
    lb2.grid(column=0, row=2)

lbl = Label(root, text="Hello")
lbl.grid(column=0, row=0)
btn = Button(root, text="Click Me",bg="yellow", fg="red",command=clicked)
btn.grid(column=0, row=1)

root.mainloop()