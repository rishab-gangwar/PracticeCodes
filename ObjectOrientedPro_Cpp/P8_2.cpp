#include<iostream>
using namespace std;
class staff
{   protected:
	string code,name;
	public:
	void getcodeAndname(string,string);
	void showCodename();
	
};
void staff::getcodeAndname(string name1,string code1)
{
	name=name1;
	code=code1;
	
}
void staff::showCodename()
{
	cout<<" name : "<<name<<" code : "<<code<<endl;
	
}
class Teacher: public staff
{   protected:
	string subject,publication;
	public:
	void getSubPub(string,string);
	void showSubPub();
	
};
void Teacher::getSubPub(string subject1,string publication1)
{
	subject=subject1;
	publication=publication1;
	
}
void Teacher::showSubPub()
{
	cout<<" subject : "<<name<<" publication : "<<code<<endl;
	
}
class Typist: public staff
{   protected:
	int Speed;
	public:
	void speedfunction(int);
	void showSpeed();
	
};
void Typist::speedfunction(int speed1)
{
	Speed=speed1;
	
}
void Typist::showSpeed()
{
	cout<<" Speed of Typist : "<<Speed<<endl;
	
}
class Officer: public staff
{   protected:
	string ranked;
	public:
	void rank(int);
	void showRank();
	
};
void Officer::rank(int ranked1)
{
	ranked=ranked1;
	
}
void Officer::showRank()
{
	cout<<" rank of officer : "<<ranked<<endl;
	
}
class Regular :public Typist
{
	
};
class casual : public Typist
{
	int Dailywage;
public:
   casual(int dailywage)
     {
		Dailywage=dailywage; 
	 }
    void ShowDaily()
    {
		cout<<"Daily wage of casual typist is: "<<Dailywage<<endl;
	}

};
int main()
{ Teacher T1;
	string teacher_Name1,T_Code1,T_subject1,T_publication1;
	cout<<"enter the information for teacher:\n1: name\n2.code\n3.Subject\n4.Publication"<<endl;
	cin>>teacher_Name1>>T_Code1>>T_subject1>>T_publication1;
	T1.getcodeAndname(teacher_Name1,T_Code1);
	T1.getSubPub(T_subject1,T_publication1);
	T1.showCodename();
	T1.showSubPub();	
	Typist Ty1;
	string typist_Name1,Ty_Code1;
	int speed;
	cout<<"enter the information for Typist:\n1: name\n2.code\n3.speed"<<endl;
	cin>>typist_Name1>>Ty_Code1>>speed;
	Ty1.getcodeAndname(typist_Name1,Ty_Code1);
	Ty1.speedfunction(speed);
	Ty1.showCodename();
	Ty1.showSpeed();
	Officer o1;
	string officier_Name1,O_Code1,O_subject1,O_publication1;
	int rank;
	cout<<"enter the information for Officer:\n1: name\n2.code\n3.Rank"<<endl;
	cin>>officier_Name1>>O_Code1>>rank;
	o1.getcodeAndname(officier_Name1,O_Code1);
	o1.rank(rank);
	o1.showCodename();
	o1.showRank();
	
	return 1;
}
