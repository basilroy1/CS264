/*Basil Roy 16341173*/
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream> 
#include <string>
#include <vector>

using namespace std;
using std::streamsize;
using std::setprecision;
int main(){
double sum=0;

cout<<setw(12)<<"Number"<<setw(16) <<" "<<"Squares"<<endl<<endl;
for(double i=99;i>=-100;i-=0.1){
	sum=i*i;

	cout<<setw(10)<<(double)i<<setw(24)<<(double)sum<<endl;
}


return 0;
}
