/* Define a class Date and write a program to Display Dateand initialise date object
    using Constructors.     */

#include<iostream>
using namespace std;

class Date
{
    private:
        int year;
        int month;
        int date;

    public:
        Date(int d,int m,int y)
        {
            year=y;
            month=m;
            date=d;
        }

        void display_date(void)
        {
            cout<<date<<"-"<<month<<"-"<<year<<endl;
        }

};

int main()
{
    Date d1(25,11,2003);
    Date d2(27,07,2007);

    d1.display_date();
    d2.display_date();

    return 0;
}
