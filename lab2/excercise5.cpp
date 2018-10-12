#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <ios>
#include <iostream>
#include <algorithm>


using std::cin; using std::cout;using std::endl;
using std::setprecision; using std::vector; using std::sort; using std::streamsize; using std::string;

int main() { 


cout<<"enter NAME"<<endl;
string name;
cin>>name;
double midterm,final;

cin>>midterm>>final;
cout<<"enter hw grades"<<endl;


double x,sum=0;
int count=0;

while(cin>>x){
// reading in the values and counting
++count;
sum+=x;

}
//if count is 0 we set it 1 so that we can divide by 1 rather than 0
double median;
 if(count==0){count =1;}
cout<<"enter againg"<<endl;

//count=1;
//calculating the average grades to 3 significant figures
streamsize prec = cout.precision();
cout<<"final grade is "<<setprecision(3)<< 0.2*midterm +0.4 * final + 0.4 * sum/count<<setprecision(prec)<<endl;



return 0;
  
}
