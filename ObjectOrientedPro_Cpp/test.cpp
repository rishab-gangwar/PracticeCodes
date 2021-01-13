#include<iostream>
using namespace std;
int arrMax(int *arr)
{  int i=0,max=*arr;
	for(i=0;i<=9;i++)
      {if(*(arr+i)>max)
		  max=*(arr+i);
		  }
        return max;
      }

int main()
{
 int arr[10],i=0;
 for(i=0;i<=9;i++)
 {cin>>arr[i];}
 //1for(i=0;i<=9;i++)
 //cout<<*(arr+5 i)<<endl;
 cout<<arrMax(arr);
 
  return 0;
}
