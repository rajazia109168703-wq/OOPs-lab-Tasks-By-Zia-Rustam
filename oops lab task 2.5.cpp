#include<iostream>
using namespace std;
class calculator{
	// Attributes of calculator
	float num1,num2;
	// member function for addition inside the class
	public:
    void setvalues();
	float add();
	float subtract();
	float multiplication();
	float division();

};
// Function defined outside thge class
void calculator::setvalues(){
	cout<<"Enter first number"<<endl;
	cin>>num1;
	cout<<"Enter second number"<<endl;
	cin>>num2;
}
//addition function outside
float calculator::add()
{
	return num1  +num2;
}
//subtraction func outside
float calculator::subtract()
{
return num1 - num2;	
}
//Multiplication fuction otside
float calculator::multiplication()
{
	return num1* num2;
}
//Division function otside
float calculator::division(){
	if(num2 !=0){
		return num1 / num2;
	} else{
		cout<<"Division by zero is not allowed "<<endl;
	}
	return 0;
}
#end if

