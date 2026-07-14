# Lists are mutable and can be changed accordingly
# Lists are like Vector of C++
list = ["Apple", "Banana", 5, 3.016, False, "Rohit"]
print(list[5])
list[5] = "Issu"

print(list)
print(list[5])
list.append("LoveYouIssu") # use to insert elment at the last
print(list)

l1 = [6,3,9,7,9,4,2,8,3,5]
l1.sort() # arrange your array in increasing order
l1.reverse() # it reverse your list
print(l1)

l1.insert(5,6397) # use to insert the element at any random index
print(l1)
l1.pop(5) # remove the element from that index 
print(l1)
l1.remove(3) # remove that element no matter about the index
print(l1)