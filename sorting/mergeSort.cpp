#include "../bits/stdc++.h"
using namespace std;


void printVector(vector<int> &arr);
void mergeSort(vector<int> &arr, int low, int high);
void merge(vector<int> &arr, int low, int mid, int high);


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    // low => 0
    // high => n-1
    mergeSort(arr, 0, n-1);

    printVector(arr);

    return 0;
}

void printVector(vector<int> &arr)
{
    for(auto it : arr){
        cout << it << " ";

    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    // base condition
    if(low == high) return;

    // find mid 
    int mid = (low + high) / 2;

    // func call for left of mid
    mergeSort(arr, low, mid);
    // func call for right of mid
    mergeSort(arr, mid + 1, high);

    // finally merging the sorted array
    merge(arr, low, mid, high);
}


void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    // * [left...mid]
    int left = low;
    // * [mid+1...high]
    int right = mid+1;
    // * loop until left ptr is less than mid ptr
    // * loop until right ptr is less than high ptr
    while(left <= mid && right <= high){
        // compare for lowest value
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++; // move left ptr to next element
        }else{
            // else right ptr is lowest
            temp.push_back(arr[right]);
            right++; // move right ptr to next
        }
    }

    // * copy left over items
    // for left part of array
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    // for right part of array
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // storing it in correct order
    for(int i=low; i <= high; i++){
        arr[i] = temp[i-low];
    }

}
