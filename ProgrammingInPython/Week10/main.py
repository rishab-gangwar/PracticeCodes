
"""obj = Foo()
class Foo:
    x = None"""
"""class Foo:
  x = 0
obj = Foo()
print(obj.x)
Foo.x = Foo.x + 10
print(obj.x, Foo.x)
"""
"""class Foo:
    x = 0
    def __init__(self):
        self.x = 100
obj = Foo()
print(obj.x, Foo.x)"""
"""class Country:
  def __init__(self):
    self.name=None
    self.capital=None
  def set_name(self,name):
    self.name=name
  def set_capital(self,Cname):
    self.capital=Cname
  def display(self):
    print(f'{self.capital} is capital of {self.name}')
India=Country()
us=Country()
germany=Country()
India.set_name("India")
India.set_capital("New Delhi")
India.display()
us.set_name("United States of America")
us.set_capital("Washigton DC")
us.display()
germany.set_name("Germany")
germany.set_capital("Berlin")
germany.display()

f=open("country_list.csv",mode='r')
f.readline()
lines=f.readlines()
processed_lines=[]
for line in lines:
  p=line.split(',')
  p=p[0:2]
  p[0]=(p[0].replace(",",' '))
  p[0]=(p[0].replace("\n",''))
  p[0]=(p[0].replace('"',''))
  p[1]=(p[1].replace(",",' '))
  p[1]=(p[1].replace("\n",''))
  p[1]=(p[1].replace('"',''))
  processed_lines.append(p)
processed_lines=processed_lines[:-1]
Countries=[]
for i in processed_lines:
  country=Country()
  country.set_name(i[0])
  country.set_capital(i[1])
  Countries.append(country)
for i in Countries:
  i.display()
  if i.name=='South Africa':
    print("------------------\nAfter Update: \n")
    i.set_capital("Cape Town")
  if i.name=='South Africa':
    i.display()
    print("------------------")


"""

"""class Book:
  def __init__(self,name,author,genre,pages):
    self.name=name
    self.author=author
    self.pages=pages
    self.genre=genre
  def is_fiction(self):
    return self.genre=='Fiction'
  def is_nonFiction(self):
    not self.is_fiction()
  def time_to_read(self):
    if self.pages<100:
      return("5 day")
    elif self.pages<=500 and self.pages>=100:
      return("20 days")
    else:
      return("infinite")
  def same_author(self,book):
    return book.author==self.author
  def display(self):
    print(f'----------\nName of book :{self.name}\n Author of book :{self.author}\n Number of pages :{self.pages}\n Genre : {self.genre}')
book1 = Book("Igniting Minds", "Kalam", 178, "Nonfiction")
book2 = Book("Wings of Fire", "Kalam", 180, "Nonfiction")
book3 = Book("Harry Potter-1", "J.K Rowling", 309, "Fiction")
book4 = Book("Harry Potter-2", "J.k Rowling", 341, "Fiction")
book1.display()
book2.display()
book3.display()
book4.display()

f=open("books.csv",mode='r')
f.readline()
lines=f.readlines()
processed_lines=[]
for line in lines:
  p=line.strip()
  p=p.split(',')
  processed_lines.append(p)
print(processed_lines)
Library=[]
for i in processed_lines:
  book=Book(i[0],i[1],i[2],int(i[4]))
  Library.append(book)
fiction=[]
short_books=[]
rowling=[]
for i in Library:
  if i.is_fiction():
    fiction.append(i)
    i.display()
  if i.time_to_read()=='20 days' and i.time_to_read()=='5 day':
    short_books.append(i)
    i.display()
  if i.same_author(book4):
    rowling.append(i)
    i.display()
"""
"""
class Shape:
    def __init__(self):
        self.name = None
        self.area = None
        
    def display(self):
        print(f'{self.name} has an area of {self.area}')
    
    def get_area(self):
        return self.area
    
    def is_larger(self, shape):
        return self.area > shape.area
class Triangle(Shape):
  def __init__(self,side):
    super().__init__()
    self.name="Triangle"
    self.side=side    
    self.area=(3**(.5))*self.side/4
  def get_area(self):
    super().get_area()

  def display(self):
    super().display()
class  Square(Shape):
  def __init__(self,side):
    super().__init__()
    self.name="Square"
    self.side=side
    self.area=self.side**2
  def get_area(self):    
    super().get_area()

  def display(self):
    super().display()
class Circle(Shape):
  def __init__(self,radius):
    super().__init__()
    self.name="Circle"
    self.radius=radius
    self.area=3.14*self.radius**2
  def get_area(self):
    super().get_area()

  def display(self):
    super().display()
trng=Triangle(6)
trng.display()
trng.area
sqr=Square(6)
sqr.display()
sqr.area
crcl=Circle(6)
crcl.display()
crcl.area"""
"""import numpy as np
import matplotlib.pyplot as plt 
def linear(x):
  return 3*x+4
def quadratic(x):
  return 3*x**2+2*x-15
def cubic(x):
  return 3*(x-1)*(x-2)*(x-3)
x=np.linspace(-5,5,1000)
plt.subplot(2,3,1)
plt.plot(x,linear(x))
plt.subplot(2,3,2)
plt.plot(x, quadratic(x))
plt.subplot(2,3,3)
plt.plot(x,cubic(x))
plt.subplot(2,3,4)
plt.plot(x,np.exp(x))
plt.subplot(2,3,5)
plt.plot(x,np.log(x))
plt.subplot(2,3,6)
plt.plot(x,np.sin(x))
"""
"""import numpy as np
import matplotlib.pyplot as plt
x=np.linspace(-10,10,1000)
plt.plot(x,np.sin(x))
plt.plot(x,np.cos(x))
plt.show()"""
"""import numpy as np
import matplotlib.pyplot as plt
f=open("score.csv",mode='r')
f.readline()
lines=f.readlines()
X=[]
Y=[]
for i in lines:
  m=i.split(',')
  X.append(int(m[0]))
  Y.append(int(m[1]))
plt.plot(X,Y)
plt.show()
"""