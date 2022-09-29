/* Define a class Complex to represent a complex number with instance variables a and
    b to store real and imaginary parts. Also define following member functions
        a. void setData(int,int)
        b. void showData()
        c. Complex add(Complex)         */

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,img;

    public:
        Complex()
        {
            real=0;
            img=0;
        }

        void setData(int a,int b)
        {
            real=a;
            img=b;
        }

        void showData()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }

        Complex add(Complex c2)
        {
            Complex temp;
            temp.real=real+c2.real;
            temp.img=img+c2.img;
            return temp;
        }
};

int main()
{
    Complex c1,c2,c3;

    c1.setData(5,3);
    c2.setData(9,6);

    c1.showData();
    c2.showData();

    c3=c1.add(c2);
    c3.showData();

    return 0;
}
