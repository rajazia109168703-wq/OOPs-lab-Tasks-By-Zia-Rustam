#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		string name;
		int age;
		public:
			person(string n,int a){
				name=n;
				age=a;
			}
			void display_person_info(){
				cout<<"    person information    :"<<endl;
				cout<<"   Name   :"<<name<<endl;
				cout<<"    Age    "<< age <<endl;
				
			}
};
class student:public person{
	private:
		string student_id;
		 public:
		 student(string n,int a,string sid): person(n,a),student_id(sid){
		 }
		 void display_student_info(){
		 	display_person_info();
		 	cout<<" student Id"<<student_id<<endl;
		 	
		 }
};
int main(){
	string name,student_id;
	int age;
	cout<<"Enter name" <<endl;
	cin>>name;
	cout<<"Enter student id"<<endl;
	cin>> age;
	student student(name,age,student_id);
	cout<<"    display student details " <<endl;
	cout<<"display std details"<<endl;
	student.display_student_info();
	return 0;
	
}

