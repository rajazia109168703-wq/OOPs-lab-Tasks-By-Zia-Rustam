#include<iostream>
#include<string.h>
using namespace std;
class Rectangle{

public:
	int length;
	int width;
	void setdimensions();
	int area();
	int perimeter();
	};
	// display the func dimentions
	void Rectangle::setdimensions()
{
	cout<<"Enter length of rectsngle"<<endl;
	cin>>length;
	cout<<"Enter width of rectangle"<<endl;
	cin>>width;
}
	//display area
	int Rectangle::area(){
		return length*width;
		
	}
	//display perimeter
	int Rectangle::perimeter(){
		return 2*(length+width);
	}
	int main(){
		Rectangle rect;
		rect.setdimensions();
		rect.area();
		rect.perimeter();
		cout<<"\n    rectangle info     \n"<<endl;
		cout<<"Area of Rectangle = "<<rect.area()<<endl;
		cout<<"perimeter of Rectangle = "<<rect.perimeter()<<endl;
		return 0;
	}

