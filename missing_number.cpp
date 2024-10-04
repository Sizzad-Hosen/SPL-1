#include <iostream>
using namespace std;

int missingNumber(int nums[], int size) {
    int n = size; 
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int n;

    cin >> n;

    int nums[n]; 


    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int missing = missingNumber(nums, n);
    cout << "Missing number: " << missing << endl;

    return 0;
}
