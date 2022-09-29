/* Define a class Cube and calculate Volume of Cube and initialise it using constructor.    */

#include<iostream>
using namespace std;

class Cube
{
    private:
        int side;
        int volume;

    public:
        Cube(int s)
        {
            side=s;
        }

        Cube()
        {
            side=0;
        }

        void set_side(int s)
        {
            side=s;
        }
        void cal(void)
        {
            volume=side*side*side;
        }

        int get_volume()
        {
            return volume;
        }

        int get_side()
        {
            return side;
        }
};

int main()
{
    Cube c1(4),c2;

    c2.set_side(1);

    c1.cal();
    c2.cal();

    cout<<c1.get_side()<<" volume is ->"<<c1.get_volume()<<endl;
    cout<<c2.get_side()<<" volume is ->"<<c2.get_volume()<<endl;

    return 0;
}
