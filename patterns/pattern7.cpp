#include "../bits/stdc++.h"
using namespace std;

void print7(int n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < (i * 2 + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        print7 (n);

    }

    return 0;
}

