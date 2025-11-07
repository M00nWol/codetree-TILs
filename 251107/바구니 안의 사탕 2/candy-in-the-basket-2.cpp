#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, k;
    int candy, idx;
    int sum;
    int max_sum = INT_MIN;

    int arr[101] = {};
    
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> candy >> idx;
        arr[idx] += candy;
    }


    for(int i=0; i<=100; i++){
        sum = 0;
        for(int j=i-k; j<=i+k; j++){
            if(j>=0 && j<=100){
                sum += arr[j];
            }
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}