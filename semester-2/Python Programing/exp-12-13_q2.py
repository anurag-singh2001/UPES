from tkinter import *

root = Tk()
root.geometry("444x433")
root.title("Anurag Singh")
def clicked():
    lb2 = Label(root, text="Button was clicked")
    lb2.grid(column=0, row=2)
def text():
    res=txt.get()
    lb3 = Label(root, text=res)
    lb3.grid(column=0, row=5)
def radio():
    a=selected.get()
    lb4 = Label(root, text=a)
    lb4.grid(column=0, row=8)

lbl = Label(root, text="Hello")
lbl.grid(column=0, row=0)
btn = Button(root, text="Click Me",bg="yellow", fg="red",command=clicked)
btn.grid(column=0, row=1)
txt = Entry(root,width=10)
btn1=Button(root, text="Submit",bg="yellow", fg="red",command=text)
btn1.grid(column=0,row=4)
txt.grid(column=0,row=3)

selected = IntVar()
rad1 = Radiobutton(root,text='First', value=1, variable=selected)
rad2 = Radiobutton(root,text='Second', value=2, variable=selected)
rad3 = Radiobutton(root,text='Third', value=3, variable=selected)

btn2=Button(root, text="Submit",bg="yellow", fg="red",command=radio)

rad1.grid(column=0, row=6)
rad2.grid(column=1, row=6)
rad3.grid(column=2, row=6)
btn2.grid(column=0,row=7)

root.mainloop()