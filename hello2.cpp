#include <iostream>
using namespace std;
int main(){
	cout<< "enter the marks for physics, chemistry and maths:";
	int physics,hcem,math;
	cin>>physics;
	cin>>hcem;
	cin>>math;

	float avg =(physics+hcem+math)/3.0;
	cout<< "avergae marks: "<< avg;
	return 0;
}