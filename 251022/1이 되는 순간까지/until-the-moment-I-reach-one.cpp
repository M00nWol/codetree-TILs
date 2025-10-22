#include <iostream>

using namespace std;

int N;
int cnt = 0;

int Div(int n){

    if(n==1){
        return cnt;
    }

    cnt++;
    if(n%2==0){
        return Div(n/2);
    } else{
        return Div(n/3);
    }
}

int main() {
    cin >> N;

    cnt = Div(N);

    cout << cnt;

    return 0;
}