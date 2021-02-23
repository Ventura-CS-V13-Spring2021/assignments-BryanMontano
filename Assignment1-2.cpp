#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double celcius, fahrenheit;

  cout << "Enter the temperature in Celcius\n";
  cin >> celcius;

  fahrenheit = 9/5.0 * celcius + 32;

  cout << celcius << " degress in Celcius converts to" << fahrenheit << " degrees in Fahrenheit."<< endl;

}