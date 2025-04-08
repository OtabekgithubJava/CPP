#include <iostream>
using namespace std;

int main(){

    // bankomat

    int balance = 100000;
    int password = 1111;
    long card_digit = 8600111122227777;
    string card_name = "HUMO";
    int expire_year = 2026;

    while(true){
        cout << "Menu: " << endl;
        cout << "1. Balansni ko'rish" << endl;
        cout << "2. Naqt pul yechish" << endl;
        cout << "3. Pul o'tkazish" << endl;
        cout << "4. Paynet qilish" << endl;
        cout << "5. Pul qa'bul qilish" << endl;
        cout << "6. Exit" << endl;

        cout << "Tanlovingizni kiriting: ";
        int tanlov;
        cin >> tanlov;

        if(tanlov < 1 or tanlov > 6){
            cout << "Xato kiritdingiz..." << endl;
        }
        else{
            switch(tanlov){
                case 1:
                    cout << "Sizning balasingiz: " << balance << endl;
                    break;
                case 2:
                    cout << "Parol kiriting: ";
                    int parol;
                    cin >> parol;

                    if(parol != password){
                        cout << "Parol xato!" << endl;
                        break;
                    }

                    cout << "Summa kiriting: ";
                    int sum;
                    cin >> sum;

                    if(sum > balance){
                        cout << "Balansingiz yetarli emas!" << endl;
                        break;
                    }
                    else{
                        balance = balance - sum;

                        cout << "Qolgan mablag': " << balance << endl;
                    }

                    break;
                case 3:
                    cout << "Parol kiriting: ";
                    int parol2;
                    cin >> parol2;

                    if(parol2 != password){
                        cout << "Parol xato!" << endl;
                        break;
                    }

                    cout << "Karta raqam kiriting: ";
                    long card_digit_2;
                    cin >> card_digit_2;

                    cout << "Karta muddatini kiriting: ";
                    int expire_year_2;
                    cin >> expire_year_2;

                    if(expire_year_2 < 2025){
                        cout << "Karta muddati o'tgan" << endl;
                        break;
                    }

                    cout << "Summa kiriting: ";
                    int sum2;
                    cin >> sum2;

                    if(sum2 > balance){
                        cout << "Balansingiz yetarli emas!" << endl;
                        break;
                    }
                    else{
                        balance = balance - sum2;
                        cout << "Tranzaksiya bajarildi: " << endl;
                        cout << "Qabul qiluvchi: " << card_digit_2 << endl;
                        cout << "Jo'natuvchi: " << card_digit << endl;
                        cout << "Summa: " << sum2 << endl;
                        cout << "Qolgan mablag': " << balance << endl;
                    }

                    break;
                case 4:
                    cout << "Parol kiriting: ";
                    int parol3;
                    cin >> parol3;

                    if(parol3 != password){
                        cout << "Parol xato!" << endl;
                        break;
                    }

                    cout << "Telefon raqam kiriting: ";
                    int phone;
                    cin >> phone;

                    cout << "Summa kiriting: ";
                    int sum3;
                    cin >> sum3;

                    if(sum3 > balance){
                        cout << "Balansingiz yetarli emas!" << endl;
                        break;
                    }
                    else{
                        balance = balance - sum3;
                        cout << "Tranzaksiya bajarildi: " << endl;
                        cout << "Qabul qiluvchi: " << phone << endl;
                        cout << "Jo'natuvchi: " << card_digit << endl;
                        cout << "Summa: " << sum3 << endl;
                        cout << "Qolgan mablag': " << balance << endl;
                    }

                    break;
                case 5:
                    cout << "Karta nomi: ";
                    string card_name_2;
                    cin >> card_name_2;

                    cout << "Karta raqami: ";
                    long card_digit_3;
                    cin >> card_digit_3;

                    cout << "Summa kiriting: ";
                    int sum4;
                    cin >> sum4;

                    balance = balance + sum4;
                    cout << "Tranzaksiya bajarildi: " << endl;
                    cout << "Karta nomi: " << card_name_2 << endl;
                    cout << "Karta raqami: " << card_digit_3 << endl;
                    cout << "Summa: " << sum4 << endl;
                    cout << "Hozirgi mablag': " << balance << endl;

                    break;
            }
            if(tanlov == 6){
                cout << "Bye! Bye!" << endl;
                break;
            }
        }
    }


    return 0;
}