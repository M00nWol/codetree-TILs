#include <iostream>

using namespace std;

int n;

int Cnt(int n){
    if(n==1){
        return 0;
    }

    if(n%2==0){
        return Cnt(n/2)+1;
    } else {
        return Cnt(n*3+1)+1;
    }
}

int main() {
    cin >> n;

    cout << Cnt(n);

    return 0;
}