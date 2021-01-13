//195103 Rishabh gangwar
//4th
//inputs:
/*   1st line 5 6
     2nd line 6 8
*/
//output:
/*
C1: 6+8i

C2: 5+6i
+
_________
C3: 11+14i
 */
#include<iostream>
using namespace std;

class Complex

{

    private:

        float Real_part,Imaginary_part;

    public:
    Complex()
    {
		Real_part=0;Imaginary_part=0;
		
		}
		Complex(int any)
		{Real_part=any;
			Imaginary_part=any;
	     }

        Complex(int Real,int Imaginary)

        {   Real_part=Real;

           Imaginary_part=Imaginary;

        }

        Complex(float x,float y)

        {

           Real_part=x;

           Imaginary_part=y;

        }

        void display()

        {

            cout<<Real_part<<"+"<<Imaginary_part<<"i"<<endl;

        }

        Complex operator +(Complex c2)

        {

            Complex C3;
 

            C3.Real_part =Real_part+c2.Real_part;
            C3.Imaginary_part =Imaginary_part+c2.Imaginary_part; 

            return C3;
 


        }
 

};

int main()

{   float A1,B1,A2,B2;
    cout<<"Enter The real part and imaginary part for 1st Complex Number:"<<endl;
    cin>>A1>>B1;
    cout<<"Enter The real part and imaginary part for 2nd Complex Number:"<<endl;
    cin>>A2>>B2;
    Complex C1(A2,B2),C2(A1,B1),C3;
    C3=C1+C2; 
    cout<<"C1: ";
    C1.display();
    cout<<"\nC2: ";
    C2.display();
    cout<<"+\n_________\nC3: ";
    
    C3.display();
    return 1;
 


}
