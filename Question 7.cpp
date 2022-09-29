/*  Define a class Box and write a program to enter length, breadth and height and
    initialise objects using constructor also define member functions to calculate volume
    of the box.     */

#include<iostream>
using namespace std;

class Box
{
    private:
        int length;
        int breadth;
        int height;
        int volume;

    public:
        Box(int l,int b,int h)
        {
            length=l;
            breadth=b;
            height=h;
        }

        void cal_volume(void)
        {
            volume=length*breadth*height;
        }

        int get_volume(void)
        {
            return volume;
        }
};

int main()
{
    Box b1(1,2,3);
    Box b2(10,30,20);

    b1.cal_volume();
    b2.cal_volume();

    cout<<b1.get_volume()<<endl;
    cout<<b2.get_volume()<<endl;

    return 0;
}
