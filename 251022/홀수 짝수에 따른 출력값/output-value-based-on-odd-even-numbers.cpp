#include <iostream>

using namespace std;

int N;

int Sum(int n){
    if(n==1){
        return 1;
    }

    if(n==2){
        return 2;
    }

    return Sum(n-2)+n;
}

int main() {
    cin >> N;

    cout << Sum(N);

    return 0;
}