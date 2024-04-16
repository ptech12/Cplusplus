#include "../bits/stdc++.h"

using namespace std;

void printVector(vector<int> &arr);

int main(){
    int n;
    cin >> n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int temp;cin >> temp;
        arr.push_back(temp);
    }

    printVector(arr);

    return 0;
}


void printVector(vector<int> &arr)
{
    for(auto it : arr){
        cout << it << " ";

    }
}
