#include <bits/stdc++.h>
using namespace std;

int main()
{ int n;
    cout << "enter the size" << " "<< endl ;
    cin >> n;
    int arr[n];
    cout << "enter the element"<<" "<< endl ;
    for(int i = 0 ;i < n ;i ++){
        cin >> arr[i];
    }
    int ans = 0 ;
    for (int i = 0 ; i<n ; i++){
    ans = ans ^ arr[i];
    }
    cout << "unique element" << endl << ans << endl ;
    
    return 0;
}
