#include "bits/stdc++.h"

using namespace std;

void countDigits();

int main(int argc, char const *argv[])
{
    countDigits();
    
    return 0;
}



void countDigits(){
    int n;

    cin >> n;

    cout << n << " => " << (int) log10(n) + 1;
}
