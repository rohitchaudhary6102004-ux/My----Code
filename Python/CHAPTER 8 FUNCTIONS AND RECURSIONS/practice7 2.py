# Write a python function to remove a given word from the list as strip it at the same time
l = ["Rohit", "Rohan", "Sneha", "Issu", "an"]

def rem(l, word):
    n = []
    for item in l:
        if not(item == word):
            n.append(item.strip(word))
    return n

print(rem(l, "an"))            