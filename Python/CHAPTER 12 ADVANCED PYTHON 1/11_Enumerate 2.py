l = [98, 37, 80, 25]

index = 0
for item in l:
    print(f"The item number at index {index} is {item} ")
    index += 1
    
    # this can be simplified using enumerate function easily
    
for index, item in  enumerate(l):
    print(f"The item number at index {index} is {item} ")
   
        