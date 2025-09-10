#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tmp;
        if(tmp%2!=0 && tmp%3==0){
            cout << tmp << endl;
        }
    }
    return 0;
}