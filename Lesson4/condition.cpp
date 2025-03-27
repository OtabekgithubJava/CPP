#include <iostream>
using namespace std;

int main(){

    int a;
    int b;

    cout << "A = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    if (a > b){
        cout << "A B dan katta";
    } 
    else{
        cout << "B A dan katta";
    }

    return 0;
}