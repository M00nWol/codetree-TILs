#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    int lo;
    int tmp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for(int i=0; i<n; i++){
        lo = i;
        for(int j=i-1; j>=0; j--){
            if(arr[lo]<=arr[j]){
                break;
            } else{
                tmp = arr[lo];
                arr[lo] = arr[j];
                arr[j] = tmp;
                lo--;
            }
        }

    }

    for(int i=0; i<2; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
