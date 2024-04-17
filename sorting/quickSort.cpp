#include "../bits/stdc++.h"

using namespace std;

void printVector(vector<int> &arr);
void swap(int *a, int *b);
void quickSort(vector<int> &arr, int low, int high);
int partition(vector<int> &arr, int low, int high);

int main(){
    int n;
    cin >> n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int temp;cin >> temp;
        arr.push_back(temp);
    }
    quickSort(arr, 0, n-1);
    printVector(arr);

    return 0;
}


void printVector(vector<int> &arr)
{
    for(auto it : arr){
        cout << it << " ";

    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(vector<int> &arr, int low, int high)
{
    // run till  low crosses high
    if(low < high){
        // find partition
        int partitionIndex = partition(arr, low, high);
        // find left part of arr
        quickSort(arr, low, partitionIndex - 1); 
        quickSort(arr, partitionIndex + 1, high); 
    }
}


/// @brief finds the partition index and places pivot in correct place for the given array
/// @param arr Array of length N
/// @param low starting index
/// @param high ending index
/// @return partition index of the pivot
int partition(vector<int> &arr, int low, int high)
{
    // random pivot
    int pivot = arr[low];
    int i = low;
    int j = high;

    // loop till i crosses j
    while( i < j ){
        // find all elements that are greater than pivot
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        // find all elements that are lesser than pivot
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        // if i didn't cross j, swap them by reference
        if(i < j)
            swap(&arr[i], &arr[j]);
    } 
    // swap the pivot in correct order;
    swap(&arr[low], &arr[j]);

    return j; // the partition index
}
