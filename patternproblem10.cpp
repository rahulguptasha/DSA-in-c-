#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of times to repeat the pattern: ";
    cin >> n;

    int i = 1;
    
    
    
    while(i <= n){
        int j = 1; 
        char ch ='A';
        while(j <= n){ 
            cout << ch; 
            ch=ch+1;
            
        
            cout << " ";
            j = j + 1; 
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}