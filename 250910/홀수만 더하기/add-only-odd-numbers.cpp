#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    int sum = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tmp;
        if(tmp%2!=0 && tmp%3==0){
            sum += tmp;
        }
    }

    cout << sum;
    return 0;
}