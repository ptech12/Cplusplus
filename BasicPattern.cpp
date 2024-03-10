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


// pattern 10 => pattern10.h

// pattern 11 => pattern11.h
void print11(int n){
    int start = 1;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // validate
        if(i % 2 == 0) start = 1;
        else start = 0;

        // inner loop
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start; // flip 1 to 0 || 0 to 1
        }
        // new line;
        cout << endl;
        
    }
}


void print12(int n){
    // formula for space
    // 2 * ( n - 1 ) 
    int space = 2*(n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        
        // numbers 
        // in reverse
        for (int j = i ; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl; // newline
        space -= 2; // reduce by 2
    }
    
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
        // print9(n);
        print12(n);
        // print11(n);

        // cout << endl;
    }

    // print1(n);

    return 0;
}
