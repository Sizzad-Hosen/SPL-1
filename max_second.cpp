#include <iostream> 
using namespace std;


void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) { 
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}


int secondMax(int arr[], int size) {
    if (size < 2) {
        return -1; 
    }

    int max_val = arr[0]; 
    int second_max_val = -1;


    for (int i = 1; i < size; i++) {
        if (arr[i] != max_val) {
            second_max_val = arr[i];
            break; 
        }
    }

    return second_max_val;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
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

    sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    int second_max_val = secondMax(arr, n); 

    if (second_max_val != -1) { 
        cout << "Second maximum value: " << second_max_val << endl;
    } else {
        cout << "There is no second maximum value." << endl;
    }

    return 0;
}
