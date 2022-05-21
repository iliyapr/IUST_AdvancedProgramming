#include<bits/stdc++.h>
using namespace std ;

class Account 
{
	private :
	 string Username , Password ;
	  
	public :
		Account(string user ,string pass) : Username(user) , Password(pass) {}
		Account(){}
		
	
};

class Article 
{
	string Name , ID , Ref_ID , Date ;
	Account accounts[10][2];
	char *txt ;
	
	public :
		Article(string name ,string id , string ref_id , string date ,string text )
		{
			Name = name ; ID = id ; Ref_ID = ref_id ; Date = date ;
			txt = &text[0];
		}


};

int main()
{
	Account total_accounts[100][2];
	static int num_accounts = 0;
	char sit ; cout<<" start -> enter s : "; cin>>sit;
	while(sit == 's')
	{
		int order;;
		cout<<"\n"<<"choose your operations (hint -> enter 0) : ";
        cin>>order;
    
       switch (order){

       case -1: exit(0); break; //khorooj
		case  0 : // hint
			{
				cout<<"\n"<<"-1 : exit";
				cout<<"\n"<<"0 : hint";
				cout<<"\n"<<"1 : create account";
				cout<<"\n";

				break;
			}

       case 1: 
	   {   
	        //create account
       		cout<<"Enter your Username: "<<endl;
       		string user,pass;
       		cin>>user;
       		cout<<"Enter your Password: "<<endl;
       		cin>>pass;
       		cout<<endl;
       		Account acc(user , pass) ;
       		total_accounts[num_accounts] ; 
       		num_accounts ++ ;
       
       
       break; }
       case 2:break;
       case 3:break;
       case 4:break;
       case 5:break;
       case 6:break;
       case 7:break;
       
       default:
           break;
       }
   }
        
    
	return 0;
}
