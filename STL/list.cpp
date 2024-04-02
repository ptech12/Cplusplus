
#include "../bits/stdc++.h"

using namespace std;

/**
 * @param 
 * return none
*/
void explainList(){
    list<int> ls;

    ls.push_back(2); // 2
    ls.emplace_back(4); // 2, 4
    
    ls.push_front(5); // 4, 5, 2

    ls.emplace_front(); // 2, 4



}

// same as vector and List
// void deque(); 

/**
 * ! functions
 * top, push, pop , empty, size, top, swap
*/
void explainStack(){
    // indexing not allowed
    stack<int> st;

    /**
     * | |
     * ---
    */

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    /**
     * | 4 |
     * | 3 |
     * | 2 |
     * | 1 |
     * -----
    */

   st.emplace(5);
    /**
     * | 5 |
     * | 4 |
     * | 3 |
     * | 2 |
     * | 1 |
     * -----
    */

   cout << st.top() << endl; // prints 5

   st.pop(); // remove top and returns it
   /**
     * | 4 |
     * | 3 |
     * | 2 |
     * | 1 |
     * -----
    */

   cout << "Top => " << st.top() << endl;
   cout << "Size => " << st.size() << endl;
   cout << "is Empty => " << st.empty() << endl;

    // swaping stacks
    stack<int> temp;
    temp.push(5);

    st.swap(temp);


}

int main(int argc, char const *argv[])
{
    
    explainStack();
    return 0;
}
