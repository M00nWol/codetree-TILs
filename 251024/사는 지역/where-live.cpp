#include <iostream>
#include <algorithm>
#include <functional>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address, region;

class Person{
    public:
        string name, address, reg;

        Person() {};
        Person(string name, string address, string reg){
            this->name = name;
            this->address = address;
            this->reg = reg;
        }
};

int main() {
    cin >> n;

    Person people[n];

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address;
        cin >> region;
        people[i] = Person(name[i], street_address, region);
    }

    sort(name, name+n, greater<string>());

    for(int i=0; i<n; i++){
        if(name[0] == people[i].name){
            cout << "name " << people[i].name << endl;
            cout << "addr " << people[i].address << endl;
            cout << "city " << people[i].reg << endl;
        }
    }


    return 0;
}