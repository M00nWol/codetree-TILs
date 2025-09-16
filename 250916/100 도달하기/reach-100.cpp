#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cin >> n;

    arr[0] = 1;
    arr[1] = n;

    int i=1;
    while(arr[i]<=100){
        arr[i+1] = arr[i] + arr[i-1];
        i++;
    }

    for(int j=0; j<=i; j++){
        cout << arr[j] << " ";
    }
    return 0;
}