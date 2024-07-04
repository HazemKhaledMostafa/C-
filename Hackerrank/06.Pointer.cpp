#include<iostream>
using namespace std;

void Pointer(int &a, int &b) 
{
    int sum = a + b;
    int diff = abs(a - b);
    a = sum;
    b = diff;
}

int main() {
    int a;
    int b;
    cin>> a;
    cin>> b;
    Pointer(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
