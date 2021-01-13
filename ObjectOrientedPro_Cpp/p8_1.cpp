#include<iostream>
#include<conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
const float PI = 3.14;
class Solid {
    float radii;
    float height;

    public:

        Solid() { }

        virtual float area() = 0;
        virtual float volume() = 0;
        virtual float getRadius() = 0;
        virtual float getHeight() = 0;
        virtual ~Solid() { }

};

 

class Sphere : public Solid {

    float radii;

    public:

        Sphere(float r = 0): radii(r) { }
        float area() { return 4 * PI * pow(radii, 2); }
        float volume() { return (4 * PI / 3) * pow(radii, 3); }
        float getRadius() { return radii; }
        float getHeight() {}
        virtual ~Sphere() {}

};

 

class Cylinder : public Solid {

    float radii;
    float height;
    public:
        Cylinder(float r = 0, float h = 0): radii(r), height(h) { }
        float area() { return 2 * PI * radii * (radii + height); }
        float volume() { return PI * pow(radii, 2) * height;}
        float getRadius() { return radii; }
        float getHeight() { return height; }
        virtual ~Cylinder() { }
};

 

class Cone : public Solid {

    float radii;
    float height;
   public:
        Cone(float r = 0, float h = 0): radii(r), height(h) { }
        float area() { return PI * radii * ( sqrt(pow(radii,2 ) + pow(height, 2)) + radii ); }
        float volume() { return (PI / 3.0) * pow(radii, 2) * height;}
        float getRadius() { return radii; }
        float getHeight() { return height; }
        virtual ~Cone() { }
};

class shape
{
 public:
 float area;
 void display()
 {
  cout<<"Area is : "<<area<<endl;
 }
};

class D2:public shape
{
 public:
 float dim1;
 float dim2;

 void get_d2()
 {
  cout<<"\nEnter Dim1 :";
  cin>>dim1;
  cout<<"Enter Dim2 :";
  cin>>dim2;
 }
 void put_d2()
 {
  cout<<"Dim1 is :"<<dim1<<endl;
  cout<<"Dim2 is :"<<dim2<<endl;
 }
};

class Triangle : public D2
{
 public:
 void cal1()
 {
  get_d2();
  area=0.5*dim1*dim2;
  cout<<"\nFor Triangle : \n";
  }
};

class Circle: public D2
{
 public:
 float dim;
  void get_d2()
 {
  cout<<"\nEnter Dim1 :";
  cin>>dim;
 }

 void cal3()
 {

  //cout<<"\nEnter Dim1 :";
 // cin>>dim;
  area=3.14*dim*dim;
  cout<<"\nFor Circle : \n";
 }
};

class Rectangle : public D2
{
 public:
 void cal2()
 {
  get_d2();
  area=dim1*dim2;
  cout<<"\nFor Rectangle : \n";
 }
};

int main()
{
    //clrscr();
    int c;
    char ch;
    re:
    cout<<"1.Triangle.\n";
    cout<<"2.Rectangle.\n";
    cout<<"3.Circle.\n";
    cout<<"Enter your Choice :";
    cin>>c;
    Triangle t;
    switch(c)
    {
    case 1:
    cout<<"\n Triangle \n";
    cout<<"Enter L & B :";
    t.cal1();
    t.put_d2();
    t.display();
    break;

    case 2:
    cout<<"\nEnter L & W :";
    Rectangle r;
    r.cal2();
    r.put_d2();
    r.display();
    break;

    case 3:
    cout<<"\nEnter R :";
    Circle c;
    c.get_d2();
    c.cal3();
    c.display();
    break;

    default:
        {
        cout<<"Enter wrong Choice.";
        }

    }
    cout<<"Enter 'Y' for continue or press any key.";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    goto re;

    getch();
        Sphere sphere(5.0);

    Cylinder cylinder(5.0, 5.0);

    Cone cone(5.0, 5.0);

 

    cout << "Sphere :\nRadius = " << sphere.getRadius()
              << endl;
    cout << "Area of Sphere     = " << sphere.area()
              << endl;
    cout << "Volume of Sphere   = " << sphere.volume()
              << endl;
    cout << "Cylinder :\nRadius = " << cylinder.getRadius()
              << ", Height = " << cylinder.getHeight()
              << endl;
    cout << "Area of Cylinder   = " << cylinder.area()
              << endl;
    cout << "Volume of Cylinder = " << cylinder.volume()
              << endl;
    cout << "Cone :\nRadius = " << cone.getRadius()
              << ", Height = " << cone.getHeight()
              << endl;
    cout << "Area of Cone       = " << cone.area()
              << endl;
    cout << "Volume of Cone     = " << cone.volume()
              << endl;
   return 0;
}
