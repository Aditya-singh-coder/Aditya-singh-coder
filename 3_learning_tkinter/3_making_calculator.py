from tkinter import *
root = Tk()
root.title("simple calculator")
box = Entry(root, width=35, borderwidth=5)
box.grid(row=0, column=0, columnspan=3, padx=10, pady=10)

def button_click(number):
    box.insert(0, number)

# declaring the buttons
button_1 = Button(root, text="1", padx=20, command=lambda: button_click())
button_2 = Button(root, text="2", padx=20, command=lambda: button_click())
button_3 = Button(root, text="3", padx=20, command=lambda: button_click())
button_4 = Button(root, text="4", padx=20, command=lambda: button_click())
button_5 = Button(root, text="5", padx=20, command=lambda: button_click())
button_6 = Button(root, text="6", padx=20, command=lambda: button_click())
button_7 = Button(root, text="7", padx=20, command=lambda: button_click())
button_8 = Button(root, text="8", padx=20, command=lambda: button_click())
button_9 = Button(root, text="9", padx=20, command=lambda: button_click())
button_0 = Button(root, text="0", padx=20, command=lambda: button_click())
button_clear = Button(root, text="clear", padx=20, command=button_click)
button_equal = Button(root, text="=", padx=20, command=button_click)
button_add = Button(root, text="+", padx=20, command=button_click)

# putting buttons on the screen

button_1.grid(row=1, column=0)
button_2.grid(row=1, column=1)
button_3.grid(row=1, column=2)

button_4.grid(row=2, column=0)
button_5.grid(row=2, column=1)
button_6.grid(row=2, column=2)

button_7.grid(row=3, column=0)
button_8.grid(row=3,column=1)
button_9.grid(row=3, column=2)

button_0.grid(row=4, column=0)
button_equal.grid(row=4, column=1)
button_clear.grid(row=4, column=2, columnspan=1)

button_add.grid(row=1,column=4)

root.mainloop()