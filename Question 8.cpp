/* Define a class Bank and define member functions to read principal , rate of interest
    and year. Another member functions to calculate simple interest and display it.
    Initialise all details using constructor.       */

#include<iostream>
using namespace std;

class Bank
{
    private:
        int principle;
        int rate;
        int year;
        float si;
    public:
        Bank(int p,int r,int y)
        {
            principle=p;
            rate=r;
            year=y;
        }

        void cal(void)
        {
            si=(principle*rate*year)/100;
        }

        void show_data()
        {
            cout<<"\n--------------------------"<<endl;
            cout<<"principle ->"<<principle<<endl;
            cout<<"Rate ->"<<rate<<endl;
            cout<<"Year ->"<<year<<endl;
        }

        float get_si()
        {
            return si;
        }
};

int main()
{
        Bank b1(1000,3,4);
        Bank b2(2000,14,10);

        b1.cal();
        b2.cal();

        b1.show_data();
        cout<<"si -> "<<b1.get_si()<<endl;

        b2.show_data();
        cout<<"si -> "<<b2.get_si()<<endl;

        return 0;
}
