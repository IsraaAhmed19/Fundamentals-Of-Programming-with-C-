
#include <iostream>
using namespace std;

int main()
{
  // Normal If-Else
  int age = 21;

  if (age >= 18)
  {
    cout << "Welcome" << endl;
  }
  else
  {
    cout << "You are not allowed to enter" << endl;
  }

  cout << "***************************\n";

  // Nested If
  int nestedAge = 25;
  int points = 1500;

  // Check the age first
  if (nestedAge >= 18)
  {
    cout << "Hello\n";

    // Check the points only if the age condition is true
    if (points >= 1000)
    {
      cout << "You are VIP\n";
    }
  }

  cout << "***************************\n";

  // Ternary Operator
  int ternaryAge = 15;

  // Using If-Else to check the age
  if (ternaryAge >= 18)
  {
    cout << "Your Age Is OK\n";
  }
  else
  {
    cout << "Your Age Is Not OK\n";
  }

  // Ternary Operator: (Condition) ? True : False
  // A shorter way to write a simple If-Else
  cout << (ternaryAge >= 18 ? "Age is OK\n" : "Age is Not OK\n");

  cout << "***************************\n";

  // Else-If
  int ageForElseIf = 17;
  int pointsForElseIf = 500;
  int rank = 5;

  if (ageForElseIf >= 18)
  {
    cout << "Welcome\n";
  }
  // Check the next condition if the previous one is false
  else if (pointsForElseIf > 500)
  {
    cout << "Welcome.2\n";
  }
  // Check another condition if the previous ones are false
  else if (rank > 5)
  {
    cout << "Welcome.3\n";
  }
  // Executes when all previous conditions are false
  else
  {
    cout << "Sorry\n";
  }

  return 0;
}
