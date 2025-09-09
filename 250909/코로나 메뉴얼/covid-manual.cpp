#include <iostream>
using namespace std;

int main() {
    char sa, sb, sc;
    int ta, tb, tc;

    cin >> sa >> ta >> sb >> tb >> sc >> tc;

    if(sa=='Y'&&ta>=37){
        if((sb=='Y' && tb>=37) || (sc=='Y'&&tc>=37)){
            cout << 'E';
        } else {
            cout << 'N';
        }
    } else {
        if((sb=='Y' && tb>=37) && (sc=='Y'&&tc>=37)){
            cout << 'E';
        } else {
            cout << 'N';
        }
    }
    return 0;
}