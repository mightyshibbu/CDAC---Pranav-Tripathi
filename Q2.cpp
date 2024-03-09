#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout<<"Enter the coefficients of quadratic equation Ax^2 + Bx + C: ";
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"\nRoots of the equations are:"<<endl;
	double x= (-1*b + sqrt(pow(b,2)-4*a*c))/2; 
	double y= (-1*b - sqrt(pow(b,2)-4*a*c))/2;
	//-b+-√b^2-4ac) / 2a
	cout<<"X= "<<x<<"  Y= "<<y;	
	return 0;																																																																										
}
