#include <iostream>
using namespace std;

int myFunc(int num){
    num ++;
    return num;
}

int myFunc(int a, int b){
    return a+b;
}

int main(void){
    cout << myFunc(20) << "\n";
    cout << myFunc(30, 40) << "\n";
    return 0;
}