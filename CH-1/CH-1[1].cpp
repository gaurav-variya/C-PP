#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter array size :";
    cin >> n;

    int a[n];

    cout << "Enter Array eElements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "ARRAY[" << i << "]:";
        cin >> a[i];
    }

    cout<< "Even Elements Of  Array :";
        for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0){
            cout<< a[i] <<",";
        }
    }

    return 0;
}
