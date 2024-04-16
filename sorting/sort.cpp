#include "../bits/stdc++.h"

using namespace std;

void swap(int *a, int *b);
void selectionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i < n; i++) cin >> arr[i];

    // selectionSort(arr, n);
    insertionSort(arr, n);
    // print
    for(int i=0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    for(int i=0; i <= n - 2; i++){
        int min = i;
        
        for(int j=i; j <= n-1; j++){
            // find minimum
            if(arr[j] < arr[min])
                min = j;
        }

        // swap be reference
        swap(&arr[min], &arr[i]);
    }
}


void bubbleSort(int arr[], int n)
{
    for(int i=n-1; i >= 1; i--){
        // optimisation
        bool didSwap = false;
        for(int j=0; j <= i - 1; j++){
            // take two items and compare
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]); didSwap = true;
        }
        if(!didSwap)
            break;
    }
}

void insertionSort(int arr[], int n)
{
    // insertion sort
    // picks up a element 
    // place it in the correct order
    for(int i=0; i < n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
