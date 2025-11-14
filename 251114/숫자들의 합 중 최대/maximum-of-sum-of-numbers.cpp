#include <iostream>
using namespace std;

int Sum(int n){
    int res = 0;

    while(n>=10){
        res+= (n/10);
        n %= 10;
    }

    res += n;

    return res;
}

int main() {
    int sum_max = 0;
    int x, y;

    cin >> x >> y;

    for(int i=x; i<=y; i++){
        int sum = Sum(i);
        sum_max = max(sum_max, sum);
    }

    cout << sum_max;

    return 0;
}