# Create a class (2D vector) and use it to create another class representing a 3D vector.
class Vector2D:
    def __init__(self, i, j):
        self.i = i
        self.j = j
    def show(self):
        print(f"2D Vector is : {self.i}i + {self.j}j")

class Vector3D(Vector2D):
    def __init__(self, i, j, k):
        super().__init__(i, j)
        self.k = k  
    def show(self):
        print(f"3D Vector is : {self.i}i + {self.j}j + {self.k}k")    
               
a = Vector2D(2, 3)
a.show()
b = Vector3D(4, 5 , 4)
b.show()
