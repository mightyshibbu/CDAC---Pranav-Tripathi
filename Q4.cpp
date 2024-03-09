#include <iostream>
#include <string>
using namespace std;
 int main(){
 int num;
 cout<<"Enter number to convert to binary: "<<endl;
 cin>>num;
  string res="";
 while(num>0){
 	if(num%2==0){
		res=res+" 0 ";
		num=num/2;
	}else{
		res=res+" 1 ";
		num=num/2;
	}
 }
for(int j=res.size()-1; j>0; j--){
 cout<<res[j]; 
}
 return 0;
 }
