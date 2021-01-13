#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int num1, num2;
ifstream even;
ifstream odd;
even.open("source1.txt");
odd.open("source2.txt");
ofstream conintegers;
conintegers.open("target.txt");
even >> num1;
odd >> num2;
while(even.eof() && odd.eof())
{
    if (num1 < num2)
    {
        conintegers << num1;
        even >> num1;
    }
    else
    {       
        conintegers << num2;
        odd >> num2;
    }
}
even.close();
odd.close();
conintegers.close();
return 0;
}
