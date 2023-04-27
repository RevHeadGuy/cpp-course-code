#include<iostream>
using namespace std;
template<class T> T add(T &a,T &b)
{
    T result = a+b;
    return result;
}
int main () {
    int i = 1;
    int j = 2;
    float m = 2.6;
    float n = 3.8;
    cout << "addition of i and j is:" << add(i,j) << endl;
    cout << " addition of m and n is:" << add(m,n) << endl;
    return 0;  
}