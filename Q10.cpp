/*Accept n numbers from user and write a function to find out average and
display average.*/
#include<iostream>
using namespace std;
int average(int num, int temp){

int result = temp/num;
return result;
}

int main(){
int num;
cout<<"Enter total numbers: "<<endl;
cin>>num;
int arr[num];
int temp=0;

for(int i=0; i<num; i++){
	cin>>arr[i];
	temp=temp+arr[i];
}
int result =average(num,temp);
cout<<result<<endl;
return 0;
}

