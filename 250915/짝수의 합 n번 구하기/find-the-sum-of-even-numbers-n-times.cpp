#include <iostream>
using namespace std;

int main() {
    int n, a, b, sum;

    cin >> n;

    for(int i=0; i<n; i++){
        sum = 0;

        cin >> a >> b;

        if(a%2!=0) {
            a++;
        }

        for(int j=a; j<=b; j+=2){
            sum += j;
        }

        cout << sum << endl;
    }
    return 0;
}