#include<iostream>
using namespace std;
template < class T>
class calculator {
    private :
     T num1 , num2;
    public : 
    calculator( T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }
    void displayResult() {
        cout << " Numbers are " << num1 << "and" << num2 << endl;
        cout << " addition is :" << add() << endl;
        cout << "subtraction is :" << subtract() << endl;
        cout << " multiplication is :" << multiply() << endl;
        cout << " division is :" << division() << endl;
    }
    T add() {
        return num1 + num2; 
    }
    T subtract() {
        return num1 - num2;
    }
    T multiply() {
        return num1 * num2;
    }
    T division() {
        num1 / num2 ;

    }
    };
    int main () {
        calculator<int> intCalc(7,9);
        calculator<float> floatCalc(5.6,7,8);

        cout << " Int results :" << endl;
        intCalc.display();
        cout << " Float results:" << endl;
        floatCalc.display();

        return 0;
    }
    

