# Check that tuple type cannot be changed in python

t = ("apple", "banana",56, 63)
t[2] = 65
print(type(t))

# TypeError: 'tuple' object does not support item assignment