#include <bits/stdc++.h>
using namespace std;

class Stock{
    private:
    char symbol[5],name[50];
    double price,market_cap;

    public:


};

class Account{
    private:
    bool validated;
    string name,id,acc_num,shaba,username,password;
    double debt,balance,stock_total;
    vector<Stock> stocks;

    public:
    Account(string u,string p){
        username=u; password=p;
        validated=false;
        debt=0; balance=0;stock_total=0;
    }
    void setInfo(string n,string i,string a,string s){
        name=n; id=i; acc_num=a; shaba=s; 
        validated=true;
    }
    void accStock(Stock st){
        stocks.push_back(st);
    }

    void deposit(double val){
        if(validated) balance+=val;
        else cout<<"Please enter your info"<<endl;
    }
    void withdrawal(double val){
        if(validated) balance-=val;
        else cout<<"Please enter your info"<<endl;
    }
    
    friend class AccountList;
};

class AccountList{
    private:
    vector<Account> accounts;

    public:
    void addAccount(Account acc){
        accounts.push_back(acc);
    }
    bool register_check(string user){
        for(int i=0; i<accounts.size();i++){
            if(user==accounts[i].username){
                return false;
            }
        }
        return true;
    }
    bool login_check(Account acc){
        for(int i=0; i<accounts.size();i++){
            if(acc.username==accounts[i].username && acc.password==accounts[i].password){
                return true;
            }
        }
        return false;
    }
};




int main(){

    AccountList AccList;
    bool isLoggedIn = false;
    char sit ; cout<<" start -> enter s : "; cin>>sit;
	while(sit == 's'){
		int order;;
		cout<<"\n"<<"choose your operations (Menu -> enter 0) : ";
        cin>>order;
    
       switch (order){

       case -1: exit(0); break; //khorooj
		case  0 : // menu
			{
				cout<<"\n"<<"-1 : Exit";

                if(!isLoggedIn){
                cout<<"\n"<<"1 : Create Account"; 
				cout<<"\n"<<"2 : Login"; 
                }else{
				cout<<"\n"<<"-2 : Log Out";
				cout<<"\n"<<"3 : Add Info";
                cout<<"\n"<<"4 : Deposit";
                cout<<"\n"<<"5 : Withdrawal";
                cout<<"\n"<<"6 : Enter Market";
                }
                
                
				cout<<"\n";

				break;
			}

        case 1:{
            string user,pass,spoil;
            while(true){
            cout<<"Enter a Username:"<<endl;
            cin>>spoil;
            getline(cin,user);
            cout<<"Enter a Password:"<<endl;
            getline(cin,pass);
            if(AccList.register_check(user)){
            Account acc(user,pass);
            AccList.addAccount(acc);
            cout<<"Your account was created successfully!"<<endl;
            break;
            }
            cout<<"This username is already used! Please choose another one."<<endl;
            }
            
            

             break;}

        case 2:{
             string user,pass,spoil;
            while(true){
            cout<<"Enter your Username:"<<endl;
            cin>>spoil;
            getline(cin,user);
            cout<<"Enter your Password:"<<endl;
            getline(cin,pass);
            Account acc(user,pass);
            if(AccList.login_check(acc)){
                cout<<"You're Logged in!"<<endl;
                isLoggedIn=true;
                break;
            }
            cout<<"Username or password is wrong!\n Please enter them again!"<<endl;
            

            }
             break;}

        case 6:{ 
            cout<<"***Welcome to the Market!***"<<endl;
            cout<<"\n"<<"7 : Buy a Share";
            cout<<"\n"<<"8 : Sell a Share";
            cout<<"\n"<<"9 : View Your Shares";
            cout<<"\n"<<"10 : View All Stocks";

             break;}
        case 4:{ break;}
        case 5:{ break;}
        case -2:{
            isLoggedIn=false;


             break;}



       }
    }







    return 0 ;    
}
    