#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int tmp;

    for(int i=0; i<10; i++){
        cin >> tmp;

        if(tmp%2!=0){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}