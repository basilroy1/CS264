#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;

/* Return the number of digits in n */
int digits(int n)
{
   int result = 0;

   while (n)
   {
      /* Add 1 to the result... */
      ++result;

      /* ...and remove a digit before the next pass. */
      n /= 10;
   }

   return result;
}

int main()
{
   const int max_base = 999;

   /* Find the number of digits in the highest base. */
   int max_base_width = digits(max_base);

   /* Find the number of digits in the highest square. */
   int max_result_width = digits(max_base * max_base);
   
   for (int i = 1; i <= max_base; ++i)
   {
      /* Add 1 to the maximum widths to allow for one 
      space for padding. */
      cout << setw(max_base_width + 1) << i 
         << setw(max_result_width + 1) << (i * i) << endl;
   }
}