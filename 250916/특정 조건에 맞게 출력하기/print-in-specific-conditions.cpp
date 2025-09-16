#include <iostream>
using namespace std;

int main() {
    int arr[100], k;

    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==0){
            k = i;
            break;
        }
    }

    for(int i=0; i<k; i++){
        if(arr[i]%2==0){
            cout << arr[i]/2 << " ";
        } else {
            cout << arr[i]+3 << " ";
        }
    }

    return 0;
}