#include<iostream>
#include<string>
using namespace std;
class bankaccount {
private:
	string accountnumber;
	string accountholder;
	double balance;
	public:
		bankaccount(string accountnumber, string accountholder ,double balance){
			accountnumber=accountnumber;
			accountholder=accountholder;
			balance=balance;
		}
		void showaccountdetails(){
			cout<<"    Bank account details "<<endl;
			cout<<"Account Number : " << accountnumber <<endl;
			cout<<"Account holder : " << accountholder <<endl;
			cout<<"Balance : " << balance <<endl;
		}
};
int main(){
	bankaccount account("PK0309800520100 "," Zia Rustam",10000);
	account.showaccountdetails();
	return 0;
}
