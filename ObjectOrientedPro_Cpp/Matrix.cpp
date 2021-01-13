#include<iostream>
using namespace std;

void MatrixMax(int mat[][100],int len,int wid)
{  int i=0, maxarr[len],j=0;
for(i=0;i<len;i++)
 { maxarr[i]=0;
	 for(j=0;j<wid;j++)
	{
	if(maxarr[i]<*(*(mat+i)+j))
		{maxarr[i]=*(*(mat+i)+j);}
		
	}
	 
}
for(i=0;i<len;i++)
 {
	 cout<<*(maxarr+i)<<endl;
 }
 
}

int main()
{   int len,wid;
	cout<<"Enter the length and width of Matrix : "<<endl;
	cin>>len>>wid;
 int Matrix[len][100],i=0,j=0;
 for(i=0;i<len;i++)
 { for(j=0;j<wid;j++)
	 
 {
	 cin>>*(*(Matrix+i)+j);
}
}
 //1for(i=0;i<=9;i++)
 //cout<<*(arr+5 i)<<endl;
 
MatrixMax(Matrix,len,wid);
 
  return 1;
}

