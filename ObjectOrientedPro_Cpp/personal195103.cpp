#include<iostream>
#include<string>

using namespace std;

struct Personal
{
    string fname,lname;
    int DD,MM,YYYY;
    long int Salary;


    void enterinfo(string f1name,string l1name,int day,int Month,int Year,long int salary)
    {
      fname=f1name;
      lname=l1name;
      DD=day;
      MM=Month;
      YYYY=Year;
      Salary=salary;
    }
    void printinfo()
    { cout<<"*****___*****____******\n";
      cout<<"Name = "<<fname<<" "<<lname<<endl;
      cout<<"Date of joining = "<<DD<<"/"<<MM<<"/"<<YYYY<<endl;
      cout<<"Salary = Rs "<<Salary<<endl;
      cout<<"\n*****___*****____******\n\n";

    }
};
union Personal_union
{
    string fname,lname;
    int DD,MM,YYYY;
    long int Salary;


    void enterinfo(string f1name,string l1name,int day,int Month,int Year,long int salary)
    {
      fname=f1name;
      lname=l1name;
      DD=day;
      MM=Month;
      YYYY=Year;
      Salary=salary;
    }
    void printinfo()
    { cout<<"*****___*****____******\n";
      cout<<"Name = "<<fname<<" "<<lname<<endl;
      cout<<"Date of joining = "<<DD<<"/"<<MM<<"/"<<YYYY<<endl;
      cout<<"Salary = Rs."<<Salary<<endl;
      cout<<"\n*****___*****____******\n\n";

    }
};
int main()
{   string fname,lname;
    int DD,MM,YYYY;
    long int Salary;
    Personal P1;
    union u_P1;
    cout<<"Enter the first name: ";
    cin>>fname;
    cout<<"Enter the last name: ";
    cin>>lname;


    cout<<"\n";

    //enter right date:
    while(true)
    {
    cout<<"Enter the day of joining(DD): ";
    cin>>DD;
    if((0<DD)&&(DD<31)) break;
    else cout<<"Invalid Entry! please Enter again: "<<endl;
    }

    cout<<"\n";

    //enter right date:

    while(true)
    {
    cout<<"Enter the Month of joining(MM): "<<endl;
    cin>>MM;
    if((1<=MM)&&(MM<=12)) break;
    else cout<<"Invalid Entry! please Enter again: "<<endl;
    }


    cout<<"\n";

    //enter right date:

    while(true)
    {
    cout<<"Enter the year of joining(YYYY):"<<endl;
    cin>>YYYY;
    if((1900<YYYY)&&(2020>=YYYY)) break;
    else cout<<"Invalid Entry! please Enter again:"<<endl;
    }


    if(YYYY==2020)
    {if((MM>=9)&&(DD>17))

      {cout<<"Time traveling not allowed";
      return 1;}


    }
    cout<<"Enter the salary( in Rs/annum): ";
    cin>>Salary;
    cout<<"\n\n";
    P1.enterinfo(fname,lname,DD,MM,YYYY,Salary);
    P1.printinfo();
    cout<<"\n";
    cout<<"The size occupied by an instance of struct Personal="<<sizeof(Personal)<<"bytes"<<endl;
    cout<<"The size occupied by an instance of union Personal="<<sizeof(Personal_union)<<"bytes"<<endl;
    cout<<"The size occupied by an instance union is "<<sizeof(Personal)/sizeof(Personal_union)<<" times less than that of struct's instance"<<endl;
    

    return 1;
}

