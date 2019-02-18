#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class bankaccount
{
private: 
	string username;
	int account_number;
	float balance;
	float maxbalance;
	int no_of_transactions;
	int *transaction;
	int no_o_users;
	int capacity;

public :

	bankaccount(string name,int account_number_1);

	void print();
	void withdraw(int withdrawbalance);
	void deposit();

};