#include <iostream>
using namespace std;

int main() {
    int arr[10], k;

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    for(int i=0; i<10; i++){
        if(arr[i]%3==0){
            k=i;
            break;
        }
    }

    cout << arr[k-1];
    return 0;
}