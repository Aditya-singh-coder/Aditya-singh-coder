from tkinter import *
root =Tk()
def myclick():
    mylabel =Label(root,text = "Look I clicked a button!!!")
    mylabel.pack()

mybutton =Button(root,text = "click me!",padx =20,pady=5,command=myclick,fg="blue",bg="red")
mybutton.pack()



# Example 1: Setting the font of a button
mybutton1 =Button(root, text="Click me!", font=("Arial", 16))
mybutton1.pack()

# Example 2: Disabling a button
mybutton2 =Button(root, text="Disabled", state="disabled")
mybutton2.pack()

# Example 3: Changing the relief of a button
mybutton3 =Button(root, text="Raised", relief="raised")
mybutton3.pack()

# different types of relif presen for button
mybutton1 =Button(root, text="Flat", relief="flat")
mybutton1.pack()

mybutton2 =Button(root, text="Raised", relief="raised")
mybutton2.pack()

mybutton3 =Button(root, text="Sunken", relief="sunken")
mybutton3.pack()

mybutton4 =Button(root, text="Groove", relief="groove")
mybutton4.pack()

mybutton5 =Button(root, text="Ridge", relief="ridge")
mybutton5.pack()

root.mainloop()
