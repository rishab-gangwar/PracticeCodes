#include<iostream>
using namespace std;
class ExpOper
{
	private:
	  int x,y,z;
	public:
	  void getvalue(int,int,int);
	  void showvalue();
	  ExpOper operator +=(ExpOper);
	  ExpOper operator ++(int);//postincrement
	  ExpOper operator --(int);//postincrement
	  ExpOper operator ++();//preincrement
	  ExpOper operator --();//preincrement
	  bool operator ==(ExpOper);
};
void ExpOper::getvalue(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void ExpOper::showvalue()
{
	cout<<x<<" "<<y<<" "<<z<<endl;
}
ExpOper ExpOper::operator ++()
{   ExpOper C;
	C.x=x+1;
	C.y=y+1;
	C.z=z+1;
	x=x+1;
	y=y+1;
	z=z+1;
	return C;	
}
ExpOper ExpOper::operator --()
{   ExpOper C;
	C.x=x-1;
	C.y=y-1;
	C.z=z-1;
	x=x-1;
	y=y-1;
	z=z-1;
	return C;
		
}
ExpOper ExpOper::operator ++(int n)
{   ExpOper C;
	C.x=x+1;
	C.y=y+1;
	C.z=z+1;
	return C;	
}
ExpOper ExpOper::operator --(int n)
{   ExpOper C;
	C.x=x-1;
	C.y=y-1;
	C.z=z-1;
	return C;
		
}
bool ExpOper::operator ==(ExpOper B)
{
	return ((B.x==x)&&(B.y==y)&&(B.z==z));
}
int main()
{
ExpOper A,B,C,reseta,resetb;
int a,b,c;
cout<<"Enter The value X,Y,Z for A :"<<endl;
cin>>a>>b>>c;
A.getvalue(a,b,c);//set the value of variables in A
cout<<"Enter The value X,Y,Z for B :"<<endl;
cin>>a>>b>>c;
B.getvalue(a,b,c);//set the value of variables in B
reseta=A;
resetb=B;


C=++A;          //after pre increment
cout<<"\n\nPRE INCREMENT\n"<<endl;
cout<<"value of c.. :"<<endl;
C.showvalue();
cout<<"value of A.. :"<<endl;
A.showvalue();
A=reseta;

C=--B;          //after pre decrement
cout<<"\n\nPRE DECREMENT\n"<<endl;
cout<<"value of c..:"<<endl;
C.showvalue();
cout<<"value of B.. :"<<endl;
B.showvalue();
B=resetb;

C=A++;          //after post increment
cout<<"\n\nPOST INCREMENT\n"<<endl;
cout<<"value of c.. :"<<endl;
C.showvalue();
cout<<"value of A.. :"<<endl;
A.showvalue();
A=reseta;

C=B--;          //after post decrement
cout<<"\n\nPOST DECREMENT\n"<<endl;
cout<<"value of c..:"<<endl;
C.showvalue();
cout<<"value of B..:"<<endl;
B.showvalue();
B=resetb;
cout<<"value of comparison operator: "<<(A==B)<<endl;
return 1;
}
