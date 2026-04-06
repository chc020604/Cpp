#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

double doublesum(double a, double b){
    return a+b;
}

int main(){
    cout << sum(1,2)<<endl;
    cout << doublesum(1.1, 2.2)<<endl;
    return 0;
}