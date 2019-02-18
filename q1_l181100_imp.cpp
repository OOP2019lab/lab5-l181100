#include"q1_l181100_Header.h"

bankaccount :: bankaccount(string name , int account_number_1)
{
	username = name;
	account_number	 = account_number_1;
	transaction = nullptr;
	balance = 200000;
	maxbalance = 0;
	capacity =1;
	no_of_transactions=0;

}
void bankaccount :: print()
{
	cout<<"name of user : \n"<<username<<endl;
	cout<<"account number of user : \n"<<account_number<<endl;
	cout<<"total number of transactions : \n"<<no_of_transactions<<endl;
	for(int i=0;i<no_of_transactions;i++)
	{
		cout<<"transaction : "<<transaction[i];
	}
}
void bankaccount :: withdraw(int withdrawbalance)
{
	int *temp=new int[1];

		if(transaction == nullptr)
		{
			transaction = new int[capacity];
	
			transaction[0] = -withdrawbalance;
					balance = balance -  withdrawbalance;
			no_of_transactions++;
		}

}


