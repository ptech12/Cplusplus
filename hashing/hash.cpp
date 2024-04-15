#include "../bits/stdc++.h"

using namespace std;


/**
 * * int input
5
1 3 2 1 3
5
1
4
2
3
12
*/
void intHashing();

/**
 * * char input
abcdabehf
5 
a
g
h
b
c 
*/
void charHashing();

/**
 * Hash using Map
 * input
 * 
7
1 2 3 1 3 2 12
5
1
2
3
4
12
 *
*/
void hashMap();

int main(){
   hashMap();
    return 0;
}

void intHashing()
{
    int n; cin >> n;
    int a[n];
    for(int i=0;i < n; i++){
        cin >> a[i];
    }

    // pre-compute
    // max size => 12
    // in-order to store 12th index 
    // we need max size as 13
    int hash[13] = {0};
    //compute
    for(int i=0; i<n;i++){
        hash[a[i]] += 1;
    }
    
    cout << "Hash Array after pre-compute" << endl;
    for(int i=0; i<n;i++){
        cout << hash[i] << " ";
    }
    cout << endl;


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetching
        cout << number << " appears: " << hash[number] << endl;
    }
}

void charHashing()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    
    int hash[26] = {0};
    // pre-compute hash array
    for(int i = 0; i < s.size(); i++){
        // char - 'a'
        hash[s[i] - 'a']++;
    }
    cout << s << endl;

    while(q--){
        char c; cin >> c;
        // fetch
        cout << c << ": " <<
         hash[c - 'a'] << endl;
    }
}

void hashMap()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];

    // pre-compute
    map<int , int> mpp;
    for(int i=0; i < n; i++){
        mpp[a[i]]++;
    }
    cout << "Given array: "; 
    for(int i=0;i<n;i++)
        cout << a[i] << " ";

    cout << "\nhash map" << endl;
    // iterate over the map
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "Output" << endl;
 

    int q;
    
    cin >> q;
    
    while(q--){
        int num;
        cin >> num;
        // fetch
        cout << mpp[num] << endl;
    }



}
