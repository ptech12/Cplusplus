#include "../bits/stdc++.h"

using namespace std;

// parameterised way
void sumOfFirstN_Numbers(int i, int sum);
// functional way
int sumOfFirstN_Numbers(int n);


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // sumOfFirstN_Numbers(n, 0);
    cout << "Sum of first " << n << " Numbers: " << sumOfFirstN_Numbers(n);

    return 0;
}

// parameterised way
void sumOfFirstN_Numbers(int i, int sum)
{
    if(i < 1){
        cout << "Sum is: " << sum;
        return;
    }

    sumOfFirstN_Numbers(i -1, sum + i);

}

/**
 * ! Functional Way
 * I want the function to give me back something, 
 * not print it
*/
int sumOfFirstN_Numbers(int n)
{
    if(n == 0)
        return 0;
    
    return ( n + sumOfFirstN_Numbers(n - 1) );

}

