#include "bits/stdc++.h"

using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void print5(int n)
{
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // ( n - i + 1)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
}

void print6(int n)
{
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // ( n - i + 1)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void print7(int n)
{
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


void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < (2 * n) - (i * 2 + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i ; j++)
        { 
            cout << " ";
        }
        cout << endl;
    }
}


void print9(int n){
    print7(n);
    print8(n);
}

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        // print2(n);

        // print8(n);
        // print7(n);
        print9(n);

        // cout << endl;
    }

    // print1(n);

    return 0;
}
