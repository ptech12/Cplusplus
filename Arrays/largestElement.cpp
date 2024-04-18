#include "../bits/stdc++.h"

using namespace std;

int findLargestArray(vector<int> arr, int n){

    int largest = arr[0];

    for(int i = 1; i< n; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;


    for(int i=0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int res = findLargestArray(arr, n);

    cout << res << endl;
    return 0;
}