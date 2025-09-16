#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100], even[100];
    int cnt = 0;


    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            even[cnt] = arr[i];
            cnt++;
        }
    }

    for(int i=0; i<cnt; i++){
        cout << even[i] << " ";
    }
    return 0;
}