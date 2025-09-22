#include<iostream>
using namespace std;

int kthsmallest(int arr[], int n, int k) {
    for(int i = 0; i < k; i++) {
        int minindex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]); // swap outside inner loop
    }
    return arr[k - 1]; // return after k passes
}

int main() {
    int n = 7;
    int arr[] = {45, 32, 33, 88, 75, 25, 77};
    int k = 3;

    int result = kthsmallest(arr, n, k);
    cout << k << "-th smallest number is: " << result << endl;

    return 0;
}
