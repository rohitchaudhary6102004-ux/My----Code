a = 100

def func():
    global a
    a = 5  # Updating the value of a which is global function
    print(a)

func()    
print(a)    