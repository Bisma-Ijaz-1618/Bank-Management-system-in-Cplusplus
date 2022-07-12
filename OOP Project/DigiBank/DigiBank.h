#pragma once
/*The following Program is of a bank management system
  The system allows user to perform various actions with his money
  deposited in his account ranging from applying for loans
  ,transferring payments, paying his bills to collecting his interest etc.*/
#include<iostream>

class USER {
protected:
	float User_balance = 0.0;
	string User_Pin, UserFirst_Name, User_ID, User_Password, User_Fname, User_Address, User_Phone, AccountType, UserLast_Name;
public:
	void CheckBalance();
	void WithdrawAmount();
	void Transfer_Option();
	void Payment_Option();
	virtual void AccountDetails() = 0;
	void ApplyForLoan();
};

class ADMIN :public USER {
protected:
	string AM_Email, AM_Password, AM_Pin,
		BI_Email, BI_Password, BI_Pin,
		UB_Email, UB_Password, UB_Pin;
public:
	ADMIN();
	void NewUser();
	void AlreadyUser();
	void Deposit();
	void AccountDetails();
	void EditUserRecord();
	void DeleteUserRecord();
	void ShowAllRecords();
	void PaymentAllRecords();
};

class BANK : public ADMIN {
public:
	void Mainmenu();
	void Admin();
	void User();
	void Security();
};
