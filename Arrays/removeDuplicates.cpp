#include <iostream>
#include <set>
using namespace std; 


int brute(int n, vector<int> &arr);
int optimal(int n, vector<int> &arr);



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
    // brute(n, arr);

    cout << optimal(n, arr);
    cout << endl;

    for(auto it : arr){
        cout << it  << " ";
    }
    return 0;
}

int brute(int n, vector<int> &arr)
{
    // first pass
    // find uniqure elements
    set<int> s;

    // takes O(N log N)
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    // second pass
    int index = 0;
    // insert till SET is empty;
    for(auto it : s){
        arr[index] = it;
        index++;
    }

    return 0;
}

int optimal(int n, vector<int> &arr)
{
    // 2-pointer approach
    int i = 0;
    
    // iterate from 2nd one
    for(int j=1; j < n; j++){
        // if current is not equal to inital element, 
        if(arr[j] != arr[i]){
        // take place in the front position of initial element
            arr[i+1] = arr[j];
            i++; // move pointer to next element
        }
    }

    // length of the unique element is 
    return i+1;
}
