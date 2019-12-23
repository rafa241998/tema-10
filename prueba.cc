#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int year;
    int month;
    int day;
    cout << "Este es mi programa inicial" << endl;
    cout << "Introduce tu fecha de nacimiento con el formato yyyy-mm-dd:" << endl;
    cin >> s;
    year = stoi(s.substr(0,4));
    month = stoi(s.substr(5,7));
    day = stoi(s.substr(8));
    cout << "La fecha de tu de muerte será:"  << endl;
    cout << year+20<< "-" <<month<<"-"<<day<<endl;
    cout << "El dia de los muertos para que tu familia vaya a visitarte es:" << endl;
    if(month>11){
        cout << year+21 <<"-11-2"<< endl;
    }else{
        if(month==11){
            if(day>2){
                cout << year+21 <<"-11-2"<< endl;
            }else{
                cout << year+20 <<"-11-2"<< endl;
            }
        }else{
            cout << year+20 <<"-11-2"<< endl;
        }
    }

}