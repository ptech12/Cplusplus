#include "bits/stdc++.h"

using namespace std;

void countDigits();
void revereseDigits();
void checkPalindrome();


int main(int argc, char const *argv[])
{
    // countDigits();
    // revereseDigits();
    // checkPalindrome();

    return 0;
}



void countDigits(){
    int n;

    cin >> n;

    cout << n << " => " << (int) log10(n) + 1;
}

void revereseDigits(){
    int n, last;
    int rev = 0; 
    int flag=0;
    cin >> n;
    
    cout << "Given: " << n << endl;
    

    // checking for N less than zero
    if(n < 0){
        n *= -1;
        flag = 1;
    }

    while (n > 0)
    {
        // extract last digit
        last = n % 10;
        // add to rev digit
        rev = (rev * 10) + last;
        // remove last digit
        n = n / 10;
    }

    if(flag){
        rev *= -1;
    }
    cout << "Reverse: " << rev << endl;
}

void checkPalindrome(){
    int n;
    int rev = 0;
    cin >> n;
    
    // negative number is always not palindrome
    if(n < 0){
        cout << "false" << endl;
        return;
    }

    // storing dup value
    int dup = n;

    while (n)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    // if(rev == dup) return true;

    // return false;

    cout << "dup= " << dup << endl;
    cout << "rev= " << rev << endl;

    cout << ((dup == rev) ? "true" : "false") << endl;
    // if(rev == dup) cout << "true";
    // else cout << "false";
}


