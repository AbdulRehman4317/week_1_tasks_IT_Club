#include<iostream>
#include<string>
using namespace std;
int main(void){
	string name;
	cout<<"Enter your name: ";
	getline(cin, name);
	cout<<"Hello "<<name<<"!"<<endl;
	return 0;
}