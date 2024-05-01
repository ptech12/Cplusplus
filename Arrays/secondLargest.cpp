#include "../bits/stdc++.h"

using namespace std;

int bruteForce(vector<int> &arr, int n){
    // TC => O(N log N) + O(N)
    sort(arr.begin(), arr.end()); // takes o(N log N);

    int largest = arr[n-1];

    // traverse in reverse
    // n-2 => because comparing from second last for second largest
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] != arr[n-1])
            return arr[i]; //it will be second largest
    }
    return 0;
}

int better(vector<int> &arr, int n){
    // TC => O(N) + O(N) = o(2N)
    // no need to sort
    
    /**
     * first pass
     * find the largest element in the array
    */

   int largest = arr[0];
   for(int i=0; i < n; i++)
   {
        if(arr[i] > largest) 
            largest = arr[i];
   }

   /**
    * Second Pass
    * Find the Second largest using largest found in first pass
   */
  int secondLargest = -1;
  for(int i=0; i < n; i++){
    // are you greater than second largest
    // and you are not the same as largest
    if(arr[i] > secondLargest && arr[i] != largest){
        secondLargest = arr[i];
    }
  }

  return secondLargest;

}

int main(){
    int n;
    cin >> n;

    vector<int> arr;


    for(int i=0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // int res = bruteForce(arr, n);
    int res = better(arr, n);

    cout << res << endl;
    return 0;
}