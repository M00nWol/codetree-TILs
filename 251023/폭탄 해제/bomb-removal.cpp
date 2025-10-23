#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Bomb{
    public:
        string code;
        char color;
        int sec;

        Bomb() {}
        Bomb(string code, char color, int sec){
            this->code = code;
            this->color = color;
            this->sec = sec;
        }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    Bomb bomb1 = Bomb(unlock_code, wire_color, seconds);


    cout << "code : " << bomb1.code << endl;
    cout << "color : " << bomb1.color << endl;
    cout << "second : " << bomb1.sec << endl;

    return 0;
}