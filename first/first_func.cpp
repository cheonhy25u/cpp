#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b; 
}

int main(){
    int result = add(3, 5);
    cout << "3 + 5 = " << result << "\n";
    return 0; 
}