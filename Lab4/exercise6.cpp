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
string name;
string items;


vector<string>grades;
vector<string>names;
int c;
int p=0;
int num=4;

cout<<"Customer Name ";
while(cin>>name){
	cout<<"Enter "<<num<<" items for "<<name<< ":";
	names.push_back(name);
	c=0;

while(c<num && cin>>items){
	grades.push_back(items);
	c++;
}
cout<<"Enter next Customer name: ";
}
cout<<endl;
/*struct compare{
	
};
*/

for(int i=0;i<=c;i++){
	/*
	string l="";
string s=names[0];
if(s.size()>l.size())l=s;
cout<<l<<endl;
cout<<endl;
*/
	sort(names.begin(),names.end());



	cout<<setw(10)<<names[i]<<setw(25);





for(int j=p;j<num;j++){

	cout<<grades[j]<<" ";
	p++;
}
num =p+4;

cout<<endl;
}

	return 0;
}