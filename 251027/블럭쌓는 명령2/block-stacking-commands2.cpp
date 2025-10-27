#include <iostream>
using namespace std;

int main() {
    int n, k;
    int a, b;
    int max = 0;
    int block[100] = {};

    cin >> n >> k;

    for(int i=0; i<k; i++){
        cin >> a >> b;
        for(int i=a-1; i<b; i++){
            block[i]++;
        }
    }


    for(int i=0; i<n; i++){
        if(max < block[i]){
            max = block[i];
        }
    }

    cout << max;
    return 0;
}