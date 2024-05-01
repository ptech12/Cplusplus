/**
 * Check if an Array is Sorted

Example 1:

N = 5, array[] = {1,2,3,4,5}

 The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.
 * 
 * Problem Statement: Given an array of size n, write a program to check 
 * if the given array is sorted in (ascending / Increasing / Non-decreasing) order
 * or not. If the array is sorted then return True, Else return False.

*/

#include "../bits/stdc++.h"

using namespace std;

bool isSorted(vector<int> &arr, int n){

    for(int i=1; i < n; i++){
        if(! (arr[i] >= arr[i-1]))
            return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i< n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << (isSorted(arr, n)) ? "true" : "false";
    return 0;
}