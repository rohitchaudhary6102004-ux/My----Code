s1 = {63,97,94,25}
s2 = {98,37,80,25,94}

print(s1.union(s2))
print(s1.intersection(s2))

print(s1-s2)

print({25,97}.issubset(s1)) # True
print({25,98}.issubset(s1)) # False