#include <iostream>
using namespace std;

int main(){

    while (true){
        cout << "Kichik harf kiriting: ";
        char harf;
        cin >> harf;

        cout << char(harf - 32) << endl;
    }

    return 0;
}