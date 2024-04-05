#include "../bits/stdc++.h"

using namespace std;

void explainMap(){
    /* Map stores keys in sorted similar to SET */
    // <key, value>
    map<int, int> mpp;



    // < <key1, key2>, value>
    // map<pair<int, int>, int> mpp

    // {1, 2}
    mpp[1] = 2;

    // mpp.emplace({3, 1});

    // {1, 2}
    // {3, 1}
    mpp.insert({2, 4});

    // <key, <val1, val2>>
    // map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mp1;
    mp1[{2, 3}] = 10;


    // it3rat3
    cout << "mpp" << endl;
    cout << "Key" << " " << "Value" << endl;
    for(auto it: mpp){
        cout << " " << it.first << " \t " << it.second << endl;
    }

    cout << "\nmap<pair<int, int>, int> mp1" << endl;
    cout << "Key \tValue" << endl;
    for(auto it: mp1){
        
        cout << "{" << it.first.first << ", " << it.first.second << "}" << " \t " << it.second << endl;
    }

    // cout << mpp[1] << endl;
    // cout << mpp[4]; // { 0 } 

    auto it = mpp.find(3);
    // cout << *(it);
}

// Multi Map
void explainMultiMap(){
    /**
     * * everything same as map, only it can store multiple keys
     * * only mpp[key] cannot be used here
    */
}

// Un Ordered Map
void explainUnorderedMap(){
    // ** same as set and unordered_set difference.
    // ** unique keys, but not sorted array
}

/**
 * Map => log N
 * UMap => constant
*/


int main(int argc, char const *argv[])
{
    explainMap();
    return 0;
}
