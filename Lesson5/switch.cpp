#include <iostream>
using namespace std;

int main(){

    // switch case -> ko'p if else o'rniga ishlatiladi

    int kun = 7;

    switch (kun){
        case 1:
            cout << "Bugun dushanba";
            break;
        case 2:
            cout << "Bugun seshanba";
            break;
        case 3:
            cout << "Bugun chorshanba";
            break;
        case 4:
            cout << "Bugun payshanba";
            break;
        case 5:
            cout << "Bugun juma";
            break;
        case 6:
            cout << "Bugun shanba";
            break;
        case 7:
            cout << "Bugun yakshanba";
            break;
        default:
            cout << "Bunday kun yo'q";
            break;
    }

    return 0;
}