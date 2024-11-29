#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"What is your age: ";
	cin>>age;
	if (age<13){
		cout<<"\tChild";
	}
	else if (age>=13){
		if (age<=19){
		cout<<"\tTeenager";
	}
	}
	 if (age>=20){
		if (age<=64){
		cout<<"\tAdult";
	}
	}
	if (age>=65){
		cout<<"\tSenior";
	}
}
