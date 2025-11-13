#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;
int sum = 0;
int arr[5] = {};

int Diff(int i, int j, int k){
    int sum1 = arr[i];
    int sum2 = arr[j]+arr[k];
    int sum3 = sum - sum1 - sum2;

    if(sum1==sum2 || sum2==sum3 || sum3==sum1){
        return -1;
    }

    int diff = abs(sum1-sum2);
    diff = max(diff, abs(sum2-sum3));
    diff = max(diff, abs(sum3-sum1));

    return diff;

    
}

int main() {
    int diff_min = INT_MAX;
    int tmp;
    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(i==j || i==k) continue;

                tmp = Diff(i, j, k);
                if(tmp==-1) continue;
                diff_min = min(diff_min, tmp);
            }
        }
    }

    if(diff_min==INT_MAX){
        diff_min = -1;
    }

    cout << diff_min;
    return 0;
}