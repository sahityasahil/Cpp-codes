#include <iostream>
using namespace std;

void sayDigits(int n, string* a) {
    // base case
    if(n==0)
        return;
    
    // processing
    int digit = n%10;
    n = n/10;

    // recursion
    sayDigits(n, a);
    cout << a[digit] << " ";
}

int main() {
    int n;
    string a[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cin >> n;
    sayDigits(n,a);
    cout << endl;
}