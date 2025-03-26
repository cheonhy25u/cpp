#include <iostream>
#define SQUARE(x) ((x)*(x)) //매크로함수는 자료형에 독립적임
using namespace std;

int main(void){
    cout << SQUARE(5) << "\n";
    return 0; 
}
