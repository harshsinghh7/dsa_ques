#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int j = 1;

        while (j <= n)
        {
           int i = 1;
           while(i <=n)
           {
             cout << "*" ;
             i = i + 1 ;
           }
        
          cout << endl;
          j = j + 1 ;
        }
}          
    
