#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;

int main() {
    int arr[6] = {};
    int flag[6] = {};
    int gsum1, gsum2, gsum3;
    int tmax, tmin;
    int sum=0;
    int diff_min = INT_MAX;

    for(int i=0; i<6; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            
            for(int x=0; x<6; x++) flag[x] = 0;

            flag[i] = 1;
            flag[j] = 1;
            gsum1 = arr[i]+arr[j];

            for(int k=0; k<6; k++){
                if(flag[k]==1) continue;

                for(int l=k+1; l<6; l++){
                    if(flag[l]==1) continue;

                    gsum2 = arr[k]+arr[l];
                    tmax = max(gsum1, gsum2);
                    tmin = min(gsum1, gsum2);

                    gsum3 = sum - gsum1 - gsum2;
                    tmax = max(tmax, gsum3);
                    tmin = min(tmin, gsum3);

                   //cout << i << j <<" " << k << l << endl;

                    diff_min = min(diff_min, tmax-tmin);
                }
            }
        }
    }

    cout << diff_min;
    return 0;
}