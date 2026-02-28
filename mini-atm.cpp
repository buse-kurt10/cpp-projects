#include<iostream>
using namespace std;
int main(){
	int cp=1234;
	int ep;
	int balance=1000;
	int attempts=3;
	int choice;
	int amount;
	
	while(attempts>0){
		cout<<"Enter the password: ";
		cin>>ep;
		if(ep==cp){
			cout<<"Log in successfully."<<endl;
			break;
		}else{
			attempts--;
			cout<<"Wrong password! Try again."<<endl;}
		}
		if(attempts==0){
			cout<<"The card blocked!"<<endl;
		    return 0;
		}do{
		    cout<<"MINI ATM"<<endl;
		    cout<<"1-View Balance"<<endl;
		    cout<<"2-Withdraw Money"<<endl;
		    cout<<"3-Deposit Money"<<endl;
		    cout<<"4-Exit"<<endl;
		    cout<<"Choose the number between 1 and 4: ";
		    cin>>choice;
		    
		    switch(choice){
		    	case 1:
		    		cout<<"Current balance: "<<balance<<"TL"<<endl<<endl; 
		    		break;
		    	case 2:
				    cout<<"Enter the amount to withdraw: ";
					cin>>amount;
					if(amount>balance){
						cout<<"Insufficient balance!"<<endl;
					}else if(amount<=0){
						cout<<"Invalid amount!"<<endl;
					}else{
						balance-=amount;
						cout<<"Withdraw successful."<<endl;
						cout<<"New balance: "<<balance<<"TL"<<endl;
					}	break;
				case 3: 
				    cout<<"Enter amount to deposit: ";
					cin>>amount;
					if(amount<=0){
						cout<<"Invalid amount!"<<endl;
					}else{
						balance+=amount;
						cout<<"Deposit successful."<<endl;
						cout<<"New balance: "<<balance<<endl;
					}break;
					
				case 4:
				    cout<<"Logged out."<<endl;
					break;	
			    default:
				    cout<<"Invalid option!"<<endl;
		}
	}while(choice!=4);

}
