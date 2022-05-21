#include<bits/stdc++.h>
using namespace std ;

class Account 
{
	protected :
	   string authors[10][2]; //user va password
	   
	    
	public :
		Account(int num_of_people , string a[][2]  ){
            for(int i=0 ; i<num_of_people;i++){
                authors[i][0] = a[i][0]; //users
                authors[i][1] = a[i][1]; //passwords
            }
		}
        Account(string user,string password){
            
        }

		
	
	
		
};

class Article : public Account
{
	string Name , ID , Ref_ID , Date ;
	char *txt ;
	
	public :
		Article(string name ,string id , string ref_id , string date ,string text, int n_people,string a[][2]) : Account(n_people , a)
		{
			Name = name ; ID = id ; Ref_ID = ref_id ; Date = date ;
			txt = &text[0];
		}


};

int main(){
    int order;
    cin>>order;
    
       switch (order){

       case -1: exit(0); break; //khorooj

       case 0://hint
       cout<<"";
       break;

       case 1: {    //create account
       cout<<"Enter your Username: "<<endl;
       string user,password;
       cin>>user;
       cout<<"Enter your Password: "<<endl;
       cin>>password;
       
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
        
    
	return 0;
}
