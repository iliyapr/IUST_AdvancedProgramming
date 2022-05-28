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
    protected:
    int people_count;
	string Name , ID , Ref_ID , Date ;
	Account accounts[10];
	char *txt ;
	
	public :
		Article(string name ,string id , string ref_id , string date ,char *text,int people)
		{
			Name = name ; ID = id ; Ref_ID = ref_id ; Date = date ;
            people_count=people;
			txt = text ;
		}

    void add_account(Account account,int index){
        accounts[index] = account;
    }    


};

class Validate : public Article{
    public:
       //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
         //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        //!!!!!!Functiona ro inja benevis!!!!!!!
        //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


}


int main()
{
	Account total_accounts[100];
	Article total_articles[100];

	static int num_accounts = 0,num_articles=0;
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
				cout<<"\n"<<"2 : create article";
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
       		Account acc(user , pass);
       		total_accounts[num_accounts ++] = acc ; 
       
       
       break; }
       case 2:{
            //create article
           int n;
           string name,id,ref_id,date;
           char text[40000];
           cout<<"Enter Article's name: "<<endl;
           getline(cin,name);
           cout<<"Enter Article's ID: "<<endl;
           cin>>id;
           cout<<"Enter Article's reference ID: "<<endl;
           cin>>ref_id;
           cout<<"Enter Article's Date: "<<endl;
           cin>>date;
           cout<<"Enter Article's Text and add a '$' char in the end: "<<endl;
           cin.get(text,sizeof(text),'$')
           cout<<"Enter participating people count: "<<endl;
           cin>>n;
           Article article(name,id,ref_id,date,text,n);
           while(n>10 || n<=0){
               cout<<"Error: Enter a number between 1 and 10"<<endl;
               cin>>n;
           }
           for(int i=0; i<n ;i++){
               string username,password;
               cout<<"Enter Person Number "<<(i+1)<<"'s Username: "<<endl;
               cin>>username;
               cout<<"Enter Person Number "<<(i+1)<<"'s Password: "<<endl;
               cin>>password;
               Account a(username,password);
               article.add_account(a,i);

           }

           total_articles[num_articles++];

           break;
       }

       
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
