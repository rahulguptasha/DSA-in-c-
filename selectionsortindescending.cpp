#include<iostream>
using namespace std;

void Selectionsort(int arr[],int n){
    for(int i =0;i<n;i++){
        int maxindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] > arr[maxindex]){
                maxindex =j;
            }

    
            

        }
        swap(arr[maxindex],arr[i]);
    }
}

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin >>n;

    int arr[n];
    cout<<"enter"<<n<<"elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Selectionsort(arr,n);
    cout<<"sorted array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;





}

