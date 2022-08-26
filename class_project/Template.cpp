#include <iostream>
#include <fstream>
using namespace std; 

template<class T>
class Template;

template <class T>
class Template
{
private:
	T *arr;
	int n, capacity;
public:
	Template();
	~Template();

	bool add(T element);
	bool removeIndex(int index);
	
	void addAndWrite(string path, string str);
	void removeAndWrite(int index, string path);
	void edit(int i, string s, string path);
	
	void readFile(string path);
	void writeFile(string path);
};
template<class T>
Template<T>::Template() {
	capacity = 10;
	arr = new T[capacity];
	n = 0;
}

template<class T>
Template<T>::~Template() {
	delete arr;
}

template<class T>
bool Template<T>::add(T element) {
	if (n == capacity) {
		capacity *= 2;
		T*arr2 = new T[capacity];
		for (int i = 0; i < n; i++)
			arr2[i] = arr[i];
		arr = arr2;
	}
	arr[n++] = element;
	return true;
}

template<class T>
bool Template<T>::removeIndex(int index) {
	for (int i = index; i < n - 1; i++)
		arr[i] = arr[i + 1];
	n--;
	return true;
}

template<class T>
void Template<T>::addAndWrite(string path, string str) {
	readFile(path);
	add(T(str));
	writeFile(path);
}

template<class T>
void Template<T>::removeAndWrite(int index, string path) {
	readFile(path);
	removeIndex(index);
	writeFile(path);
}

template<class T>
void Template<T>::edit(int i, string s, string path) {
	readFile(path);
	arr[i] = T(s);
	writeFile(path);
}

template<class T>
void Template<T>::writeFile(string path) {
	fstream f;
	//f.open(path, ios::out);
	if (f.fail())
		cout << "Fail!" << endl;
	else {
		for (int i = 0; i < n; i++)
			f << arr[i] <<endl;
		f.close();
	}
}

template<class T>
void Template<T>::readFile(string path) {
	fstream f;
	//f.open(path, ios::in);
	if (f.fail())
		cout << "Fail!" << endl;
	else {
		while (!f.eof()) {
			string s;
			getline(f, s);
			if (s != "")
				add(T(s));
		}
		f.close();
		cout << "Done!" << endl;
	}
}

int main(){
	return 0;
}
