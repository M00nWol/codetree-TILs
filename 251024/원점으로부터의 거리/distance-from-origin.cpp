#include <iostream>
#include <algorithm>
using namespace std;

class Dot{
    public:
        int x, y;
        int num;

        Dot(){};
        Dot(int x, int y, int num){
            this->x = x;
            this->y = y;
            this->num = num;
        }
};

int Dis(int x, int y){
    if(x<0){
        x *= -1;
    }
    if(y<0){
        y *= -1;
    }

    return x+y;
}

bool Cmp(const Dot &a, const Dot &b){
    int da = Dis(a.x, a.y);
    int db= Dis(b.x, b.y);

    if(da != db){
        return da < db;
    }

    return a.num < b.num;
}
int main() {
    int n;
    int x, y;

    cin >> n;

    Dot dot[n];
    
    for(int i=0; i<n; i++){
        cin >> x >> y;
        dot[i] = Dot(x, y, i+1);
    }

    sort(dot, dot+n, Cmp);

    for(int i=0; i<n; i++){
        cout << dot[i].num << endl;
    }
    return 0;
}