#include "bits/stdc++.h"

using namespace std;

using namespace std::chrono;

void countDigits();
void revereseDigits();
void checkPalindrome();
void checkArmStrong();
void printDivisors(int n);
void printDivisorsFast(int n);
void checkPrimeBruteForce(int n);
void checkPrimeBySqrt(int n);
void gcd();

void countDown(int n, function<void(int)> func){


    cout << "******** Timer start ******** \n" << "Running function " << endl;
    auto start = high_resolution_clock::now();
    
    cout << "********  OUTPUT ********" << endl;
    func(n);
    cout << "\n********  END OUTPUT ********" << endl;

    auto stop = high_resolution_clock::now();

    cout << "******** Measuring time taken ********" << endl;

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "******** Time Taken ********" << endl;
    cout << "******** " << duration.count() <<  " ********" << endl;
    // cout << func ;
}

int main(int argc, char const *argv[])
{
    // int n;
    // cin >> n;

    // countDigits();
    // revereseDigits();
    // checkPalindrome();
    // checkArmStrong();
    // printDivisors(n);

    // checkPrimeBruteForce(n);
    // countDown(n, &checkPrimeBruteForce);
    // countDown(n, &checkPrimeBySqrt);
    gcd();

    // countDown(n, 2);
    // countDown(n, 1);

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


void printDivisorsFast(int n){
    cout << "Divisors of " << n << " is: " << endl;

    // for sorted order
    vector<int> divs;

    // looping
    for(int i = 1; i * i<= n; i++){
        if(n % i == 0){
            divs.push_back(i);

            if( (n/i) != i) divs.push_back((n/i));
        }
    }

    // sort
    // O(n log n); n is number of factors
    sort(divs.begin(), divs.end());

    // printing
    for(auto it : divs){
        cout << it << endl;
    }
}

void checkPrimeBruteForce(int n)
{
    int cnt = 0;
    // extreme brute force
    for(int i=1; i <= n; i++){
        if (n % i == 0) cnt++;
    }
    if(cnt == 2) cout << n << " is a Prime Number" << endl;
    else cout << n << " is a Not a Prime Number" << endl;
}

void checkPrimeBySqrt(int n)
{
    int cnt = 0;
    for (int i = 0; i * i < n; i++)
    {
        if(n % i == 0){
            cnt++;
            if(n / i != i) cnt++;
        }
    }

    if(cnt == 2) cout << n << " is a Prime Number" << endl;
    else cout << n << " is a Not a Prime Number" << endl;
    
}

void gcd(){
    int n1, n2, a, b;
    cin >> a;
    cin >> b;
    // using eculidian algorithem
    while (a > 0 && b > 0)
    {
        if(a > b)
            a %= b;
        else
            b %= a;
    }

    if(a == b) 
        cout << b;
    else 
        cout << a;
    
}
