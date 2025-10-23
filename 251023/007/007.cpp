#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int tt;

class Inf {
    public:
        string secret;
        char point;
        int t;

        Inf(string secret, char point, int t){
            this->secret = secret;
            this->point = point;
            this->t = t;
        }
};

int main() {
    cin >> secret_code >> meeting_point >> tt;

    Inf inf1 = Inf(secret_code, meeting_point, tt);

    cout << "secret code : " << inf1.secret << endl;
    cout << "meeting point : " << inf1.point << endl;
    cout << "time : " << inf1.t;

    return 0;
}