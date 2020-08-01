#include<iostream>
using namespace std;
class clock
{
private :
    int hour;
    int minute;
    int seconds;
    int total;
public :
    void enterdetail()
    {
        cout<<"Enter time:" <<endl;
        cout<<"1. Hours : ";
        cin>>hour;
        cout<<"2. Minutes : ";
        cin>>minute;
        cout<<"3. Seconds: ";
        cin>>seconds;
    }
    int calculatetime()
    {
        total=(hour*3600)+(minute*60)+seconds;
        cout<<"The time is = "<<hour<<":"<<minute<<":"<<seconds<<endl;
        cout<<"Time in total seconds : "<<total;
    }
}c;
int main()
{

   c.enterdetail();
    c.calculatetime();
    return 0;
}