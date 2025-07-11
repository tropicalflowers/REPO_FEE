#include <iostream>
using namespace std;

int main(){
	int number;
	cout<< "enter a number to determine if its even or odd: ";
	cin>> number;
	if (number%2==0){
		cout<< "even"<<endl;

	}
	else{
		cout<<"odd"<<endl;
	}
}