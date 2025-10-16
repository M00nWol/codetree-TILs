#include <iostream>

using namespace std;

int n, m;

void gcd(int a, int b){
    int res;
    int i=1;

    while(i<=a && i<=b){
        if(a%i==0&&b%i==0){
            res = i;
        }
        i++;
    }
    cout << res;
}

int main() {
    cin >> n >> m;
    gcd(n, m);
    return 0;
}