#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int arr[n][n];
    int num = n*n;

    if(n%2==0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i%2==0){
                arr[n-1-j][i] = num;
                } else {
                    arr[j][i] = num;
                }
                num--;
            }
        }
    } else {
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i%2!=0){
                arr[n-1-j][i] = num;
                } else {
                    arr[j][i] = num;
                }
                num--;
            }
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}