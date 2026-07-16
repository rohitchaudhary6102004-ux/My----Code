# Write a program using functions to convert Celcius to Fahrenheit

# °F = (9 * °C)/5 + 32

def _cto_f(c):
    return (9*c)/5 + 32
    
c = int(input("Enter the Temperature in °C : "))
print(f"Temperature in Fahrenheit is : {_cto_f(c)}")    