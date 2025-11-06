#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, k;
    int arr[100];
    int sum;
    int max_sum = INT_MIN;

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-k; i++){
        sum = 0;
        for(int j=0; j<k; j++){
            sum += arr[i+j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    
    return 0;
}