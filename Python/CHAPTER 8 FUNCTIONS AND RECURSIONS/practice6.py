# Write a python function which converts inches to cms.

def inchtocm(n):
    return (2.54 * n)

n = int(input("Enter the number in Inches : "))
print(f"The number in Cm is : {inchtocm(n)} Centimeter")