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

cout<<"enter midterm and final exam"<<endl;
double midterm,final;
cin>>midterm>>final;
int count=0;
double sum=0;
double x=0;
//read in values
while(cin>>x){
	count++;
	sum+=x;
}

if(count<3){
// if howework cout is less than 3 midterm is 60% and final exam is 40%

streamsize prec = cout.precision();
cout<<"grade is: "<<setprecision(3)<<0.4 *midterm+ 0.6 * final<< setprecision(prec)<<endl;
}
else{
streamsize prec = cout.precision();
cout<<"grade is: "<<setprecision(3)<<0.2 *midterm+ 0.4 * final +0.4 * sum/count<< setprecision(prec)<<endl;
}

	return 0;
}