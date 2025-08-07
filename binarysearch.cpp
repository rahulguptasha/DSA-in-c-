#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;


    int mid = start+(start - end)/2;
    while(start <=end){
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2; 
    }
    return -1; // Key not found
}

int main(){
    int even[6] ={2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int evenindex = binarySearch(even, 6, 10);
    int oddindex = binarySearch(odd, 5, 3);
    cout <<"index of 10 in even array is: "<<evenindex<<endl;
    cout <<"index of 3 in odd array is: "<<oddindex<<endl;
    return 0;
}
