from tkinter import *
import requests
import json
from datetime import datetime

#Initialize Window
 
root =Tk()
root.geometry("400x400") #size of the window by default
root.resizable(0,0) #to make the window size fixed
#title of our window
root.title("Weather App - AskPython.com")
 
 
# ----------------------Functions to fetch and display weather info
city_value = StringVar()
 
 
def time_format_for_location(utc_with_tz):
    local_time = datetime.utcfromtimestamp(utc_with_tz)
    return local_time.time()
 
 
city_value = StringVar()
 
# ... (existing code)

def showWeather():
    api_key = "a01faf9ae9351b9737cb73de214f45f6"
    city_name = city_value.get()
    weather_url = 'http://api.openweathermap.org/data/2.5/weather?q=' + city_name + '&appid=' + api_key
    response = requests.get(weather_url)
    weather_info = response.json()

    tfield.delete("1.0", "end")

    if weather_info['cod'] == 200:
        kelvin = 273
        temp = int(weather_info['main']['temp'] - kelvin)
        description = weather_info['weather'][0]['description']

        if temp < 0:
            advice = "Don't go outside, it's too cold!"
        elif 0 <= temp < 20:
            advice = "It's a bit chilly, dress warmly!"
        elif 20 <= temp < 35:
            advice = "Good weather, enjoy your day!"
        else:
            advice = "It's quite hot, stay hydrated!"
            
        # Check for rain
        if description == 'rain':
            also = "Don't forget to bring an umbrella!"
        elif description == 'fog':
            also = "visibility is low today. drive safely."
        else:
            also = ""

        # Display weather information and advice
        weather = f"\nWeather of: {city_name}\nTemperature (Celsius): {temp}°\nDescription: {description}\nadvice:{advice}\nalso:{also}"

    else:
        weather = f"\n\tWeather for '{city_name}' not found!\n\tKindly Enter valid City Name !!"

    tfield.insert(INSERT, weather)
 
 
 
#------------------------------Frontend part of code - Interface
 
 
city_head= Label(root, text = 'Enter City Name', font = 'Arial 12 bold').pack(pady=10) #to generate label heading
 
inp_city = Entry(root, textvariable = city_value,  width = 24, font='Arial 14 bold').pack()
 
 
Button(root, command = showWeather, text = "Check Weather", font="Arial 10", bg='lightblue', fg='black', activebackground="teal", padx=5, pady=5 ).pack(pady= 20)
 
#to show output
 
weather_now = Label(root, text = "The Weather is:", font = 'arial 12 bold').pack(pady=10)
 
tfield = Text(root, width=46, height=10)
tfield.pack()
root.mainloop()