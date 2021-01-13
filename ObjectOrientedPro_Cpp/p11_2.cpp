#include<iostream>
using namespace std;
void division(double x,double y);
void insert()
{
	double  num1,num2;
	cout<<"enter the numbers: "<<endl;
	try{
	
	cin>>num1;

    
        if (cin.fail())
            throw (num1);
        else
            cout << "Double Value " << num1 << endl;  
    }
    catch(double a)
    {
        cout<<"Incompatible Datatype for value"<<a;
    }
    try{
	
	cin>>num2;

    
        if (cin.fail())
            throw (num2);
        else
            cout << "Double Value " << num2<< endl;  
    }
catch(double a)
    {
        cout<<"Incompatible Datatype for value"<<a;
    }
    division(num1,num2);

}
double CheckDenominator(double den) 
{ 
    if (den == 0) 
        throw "Error"; 
    else
        return den; 
} // end CheckDenominator 

void division(double num1,double num2)
{
	double result;
    try { 
        if (CheckDenominator(num2)) { 
  
            result = (num1 / num2); 
            cout << "The quotient is "
                 << result << endl; 
        } 
    } 
  
    catch (...) { 
  
        // Display a that exception has occurred 
        cout << "Exception occurred" << endl; 
    } 
  
}
int main()
{
	insert();
	return 0;
}
