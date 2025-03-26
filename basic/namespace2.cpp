#include <iostream>
using namespace std;
namespace BestComImpl{
    void SimpleFunc(void){
        cout<<"BestCom이 정의한 함수"<<"\n";
    }
}

namespace ProgComImpl{
    void SimpleFunc(void){
        cout<<"ProgCom이 정의한 함수"<< "\n";
    }
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
}