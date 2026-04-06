#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int k=0, int p=0):kick(k), punch(p){}
    void show();
    Power operator+(Power op2);
};
void Power::show(){
    cout << "kick: " << kick << ", punch: " << punch << endl;
}
Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

int main(){
    Power a(3,5), b(4,6), c;
    a.show();
    b.show();
    c = a+b;
    c.show();
}