/*Basil Roy 16341173*/
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream> 
#include <string>
#include <vector>
#include<time.h>

using namespace std;
int main(){
int x;
	vector<int>num;

	 clock_t start=clock();
	while(cin>>x){
		num.push_back(x);
	}
	for(int i=0;i<num.size();i++){
		for(int j=i+1;j<num.size();j++){
			if(num[i]>num[j]){
				int temp = num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	cout<<"bubble sort function : ";

	for(int i=0;i<num.size();i++){
		cout<<num[i]<<" ";
	}

	 clock_t stop=clock();
	cout<<"Time : "<<(stop-start)/(double)CLOCKS_PER_SEC;

	cout<<endl;
clock_t start1=clock();
cout<<"Sort function : ";

sort(num.begin(),num.end());
for(int i=0;i<num.size();i++){
	cout<<num[i]<<" ";
}
clock_t stop1=clock();
cout<<"Time : "<<(stop1-start1)/(double)CLOCKS_PER_SEC;
return 0;
}