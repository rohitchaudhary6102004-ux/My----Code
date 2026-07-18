l = [2,4,5,6,7,8,9]

squareList = []
for i in l:
    squareList.append(i*i)
    
print("This is Using the Loops : ", squareList)    

            # Instead of doing this i can use list comprehension for sqaring
            
squaredList = [i*i for i in l]
print("This is Using List Comprehension : ",(squaredList))            