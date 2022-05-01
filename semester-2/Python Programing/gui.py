from tkinter import *
import tkinter as tk
master = Tk()
master.title("MARKSHEET")
master.geometry("800x400")

def scholarship():
    global l1
    l1=tk.Label(master, text= str(r.get()) +" candidates are Eligible for 30% scholarship")
    l1.grid(row=15, columnspan=5)
    
def clear():
    if rb2:
        l1.grid_forget()
    else:  
        l2=tk.Label(master, text= str(r.get()) +" candidates are not Eligible for any scholarship")
        l2.grid(row=15, columnspan=5)
    
        
    # display lables
tk.Label(master, text="Name").grid(row=0, column=0)
tk.Label(master, text="Reg.No").grid(row=0, column=3)
tk.Label(master, text="Roll.No").grid(row=1, column=0)

# tkinter variable declaration
r= StringVar()
# r.set(None)

tk.Label(master, text="Gender").grid(row=2, column=0)
rb1=  Radiobutton(master, text= "Male", variable=r, value="Male", command= clear).grid(row=2, column=1)
rb2=  Radiobutton(master, text= "Female", variable=r, value="Female", command= scholarship).grid(row=2, column=2)

# Using ListBox
tk.Label(master, text="Semester").grid(row=3, column=4)
listbox = Listbox(master,
                  height = 6,  
                  width = 7,  
                  bg = "grey", 
                  activestyle = 'dotbox',  
                  font = "Helvetica", 
                  fg = "yellow")

listbox.insert(1, "I") 
listbox.insert(2, "II") 
listbox.insert(3, "III") 
listbox.insert(4, "IV") 
listbox.insert(5, "V") 

listbox.grid(rowspan=5, column=4)

tk.Label(master, text="Srl.No").grid(row=3, column=0)
tk.Label(master, text="1").grid(row=4, column=0)
tk.Label(master, text="2").grid(row=5, column=0)
tk.Label(master, text="3").grid(row=6, column=0)
tk.Label(master, text="4").grid(row=7, column=0)
tk.Label(master, text="5").grid(row=8, column=0)
tk.Label(master, text="Subject").grid(row=3, column=1)
tk.Label(master, text="Marks").grid(row=3, column=2)
tk.Label(master, text="Python").grid(row=4, column=1)
tk.Label(master, text="CG").grid(row=5, column=1)
tk.Label(master, text="DF").grid(row=6, column=1)
tk.Label(master, text="Compiler").grid(row=7, column=1)
tk.Label(master, text="OOAD").grid(row=8, column=1)
tk.Label(master, text="Marks").grid(row=3, column=2)
tk.Label(master, text="Total").grid(row=12, column=0)
tk.Label(master, text="Average").grid(row=13, column=0)

# Display entry fields
e1 = tk.Entry(master)
e1.grid(row=0, column=1)
e2 = tk.Entry(master)
e2.grid(row=0, column=4)
e3 = tk.Entry(master)
e3.grid(row=1, column=1)
e4 = tk.Entry(master)
e4.grid(row=4, column=2)
e5 = tk.Entry(master)
e5.grid(row=5, column=2)
e6 = tk.Entry(master)
e6.grid(row=6, column=2)
e7 = tk.Entry(master)
e7.grid(row=7, column=2)
e8 = tk.Entry(master)
e8.grid(row=8, column=2)
        
def display():
    p=int(e4.get())
    cg=int(e5.get())
    d=int(e6.get())
    s=int(e7.get())
    c=int(e8.get())
    tot=p+cg+d+s+c
    avg=tot/5
    # to display total
    tk.Label(master, text=str(tot)).grid(row=12, column=1)
    tk.Label(master, text=str(avg)).grid(row=13, column=1)       
# end of display function
# button to display all the calculated total scores and avg
button1=tk.Button(master, text="Submit", bg="green", command=display)
button1.grid(row=14, column=1)
master.mainloop()