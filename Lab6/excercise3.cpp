#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;
using std::setprecision;

/* Return the number of digits in n */
int digits(double n, int places)
{
   /* Initialize result to the number of desired decimal 
   places. */
   int result = places;

   while (n >= 1)
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
   const double max_base = 99.9;

   /* Find the number of digits in the highest base. */
   int max_base_width = digits(max_base, 2);

   /* Find the size of the highest square, allowing for 
   2 decimal places in the result. */
   int max_result_width = digits(max_base * max_base, 2);
   
   for (double i = 1; i <= max_base; i += .1)
   {
      /* Add 2 to the maximum widths to allow for the decimal point and 
      one space for padding. */
      cout << setw(max_base_width + 2) << 
         setprecision(max_base_width) << i 
         << setw(max_result_width + 2) 
         << setprecision(max_result_width) << (i * i) << endl;
   }
}