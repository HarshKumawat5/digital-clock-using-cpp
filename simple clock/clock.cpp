#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int h,m,s;
    cout<<"enter hours:";
    cin>>h;
    cout<<"enter minutes:";
    cin>>m;
    cout<<"enter seconds:";
    cin>>s;
    if(h<24 && m<60 && s<60)
    {
        while(1)
        {
            system("cls");
            if(s==60)
            {
                m++;
                s=0;
            }
            if(m==60)
            {
                h++;
                m=0;
            }
            if(h==24)
            h=0;
            cout<<h<<":"<<m<<":"<<s;
            s++;
            Sleep(1000);
        }
    }
    else
    {
        cout<<"Invalid";
    }
    return 0;
}