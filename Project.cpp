#include<bits/stdc++.h>
using namespace std ;

class Account 
{
	private :
	 string Username , Password ;
	  
	public :
		Account(string user ,string pass) : Username(user) , Password(pass) {}
		Account(){}
		void p()//temporary method to show values of calsses , dude !!
		{
			cout<<Username<<endl;
			cout<<Password<<endl;
		}
		int check(string user , string pass)
		{
			if(Username == user && Password == pass) return 1;
			return 0;
		}
	
};

class Article : public Validate
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
		Article(){}
		void p() //temporary method to show values of calsses , dude !!
		{
			cout<<txt<<endl;
		}

    void add_account(Account account,int index){
        accounts[index] = account;
    }    


};

class Validate {
	
	friend void split(Validate & );

	protected :
		string Article_words[5001] , Article_Name_words[13] , Situation ;
		int num_name , num_text ;
	
    public:
    	void split_Article()
    	void split_Article_Name()

        

};


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

       case -1: exit(0); break; // EXIT 
		case  0 : // hint
			{
				cout<<"\n"<<"-1 : exit";
				cout<<"\n"<<" 0 : hint";
				cout<<"\n"<<" 1 : create account";
				cout<<"\n"<<" 2 : create article";
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
           
           int n = 2 ;
           string name,id,ref_id,date , spoil;
           char text[40000];
           cout<<"Enter Article's name: "<<endl;
           cin>>name;
           cout<<"Enter Article's ID: "<<endl;
           cin>>id;
           cout<<"Enter Article's reference ID: "<<endl;
           cin>>ref_id;
           cout<<"Enter Article's Date: "<<endl;
           cin>>date;
           cout<<"Enter Article's Text and add a '$' char in the end: "<<endl;
           cin.get(text,sizeof(text),'$');cin>>spoil;
           cout<<"Enter participating people count: "<<endl;
           cin>>n;
           Article article(name,id,ref_id,date,text,n);
           while(n>10 || n<=0){
               cout<<"Error: Enter a number between 1 and 10"<<endl;
               cin>>n;
           }
           for(int i=0; i<n ;i++){
           	   int flag =-1;
               string username,password;
               cout<<"Enter Person Number "<<(i+1)<<"'s Username: "<<endl;
               cin>>username;
               cout<<"Enter Person Number "<<(i+1)<<"'s Password: "<<endl;
               cin>>password;
               for(int j=0 ; j<num_accounts ; j++)
               {
               	    if(total_accounts[j].check(username , password))
               	    {
               	    	flag = j ; break ;
					   }
			   }
			   if(flag!=-1){
			   	article.add_account(total_accounts[flag] , i) ;
			   	cout<<"Account exists !!! "<<endl<<endl;
			   }
			   else{
			   	Account a(username,password);
               article.add_account(a,i);
               total_accounts[num_accounts++];
               cout<<"Account was added successfully !!! "<<endl<<endl;
			   }


           }

           total_articles[num_articles++] = article;

           break;
       }

       
       case 3:
       	{
       		for(int i=0 ; i<num_accounts ; i++) total_accounts[i].p();
       		break;
		}
       case 4:
       	{
       		cout<<num_articles ; 
       		for (int i=0 ; i<num_articles ; i++)
            total_articles[i].p();  
			break;     
	    }
       case 5:break;
       case 6:break;
       case 7:break;
       
       default:
           break;
       }
   }

    
    for(int i=0 ; i<num_accounts ; i++) total_accounts[i].p();
    
	return 0;
}
void split_name(Article &ob)
{
	char *p ;
	p = strtok(ob.Name , " ") ;
	int ob.num_name = 0;
	do{
		
		ob.
	}
}
void split_name(Article &ob)
{

}
