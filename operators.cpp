#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operators
    cout << 10 + 20 << endl; // /n
    cout << sizeof(10 + 20) << endl;

    // Float and Double
    cout << 10.5 + 9.5 << endl;
    cout << sizeof(10.5f + 9.5f) << endl;
    cout << int(10.5 + 9.5) << endl;
    cout << sizeof(int(10.5 + 9.5)) << endl;

    // Arithmetic Operators
    cout << 100 - 50 << endl;
    cout << 100 - -50 << endl;
    cout << 10 * 20 << endl;
    cout << 10 / 20 << endl;

    // Assignment Operators
    int a = -10;

    a *= 10; // a = a * 10
    cout << a << endl;

    // Post Increment
    int followers = 0;
    cout << followers++ << endl;
    cout << followers << endl;

    // Pre Increment
    int likes = 0;
    cout << ++likes << endl;
    cout << likes << endl;

    // Post Decrement
    int comments = 0;
    cout << comments-- << endl;
    cout << comments << endl;

    // Pre Decrement
    int views = 0;
    cout << --views << endl;
    cout << views << endl;

    cout << "*****************" << endl;

    // Comparison Operators
    cout << (10 == 10) << endl; // true . 1
    cout << (10 != 10) << endl; // false . 0
    cout << (16 < 18) << endl;
    cout << (21 > 18) << endl;
    cout << (16 <= 18) << endl;
    cout << (21 >= 18) << endl;

    cout << "***********************" << endl;

    // Logical Operators
    int age = 21;
    int salary = 20000;

    cout << !(age >= 18 && salary > 10000) << endl; // true . 1
    cout << !(age <= 18 || salary < 10000) << endl; // false . 0

    cout << !(10 == 10) << endl;

    // Operator Precedence
    cout << 10 + 5 * 5 << endl;
    // 5 * 5 = 25
    // 10 + 25 = 35

    // Data Types and Type Conversion
    int num = 10;
    num = 21.5;
    cout << num << endl;
    cout << sizeof(num) << endl;

    double num2 = 30;
    num2 = 30.5;
    cout << num2 << endl;
    cout << sizeof(num2) << endl;

    int a;
    double b = 20.5;
    a = b;
    cout << a << endl;
    cout << sizeof(a) << endl;

    int h = 20;
    double g = 20.5;
    cout << h + int(g) << endl;

    return 0;
}
