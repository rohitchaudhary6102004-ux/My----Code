# Write a class "Calculator" capable of finding sqaure , cube and square root of a number.

class Calculator:
    def __init__(self, n):
        self.n = n
    def square(self):
            return(self.n * self.n)
    def cube(self):
        return(self.n * self.n * self.n)
    def squareroot(self):
        return(self.n **(1/2))
a = Calculator(10)     # calculator.__init__(a, 4) and  which means self = a and n = 4 now self.n means a.n = 4;

_square = a.square()  # calculator.sqaure(a) calls a function sqaure where (self = a is only a object ) but a.n = 4 that'why we use self.n to use value 4 for performing square or any other task

print(_square) 
_cube = a.cube()
print(_cube)
_sqaurreroot = a.squareroot()
print(_sqaurreroot) 