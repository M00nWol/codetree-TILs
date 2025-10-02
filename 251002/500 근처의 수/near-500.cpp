#include <iostream>
using namespace std;

int main() {
    int max, min;
    int arr[10];

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    max = 0;
    min = 1000;
    for(int i=0; i<10; i++){
        if(arr[i]<500 && arr[i]>max){
            max = arr[i];
        }

        if(arr[i]>500 && arr[i]<min){
            min = arr[i];
        }
    }

    cout << max << " " << min;
    return 0;
}