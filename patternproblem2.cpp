#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of times to repeat the pattern: ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 4; 
        while(j >= 1){ 
            cout << j; 
            j = j - 1; 
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}