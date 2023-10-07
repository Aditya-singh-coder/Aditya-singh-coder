from tkinter import *
root=Tk()
e= Entry(root, width=50, fg ="violet",bg="blue")
e.pack()

def name():
    hello = "hello " + e.get()
    mylabel = Label(root, text = hello) 
    mylabel.pack()

mybutton = Button(root, text="Enter your name", command= name)
mybutton.pack()

root.mainloop()