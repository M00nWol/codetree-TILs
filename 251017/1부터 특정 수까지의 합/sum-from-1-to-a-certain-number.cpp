#include <iostream>

using namespace std;

int N;

int div(int n){
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
    }

    sum /= 10;

    return sum;
}

int main() {
    cin >> N;
    int res = div(N);

    cout << res;
   

    return 0;
}