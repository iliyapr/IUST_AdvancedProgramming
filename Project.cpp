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
		int RatePassword()
		{
			int len , upper=0 ,lower=0 , sign=0 ; 
			len = Password.length();
			for(int i = 0 ; i<len ; i++)
			{
				if(Password[i]>=65 && Password[i]<=90) upper ++;
				else if(Password[i]>=97 && Password[i]<=122)lower ++;
				else sign ++ ;
			}
			// security 
			if(len<=10)
			{
				if((upper==0 && lower==0) ||(upper==0 && sign==0) || (sign==0 && lower==0)) return 0 ;
				if(upper==0 || lower==0 ||sign==0) return 1 ;
				if(upper>=3 && lower>=3 &&sign>=3) return 5 ;
				if(upper>=2 && lower>=2 &&sign>=2) return 4 ;
				return 3 ;
				
			}
			else if(len<=20)
			{
				if((upper==0 && lower==0) ||(upper==0 && sign==0) || (sign==0 && lower==0)) return 2 ;
				if(upper==0 || lower==0 ||sign==0) return 3 ;
				if(upper>=6 && lower>=6 &&sign>=6) return 7 ;
				if(upper>=4 && lower>=4 &&sign>=4) return 6 ;
				if(upper>=2 && lower>=2 &&sign>=2) return 5 ;
				return 4 ;
			}
			else 
			{
				if((upper==0 && lower==0) ||(upper==0 && sign==0) || (sign==0 && lower==0)) return 3 ;
				if(upper==0 || lower==0 ||sign==0) return 5 ;
				if(upper>=12 && lower>=12 &&sign>=12) return 10 ;
				if(upper>=10 && lower>=10 &&sign>=10) return 9 ;
				if(upper>=6 && lower>=6 &&sign>=6) return 8 ;
				if(upper>=4 && lower>=4 &&sign>=4) return 7 ;
				if(upper>=2 && lower>=2 &&sign>=2) return 6 ;
				return 5 ;
			}
		}
	    void suggested_password()
	    {
			srand(time(0));
			string str = "0987654321!@#$%^&*<>abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
			int x = rand()%31+ 15;
			string strong_pass ="";
			for(int i= 0 ; i<= x ; i++)
			{
				int j = rand()%72 ;
				strong_pass +=  str[j];
			}
			Password = strong_pass;
			cout<<"your new password is : "<<endl;
			cout<<Password<<endl;	
	    }
		
	
};
class Validate {
	

	protected :
		//string Article_words[5001] ,
		 string Article_Name_words[13] , Situation ;
		int num_name , num_text ;
	public :
		void pp()
		{
			cout<<num_name<<endl;
			for(int i=0; i<num_name ; i++) cout<<Article_Name_words[i]<<endl;
		}


        

};

class Article : public Validate
{
	friend void split_name(Article &);
	
    protected:
    int people_count;
	string  ID , Ref_ID , Date ;
	Account accounts[10];
	char *txt , *Name;
	
	public :
		Article(char *name ,string id , string ref_id , string date ,char *text,int people)
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



void split_name(Article &);
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
	        string ans ;
       		cout<<"Enter your Username: "<<endl;
       		string user,pass;
       		cin>>user;
       		cout<<"Enter your Password: "<<endl;
       		cin>>pass;
       		Account acc(user , pass);
       		cout<<"your password security is (1-10) :  "<<acc.RatePassword()<<endl;
       		if(acc.RatePassword()<=7)
			   {
			   	
       			cout<<endl<<"do you want a strong pass ? (y/n) : ";
       			cin>>ans;
       			if(ans=="y")
       			{
       				acc.suggested_password();
				}
			   }
       		total_accounts[num_accounts ++] = acc ; 
       
       
       break; }
       case 2:{
            //create article
           
           int n = 2 ;
           string id,ref_id,date , spoil;
           char text[40000] , name[200];
           cout<<"Enter Article's name: "<<endl;
           cin.get(name,sizeof(name),'$');cin>>spoil;
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
               string username,password , ans;
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
			   cout<<"your password security is (1-10) :  "<<a.RatePassword()<<endl;
       		   if(a.RatePassword()<=7)
			   {
			   	
       			cout<<endl<<"do you want a strong pass ? (y/n) : ";
       			cin>>ans;
       			if(ans=="y")
       			{
       				a.suggested_password();
				}
			   }
               article.add_account(a,i);
               total_accounts[num_accounts++] = a;
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
       case 5:
       	{
       	    split_name(total_articles[0]);
       		total_articles[0].pp();
       		break; 
		   }
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
	 ob.num_name = 0;
	do{
		
		ob.Article_Name_words[ob.num_name++] = p;
		p = strtok(NULL , " ");
	}while(p!=NULL);
}
