#include "../bits/stdc++.h"
using namespace std;

void getFreq(vector<int> &arr){
    // map init
    unordered_map<int, int> mpp;

    // pre-compute
    for(auto it : arr){
        mpp[it]++;
    }

    for(auto it : mpp){
        cout << it.first << " occurs " << it.second << " times in the array" << endl;
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;
    vector<int> arr;
    //input array
    for(int i=0;i<n;i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    getFreq(arr);

    for(auto it : arr)
        cout << it << " ";




    return 0;
}



/**
 * 
 * Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	 5  2
        15  1
Explanation: 10 occurs 3 times in the array
	      5 occurs 2 times in the array
              15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	3  1
        4  2
Explanation: 2 occurs 3 times in the array
	     3 occurs 1 time in the array
             4 occurs 2 time in the array

*/