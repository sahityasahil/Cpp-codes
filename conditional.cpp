#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    int r = int(ch);
    cout << r << endl;

    if (r>=48 && r<=57) {
        cout << "Numeric" << endl;
    }
    
    else if (r>=65 && r<=90) {
        cout << "Upper case" << endl;
    }

    else{
        cout << "Lower case" << endl;
    }

}