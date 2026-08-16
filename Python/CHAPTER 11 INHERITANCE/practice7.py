# Override the __len__() method on vector of problem 5 to displays the dimensions of the vector.

class Vector:

    def __init__(self, values):
        self.values = values

    def __len__(self):
        return len(self.values)

    def __str__(self):
        return str(self.values)


v = Vector([1, 2, 3, 7, 9, 8])

print(v)
print(len(v))