#include "../bits/stdc++.h"

using namespace std;

/// @brief a self-written comparator which sort it according to second element
//// * * if second element is same, then sort
//// * * it according to first element but in descending
/// @param p1 { _, _ }
/// @param p2 { _, _ }
/// @return boolean ( true, false )
bool comp(pair<int, int> p1, pair<int, int> p2){
    // take a pair
    // analyse it
    if(p1.second < p2.second) return true;

    if(p1.second > p2.second) return false;

    // they are same
    if(p1.first > p2.first) return true;
    return false;

}


void explainPopcorn(){
    int n = 7;

    int cnt = __builtin_popcount();

    long long num = 937539758432;
    int cntll = __builtin_popcountll();

    string s = "123";

    sort(s.begin(), s.end());
    
    do{
        cout << s << endl;
        // * writes all permutation of strings
    }while(next_permutation(s.begin(), s.end()));

    int a[4] = {1, 5, 3, 2};

    int maxi = *max_element(a, a + n)




}

// extras
int main(int argc, char const *argv[])
{

    int a[4] = {1, 5, 3, 2};
    int n = 4;
    // [1, 5, 3, 2]

    /**
     * a => starting address
     * a + n => ending address 
    */
    sort(a, a + n); // arrays
    // sort(v.begin(), v.end()); // vectors

    
    /**
     * * descending order
     * a => starting address
     * a + n => ending address 
     * * greater<int> => inbuilt comparator
    */
    // sort(a, a + n, greater<int>); 
    // cout << a ;
    

    // pairs
    pair<int, int> pa[] = {
        {1, 2},
        {2, 1},
        {4, 1}
    };
    /**
     * * sort it according to second element
     * * if second element is same, then sort
     * * it according to first element but in descending
     * ! comp => self-written compartor
    */
   sort(pa, pa + n, comp);

   // * {4, 1}, {2, 1}, {1, 2}

    
    return 0;
}


