class shapes:
    def __init__(self, length, width, height, base, side):  
        self.length = length
        self.width = width
        self.height = height
        self.base = base
        self.side = side

        
    def Area(self):
        pass
    
class Rectangle(shapes):
    def __init__(self, length, width):
        self.length = length
        self.width = width           

    def Area(self):
        print(f"The area of the Rectangle: {self.length * self.width}")
        

class Triangle(shapes):
    def __init__(self, base, height):
        self.height = height
        self.base = base
  
    def Area(self):
        print(f"The area of the Triangle: {self.base * self.height}")

class Square(shapes):
    def __init__(self, side):
        self.side = side
    
    def Area(self):
        print(f"The area of the Square : {self.side * self.side}")
    
length = float(input("Enter length: "))
width = float(input("Enter width: "))
base = float(input("Enter base: "))
height = float(input("Enter height: "))
side = float(input("Enter side: "))

area1 = Rectangle(length, width)
area2 = Triangle(base, height)
area3 = Square(side)

area1.Area()
area2.Area()
area3.Area()
        

        

    

         