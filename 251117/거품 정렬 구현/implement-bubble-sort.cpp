#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, tmp;
    bool sorted = true;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    do{
        sorted = true;
        for(int i=0; i<n; i++){
            if(arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                sorted = false;
            }
        }
    } while(sorted==false);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}