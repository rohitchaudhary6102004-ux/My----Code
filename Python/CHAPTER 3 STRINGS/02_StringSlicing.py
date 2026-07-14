# String is Immutable..once it formed you cant change it

name = "Rohit"

nameshort = name[0:3] # print from 0th index to 3rd index with excluding 3rd index
print(len(name))
print(nameshort)
# we can also use indexing from backward using negative indexes starting from -1
print(name[-3:-1]) # is also excludes the -1th index from the output

print(name[:4]) # It means like [0:4]
print(name[0:]) # It means like [0:5]
print(name)