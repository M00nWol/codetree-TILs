#include <iostream>

using namespace std;

int n, m;

void lcm(int a, int b){
    int i = a;
    int plus = a;
    if(b>a) {
        i = b;
        plus = b;
    }


    while(true){
        if((i%a==0)&&(i%b==0)){
            cout << i;
            break;
        } else{
            i += plus;
        }
    }
}

int main() {
    cin >> n >> m;
    lcm(n, m);
    return 0;
}