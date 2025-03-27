#include <iostream>
using namespace std;

int main(){

    // input -> foydalanuvchidan malimot qabul qilish.

    // cin -> foydalanuvchidan malimot olib, biz belgilagan o'zgaruvchiga saqlanadi.

    cout << "Ism kiriting: ";
    string name;
    cin >> name;

    cout << "Gmail kiriting: ";
    string gmail;
    cin >> gmail;

    cout << "Parol kiriting: ";
    int password;
    cin >> password;

    cout << "Ro'yhatdan o'tdingiz!\n\n" << "Name: " << name << "\n" << "Gmail: " << gmail << "\n" << "Password: " << password << endl;

    cout << "Accountga o'tish uchun parol kirting: ";
    int password_2;
    cin >> password_2;

    if (password_2 == password){
        cout << "Parol to'g'ri!";
    }
    else{
        cout << "Parol xato!";
    }

    return 0;
}