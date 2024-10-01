#include <iostream>
using namespace std;

int main() {
   char A, B, C;
   int a, b, c, e;
   e = 0;

   cin >> A >> a >> B >> b >> C >> c;

   if(A=='Y'&&a>=37){
    if((B=='Y'&&b>=37) || (C=='Y'&&c>=37)){
            cout << 'E';
    }
    else
        cout << 'N';
   }else if((B=='Y'&&b>=37) && (C=='Y'&&c>=37)){
        cout << 'E';
   }
    else
        cout << 'N';

    return 0;
}