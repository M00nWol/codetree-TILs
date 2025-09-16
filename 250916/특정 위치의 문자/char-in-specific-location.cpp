#include <iostream>
using namespace std;

int main() {
    char s[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;

    cin >> c;

    for(int i=0; i<6; i++){
        if(s[i] == c){
            cout << i;
            break;
        } else if(i==5){
            cout << "None";
        }
    }
    return 0;
}