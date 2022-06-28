// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Complex{
    public:
    int imag,real;
    Complex (int i=0, int r=0){
        imag=i;
        real=r;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        
        res.real = real+ obj.real;
        res.imag = imag+ obj.imag;
        
        return res;
    }
    void printfun(){
        cout<<imag << " + "<< real<<"i";
    }
};
int main() {
   
   Complex c1(12,1), c2(3,4), c4(1,2);
   Complex c3 =  c1+c2+c4;
   
   c3.printfun();

    return 0;
}
