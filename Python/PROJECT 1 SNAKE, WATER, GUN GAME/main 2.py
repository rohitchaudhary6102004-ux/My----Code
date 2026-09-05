import random

'''
-1 for water
0 for gun
1 for snake
'''
computer = random.choice([-1, 0, 1])
your_move = input("Enter your move : ")
dict = {"s":1, "w":-1, "g":0}
reverse_dict = { 1:"Snake", 0:"Gun", -1:"Water"}
_computer = reverse_dict[computer]
you = dict[your_move]
_you = reverse_dict[you]
print(f"Computer Choose : {_computer}")
print(f"You Choose : {_you}")

if ( computer == you):
    print("It's Draw")
else:
    if( computer == 1 and you == -1):
        print("Computer Wins")
    elif( computer == 1 and you == 0):
        print("You Wins")    
    elif( computer == -1 and you == 1):
        print("You Wins")    
    elif( computer == -1 and you == 0):
        print("Computer Wins")    
    elif( computer == 0 and you == 1):
        print("Computer Wins")    
    else:
        print("You Wins")
   
