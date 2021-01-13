#include <iostream>
using namespace std;

class Counter
{
	private:
		static int count;

	public:
		Counter()
		{ count++; }
		static void Print()
		{
			cout<<"\nTotal objects are: "<<count;
		}
};

int Counter :: count = 0;

int main()
{
	Counter OB1;
	OB1.Print();

	Counter OB2;
	OB2.Print();

	Counter OB3;
	OB3.Print();

	return 0;
}
