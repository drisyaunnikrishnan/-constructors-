#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
     int length;
     int breadth;

  public:
     void area()
       {
          int area;
          area=length *breadth;
          cout<<"\n area = "<<area;
       }

     rectangle(int l,int b)
       {
          length=l;
          breadth=b;
       }
     
     rectangle(int side )
       {
          length=side;
          breadth=side;

       }
};

int main()
{
    int l,b,side;
       cout<<" eneter the side :";
    cin>>side;
    rectangle obj(side);
    obj.area();

    cout<<"\n\n enter the length and breadth :";
    cin>>l>>b;

    rectangle obj1(l,b);
    obj1.area();

}