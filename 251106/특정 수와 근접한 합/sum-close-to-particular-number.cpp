#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;

int main() {
    int s, n;
    int min_value = INT_MAX;
    int sum = 0;
    int tmp;
    int arr[100];


    cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            tmp = arr[i] + arr[j];
            min_value = min(min_value, abs(sum-tmp-s));
        }
    }

    cout << min_value;
    return 0;
}