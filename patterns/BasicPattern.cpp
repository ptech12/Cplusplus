#include "../bits/stdc++.h"
using namespace std;

void newLine(){
    cout << endl; 
}
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

void print13(int n){
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        // cols
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        // newline
        cout << endl;
        
    }
    
}

void print14(int n){
    // right angle triangle
    for (int i = 0; i < n; i++){
        for (char ch = 'A'; ch <= 'A'+i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    
}
void print15(int n){
    // right angle triangle
    for (int i = 0; i < n; i++){
        for (char ch = 'A'; ch <= 'A'+ (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    
}

void print16(int n){
        // right angle triangle
    for (int i = 0; i < n; i++){
        char ch = 'A'  + i;
        for (int j=0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print17(int n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        // chars
        char ch = 'A';
        // half breakpoint
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            // ++ till breakpoint
            if(j <= breakpoint) ch++;
            // -- after breakpoint
            else ch--;
        }
        

        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print18(int n){
    // char c = ('A' + n) - 1;
    char start = 'A' + n - 1;
    for (int i = 0; i < n; i++)
    {
        for (char ch = start - i; ch <= start; ch++)
        {
            cout << ch << " ";
        }
        newLine();
    }
    
}

void print19(int n){
    int iniS = 0;
    for (int i = 0; i < n; i++)
    { 
        // stars (n - i) starts
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        

        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        newLine();
    }
    iniS = (2 * n) - 2; // follow-up for reverse order
    for (int i = 0; i < n; i++)
    { 
        // stars (n - i) starts
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        

        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        newLine();
    }    
    
}

void print20(int n){
    int spaces = 2 * n - 2;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int stars = i;
        if(i > n) stars = 2 * n - i;

        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << '*';
        }
        
        // space
        for (int j = 1; j <= spaces ; j++)
        {
            cout << " ";
        }
        

        // stars
        for (int j = 1; j <= stars ; j++)
        {
            cout << '*';
        }
        newLine();
        if(i < n) spaces -= 2;
        else spaces += 2;

    }
    
}



// square pattern
void print21(int n){
    // print n times
    // for outer liiop
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<n; j++){
            if(i==0 || j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }
        newLine();
    }
    
}


void print22(int n){
    for (int i = 0; i < 2*n-1; i++){

        for (int j = 0; j < 2*n-1; j++){
            int top = i, left = j;
            int right = (2 * n - 2) - i;
            int bottom = (2 * n - 2) - j;
            cout << ( n - min(min(top, bottom), min(left, right)));

        }
        newLine();
        
    }
    
}


int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        print22 (n);

    }

    return 0;
}
