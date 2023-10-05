from tkinter import *
root = Tk()
def myClick():
    mylabel = Label(root,text = "Look I clicked a button")
    mylabel.pack()

mybutton = Button(root,text = "click me!",command=myClick)
mybutton.pack()

root.mainloop()