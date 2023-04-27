#include<iostream>
using namespace std;
template <class X> void swapargs(x &a,x &b)
{
    x = temp;
    temp = a;
    a = b;
    b = temp;
}
int main () {
    int i = 10 , j = 20;
    double x = 10.1 , y = 23.6;
    char a = 'x',b='z';
    cout << " original i,j:"<<i<<""<<j<<endl;
    cout << " original x,y:"<<x<<""<<y<<endl;
    cout << " original a,b:"<<a<<""<<b<<endl;
    swapargs(i,j);
    swapargs(x,y);
    swapargs(a,b);
    cout << " swapped i,j:"<<i<<""<<j<<endl;
    cout << " swapped x,y:"<<x<<""<<y<<endl;
    cout << " swapped a,b:"<<a<<""<<b<<endl;
return 0 ;
}