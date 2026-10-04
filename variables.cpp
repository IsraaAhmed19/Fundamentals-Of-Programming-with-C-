#include <iostream>
using namespace std;

// Global Variables
int a = 100;

// Function
int sec_function()
{
    cout << a << "  from sec_function" << endl;

    return 0;
}

int main()
{
    // Local Variables
    int x;
    x = 100;
    cout << "The value of x is : " << x << endl;

    // Multiple Variables
    int variable1, variable2, variable3;
    variable1 = 10;
    variable2 = 20;
    variable3 = 30;
    cout << variable1 << " " << variable2 << " " << variable3 << endl;

    // Multiple Assignment
    int var1, var2, var3;
    var1 = var2 = var3 = 20;
    cout << var1 + var2 + var3 << endl;

    // Global Variable in Main Function
    cout << a << " from main function" << endl;
    sec_function();

    // Constant Variable
    const int variable = 100;
    // variable = 200;
    cout << variable << endl;

    return 0;
}