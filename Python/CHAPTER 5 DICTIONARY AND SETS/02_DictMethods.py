
marks = {
    "Rohit":63,
    "Issu":97,
    "Neha":94,
    "Anu":97,
    "list":[1,2,9],
    0:"OM"
}
print(marks.items())
print(type(marks.items()))
print(marks.keys())
print(marks.values())

marks.update({"Rohit":75, "Renu":56})
print(marks)
print(marks.get("Rohit"))
print(marks["Rohit"])
print(marks.get("Rohit1")) # Print None
print(marks["Rohit1"]) # Print key error or return key error
