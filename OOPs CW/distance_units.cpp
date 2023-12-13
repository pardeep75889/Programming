#include<iostream>
using namespace std;
class DB;
class DM
    {
        public:
        float meter, centi;
        public:
        void getdata()
        {
            cout<<"\nEnter the distance in (meter):";
            cin>>meter;
            cout<<"\n(If any) \nEnter the distance in (centimetre):";
            cin>>centi;
        }
        void display()
        {
            cout<<"\n The distance is:";
            cout<<meter<<"mtr and "<<centi<< "Centimetre";
        }
        friend void add(DM&, DB&);
    };
class DB
{
    public:
    float inch, feet;
    public:
    void getdata()
    {
        cout<<"\nEnter the distance in (feet):";
        cin>>feet;
        cout<<"\n(If any)\nEnter the distance in (inch):";
        cin>>inch;
    }
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<feet<<"ft. and"<<inch<<"inch";
    }
    friend void add(DM&, DB&);
};
void add(DM &a, DB &b)
    {
    int ch;
    cout<<"\nPress 1 for meter-centimetre";
    cout<<"\nPress 2 for feet-inches";
    cout<<"\nEnter your choice:";
    cin>>ch;
    if(ch==1)
    {
        DM d;
        int c=(a.meter*100+b.feet*30.48+b.inch*2.54);
        if(c>=100)
        {
            d.meter=c/100;
            d.centi=c%100;
        }
        else
        {
            d.meter=0;
            d.centi=c;
        }
        d.display();
        }
}
int main()
{
    DM a;
    DB b;
    a.getdata();
    b.getdata();
    add(a,b);
    return 0;
}