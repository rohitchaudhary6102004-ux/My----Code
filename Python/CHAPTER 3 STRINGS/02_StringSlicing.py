# String is Immutable..once it formed you cant change it

name = "Rohit"

nameshort = name[0:3] # print from 0th index to 3rd index with excluding 3rd index
print(len(name)) # Gives the length of the string
print(nameshort)
# we can also use indexing from backward using negative indexes starting from -1
print(name[-3:-1]) # is also excludes the -1th index from the output

print(name[:4]) # It means like [0:4]
print(name[0:]) # It means like [0:5]
print(name)

word = "amazing"
# Tell me the output of word[1:6:2]
#word [1:6] gives 'mazin' and then [1:6:2] means skip the value at every 2nd index ie "mzn"
print(word[1:6:2])

b = "abcdefghijklmnopqrstuvwxyz"
print(b[1:9:4])
