#include <iostream>
using namespace std;


int main (){

    int value = 0;

    cout << "Type a number from 1 and 999\n";

    while(value <= 0 || value >= 1000){
        cin >> value;
    }

    if(value == 1){
        cout << "1 is not a prime number\n";
        return 0;
    }else if(value == 2){
        cout << "is prime\n";
        return 0;
    }else{
        for(int i = 2; i < value; i++){
            if(value % i == 0){
                cout << "not prime\n";
                return 0;
            }
        }
    }

    return 0;
}