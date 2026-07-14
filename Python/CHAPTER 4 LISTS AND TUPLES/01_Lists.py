# Lists are mutable and can be changed accordingly

list = ["Apple", "Banana", 5, 3.016, False, "Rohit"]
print(list[5])
list[5] = "Issu"

print(list)
print(list[5])
list.append("LoveYouIssu")
print(list)

l1 = [6,3,9,7,9,4,2,8,3,5]
l1.sort()
print(l1)