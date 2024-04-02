#include "../bits/stdc++.h"

using namespace std;

void explainPQ(){
    // max item stays at top
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    /**
     * | 10 |
     * | 8  |
     * | 5  |
     * | 2  |
     * -----
    */

   cout << "Print top " << pq.top() << endl;
   // tree stuct is used
   pq.pop();
   // other methods like size, swap, empty are similar as others;

   // minimum Heap
   priority_queue<int, vector<int>, greater<int>> minipq;
    minipq.push(5); // log n
    minipq.push(2);
    minipq.push(8);
    minipq.emplace(10);

    // min heap
    /**
     * | 2 |
     * | 5  |
     * | 8  |
     * | 10  |
     * -----
    */

   cout << "Print top " << minipq.top() << endl; // 1
   // tree stuct is used
   minipq.pop();// log n

}

int main(int argc, char const *argv[])
{
    explainPQ();
    return 0;
}
