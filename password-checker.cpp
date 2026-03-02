#include<iostream>
using namespace std;
int main(){
	string password;
	int digit,upper;
	bool valid=false;
	while(!valid){
	bool digit=false;
	bool upper=false;
		cout<<"Enter the password: ";
		cin>>password;
		if(password.length()<8){
			cout<<"The password must be at least 8 characters long."<<endl;
			continue;
		}
		for(int i=0;i<password.length();i++){
			char c=password[i];
			if(c>='0'&&c<='9'){
				digit=true;
			}
			if(c>='A'&&c<='Z'){
				upper=true;
			}
		}
		
		if(!digit){
			cout<<"The password must contain at least one number."<<endl;
		}else if(!upper){
			cout<<"The password must contain at least one uppercase letter."<<endl;
		}else{valid=true;}
	}cout<<"The password has been successfully created."<<endl;
	return 0;
}
