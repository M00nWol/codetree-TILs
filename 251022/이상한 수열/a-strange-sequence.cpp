#include <iostream>

using namespace std;

int N;

int get(int n){
    if(n==1){
        return 1;
    }

    if(n==2){
        return 2;
    }

    return get(n-1)+get(n/3);
}

int main() {
    cin >> N;

    cout << get(N);

    return 0;
}