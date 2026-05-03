#include<iostream>
#include<string>
using namespace std;
class product{
	private:
		string name;
		double price;
		int quantity;
		public:
			product(){
			
		name = "";
		price = 0.0;
		quantity =0;
	}
	void setname(string n){
		if(n==""||n.empty()){
			cout<<"Error:product name cannot be empty"<<endl;
		}else{
			name=n;
		}
	}
	void setprice(double p){
		if(p>0){
			price=p;
		}else{
			cout<<"price must gratter than zero error"<<endl;
		}
	}
	void setquantity(int q){
		if(q>=0){
			quantity=q;
		}else{
			cout<<"Error: quantity cannot be negetive!"<<endl;
		}
	}
	// Now we use getters
	string getname(){
		return name;
	}
	double getprice(){
		return price;
	}
	int getquantity(){
	return quantity;}
};
int main(){
product p;
p.setname("");
p.setprice(-50);
p.setquantity(-2);

p.setname("laptop");
p.setprice(1200.50);
p.setquantity(5);

cout<<"product : "<<p.getname()<<endl;
cout<<"price : $ "<<p.getprice()<<endl;
cout<<"quantity : "<<p.getquantity()<<endl;
return 0;
}
