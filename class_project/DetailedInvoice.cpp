
#include <iostream>
using namespace std; 
class Invoice
{
private:
	string id, date, customerID, type;
public:
	Invoice(string s = "");
	friend ostream &operator <<(ostream &os, Invoice &s);

	void setID(string id) { this->id = id; }
	void setDate(string date) { this->date = date; }
	void setCustomerID(string customerID) { this->customerID = customerID; }
	void setType(string type) { this->type = type; }

	string getID() { return this->id; }
	string getDate() { return this->date; }
	string getCustomerID() { return this->customerID; }
	string getType() { return this->type; }
};
Invoice::Invoice(string s)
{
	this->id;
	this->date;
	this->customerID;
	this->type;
}

ostream &operator <<(ostream &os, Invoice &obj) {
	os << obj.getID().append("|" + obj.getDate() + "|" + obj.getCustomerID() + "|" + obj.getType());
	return os;
}
class DetailedInvoice:public Invoice
{
private:
	string dynamicName, productID, productName, quantity, cost;
public:
	DetailedInvoice(string s="");
	friend ostream &operator <<(ostream &os, DetailedInvoice &s);

	void setDName(string dynamicName) { this->dynamicName = dynamicName; }
	void setProductID(string productID) { this->productID = productID; }
	void setProductName(string productName) { this->productName = productName; }
	void setCost(string cost) { this->cost = cost; }
	void setQuantity(string quantity) { this->quantity = quantity; }

	string getDName() { return this->dynamicName; }
	string getProductID() { return this->productID; }
	string getProductName() { return this->productName; }
	string getCost() { return this->cost; }
	string getQuantity() { return this->quantity; }
};

DetailedInvoice::DetailedInvoice(string s)
{
	this->dynamicName;
	this->productID;
	this->productName;
	this->quantity;
	this->cost ;
}

ostream &operator <<(ostream &os, DetailedInvoice &obj) {
	os << obj.getID() + "|" + obj.getDate() + "|" + obj.getType() + "|" + obj.getDName() + "|" + obj.getProductID() + "|" + obj.getProductName() + "|" + obj.getQuantity() + "|" + obj.getCost();
	return os;
}
int main(){
	return 0; 
}
