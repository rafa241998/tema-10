#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int year;
    int month;
    int day;
    cout << "Este es mi programa inicial." << endl;
    cout << "Introduce tu fecha de nacimiento con el formato yyyy-mm-dd:" << endl;
    cin >> s;
    year = stoi(s.substr(0,4));
    month = stoi(s.substr(5,7));
    day = stoi(s.substr(8));
    cout << "La fecha de tu de muerte será:"  << endl;
    cout << year+20<< "-" <<month<<"-"<<day<<endl;
}