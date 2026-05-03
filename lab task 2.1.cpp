#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int roll_no;
		float marks;
	
		void getdata(){
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter roll no"<<endl;
			cin>>roll_no;
			cout<<"Enter marks"<<endl;
			cin>>marks;
		}
		void displaydata(){
			cout<<"          Student Information           "<<endl;
			cout<<"Name of student: = "<<name<<endl;
			cout<<"ROLL no of student: = "<<roll_no<<endl;
			cout<<"Marks of student: =  "<<marks<<endl;
		}
		
};
int main()
{
	student student1;
	student1.getdata();
	student1.displaydata();
	// for obj 2
	student student2;
	student2.getdata();
	student2.displaydata();
	return 0;
}

