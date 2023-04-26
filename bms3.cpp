#include "iostream"
//#include <cstdlib>
#include "string"
#include "windows.h"
//#include "dos.h"
//#include "conio.h"

using namespace std;

static int balance;
static string pin1, pin2;
static string name;
static string phone;

void mainBlock();
void Switch();
void openAcc();
void accDet();
void deposit();
void withdraw();
void close();

main(){ 
	mainBlock();
}

void mainBlock(){
	cout<< endl; 
	for(int i=0; i<50; i++)cout << "--";
	cout<< endl << "WELCOME TO CANARY BANK"<< endl;
	for(int k=0; k<50; k++)cout << "--";
	cout<< endl << "Press 1 : Open new account"<< endl;
	cout<< "Press 2 : Show existing account details"<< endl;
	cout<< "Press 3 : Deposit money"<< endl;
	cout<< "Press 4 : Withdraw money"<< endl;
	cout<< "Press 5 : EXIT"<< endl;
	for(int a=0; a<50; a++)cout << "--";
	cout<< endl; Switch();
}

void Switch(){
	int press; cin>>press;
	switch(press){
		case 1:  openAcc() ; mainBlock(); 
		case 2:  accDet()  ; mainBlock();  
		case 3:  deposit() ; mainBlock();
		case 4:  withdraw(); mainBlock(); 
		case 5:  close()   ; break;
		default: cout << "Wrong press... Retry!"; Sleep(2000); mainBlock();
}   }

void openAcc(){
    cout<<"NEW ACCOUNT PORTAL"<<endl<<endl;
	cout<< "Enter name: "; cin>>name;
	cout<< "Enter phone: "; cin>>phone;
	Sleep(2000);
    int otp; cout<< "Enter the OTP sent to your mobile number: ";cin>>otp;
    //system("cls"); 
    Sleep(2000);
	cout<<endl<< "Your new account number is "; for(int i=1; i<=3; ++i) cout << rand(); cout<<endl;
	Sleep(3000);
	//HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE); 
    //DWORD mode = 0;
    //GetConsoleMode(hStdin, &mode);
    //SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
	 
	do{
	cout<< "Please set a security pin: "; cin>>pin1; //getline(cin, pin1); 
	cout<<endl<< "Confirm security pin: "; cin>>pin2; //getline(cin, pin2); cout<<endl;
	if(pin1!=pin2){cout<<endl<< "Pin don't match, try again..."<<endl;}}while(pin1!=pin2);
	cout<<endl<< "Pin has been set!" << endl;
	for(int j=0; j<50; j++)cout << "--";
	Sleep(3000);
	cout<< endl << "Thanks for choosing Canary Bank "<<name<<" , your new account is ready to use!"<< endl;
	Sleep(2000);
}

void accDet(){
	string accNum, pin; cout<<"Enter account number to view details: ";	cin>>accNum;
    if(accNum=="41184676334"){
		cout<<"Enter security pin: "; cin>>pin; cout<<endl;
		if(pin==pin1){
			cout<< endl<< "Welcome back "<<name<<"!"; Sleep(2000);
			cout<<endl<<"Here are your account details"<<endl; Sleep(2500);
			for(int j=0; j<50; j++)cout << "--";
			cout<<endl<<"Account Number: 41184676334"<<endl;
			cout<<"Account Holder Name: "<<name<<endl;
			cout<<"Contact details: "<<phone<<endl;
			cout<<"Current Bank Balance: "<<balance<<endl;	
		}else cout<<"Incorrect pin, access blocked.";
    }else cout<<"No such account";
    Sleep(2000);
}



void deposit(){
	cout<<"DEPOSIT PORTAL"<<endl<<endl;
	int dAmt; string pin, accNum; 
	cout<<"Enter account number: ";cin>>accNum;
	
    if(accNum=="41184676334"){
		cout<<"Enter security pin: "; cin>>pin; cout<<endl;
		if(pin==pin1){
			cout<< "Enter deposit amount: ";cin>>dAmt; Sleep(3000);
			balance+=dAmt;
			cout<<"Transaction Successful! Please recieve your reciept.";
		}else cout<<"Incorrect pin, access blocked.";
    }else cout<<"No such account";
    Sleep(2000);
}

void withdraw(){
	cout<<"WITHDRAWAL PORTAL"<<endl<<endl;
	int wAmt; string pin, accNum; 
	cout<<"Enter account number: ";cin>>accNum;
	
    if(accNum=="41184676334"){
		cout<<"Enter security pin: "; cin>>pin; cout<<endl;
		if(pin==pin1){
			cout<< "Enter withdrawal amount: ";cin>>wAmt; Sleep(1500);
			if(wAmt<=balance){
				cout<< "Please wait while the transaction is being processed..."; Sleep(2000);
				balance-=wAmt;
				cout<<endl<<"Transaction Successful! Please recieve your reciept."; Sleep(1500);
				
			}else cout<<"Non-viable request, please check your bank balance.";
		}else cout<<"Incorrect pin, access blocked.";
    }else cout<<"No such account";
    Sleep(3000);
}

void close(){
	int counter = 5; 
    //Sleep(1000);
    while (counter >= 1){
        cout << "\rExiting in " << counter <<"..."<< flush;
        Sleep(1000);
        counter--;
	} 	
	abort();  
}
