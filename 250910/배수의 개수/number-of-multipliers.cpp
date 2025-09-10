#include <iostream>
using namespace std;

int main() {
    int cnt3 = 0, cnt5 = 0;
    int tmp;

    for(int i=0; i<10; i++){
        cin >> tmp;
        if(tmp%3==0){
            cnt3++;
        }
        if(tmp%5==0){
            cnt5++;
        }
    }
    cout << cnt3 << " " << cnt5;
    return 0;
}