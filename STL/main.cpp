#include "../bits/stdc++.h"

using namespace std;

void print(int t, int n){
    cout << "t is " << t << endl;
    cout << "n is " << n;
}

void expainPair() { 
    pair<int, int> p = {1, 3};

    // pair
    cout << p.first << " " << p.second << " ";

    // pair of pairs
    pair<int, pair<int, int>> pp = {1, {2, 3}};

    cout << "first " << pp.first;
    cout << "\nSecond " << pp.second.first << endl;

    // pairs as array
     pair<int, int> arr[] = { {1, 2}, {3, 4} };
     cout << "First pair > second number " << arr[0].second;

}

void explainVectors() { 
    /* 
        container dynamic in nature
        increase in size not like array
    */
    vector<int> v;

    v.push_back(1); 
    /* faster than push_back*/
    v.emplace_back(2); // dynamically increase size and push 1

    // pairs in vector
    vector<pair<int, int>> vec;

    // needs a pairs so it matches the init
    vec.push_back({1,2});
    // automatically assumes it is pair and need not to
    // include {} while passing args
    vec.emplace_back(1,2);

     
    //    container containing 5 intances of 100
    vector<int> v(5, 100);
    // container of 5 instance with {0,0,0,0,0}
    vector<int> v(5);

    // container of 5 instance with {20, 20, 20, 20, 20}
    vector<int> v1(5, 20);
    // same values but copy instance from v1 are placed inside v2
    vector<int> v2(v1);

    /* Access elements from vector */
    // similar like array v[0]
    // avoid using vector.at(val);

    // Another method
    // using iterator
    


}


int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    cin >> n;
    // print(t, n);
    expainPair();

    return 0;
}
 


