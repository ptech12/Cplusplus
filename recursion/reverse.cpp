#include<iostream>
using namespace std;

void rev(int i, int n, int arr[]){
    // stop swap after crossing middle element
    if(i >= n/2){
        return;
    }
    // swapping
    swap(arr[i], arr[n - i - 1]);
    rev(i + 1, n, arr);

}

/// @brief check palindrom of a string
/// @param i loop item
/// @param s actual string
/// @return true if palindrome elase false
bool palindrome(int i, string &s){
    // base condition
    if(i >= s.size() / 2) return true;

    // check for opposite char
    if(s[i] != s[s.size() - i -1]) return false;

    // recursion
    return palindrome(i + 1, s);

}

int main(int argc, char const *argv[])
{
    // int n;
    // cin >> n;
    // int a[n];
    // for(int i=0; i<n; i++) cin >> a[i];

    // rev(0, n, a);

    // for(auto i : a){
    //     cout << i << " ";
    // }
    // ! check palindrome of string
    string s="MADAM";

    if (palindrome(0, s) )
    {
        cout << true;
        
    }else cout << false;
    
    
    
    return 0;
}
