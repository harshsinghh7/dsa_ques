#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key;

    cout << "enter the size: ";
    cin >> n;

    int arr[n];

    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the key: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "found";
    else
        cout << "key is not there";

    return 0;
}