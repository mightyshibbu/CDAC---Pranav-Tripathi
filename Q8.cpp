

// Accept n numbers from users and store them in to array, Write a function to sort and display sorted array.
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
for(int i=0;i<num;i++){
cout<<" "<<arr[i];
}

return 0;
}

