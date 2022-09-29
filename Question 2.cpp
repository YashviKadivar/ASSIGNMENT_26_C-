/* Define a class Time to represent a time with instance variables h,m and s to store
    hour, minute and second. Also define following member functions
        a. void setTime(int,int,int)
        b. void showTime()
        c. void normalize()
        d. Time add(Time)           */

#include<iostream>
using namespace std;

class Time
{
    private:
        int hour,minit,second;

    public:
        void set_time(int h,int m,int s)
        {
            hour=h;
            minit=m;
            second=s;
        }

        void show_time()
        {
            cout<<hour<<":"<<minit<<":"<<second<<endl;
        }

        void normalize()
        {
            minit=minit+ (second/60);
            second=second%60;
            hour=hour + (minit/60);
            minit=minit%60;
        }

        Time add(Time t2)
        {
            Time temp;
            temp.hour=hour+t2.hour;
            temp.minit=minit+t2.minit;
            temp.second=second+t2.second;
            temp.normalize();
            return temp;
        }

};

int main()
{
    Time t1,t2,t3;

    t1.set_time(12,120,27);
    t2.set_time(1,72,22);

    t3=t1.add(t2);

    t3.show_time();
}
