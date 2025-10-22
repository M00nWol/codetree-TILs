#include <iostream>

using namespace std;

int N;

int ModSum(int n){
    if(n<10){
        return n*n;
    }

    return ModSum(n/10)+ (n%10)*(n%10);
}

int main() {
    cin >> N;

    cout << ModSum(N);

    return 0;
}