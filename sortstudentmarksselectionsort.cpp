#include<iostream>
using namespace std;
int studentmarks(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        int maxindex =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxindex]){
                maxindex =j;

            }
            
        }
        swap(arr[maxindex],arr[i]);

    }

}

int main(){
    int n=7;
    int arr[] ={45,56,76,88,99,73,66};
    int k=3;

    int result= studentmarks(arr,n,k);
    cout<<"top 3 marks :";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;

}