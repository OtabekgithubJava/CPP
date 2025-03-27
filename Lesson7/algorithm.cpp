#include <iostream>
using namespace std;

int main(){

    // algoritm

    int n = 456;
    int sum = 0;

    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    cout << "Raqamlar yig'indisi: " << sum << endl;

    return 0;
}