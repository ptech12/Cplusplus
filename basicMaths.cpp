#include "bits/stdc++.h"

using namespace std;

void countDigits();
void revereseDigits();
void checkPalindrome();
void checkArmStrong();
void printDivisors(int n);


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // countDigits();
    // revereseDigits();
    // checkPalindrome();
    // checkArmStrong();
    printDivisors(n);


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


void checkArmStrong(){
    int n;
    int sum = 0;
    cin >> n;
    // creating duplicate
    int dup = n;

    // count digits
    int cnt = 0;
    int dupN = n;
    while(dupN){
        cnt++;
        dupN /= 10;
    }


    while (n){
        int last = n % 10;
        sum += pow(last, cnt);
        n /= 10;
    }

    cout << "dup= " << dup << endl;
    cout << "SUM= " << sum << endl;

    cout << ((dup == sum) ? "true" : "false") << endl;
    
}

void printDivisors(int n){
    // TC => O(n)
    cout << "Divisors of " << n << " is: " << endl;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }
}
