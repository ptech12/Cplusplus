#include "../bits/stdc++.h"

using namespace std;

int print(int n){
	// if(n == 0){
	// 	return 0;	
	// }
	cout << "Printing " << n << " times" << endl;
	return ( n==0 ) ? 0 : print(n-1);
}

void func(int i, int n);
void linear(int i, int n);
void reverse(int i, int n);
void linearBacktrack(int i, int n);
void reverseBacktrack(int i, int n);

int main(){
	int n;
	cin >> n;
	// print(n);
	// linear(1, n);
	// reverse(n, n);

	// linearBacktrack(n, n);

	reverseBacktrack(1, n);

	return 0;
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

void linear(int i, int n)
{
	if(i > n)
		return;
	
	cout << i << endl;
	// recursion
	linear(i + 1, n);
}

void reverse(int i, int n){
	if(i < 1)
		return;

	cout << i << endl;
	// recursion
	reverse(i-1, n);
}

void linearBacktrack(int i, int n)
{
	if(i < 1)
		return;
	// backtrack
	linearBacktrack(i - 1, n);
	cout << i << endl;
}

void reverseBacktrack(int i, int n)
{
	if(n < i)
		return;
	// backtrack
	reverseBacktrack(i+1, n);

	cout << i << endl;
}
