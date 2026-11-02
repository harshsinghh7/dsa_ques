#include <iostream>
#include <math.h>
using namespace std ;
int main (){
  int n ;
  int i = 0 ;
  cout << "enter";
  cin >> n ;
  double rev =0 ;
   while (n!=0){
    int remainder = n%2 ;
    rev = (remainder * pow (10 , i)) + rev;
    n = n/2 ;
    i++ ;
   }
cout << rev ;
}