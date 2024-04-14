#include<iostream>
using namespace std;

void rev(int i, int n, int arr[]){
    // stop swap after crossing middle element
    if(i >= n/2){
        return;
    }
    // swapping
    swap(arr[i], arr[n - i - 1]);
    rev(i + 1, n, arr);

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    rev(0, n, a);

    for(auto i : a){
        cout << i << " ";
    }
    
    
    return 0;
} 
