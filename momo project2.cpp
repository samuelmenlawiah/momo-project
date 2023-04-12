#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main() {
	const string defaultpin = "0000";
	int attempts = 0;
	int select;
	string reference;
	char option;
	string number;
	float amount;
	string pin; 
	string c_pin;
	string new_pin;
	float balance, counter;
	balance=1000;
	
		do{
		cout<<"Please enter your PIN: "<<endl;
		cin>> pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
				if(attempts==3){
				cout<<"Maximum attempts reached."; 
				cout<<"Exit Program"<<endl;
				return 0;
	}
	}} while (pin != defaultpin && attempts <3);

do{

cout<<"1.Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Send "<<endl;
cout<<"4. Exit  "<<endl;
cin>>select;
 

if(select==1)
{
	cout<<"**********            ***********"<<endl;
	cout<<"pin" << endl;
	cin>> pin;
	cout<< balance;
}
else if(select==2)
{
	cout<<" Are You Sure You Want To Change Your Pin  "<<endl;
	cout<<" Choose Y/N "<<endl;
	cin>>option;
	if(option=='Y'|| option =='y')
	{
		cout<<"Enter New Pin" <<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<" Your New Pin Is "<<new_pin;
		
	}else
	{
		cout<<" Pin change cancelled! \a";
	}
}
else if(select==3)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<"********       ************"<<endl;
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
	cout<<"Transfer "<<amount<<" to "<<number<<endl;
	cout<<"Enter Reference "<<endl;
	cin>>reference;
	cout<<"    "<<endl;
	cout<<" Enter Pin ";cin>>pin;
	if(pin == defaultpin && amount <= balance){
			cout<<"Successfully sent "<<amount<<" to "<<number<<endl;
			cout<<"Current balance is "<<balance-amount<<endl;
	}else if(amount > balance ){
			cout<<" Insuficient amount "<<endl;
			cout<<"You would require "<<amount-balance<<" in addition"<<endl;
	}else{
			cout<<" Invalid user pin "<<endl;
	}

	
	
	 
	
}
}while(select == 1 ||select == 2 || select == 3 );

cout<<" Visit our codes again, nice working with you..";

	return 0;
}





	
	//Authentication



	

