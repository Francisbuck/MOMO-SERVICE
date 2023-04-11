#include <iostream>
#include <string>
#include <fstream>
using namespace std;
  
  //function declaration
  void authenticate();
  void changePin();
  void checkBalance();
  void sendMoney();
  
  //global variables
  int balance=1000;
  int attempts=0;
  
  int main(){
  int choice;
  do{
  	cout<<"\nMOBILE MONEY SERVICE\n";
  	cout<< "1.Authenticate\n";
  	cout<< "2.Reset/Changepin\n";
  	cout<< "3.Check Balance\n";
  	cout<< "4. Send Money\n";
  	cout<< "5. Exit\n";
  	cout<< "\nEnter your choice:",
  	cin>> choice;
  	
  	switch(choice){
  		case 1:
  			authenticate();
  			break;
  		case 2:
  			changePin();
  			break;
  		case 3:
  			checkBalance();
  			break;
  		case 4:
  			sendMoney();
  			break;
  		case 5:
  			cout<<"\nThank you for using OTENG MONEY SERVICE!\n";
  			break;
  			default:
  				cout<<"\nInvalid choice.Try again.\n";
	  }}while(choice !=5);
	  return 0;
}
  void authenticate(){
  	int pin;
  	cout<<"\nEnter your pin:";
  	cin>> pin;
  	//check if pin is correct
  	if(pin==0000){
  		cout<<"\nAuthentication Successful!\n";
	  }else{
	  attempts++;
	  if(attempts<3){cout<< "\nWrong PIN. Please try again.\n";
	  authenticate();//recursive call} else{cout<< "Too many failed attempt. Exiting program.\n";
	  exit(0);
	     }
	  }
  }
  void changePin()	
{
int newPin;
cout<< "\nEnter your new Pin";
cin>>newPin;
//update pin in file ofstream file; file.open("pin.txt"); file<< newpin; file.close();
cout<<"\nPIN change successful!\n";
}
void checkBalance()
{cout<<"\nYour current balance is:"<<balance<<"\n";
}
void sendMoney(){
	int amount;
	cout<<"\nEnter amount you want to send:";
	cin>> amount;
	//check if balance is sufficient
	if(balance>=amount){balance-=amount;
	cout<< "\nTransaction successful.New balance is:"<<balance;"\n";
	}else {cout<<"\nError: insufficient balance.\n";
}

 return;
}
