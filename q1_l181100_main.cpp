#include"q1_l181100_Header.h"
int main()
{

	bankaccount my_account("John Doe" , 549002);
	my_account.withdraw(4000);
	my_account.print();

	getch();
}