#include "../bits/stdc++.h"

using namespace std;

int print(int n){
	// if(n == 0){
	// 	return 0;	
	// }
	cout << "Printing " << n << " times" << endl;
	return ( n==0 ) ? 0 : print(n-1);
}

void func(int i, int n){
	// TC => O(N)
	// base case
	if(i > n)
		return;
	cout <<  "ptech12" << endl;
	// recursion
	func(i+1, n);

}

int main(){
	int n;
	cin >> n;
	// print(n);
	func(1, n);
	return 0;
}

