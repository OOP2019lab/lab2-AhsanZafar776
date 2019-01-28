#include<iostream>
#include"githubuser1.h"
#include<fstream>
using namespace std;

void readdatafromfile(githubuser*record,string filepath)
{ifstream fin(filepath);
int users,folders;
fin>>users;
for(int i =0;i<users;i++)
{
	fin>>record[i].firstname;
	fin>>record[i].username;
	fin>>record[i].email;
	fin>>folders;

	for(int j=0;j<folders;j++)//makes dynamic array for folders
	{
		record[i].githubfolders= new string [folders];
		record[i].githubfolders[j];
	}

}
for(int i =0;i<users;i++)//deleting array
	delete [] record[i].githubfolders;
}

int main()
{
	int size=4;



	githubuser * record=new githubuser  [size];


	readdatafromfile( record, "hello.txt");//read data from file

	delete[] record;//deleting array

}