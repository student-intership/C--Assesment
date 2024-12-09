#include<iostream>
using namespace std;

class Bank{
	public: 
	int accPin ; 
	int ch ;
	int pin = 123456 ; 
	int balance = 30000 , deposit;
	int we ; 
		Bank()                    //constructor
		{
			cout<<"=========== WELCOME TO ATM ============"<<endl;
			cout<<"---------------------------------------"<<endl;
    		cout<<" Current Date : " << __DATE__ << " " << __TIME__ << endl;
    		cout<<"---------------------------------------"<<endl;
    		cout<<"======================================="<<endl;
    	}
    	
    	access()
    	{
    		cout<<"======================================="<<endl;
    		cout<<"Enter Acc Pin Access Number ! [only one attempt number is allowed] "<<endl;
    		cout<<"======================================="<<endl;
    		cin>>this -> accPin;
    		
    		if(this -> accPin== this -> pin)
			{
				while(1)
				{
				
					cout<<"=========== ATM MAIN MENU SCREEN ============="<<endl;
					cout<<"Enter [1] to Deposit Cash"<<endl;
					cout<<"Enter [2] to Withdraw Cash"<<endl;
					cout<<"Enter [3] to Balance Inquiry"<<endl;
					cout<<"Enter [0] to Exit ATM"<<endl;
					cout<<endl;
					cout<<"PLEASE ENTER A SELECTION AND PRESS RETURN KEY"<<endl;
					cin>>ch;
				
				
					if(ch==1)
					{
						cout<<"=========== ATM ACCOUNT DEPOSIT SYSTEM ============="<<endl;
						cout<<"The Name Of Account Holder : Parin patel"<<endl;
						cout<<"The Account Holder's Address : Ahmedabad'"<<endl;
						cout<<"The Branch Location : Ramol"<<endl;
						cout<<"Account Number : 220020314568"<<endl;
						cout<<"======================================="<<endl;
						cout<<"Present Availabe Balance : "<<this -> balance<<endl;
						cout<<"Enter Amount to be Deposited : "<<endl;
						cin>>deposit; 
						this -> balance += deposit ; 
						cout<<"Your New Available Balance is : Rs "<<this -> balance<<endl; 
						cout<<"                 Thank You                          "<<endl;
					}
				
					else if (ch==2)
					{
						cout<<"=========== ATM ACCOUNT WITHDRAWAL ============="<<endl;
						cout<<endl;
						cout<<"The Name Of Account Holder : Parin patel"<<endl;
						cout<<"The Account Holder's Address : Ahmedabad'"<<endl;
						cout<<"The Branch Location : Ramol"<<endl;
						cout<<"Account Number : 220020314568"<<endl;
						cout<<"======================================="<<endl;
						cout<<"Present Availabe Balance : "<<this -> balance<<endl;
						cout<<"Enter Amount to for Withdrawal : "<<endl; 
						cin>>we;
					
						int insuf = this -> balance - we;  
						this -> balance -= we;
						if(this -> balance <= 0)
						{
							cout<<"Insufficient Available Balance in your Account."<<endl; 
							cout<<"                    Sorry!                     "<<endl;
						}
					
					}
				
					else if (ch==3)
					{
						cout<<"=========== ATM ACCOUNT BALANCE  ============="<<endl;
						cout<<"The Name Of Account Holder : Parin patel"<<endl;
						cout<<"The Account Holder's Address : Ahmedabad'"<<endl;
						cout<<"The Branch Location : Ramol"<<endl;
						cout<<"Account Number : 220020314568"<<endl;
						cout<<"======================================="<<endl;
						cout<<"Your Available Balance : "<<this -> balance<< endl;
					}	
				
					else if (ch==0)
					{
						cout<<"=========== ATM  ============="<<endl;
						cout<<"         Thank You               "<<endl;
						break;
					}
				}
			} 
			
			else if(this -> accPin!= this -> pin)
			{
				cout<<"============= THANK YOU ==============="<<endl;
				cout<<"You had made your attempt which failed!! No more attempt allowed!! Sorry!!"<<endl;
				cout<<"======================================="<<endl;
			}
		}
		
		help()
		{
			cout<<"=========== ATM ACCOUNT STATUS  ============"<<endl;
			cout<<"You must have the correct pin number to access this account. See your"<<endl;
			cout<<"bank representation for assistance during bank opening hours"<<endl;
			cout<<"Thanks For, your choice today !"<<endl;
			cout<<"======================================="<<endl;
		}
};

main()
{
	Bank obj;
	int choice ;  
	cout<<"Press 1 and then Press Enter to Access Your Account Via Pin Number"<<endl;
	cout<<"                            or                                    "<<endl;
	cout<<"Press 0 and Press Enter to Get Help."<<endl;
	cin>>choice;
	
	if(choice==1)
	{
		obj.access();
	}
	else if(choice==0)
	{
		obj.help();
	}
	else
	{
		cout<<"Invalid Input!"<<endl;
	}
}
