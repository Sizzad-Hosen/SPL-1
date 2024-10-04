#include <iostream>
#include <cstring>
using namespace std;


bool isPalindrome(char s[], int first, int last) {

    if (first >= last) {
        return true;
    }

    if (s[first] != s[last]) {
        return false;
    }

    return isPalindrome(s, first + 1, last - 1);
}

int main() {
    char s[100];
    cin >> s;

    int len = strlen(s);
    

    if (isPalindrome(s, 0, len - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
