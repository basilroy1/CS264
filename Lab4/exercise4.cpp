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
int sum=0;
//double d=3.909009099;

cout<<setw(12)<<"Number"<<setw(16) <<" "<<"Squares"<<endl<<endl;
for(int i=100;i>=-100;i--){
	sum=i*i;
	//streamsize prec = cout.precision();
	cout<<setw(10)<<i<<setw(24)<<sum<<endl;
}

//cout<<setprecision(3)<<d;
return 0;
}
