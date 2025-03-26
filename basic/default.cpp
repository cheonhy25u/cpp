#include <iostream>
using namespace std;

int myFuncOne(int num = 7){
    return num + 1;
}

int myFuncTwo(int num1 = 5, int num2 = 7){
    return num1 + num2;
}

int main(void){
    cout << myFuncOne() << "\n";
    cout << myFuncTwo() << "\n";
    cout << myFuncOne(1) << "\n";
    cout << myFuncTwo(1, 3) <<"\n";
    return 0;
}