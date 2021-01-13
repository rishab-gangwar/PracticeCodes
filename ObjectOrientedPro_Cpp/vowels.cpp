#include <iostream>
using namespace std;
int main()
{ 
    int i=0,cA=0,cE=0,cI=0,cO=0,cU=0;
    char vowels[200];
    cout << "Enter the string: ";
    for (i = 0; (*(vowels+i)) != '\0'; i++)
      cin>>(*(vowels+i));
   
    for (int i = 0;(*(vowels+i))!= '\0'; i++)
    {
        if ((*(vowels+i) == 'A') || (*(vowels+i) == 'a'))
        {
            cA++;
        }
        if ((*(vowels+i) == 'E' )||(*(vowels+i) == 'e'))
        {
            cE++;
        }
        if ((*(vowels+i) == 'I' )||( *(vowels+i) == 'i'))
        {
            cI++;
        }
        if ((*(vowels+i) == 'O' )|| (*(vowels+i) == 'o'))
        {
            cO++;
        }
        if ((*(vowels+i) == 'U') || (*(vowels+i) == 'u'))
        {
            cU++;
        }
    }
    cout << "No. of 'A' characters: " << cA << endl;
    cout << "No. of 'E' characters: " << cE << endl;
    cout << "No. of 'I' characters: " << cI << endl;
    cout << "No. of 'O' characters: " << cO << endl;
    cout << "No. of 'U' characters: " << cU << endl;
    cout << "Total No. of vowels: " << cA+cE+cI+cO+cU<< endl;
}
