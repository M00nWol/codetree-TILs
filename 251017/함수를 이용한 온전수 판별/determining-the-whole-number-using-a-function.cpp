#include <iostream>

using namespace std;

int a, b;

bool real(int n){
    if(n%2==0){
        return false;
    }
    if(n%10==5){
        return false;
    }
    if(n%3==0&&n%9!=0){
        return false;
    }
    return true;
}

int Check(int a, int b){
    int cnt;
    for(int i=a; i<=b; i++){
        if(real(i)){
            cnt++;
        }
    }

    return cnt;
}

int main() {
    cin >> a >> b;

    cout << Check(a, b);

    return 0;
}