#include <iostream>
using namespace std;

int main() {
    int n, k;
    int arr[10];
    int cnt = 0;

    cin >> n;

    for(int i=0; i<10; i++){
        arr[i] = n*(i+1);
        if(arr[i]%5==0){
            cnt++;
            if(cnt>=2){
                k = i;
                break;
            }
        }
    }

    for(int i=0; i<=k; i++){
        cout << arr[i] << " ";
    }
    return 0;
}