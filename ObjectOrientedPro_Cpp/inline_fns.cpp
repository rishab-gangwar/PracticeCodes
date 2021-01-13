#include<iostream>
using namespace std;
 
inline float mul( float a, float b)
{
    return(a*b);
}
 
inline float cubic(float a)
{
    return(a*a*a) ;
}
 
int main()
{
    float x,y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<"multiplication of X & Y: ";
    cout<<mul(x,y)<<"\n";
    cout<<"cube of X: ";
    cout<<cubic(x)<<"\n";
    cout<<"cube of Y: ";
    cout<<cubic(y)<<"\n";
    
    return 0;
}
