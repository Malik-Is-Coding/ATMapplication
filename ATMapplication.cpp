#include <iostream>
using namespace std;



void showMenu() {
	cout<<"__________MENU________"<<endl;
	cout<<"1._______Check Balance"<<endl;
	cout<<"2._______Deposit______"<<endl;
	cout<<"3._______Withdraw_____"<<endl;
	cout<<"4._______EXIT_________"<<endl;
	cout<<"______________________"<<endl;
	
}
void balance(){
	
	cout<<"Balance is"<< balance << " $"<<endl;
}
void deposit()
{   
    
	int Amount;
	cout<<"How much amount do you want to deposit??"<<endl;
	cout<<"Amount: "<<endl;
	cin>> Amount;
	
}
	
void withdraw()
{   
    
	int WithdrawAmount;
	cout<<"How much do you want to withdraw"<<endl;
	cout<<"Withdraw Amount: "<<endl;
	cin>>WithdrawAmount;
	//balance -= WithdrawAmount;
	
	
}
	
	


int main(){
	//check balance, deposit, withdraw, show menu 
	int  option;
	int Amount = 0;
	double balance = 5000;
	cout<<"Please choose an option"<<endl;
	
	do{
		showMenu();
	cout<<"Option: "<<endl;
	cin >> option;
	system("cls");
	switch(option){
		case 1:
			cout<< "Balance is "<< balance << "$" << endl;
			break;
		case 2:
			cout<< "Deposit Amount";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:
			cout<< "Withdraw amount: ";
			double WithdrawAmount;
			cin >> WithdrawAmount;
			if(balance >= WithdrawAmount){
				balance -= WithdrawAmount;
				cout<<balance<<endl;
			}
			else{
				cout<<"You don't have sufficient money to withdraw"<<endl;
			}
		
	}
	}while (option!=4);
	
	
	
	
	system("pause>0");
	
}
