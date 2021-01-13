#include<iostream>
#include<cstdlib>

#include <math.h>
using namespace std;

float area(float r)
{
        return(3.14 * r * r);
}
float area(float b,float h)
{
        return(0.5 * b * h);
}
float area(float side1,float side2,float side3)
{
        
        
		float s = (side1+side2+side3)/2;
		float areas = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return areas;
}
int main()
{
        float b,r,l;
        int ch;

        do
        {
                cout<<"\n\n *****Menu***** \n";
                cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Area of Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }
                        case 2:
                        {   float side1, side2, side3;
							cout << "\n\n Find the area of any triangle using Heron's Formula :\n";
							cout << "----------------------------------------------------------\n";		
							cout<<" Input the length of 1st side  of the triangle : ";
							cin>>side1;
							cout<<" Input the length of 2nd side  of the triangle : ";
							cin>>side2;
							cout<<" Input the length of 3rd side  of the triangle : ";
							cin>>side3;	
							cout<<area(side1, side2, side3);
                        }
                        case 3:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=4);
        return 0;
}
