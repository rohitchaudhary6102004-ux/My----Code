

a = int(input("Enter the Number : "))
b = int(input("Enter the Number : "))

if ( b == 0):
    raise ZeroDivisionError("Hey we cannot divide any Number by Zero")
else:
    print(f"The division is {a/b}")