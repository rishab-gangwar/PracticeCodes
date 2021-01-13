#include<iostream>
#include<string>

using namespace std;

struct marks
{   
    string fname,lname;
    int Rollno;
    int Total=0;


    void enterinfo(string f1name,string l1name,int rollno,int M[],int no)
    {
      fname=f1name;
      lname=l1name;
      rollno=rollno;
      for(int i=0;i<no;i++)
        {
			Total+=M[i];
		}
        
    }
    void printinfo(int M[])
    { cout<<"*****___*****____******\n";
      cout<<"Name of student = "<<fname<<" "<<lname<<endl;
      cout<<" total marks ="<<Total;
      cout<<"\n*****___*****____******\n\n";

    }
};

int main()
{   string fname,lname;
    int rollno;
    int no;
    cout<<"Enter the number of subjects in the institution: "<<endl;
    cin>>no;
    int M[no],i=0,i0=0;
    marks P1[3];
    while(i0<3)
	    {cout<<"Information regarding student No: "<<i0+1<<"\n\n"<<endl;

    cout<<"Enter the first name: ";
    cin>>fname;
    cout<<"Enter the last name: ";
    cin>>lname;
    cout<<"Enter the roll no: ";
    cin>>rollno;
    cout<<"\n\n";
    i=0;
    while(i<no)
    {cout<<"Enter the marks of subject number " <<(i+1)<<" :";
		cin>>M[i];
		if(M[i]<0)
		  {i--;
		cout<<"Invalid Entry !! so Again ";
		  }
		 i++;
		}
    P1[i0].enterinfo(fname,lname,rollno,M,no);
    cout<<"\n";
    i0++;
}
i0=0;
   while(i0<3)
    {
    P1[i0].printinfo(M); 
    i0++;
}

    return 1;
}

