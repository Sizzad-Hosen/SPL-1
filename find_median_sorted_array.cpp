#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ar[n], ar2[m];
    int newA[n + m];


    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }


    for (int i = 0; i < m; i++) {
        cin >> ar2[i];
    }


    for (int i = 0; i < n; i++) {
        newA[i] = ar[i];  
    }
    for (int i = 0; i < m; i++) {
        newA[n + i] = ar2[i];  
    }


    sort(newA, newA + n + m);

   
    cout << "Sorted array: ";
    for (int i = 0; i < n + m; i++) {
        cout << newA[i] << " ";
    }
    cout << endl;

 
    int middleIndex = (0 + (n + m - 1)) / 2;

    cout << "Middle element is: " << newA[middleIndex] << endl;

    return 0;
}
