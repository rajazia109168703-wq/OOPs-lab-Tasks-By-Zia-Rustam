#include<iostream>
using namespace std;
class Temprature{
	public:
		float celsius;
	//function that convert celcius to farhenheit
	float tofarhenheit(){
		return (celsius*9.0/5.0)+32 ;
	}
	//Make the function that display converted value
	void displayfarhenheit (){
		cout<<celsius<<" C ="<< tofarhenheit() <<" F "<<endl;
		
	}
};
int main(){
	Temprature t1;
	cout<<"ENTER TEMPRATURE IN CELCIUS"<<endl;
	cin>>t1.celsius;
	cout<<"    Conversion Result    "<<endl;
	t1.displayfarhenheit();
	return 0;
}
