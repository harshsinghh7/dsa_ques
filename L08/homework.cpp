#include <iostream>
using namespace std;
int main (){
    int n ,c100,c50,c20,c1;
    cin >> n ;
    c100 =  n/100 ;
 
    n = n%100 ;
    
    c50 = n/50 ;
    
        n=n%50 ;
 
    c20 =  n/20;
    
        n = n%20 ;
    
    c1 = n/1 ;
    
        n=n%1 ;
    
    int note ;
    cout << "enter the note ";
    cin >> note ;
   
    switch (note){
    case 100 :  cout << c100 <<endl; 
    case 50 :  cout << c50 <<endl; 
    case 20 :  cout << c20 <<endl; 
    case 1 :  cout << c1<<endl ; 
    }
    return 0;
}