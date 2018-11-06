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
	double x;
	int c=0;
	double sum=0;
	vector<double>d;
while(cin>>x){
	d.push_back(x);
	
}
for(int i=0;i<d.size();i++){
	sum+=d[i];
	c++;
}
cout<<(double)sum/c<<endl;

return 0;
}
