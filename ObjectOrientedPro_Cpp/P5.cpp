#include<iostream>
using namespace std;
class student 
{
private:
char f1name[31];
char f2name[31];	
int roll;
char department[100];	
public:
void getd(void);
void showd(void);	
};
void student::getd()
{
cin>>f1name;
cin>>f2name;
cin >> roll;
cin>>department;

}
void student::showd()
{
cout<<"Name of the student is "<<f1name<<" "<<f2name<<endl;
cout<<"Department of the student is "<<department<<endl;
cout<<"Roll number of the student is "<<roll<<endl; 
}
int main()
{
int i;	
student s[5];	
for(i=0;i<5;i++)
{
cout<<"Enter the details of the student "<<i+1<<" : "<<endl;	
s[i].getd();
cout<<endl;	
}
for(int i=0;i<5;i++)
{
cout<<"The details of the student "<<i+1<<" is : "<<endl;
s[i].showd();
cout<<endl<<endl;
}
}
