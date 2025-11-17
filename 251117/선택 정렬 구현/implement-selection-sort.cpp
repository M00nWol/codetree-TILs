#include <iostream>
using namespace std;

int main() {
    int n, min, tmp;
    int arr[100];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}