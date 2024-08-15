# creating class named rectangle
class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width
        
# function for computing the area       
    def area(self):
        return self.length * self.width
    
# getting user input for the attributes
l = int(input("Enter length of the rectangle: "))
w = int(input("Enter width of the rectangle: "))

rect = Rectangle(l, w)

# printing the result
print("The area of the rectangle is:", rect.area())
