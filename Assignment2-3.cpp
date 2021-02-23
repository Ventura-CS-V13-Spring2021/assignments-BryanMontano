#include <iostream>
using namespace std;
int main()
{
     char  selection;
     cout << "Enter your choice among A, B, C\n";
     cin >> selection;
     switch(selection)
     {
       case 'a':
       case 'A':
          cout << "Your choice is A\n";
          break;
      
      case 'b':
      case 'B':
          cout << "Your choice is B\n";
          break;
      
      case 'c':
      case 'C':
          cout << "Your choise is C\n";
          break;

      case 'd':
      case 'D':
          cout << "Your choice is D\n";
          break;
        
      default:
          cout << "Not a good choice\n";

     }

}