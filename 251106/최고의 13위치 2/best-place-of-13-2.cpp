#include <iostream>

using namespace std;
int arr[20][20] = {};

int Count(int i, int j){
    return arr[i][j]+arr[i][j+1]+arr[i][j+2];
}


int main() {
    int n;
    int res = 0;
    int cnt = 0;


    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=n-3; j++){
            cnt = Count(i,j);

            // 같은 행
            for(int k=j+3; k<=n-3; k++){
                res = max(res, cnt + Count(i,k));
            }

            // 다른 행
            for(int k=i+1; k<n; k++){
                for(int l=0; l<=n-3; l++){
                    res = max(res, cnt + Count(k,l));
                }
            }
        }
    }

    cout << res;
    return 0;
}