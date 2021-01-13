#include<iostream>
using namespace std;
int arrMax(int *arr,int arrA)
{  int i=0,max=*arr;
	for(i=0;i<arrA;i++)
      {if(*(arr+i)>max)
		  max=*(arr+i);
		  }
        return max;
      }

int main()
{int lenA;
	cout<<"Enter the length of Array : "<<endl;
	cin>>lenA;
 int arr[lenA],i=0;
 for(i=0;i<lenA;i++)
 {cin>>arr[i];}
 //1for(i=0;i<=9;i++)
 //cout<<*(arr+5 i)<<endl;
 cout<<arrMax(arr,lenA);
 
  return 0;
}
