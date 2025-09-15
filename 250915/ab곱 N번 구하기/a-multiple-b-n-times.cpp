#include <iostream>
using namespace std;

int main() {
    int n;
    int a, b;
    int prod = 1;

    cin >> n;

    for(int i=0;i<n; i++){
        prod = 1;
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            prod *= j;
        }
        cout << prod << endl;
    }
    return 0;
}