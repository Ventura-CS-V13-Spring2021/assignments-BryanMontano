#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double seatA = 15.00;
  const double seatB = 12.00;
  const double seatC = 9.00;
  
  double classA, classB, classC;

  cout << "How many tickets were sold for classA?" << endl
       << "How many tickets were sold for classB" << endl
       << "How many tickets were sold for classC" << endl;

  cin >> classA >> classB >> classC;

  double totalA = classA * seatA;
  double totalB = classB * seatB;
  double totalC = classC * seatC;

  double totalRevenue = totalA + totalB + totalC;

  cout << "You made $" << showpoint << fixed << setprecision(2) << totalRevenue << endl;
  
}
