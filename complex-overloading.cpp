#include<bits/stdc++.h>

using namespace std;

class Complex{
    public: 
    
    int real;
    int imag;

    Complex(){}
    Complex(int r, int i){
        real = r;
        imag = i;
    }

};

class Addition{
    public:

    int sum (int a, int b){
        return a+b;
    }
    Complex sum(Complex a, Complex b){
        return Complex(a.real + b.real, a.imag+b.imag);
    }
};

int main(){
    Addition o;

    cout<<"Integer sum: 5+3 : "<< o.sum(5, 3)<<"\n";

    Complex c, a(5,2), b(2,3);
    c = o.sum(a,b);

    cout<<"Complex sum: (5+2i) + (2+3i) :  "<< c.real << "+" << c.imag<<"i\n"; 
}
