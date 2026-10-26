#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , key ;
    cout << "enter the size" << " ";
    cin >> n ;
    int arr [n];
    
    cout <<"enter the elements"<<" ";
    for (int i = 0 ; i < n ; i++){
        cin >> arr [i];    
    }
    
   cout << "enter the key "<< " " ;
   cin >> key ;
   
   for (int i =0 ; i < n ; i++){
   if (arr[i] == key) {
    cout << "found";
    return 0;
   }
   
   } 
     cout << "not found " ;  
   return 0;
}