#include <iostream>
using namespace std;
int main()
{
  //get three integer values from the user.
  int num1, num2, num3;

  cout << "Please enter three integer values: \n" ;

  cin >> num1 >> num2 >> num3 ;

  if (num1 > num2 && num1 > num3)
    cout << num1 << " is the greatest integer." ;
  else if (num2 > num1 && num2 > num3)
    cout << num2 << " is the greatest integer." ;
  else
    cout << num3 << " is the greatest integer." ;
}