from functools import reduce

l = [1, 8, 6, 4, 7]

squareList = [ i*i for i in l]  # List comprehension
print(squareList)
 
  #  Map Function  map(function, input_list)
  
square = lambda x : x * x   # Lambda fuction
sqList = map(square, l)   # Map funtion
print(list(sqList))

    # Filter function   filter(functon, input_list)
    
def even(n):
    if (n%2 == 0):
        return True
    return False

evenList = filter(even, l)
print(list(evenList))    

    # Reduce function   reduce(function, input_list)
    
def sum(a, b):
    return a + b

print(reduce(sum, l))

def mult(a, b):
    return a * b
print(reduce(mult, l))