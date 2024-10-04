#include <iostream>
using namespace std;

int stringLength(char s[], int index = 0) {

    if (s[index] == '\0') {
        return 0;
    }


    return 1 + stringLength(s, index + 1);
}

int main()
{
    char s[10];
    cin >> s;

    int len = stringLength(s);

    cout << "Length of the string: " << len << endl;

    return 0;
}
