#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums+2*N);

    int sum[N];
    for(int i=0; i<N; i++){
        sum[i] = nums[i] + nums[2*N-1-i];
    }

    int max = sum[0];

    for(int i=1; i<N; i++){
        if (max < sum[i]){
            max = sum[i];
        }
    }
    
    cout << max;
    
    return 0;
}
