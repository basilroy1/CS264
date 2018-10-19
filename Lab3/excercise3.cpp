/*Basil Roy 16341173*/
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream> 
#include <string>
#include <vector>

using namespace std;
int main(){
string name;
int final;


vector<int>grades;
vector<string>names;
int c;
int p=0;
int num=5;
cout<<"enter name ";
while(cin>>name){
	cout<<"Enter "<<num<<" grades for "<<name<< ":";
	names.push_back(name);
	c=0;

while(c<num && cin>>final){
	grades.push_back(final);
	c++;
}
cout<<"enter next student name: ";
}
cout<<endl;

for(int i=0;i<c;i++){
	cout<<names[i]<<": ";

for(int j=p;j<num;j++){
	cout<<grades[j]<<" ";
	p++;
}
num =p+5;
cout<<endl;
}
	return 0;
}