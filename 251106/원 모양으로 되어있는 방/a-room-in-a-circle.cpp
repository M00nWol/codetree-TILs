#include <iostream>
#include <climits>
using namespace std;

int Dis(int start, int end, int n){
    int res;
    if(end>=start){
        res = end-start;
    } else {
        res = n - (start-end);
    }

    return res;
}

int main() {
    int n;
    int arr[1003];
    int dist=0;
    int res = INT_MAX;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        dist = 0;
        for(int j=0; j<n; j++){
            dist += Dis(i, j, n)*arr[j];
        }
        res = min(res, dist);
    }

    cout << res;


    return 0;
}