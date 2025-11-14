#include <iostream>
using namespace std;

int main() {
    int n, k, num;
    int arr[100] = {};
    int bomb[1001] = {};
    int bomb_max = -1;

    cin >> n >>k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(bomb[arr[i]]==1) continue;

        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j] && (j-i)<=3){
                bomb[arr[i]]=1;
            }
        }
    }

    for(int i=1001; i>=0; i--){
        if(bomb[i]==1){
            bomb_max = i;
            break;
        }
    }

    cout << bomb_max;
    return 0;
}