#include <iostream>
using namespace std; 

class Person
{
protected:
	string id;
	string name;
	string phone;
	string address;
	string email;
public:

	void setName(string name) { this->name = name; }
	void setPhone(string phone) { this->phone = phone; }
	void setAddress(string address) { this->address = address; }
	void setId(string id) { this->id = id; }
	void setEmail(string email) { this->email = email; }

	string getName() { return this->name; }
	string getPhone() { return this->phone; }
	string getAddress() { return this->address; }
	string getId() { return this->id; }
	string getEmail() { return this->email; }
};

class Customer:public Person
{
private:
	string fname;
	string sex;
public:
	Customer(string s="");
	friend ostream &operator <<(ostream &os, Customer &s);

	void setFname(string fname) { this->fname = fname; }
	string getFname() { return this->fname; }
	void setSex(string sex) { this->sex = sex; }
	string getSex() { return this->sex; }
};
Customer::Customer(string s)
{
	this->id;
	this->fname;
	this->name;
	this->sex;
	this->phone;
	this->email;
	this->address;
}

ostream &operator <<(ostream &os, Customer &obj) {
	os << obj.getId().append("|" + obj.getFname() + "|" + obj.getName() + "|" + obj.getSex() + "|" + obj.getPhone() + "|" + obj.getEmail() + "|" + obj.getAddress());
	return os;
	}

int main(){
	return 0; 
}
