#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    int greatest = a;
    if(b > greatest)
    {
        greatest = b;
    }
    if(c > greatest)
    {
        greatest = c;
    }
    if(d > greatest)
    {
        greatest = d;
    }
    cout<<greatest<<endl;

    return 0;
}