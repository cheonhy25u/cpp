#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "벡터 요소 출력 : "; 
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0; 
}