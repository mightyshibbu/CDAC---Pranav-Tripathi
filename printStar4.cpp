#include<iostream>
using namespace std;
int main(){
int i,j,num;
cout<<"enter the num";
cin>>num;
for(i=1;i<=num;i++){
int temp=i-1;
for(j=1;j<=num;j++){
if(j<=temp){
cout<<" ";
}else cout<<"*";
}
cout<<"\n";

}

return 0;
}
