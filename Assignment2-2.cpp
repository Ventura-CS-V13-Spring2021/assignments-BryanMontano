1#include <iostream>
using namespace std;
int main()
{
  //get three integer values from the user.
  int num1, num2, num3;

  cout << "Please enter three integer values: \n" ;

  cin >> num1 >> num2 >> num3 ;

  if (num1 != num2 && num1 != num3 && num2 != num3)
    cout << "all numbers are distinct." ;

  else if (num1 == num2 && num1 == num3 && num2 == num3)
    cout << "all numbers are the same." ;

  else
    cout << "there are two duplicated numbers" ;
}