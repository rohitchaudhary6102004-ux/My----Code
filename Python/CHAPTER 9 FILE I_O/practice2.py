# The game() function in a program lets a user play a game and returns the scores as an integer. You need to read a file 'Hi-score.txt' which is either blank or contains the previous Hi-score. You need to write a program to update the Hi-score whenever the game() function breaks the high score.

# with open("hi-score.txt", "w") as f:
#     f.write(" ")

import random

def game():
    print("You are Playing Game ...")
    your_score = random.randint(1,100)
    print(f"Your Score : {your_score}")
    with open("hi-score.txt") as f:
        hiscore = f.read()
    if (hiscore == "" ):
        with open("hi-score.txt", "w") as f:
            f.write(str(your_score))
        print("New Score")    
    elif ( int(hiscore) < your_score):
        with open("hi-score.txt", "w") as f:
            f.write(str(your_score))
        print("New High Score ")
        print("Congratulations!")    
    else:
        pass 
    with open("hi-score.txt") as f:
        hi_score = f.read()   
    print(f"High Score is : {hi_score}")       

game()
