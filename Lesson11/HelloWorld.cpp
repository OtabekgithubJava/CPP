#include <iostream>
using namespace std;

int main(){

    string ism = "Roberto Carlos";
    string ism_2 = "";
    for(int i = 0; i < ism.length(); i++){
        if(ism_2.find(ism[i]) == string::npos){
            ism_2 += ism[i];
        }
    }
    cout << ism_2 << endl;
}