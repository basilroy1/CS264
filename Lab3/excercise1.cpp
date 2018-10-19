/*Basil Roy 16341173*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void rect(){
	for(int i=1;i<=20;i++){
		for(int j =1;j<= 10; j++){
			if(i==1||i==10||j==1||j==10){
				cout<<"+";
			}
			else{
				cout<<"+";
			}		
		}		
			cout<<endl;	
	}	
}

void sqr(){

for(int i=1;i<=20;i++){
		for(int j =1;j<= 20; j++){
			if(i==1||i==20||j==1||j==20){
				cout<<"+";
			}
			else{
				cout<<"+";
			}		
		}		
			cout<<endl;	
	}	

}
void tri(){

int z=1;

  for (int i=0; i<7; i++){
    for (int j=7; j>i; j--) {
      cout<<" "; 
    }
      for (int k=1; k<=(z*2)-1; k++){
        cout<<"+";
      }
      z+=1;
 
    cout<<endl;
  }

}
int main(){
sqr();
cout<<endl;
rect();
cout<<endl;
tri();
return 0;
}