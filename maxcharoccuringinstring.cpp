#include <iostream>
using namespace std;

char toLowercase(char c) {
    if (c >= 'a' && c <= 'z') return c;
    else {
        char temp = c - 'A' + 'a';
        return temp;
    }
}

char checkMaxOcc(string s) {

    // Create an array of count of character 
    int arr[26] = {0};
    for (int i=0; i<s.length(); i++) {
        char ch = s[i];
        int num=0;
        num = ch - 'a';
        arr[num]++;
    }

    // Finding the maximum occuring element 
    int maxi=-1, ans=0;
    for (int j=0; j<26; j++) {
        if (arr[j] > maxi) {
            ans = j;
            maxi = arr[j];
        }
    }
    char finalans = ans + 'a';
    return finalans;

}

int main () {
    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        string strn =  toLowercase(str[i]);
    }
}