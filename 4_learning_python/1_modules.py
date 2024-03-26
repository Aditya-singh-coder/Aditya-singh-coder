from tkinter import *
from datetime import date
from tkinter import filedialog
from tkinter import messagebox
from PIL import Image, ImageTk
import os
from tkinter.ttk import Combobox
import openpyxl, xlrd
from openpyxl import Workbook
import pathlib

background="#06283D"
framebg="#EDEDED"
framefg="#06283D"
root=Tk()
root.title("Student Registration System")
root.geometry("1250x700+210+100")
root.config(bg=background)

file=pathlib.Path('student_data.xlsx')
if file.exists():
    pass
else:
    file=Workbook ()
    sheet=file.active
    sheet['A1']="Registration No."
    sheet['B1'] ="Name"
    sheet['C1' ] = "Class"
    sheet['D1']="Gender"
    sheet['E1']="DOB"
    sheet['F1'] = "Date Of Registration"
    sheet['G1' ] = "Religion"
    sheet['H1']="Skill"
    sheet['I1'] ="Father Name"
    sheet['J1']="Mother Name"
    sheet['K1'] = "Father's Occupation"
    sheet['L1']="Mother's Occupation"

    file.save('student_data.xlsx')

#top frames
Label (root, text="Email: lokeshlokesh9308@gmail.com",width=10, height=3, bg="#f0687c", anchor='e')
Label (root, text="STUDENT REGISTRATION", width=10, height=2, bg="#c36464",fg='#fff',font='arial 20 bold',anchor='e').pack(side=TOP, fill=X)

#search box to update
Search=StringVar()
Entry (root, textvariable=Search, width=15, bd=2, font="arial 20").place(x=820, y=70)
root.mainloop()