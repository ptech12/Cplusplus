#include<iostream>
#include<vector>


using namespace std;

vector<int> leftRotate(int a[], int d){
    int n = a.size();
    
    
            

    return a;

}


int main(int argc, char const *argv[])
{
    int n, d;

    cin >> n >> d;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    
    vector<int> result = leftRotate(arr, d);
    
    for (auto i = result.begin(); i != result.end(); ++i)
    {
        cout << *i << " ";
    }
    

    return 0;
}
