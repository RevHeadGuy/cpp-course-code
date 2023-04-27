#include<iostream>
using namespace std;
template < class X> void f(X a) {
    cout << " inside f(X a)" << endl ;
}
template < class X , class Y> void f(X a, Y b) {
    cout << " inside f(X a , Y b) " << endl;
}
int main () { 
    f(10);
    f(10,20);
    return 0;
}