#include<iostream>
using namespace std;
class DB;
class DM
{
 float meter,centimeter;
 public:
 void getdata()
 {
  cout<<"\nEnter the distance in(meter-centimeter):";
  cin>>meter>>centimeter;
 }
 void display()
 {
  cout<<"\nThe distance is:";
  cout<<meter<<" meters and "<<centimeter<<" centimeter";
 }
 friend void add(DM &,DB &);
};
class DB
{
 float inch,feet;
 public:
 void getdata()
 {
  cout<<"\nEnter the distance in(feet-inch):";
  cin>>feet>>inch;
 }
 void display()
 {
  cout<<"\nThe distance is:";
  cout<<feet<<" feet and "<<inch<<" inch";
 }
 friend void add(DM &,DB &);
};
void add(DM &a,DB &b)
{
 int ch;
 cout<<"\nPress 1 for meter-centi:";
 cout<<"\nPress 2 for feet-inch:";
 cout<<"\nEnter your choice:";
 cin>>ch;
 if(ch==1)
 {
  DM d;
  int c=(a.meter*100+a.centimeter+b.feet*30.48+b.inch*2.54);
  if(c>=100)
  {
   d.meter=c/100;
   d.centimeter=c%100;
  }
  else
  {
   d.meter=0;
   d.centimeter=c;
  }
  d.display();
 }
 else
 {
  DB d;
  int i=(a.meter*39.37+a.centimeter*.3937008+b.feet*12+b.inch);
  if(i>=12)
  {
   d.feet=i/12;
   d.inch=i%12;
  }
  else
  {
   d.feet=0;
   d.inch=i;
  }
  d.display();
 }
}
int main()
{
 //clrscr();
 DM a;
 DB b;
 a.getdata();
 b.getdata();
 add(a,b);
 //getch();
return 1;
}
