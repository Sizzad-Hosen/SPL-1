#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, s2;


    cout << "Enter the first string: ";
    getline(cin, s); 
    cout << "Enter the second string: ";
    getline(cin, s2); 

    string concatenated = s + s2;

    cout << "Concatenated string: " << concatenated << endl;

    return 0;
}
