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


int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    cin >> n;
    // print(t, n);
    expainPair();

    return 0;
}
 


