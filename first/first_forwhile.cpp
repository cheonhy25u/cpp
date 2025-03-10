#include <iostream>
using namespace std;

int main(){
    cout << "1부터 5까지 출력 for문 : ";
    for (int i = 1; i <= 5; i ++){
        cout << i << " ";
    }
    cout << "\n";

    cout << "1부터 5까지 출력 while문 : ";
    int j = 1; 
    while (j <= 5){
        cout << j << " ";
        j++;
    }
    cout << "\n";

    return 0; 
}