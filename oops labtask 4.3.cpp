#include<iostream>
using namespace std;
class rectangle{

private:
	float length;
	float width;
	public:
		rectangle(){
			length = 3.0;
			width =3.0;
			
		}
		rectangle(float length,float width){
			length=length;
			width=width;
		}
		rectangle (float side){
			length=side;
			width=side;
		}
		float area(){
			return length*width;
		}
		void display(){
			cout<<"length : "<<length<<"width :"<<width;
			cout<<" Area : "<<area()<<endl;
		}
	};
	int main(){
		cout<<"    RECTANGLE BY USING CONSTRUCTOR OVERLOADING " <<endl;
		rectangle r1;
		r1.display();
		rectangle r2(5.5,3.2);
		r2.display();
		rectangle r3(4.0);
		r3.display();
		return 0;
			
	}
