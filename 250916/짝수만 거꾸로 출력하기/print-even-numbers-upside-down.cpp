#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    int arr[100];
    int cnt = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tmp;
        if(tmp%2==0){
            arr[cnt] = tmp;
            cnt++;
        }
    }

    for(int i=cnt-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}