#include <iostream>
using namespace std;


int k, n;
int arr[10][20] = {};

bool Always(int first, int next){
    int flag = 0; // 선두가 아직 안 나타났음을 의미
    for(int i=0; i<k; i++){
        flag = 0;
        for(int j=0; j<n; j++){
            if(arr[i][j]==next){
                if(flag==0) return false;
                break;
            } else if(arr[i][j]==first){
                flag = 1;
            }
        }
    }
    return true;
}

int main() {

    int cnt = 0;

    cin >> k >> n;
    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(Always(i, j)){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}