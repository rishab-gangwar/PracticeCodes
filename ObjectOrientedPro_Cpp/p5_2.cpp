#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int T;
	cin>>T;
	while(T)
	{   long long int N,flag=0;
	    cin>>N;
	    int pld=N&(N-1);
	     if(pld==0)
	      {cout<<"-1"<<endl;
	      }
	    else
	    {
	     if(N==3)
	    {
	       cout<<1<<" "<<3<<" "<<2<<endl; 
	    }
	      if(N==1)
	      {
	          
	         cout<<1<<endl;
	      }
	      if(N>4)
	      {
	            cout<<2<<" "<<3<<" "<<1<<" ";
	          for(int i=4;i<N;i++)
	           {
	            if((i&(i-1))==0)
	               {  
                      if(i+1<N)
                    {
                         cout<<i+1<<" "<<i<<" ";
                    }
                       else
                    {
                     cout<<i+1<<" "<<i<<endl;
                     flag=1;
                     }
                       i=i+1;
              
                     }
             else{
                     cout<<i<<" ";
                 }
                 
	      }
	      if (flag!=1)
	       {cout<<N<<endl;
	       }
	         
	       }
	    }
	    T--;
	}
	
	return 0;
}
