#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt= 0;
    int arr[10][2] = {};
    int line[101] = {};

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                bool flag = true;
                for(int l=0; l<=100; l++){
                    line[l] = 0;
                }

                // line 채우기 
                for(int idx=0; idx<n; idx++){

                    if(idx==i || idx==j || idx==k) continue;
                    for(int l=arr[idx][0]; l<=arr[idx][1]; l++){
                        line[l]++;
                    }
                }

                // 겹치는지 계산
                for(int l=0; l<=100; l++){
                    if(line[l]>1){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}