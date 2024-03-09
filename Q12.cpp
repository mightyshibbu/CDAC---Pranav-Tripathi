#include <iostream>
using namespace std;
int main(){
int num;

cout<<"enter the numbers";
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
cin>>arr[i];
}
for(int j=0;j<num-1;j++){
for(int k=j+1;k<num;k++){
int temp;
if(arr[j]>arr[k]){
temp=arr[k];
arr[k]=arr[j];
arr[j]=temp;
}
}
}
cout<<" minimum--"<<arr[0];
cout<<" second minimum--"<<arr[1];
cout<<" maximum--"<<arr[num-1];
cout<<" second maximum-"<<arr[num-2];

return 0;
}

