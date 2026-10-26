#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout << "enter the size" << " ";
    cin >> n ;
    int arr [n];
    int sum = 0 ;
    cout <<"enter the elements"<<" ";
    for (int i = 0 ; i < n ; i++){
        cin >> arr [i];
        sum = sum + arr[i];
    }
    
    cout <<"sum of elements of array are" << " " << sum ;
    return 0;
}