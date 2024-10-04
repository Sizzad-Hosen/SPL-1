#include <iostream>
using namespace std;


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0; 

    int uniqueIndex = 0; 

    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i]; 
        }
    }
    return uniqueIndex + 1; 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  
    bubbleSort(arr, n);

    int newSize = removeDuplicates(arr, n); 


    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
