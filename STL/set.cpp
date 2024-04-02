#include "../bits/stdc++.h"

using namespace std;

void explainSet(){
    /**
     * Everything is sorted
     * stores only unique values
     * linear container, no tree is used
    */

   set<int> st;
   st.insert(1);
   st.emplace(2);
   st.insert(4);
   st.insert(3);
   // {1, 2, 3, 4}

    /**
     * functionality of insert in vector
     * can be used also, that only increases
     * efficiency
    */

   // begin, end, rbegin, rend(), size()
   // empty, swap() are same as those of above

   // {1, 2, 3, 4}
   // iterator that points to 3
   auto it = st.find(3); 

    // when we use to find that do not exit
    // it always st.end()
   auto ite = st.find(6); // (i.e). it points to the last element

    st.erase(4); // delete 4 and maintain sorted order // take logn

    int cnt = st.count(1);

}


int main(int argc, char const *argv[])
{
    explainSet();
    return 0;
}
