#include <iostream>
using namespace std;
int main(){
    char n ; 
    {
        cout << "enter item" << endl;
        cin >> n;
        if (n >= 'n' && n <= 'z')
        {
            cout << "lower case";   
        }
        else if (n>= 'A' && n <= 'Z')
        {
            cout << "upper case";
        }
        else if (n >= '0' && n <= '9')
        {
            cout << "numeric";
        }
    }

}