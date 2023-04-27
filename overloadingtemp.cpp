#include<iostream>
using namespace std;
template <class T> void test(T x , T y) {
    cout << "\n template"<<endl;
}
template <class T>
void test ( T x , T y , T z) {
    cout << "\n template with three parameters";
}
void test (float w , float k) {
    cout << "non-template";
}
int main () {
    test (1.5,2.5);
    test('a','b');
    test(1,7.5);
    return 0;
    }