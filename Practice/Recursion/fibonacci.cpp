#include <iostream>
using namespace std;

//fibonacci series: 0,1,1,2,3,5,8,13,21....

int fibonacci(int n) {
    //two base cases
    if (n==0 || n==1)
        return n;
    
    //recursion
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;

}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}