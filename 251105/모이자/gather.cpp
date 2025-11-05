#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    int arr[100];
    int min_dis = INT_MAX;
    int spot = -1;
    int dis = 0;


    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        dis = 0;
        spot = i;
        for(int j=0; j<n; j++){
            dis += abs(j-i)*arr[j];
        }

        min_dis = min(dis, min_dis);
    }

    cout << min_dis;

    return 0;
}