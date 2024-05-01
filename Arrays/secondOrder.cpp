/**
 * Problem Statement: Given an array, find the second smallest and 
 * second largest element in the array. 
 * Print ‘-1’ in the event that either of them doesn’t exist.
*/

#include "../bits/stdc++.h"
using namespace std;

int secondLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i=1;i < n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX; // INT_MAX becasue we are finding smallest

    for(int i=1; i < n; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i]; 
        }
        else if(arr[i] != smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main(){

    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int sLargest = secondLargest(arr, n);
    int sSmallest = secondSmallest(arr, n);
    cout << "Second Largest: " << sLargest << endl;
    cout << "Second Smallest: " << sSmallest << endl;
}