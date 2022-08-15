
#include <iostream>

using namespace std;

const float PI = 3.14;

int main() {
    
    cout << "내 이름은 신정안" << endl;


    long num2 = 2147483648;
    cout << num2 << endl;

    
    char ch1 = 65;
    char ch2 = int(ch1) + 1;

    cout << PI << endl;
    cout << ch1 << endl;
    cout << ch2 << endl;

    
    char ch;
    int X;
    unsigned short siX;
    unsigned iX;
    long liX;
    long long llix;

    cout << "sizeof(ch):" << sizeof(ch) << endl;
    cout << "sizeof(X):" << sizeof(X) << endl;
    cout << "sizeof(siX):" << sizeof(siX) << endl;
    cout << "sizeof(iX):" << sizeof(iX) << endl;
    cout << "sizeof(liX):" << sizeof(liX) << endl;
    cout << "sizeof(llix):" << sizeof(llix) << endl;

    
    int FahrenheitF;
    cout << "Please enter Fahrenheit Value : " << endl;
    cin >> Fahrenheit;
    int celsius = 5/9 * (Fahrenheit - 32);
    cout << "Celsius Value is " << celsius << endl;

    return 0;

}