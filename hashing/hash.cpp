#include "../bits/stdc++.h"

using namespace std;

int main(){
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
    return 0;
}
