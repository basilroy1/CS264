 #include <iostream>
 int main(){
int p=1;
 for(int i=1;i<=9;i=i+1){
 if(i%2==0){
	 p*=i;

 }

 }
  std::cout<<"product is "<<p;
 return 0;
 }