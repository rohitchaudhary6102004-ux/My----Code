# Write a python function to print first n lines of the following pattern.
                #    ***
                #    **
                #    *

def star(n):
        if ( n == 0):
            return ""
        return star(n-1) + "* " * n + "\n"           

def rstar(n):
    if( n== 0):
        return ""
    return "* " * n + "\n" + rstar(n-1)        


n = int(input("Enter the Number : "))
print(star(n))
print(rstar(n))
