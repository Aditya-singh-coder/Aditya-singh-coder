from tkinter import *
import random

window = Tk()
window.title("Snake Game")
window.resizable(0,0)

score =0
direction ='down'

game_width = 700
game_height =700
speed =100
space_size =50
body_parts=2
snake_colour='#80FF00'
food_colour= '#FF0000'
background_color = '#000000'

label = label(window, text="Score:{}".format{score},font={'consolas',40})
label.pack()

canvas = canvas(window,bg =background_color,game_height=game_height,width=game_width)
canvas.pack()

class snake:
    def __init__(self):
        self.body_size = body_parts
        self.coordinates =[]
        self.squares = []
        
        for i in range(0,body_parts):
            self.coordinates.append([0,0])
            
        for x, y in self.coordinates:
            square = canvas.create_rectangle(x,y,x+space_size,y+space_size,fill = snake_colour,tag ="snake")
            self.squares.append(square)
            
class food:
    def __init__(self)
        x=random.randint(0,(game_width/space_size)-1)*space_size            
        y=random.randint(0,(game_height/space_size0)-1)*space_size
        
        self.coordinates = [x,y]
        canvas.createoval(x,y,x+space_size,y+space_size,fill = food_colour,tag = 'food')
        
    def next_turn(snake,food):
        x,y =snake.coordinates[0]
        
        if direction == 'up':
            y-= space_size
        elif direction == 'down':
            y+= space_size
        elif direction == 'left':
            x -= space_size
        elif direction == 'right':
            x+= space_size                      
            
    snake.coordinates.insett(0,(x,y))
    square = canvas.create_rectangle(x,y,x+space_size,y+space_size,fill=snake_colour)
    snake.square.insert(0,square)
    
    if x == food.coordinates[0] and y == food.coordinates[1]:
        global score
        score +=1
        label.config(text = 'score:{}'.format(score))
        canvas.delete("food")
        food = food()
        
    else:
        del snake.coordiantes[-1]
        canvas.delete(snake.squares[-1])
        del snake.squares[-1]
        
    if check_collisions(snake):
        game_over()
        
    else:
        window.after(speed,next_turn,snake,food)
        
def change_directions(newdirections):
    global direction
    if new_direction == 'left':
        if direction!= 'right':
            direction = new_direction
    elif new_direction == 'right':
        if direction != 'left':      
            diection = new_direction
    elif new_direction == 'up':
        if direction != 'down':      
            diection = new_direction
    elif new_direction == 'down':
        if direction != 'up':      
            diection = new_direction
def check_collisions(snake):
    x,y = snake.coordiantes[0]
    if x<0 or x>= game_width:
        return True
    elif y<0 or y>= game_height:
        return True
    for body_part in snake.coordinates[1]:
        return True
    
    return False

def game_over():
    canvas.delete(ALL)
    canvas.create_text(canvas.winfo_width()/2,
                       canvas.winfo_height()/2,
                       font=('consolas',70),
                       text = 'GAME OVER',
                       fill = 'red',
                       tag = 'gameover')
    
    window.update()
    
    window_width =window.winfo_width()
    window_height = window.winfo_height()
    screen_width = window.winfo_screenwidth()
    screen_height = window.winfo_screenheight()
    
    x=int((screen_width/2) - (window_width/2))
    y= int((screen_height/2)-(window_height/2))
    
    