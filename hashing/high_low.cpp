#include "../bits/stdc++.h"
using namespace std;

vector<int> getFreq(vector<int> &v){
    // pre-commpute
    int max, min;

    // mpp
    unordered_map<int, int> mpp;
    // result
    vector<int> res;

    for(int i=0; i < v.size(); i++){
        mpp[v[i]]++;
    }

    for(auto it : mpp){
        // cout << it.first << " -> " << it.second << endl;
        // iterate through freq
        if(max < it.second)
            max = it.first; // assign key to max
        
        if(min > it.second)
            min = it.first;
    }

    res.push_back(max);
    res.push_back(min);

    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> v;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> ans = getFreq(v);

    for(auto it : ans){
        cout << it << " ";
    }

    // for(auto it : v){
    //     cout << it << endl;
    // }

    return 0;
} 













/**
 *  Problem statement

Given an array 'v' of 'n' numbers.


Your task is to find and return the highest and lowest frequency elements.


If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.


Example:

Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

Output: 1 2

Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].


*/