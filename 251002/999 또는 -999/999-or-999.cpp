#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int max, min;

    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i] == 999 || arr[i] == -999){
            n = i;
            break;
        }
    }

    max = min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << max << " " << min;
    return 0;
}