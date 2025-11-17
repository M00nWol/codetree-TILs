#include <iostream>
#include <list>

using namespace std;

int main() {
    list<char> l;
    list<char>::iterator it;

    int n, m;
    string s;
    char command;
    char c;

    cin >> n >> m;
    cin >> s;

    for(int i=0; i<n; i++){
        l.push_back(s[i]);
    }

    it = l.end();
    for(int i=0; i<m; i++){
        cin >> command;
        if(command == 'L'){
            if(it!=l.begin()) it--;
        } else if(command == 'R'){
            if(it!=l.end()) it++;
        } else if(command == 'D'){
            if(it!=l.end()) l.erase(it);
        } else if(command == 'P'){
            cin >> c;
            l.insert(it, c);
        }
    }

    for(it=l.begin(); it!=l.end(); it++){
        cout << *it;
    }


    return 0;
}