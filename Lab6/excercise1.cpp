
#include <iomanip>
#include <iostream>
 
using std::cout;
using std::endl;
using std::setw;
 
int main()
{
   for (int i = 1; i <=100; ++i)
   {
      cout << setw(4) << i << setw(6) << (i * i) << endl;
   }
}