#include <iostream>
#include <string>

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
class Supplier:public Person
{
public:
	Supplier(string s="");
	friend ostream &operator <<(ostream &os, Supplier &s);
};

Supplier::Supplier(string s)
{
	this->id;
	this->name;
	this->phone;
	this->email;
	this->address;
}

ostream &operator <<(ostream &os, Supplier &s) {
	os << s.getId().append("|" + s.getName() + "|" + s.getPhone() + "|" + s.getEmail() + "|" + s.getAddress());
	return os;
}
int main(){
	return 0; 
}
