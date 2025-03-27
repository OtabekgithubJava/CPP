#include <iostream>
using namespace std;

int main (){
    int sum = 1;
    while(sum <= 4000){
        if(sum % 11 == 0 and sum % 9 == 0 and sum % 3 == 0){
            cout << sum<<endl;
        }
        sum++;

    }


    return 0;
}