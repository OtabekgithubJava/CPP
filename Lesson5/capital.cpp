#include <iostream>
using namespace std;

int main(){

    cout << "1. Toshkent" << endl;
    cout << "2. London" << endl;
    cout << "3. New York" << endl;
    cout << "Shahar raqamini kiriting: ";
    int num;
    cin >> num;

    switch (num){
        case 1:
            cout << "O'zbekiston" << endl;
            break;
        case 2:
            cout << "Britaniya" << endl;
            break;
        case 3:
            cout << "AQSH" << endl;
            break;
        default:
            cout << "Bunday shahar raqami yo'q" << endl;
            break;
    }

    return 0;
}