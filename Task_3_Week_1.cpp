#include<iostream>
using namespace std;

int main(void){
	int choice;
	int num1, num2, x;
	cout<<"***Basic Arithmetic Calculator***"<<endl;
	cout<<"[1] Addition"<<endl;
	cout<<"[2] Subtraction"<<endl;
	cout<<"[3] Multiplication"<<endl;
	cout<<"[4] Division"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	switch(choice){
		case 1:
			x = num1 + num2;
			cout<<"Result: "<<x;
			break;
		case 2:
		    x = num1 - num2;
			cout<<"Result: "<<x;
			break;
		case 3:
		    x = num1 * num2;
			cout<<"Result: "<<x;
			break;
		case 4:
			if(num2 == 0){
				cout<<"Error: cannot divide by zero!";
				break;
			}
		    x = num1 / num2;
			cout<<"Result: "<<x;
			break;
		default:
		    cout<<"Incorrect option selected!";
			break;			
	}
	return 0;
}