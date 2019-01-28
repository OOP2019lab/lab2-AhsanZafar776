#include<iostream>
#include<string>
#include"githubuser.h"

using namespace std;
bool comparison(githubuser name1,githubuser name2)
{
	if(name1.firstname==name2.firstname)
		if(name1.username==name2.username)
			if(name1.password==name2.password)
				if(name1.email==name2.email)
					return 1;
				else return 0;
			else return 0;
		else return 0;
	else return 0;


}
bool compareusername(githubuser *record,int i,string username)
{

for(int j=0;j<i;j++)
	{
		if(record[i].username==record[j].username)
		{
			cout<<"enter again.the user exists"<<endl;
		    cin>>record[i].username;
			compareusername(record,i,record[i].username);
		}
		

	}
return 1;
}
void input( githubuser *&record,int size)
{
	for(int i=0;i<size;i++)
	{

	cout<<"firstname:";
	cin>>record[i].firstname;
	cout<<"username:";
	cin>>record[i].username;
	compareusername(record,i,record[i].username);


	cout<<"password:";
	cin>>record[i].password;
	cout<<"email:";
	cin>>record[i].email;
	cout<<endl;
}
}
githubuser* searchuser( githubuser* record,int size,string find)
{
	for(int i =0;i<size;i++)
	{
	if(record[i].username==find)
		return &record[i];
	}
	return 0;
}



	

int main()
{
	int size=2;
	string find;
	githubuser *record = new githubuser [size];
	input(record,size);
	cout<<endl<<"enter a user you want to search";
	cin>>find;
	cout<<searchuser(record,size,find);


	delete [] record;

}

