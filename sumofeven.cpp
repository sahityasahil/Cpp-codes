#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    int sum=0;
    cin >> n;

    for(i=1; i<=n; i++) {
        if(i%2==0) {
            sum=sum+i;
        }
    }
    cout << sum << endl;
}