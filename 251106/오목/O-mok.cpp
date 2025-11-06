#include <iostream>
#define n 19
using namespace std;



int main() {
    int arr[n][n];
    int sum;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // 가로줄 탐색
    for(int i=0; i<n;i++){
        for(int j=0; j<=n-5; j++){
            sum = 0;
            for(int k=0; k<=4; k++){
                sum += arr[i][j+k];
            }
            if(sum == 5 || sum == 10){
                cout << sum/5 << endl << i+1 << " " << j+3;
                return 0;
            } 
        }
    }

    // 세로줄 탐색
    for(int j=0; j<n;j++){
        for(int i=0; i<=n-5; i++){
            sum = 0;
            for(int k=0; k<=4; k++){
                sum += arr[i+k][j];
            }
            if(sum == 5 || sum == 10){
                cout << sum/5 << endl << i+3 << " " << j+1;
                return 0;
            } 
        }
    }


    // 대각선 탐색
    for(int i=0; i<=n-5; i++){
        for(int j=0; j<=n-5; j++){
            sum = 0;
            for(int idx=0; idx<=4; idx++){
                sum += arr[i+idx][j+idx];
            }
            if(sum == 5 || sum == 10){
                cout << sum/5 << endl << i+3 << " " << j+3;
                return 0;
            } 
        }
    }

    cout << 0;
    return 0;
}