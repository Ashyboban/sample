l=int(input("enter the length"))
b=int(input("enter the breadth"))
c=lambda x,y:x*y
print("area of rectangle is"+str(c(l,b)))
s=int(input("enter the side"))
c=lambda x:x*x
print("area of square is"+str(c(s)))
b=int(input("enter the base"))
h=int(input("enter the height"))
c=lambda x,y:0.5*x*y
print("area of square is"+str(c(b,h)))

