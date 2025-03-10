#include <iostream>
using namespace std;

int main(){
    int num; 
    cout << "숫자를 입력하세요 : ";
    cin >> num;

    if (num > 0) {
        cout << "양수입니다. \n";
    }else if (num < 0){
        cout << "음수입니다. \n";
    }else {
        cout << "0입니다. \n";
    }
    return 0; 
}