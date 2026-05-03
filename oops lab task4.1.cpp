#include<iostream>
#include<string>
using namespace std;
class Employe
{

private:
	int id;
	string name;
	float salary;
	public:
		Employe(){
			id=0;
			name="not assigned";
			salary=0.0;
		}
		//we need to dispaly detail so we use another func
		void displaydetails(){
			cout<<"          Employe Details             "<<endl;
			cout<<"ID: "<< id <<endl;
			cout<<"Name: " <<name <<endl;
			cout<<"Salary: " <<salary <<endl;
		}
};
int main(){
Employe emp;
cout<<"    Employe in system is : "<<endl;
emp.displaydetails();
return 0;
}
