#include<bits/stdc++.h>
using namespace std ;

class Account 
{
	protected :
	    // :)
	    
	public :
		Account(int num_of_people  )
		{

		}

		
	
	
		
};

class Article : public Account
{
	string Name , ID , Ref_ID , Date ;
	char *txt ;
	
	public :
		Article(string name ,string id , string ref_id , string date ,string text, int n_people) : Account(n_people)
		{
			Name = name ; ID = id ; Ref_ID = ref_id ; Date = date ;
			txt = &text[0];
		}


};

int main()
{
	
	return 0;
}
