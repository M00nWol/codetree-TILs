#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    
    int min = 100;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i]<min && arr[i+1]-arr[i] != 0){
            min = arr[i+1]-arr[i];
        }
    }

    cout << min;

    return 0;
}