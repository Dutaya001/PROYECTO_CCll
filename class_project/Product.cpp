#include <iostream>
using namespace std; 
class Product
{
private:
	string id, name, supplierId, unit, note;
public:
	Product(string s="");
	friend ostream &operator <<(ostream &os, Product &s);

	void setID(string id) { this->id = id; }
	void setName(string name) { this->name = name; }
	void setSupplierID(string supplierId) { this->supplierId = supplierId; }
	void setUnit(string unit) { this->unit = unit; }
	void setNote(string note) { this->note = note; }

	string getID() { return this->id; }
	string getName() { return this->name; }
	string getSupplierId() { return this->supplierId; }
	string getUnit() { return this->unit; }
	string getNote() { return this->note; }
};
Product::Product(string s)
{
	this->id ;
	this->name;
	this->supplierId;
	this->unit;
	this->note;
}

ostream &operator <<(ostream &os, Product &obj) {
	os << obj.getID().append("|" + obj.getName() + "|" + obj.getSupplierId() + "|" + obj.getUnit() + "|" + obj.getNote());
	return os;
}
int main(){
	
	return 0; 	
}

