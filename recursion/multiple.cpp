/**
 * * Program to explain 
 * * Multiple recursion calls
 * 
*/

#include<iostream>
using namespace std;


int fib(int i);

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    
    cout << fib(9);

    
    return 0;
} 

int fib(int i)
{
    // base condition
    if(i <= 1) return i;

    // multiple recursion calls
    /**
     * * goes stack fashion
     * * fib(i - 1) is executed first
     * * fib(i - 2) waits till fib(i - 1) return from stack
    */

    return fib(i - 1) + fib(i - 2) ;
}