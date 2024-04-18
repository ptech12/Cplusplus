#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b);
void bubbleSort(vector<int> arr, int n);

int main(){
    int n;
    cin >> n;
    vector<int> arr;

    // arr input
    for(int i=0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    bubbleSort(arr, n);

    for(auto it : arr)
        cout  << it << " " ;

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(vector<int> arr, int n)
{
    // base condition
    // return if n range is equal to 1
    if(n == 1) return;

    for(int i = 0; i<= n-2; i++){
        // compare adjacent elements;
        if(arr[i] > arr[i + 1])
            swap(&arr[i], &arr[i+1]);
    }

    // recursive call
    bubbleSort(arr, n-1);
}
