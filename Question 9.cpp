/* Define a class Bill and define its member function get() to take detail of customer ,
    calculateBill() function to calculate electricity bill using below tariff :
        Upto 100 unit RS. 1.20 per unit
        From 100 to 200 unit RS. 2 per unit
        Above 200 units RS. 3 per unit.         */

#include<iostream>
using namespace std;

class Bill
{
    private:
        int cus_id;
        int unit;
        float bill;

    public:
        void set_data(int id,int u)
        {
            cus_id=id;
            unit=u;
        }

        void cal(void)
        {
            if(unit<=100)
            bill=100.0*1.20;
            else if(unit<=200 && unit>100)
            {
                unit-=100;
                bill=(unit*2)+120;
            }
            else {
                unit-=200;
                bill=(unit*3)+320;
            }
        }

        float get_bill()
        {
            return bill;
        }

        void display_data()
        {
            cout<<"\n--------------------------"<<endl;
            cout<<"Customer id -> "<<cus_id<<endl;
            cout<<"Unit -> "<<unit<<endl;
        }
};


int main()
{
    Bill b1,b2,b3;

    b1.set_data(12,100);
    b2.set_data(11,700);
    b3.set_data(17,300);

    b1.cal();
    b2.cal();
    b3.cal();

    b1.display_data();
    cout<<"Bill -> "<<b1.get_bill()<<endl;

    b2.display_data();
    cout<<"Bill -> "<<b2.get_bill()<<endl;

    b3.display_data();
    cout<<"Bill -> "<<b3.get_bill()<<endl;

    return 0;

}
