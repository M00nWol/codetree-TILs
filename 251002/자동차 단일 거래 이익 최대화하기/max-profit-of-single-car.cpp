#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    int max = 0;

    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(price[j]-price[i]>max){
                max = price[j]-price[i];
            }
        }
    }

    cout << max;

    return 0;
}
