
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <cstdio>

using namespace std;

class USER {
protected:
	float User_balance = 0.0f;
	string User_Pin, User_Name, User_ID, User_Password, User_Fname, User_Address, User_Phone, AccountType;
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
	void Userlogin();
};


//////////////////////////  MAINMENU  ///////////////////////
void BANK::Mainmenu() {
	int Ans;
	do
	{
		system("cls");
		// Main menu
		cout << "\n\n\t\t\t\tOurATM";
		cout << "\n\n\t  You are:";
		cout << "\n\n\t 1. User";
		cout << "\n\t 2. Admin";
		cout << "\n\t 3. EXIT";
		cout << "\n\n\t  Enter Your Choice :: ";
		cin >> Ans;

		// Decision
		switch (Ans)
		{
		case 1: User(); break;
		case 2: Security(); break;
		case 3: exit(0);
		default:cout << "\n\n  Invalid Value, Try Again....\n  ";
			system("pause");
		}
	} while (1);
}

// For Admins
void BANK::Security() {
	string Email, Password, Pin;
	char PI, PASS;
	system("cls");
	cout << "\n\n\t\t\tLogin Account";
	cout << "\n\n  E-mail : ";
	cin >> Email;

	cout << "\n\n  Password : ";
	// Getting Password & Displaying "*"
	for (int i = 1; i <= 5; i++) {
		PASS = _getch();
		Password += PASS;
		cout << "*";
	}

	cout << "\n\n  Pin Code : ";
	// Getting pin & Displaying "*"
	for (int i = 1; i <= 4; i++) {
		PI = _getch();
		Pin += PI;
		cout << "*";
	}

	if (((Email == AM_Email) || (Email == BI_Email) || (Email == UB_Email)) && ((Password == AM_Password) || (Password == BI_Password) || (Password == UB_Password)) && ((Pin == AM_Pin) || (Pin == BI_Pin) || (Pin == UB_Pin)))
		Admin();
	else {
		cout << "\n\n  Your credentials are incorrect or have expired. Please try again or reset your password...\n  ";
		system("pause");
	}
}



// Menu of ADMIN
void BANK::Admin() {
	do
	{
		system("cls");
		int Ans;
		cout << "\n\n\t\t\t\t ADMIN Management";
		cout << "\n\n\t 1. New User";
		cout << "\n\t 2. Already User";
		cout << "\n\t 3. Deposit Ammount";
		cout << "\n\t 4. Search User Records";
		cout << "\n\t 5. Edit User Records";
		cout << "\n\t 6. Delete User Records";
		cout << "\n\t 7. Show All Records";
		cout << "\n\t 8. Check Payments";
		cout << "\n\t 9. GO BACK";
		cout << "\n\n  Your Choice :: ";
		cin >> Ans;

		switch (Ans)
		{
		case 1:NewUser(); break;
		case 2:AlreadyUser(); break;
		case 3:Deposit(); break;
		case 4:AccountDetails(); break;
		case 5:EditUserRecord(); break;
		case 6:DeleteUserRecord(); break;
		case 7:ShowAllRecords(); break;
		case 8:PaymentAllRecords(); break;
		case 9:Mainmenu(); break;
		default:cout << "\n\n  Invalid Value. Please try again ...\n  ";
			system("pause"); break;
		}

	} while (1);	// Infinte
}


// Menu of USER
void BANK::User() {
	do
	{
		system("cls");
		int Ans;
		cout << "\n\n\t\t\t\t ATM";
		cout << "\n\n\t 1. Check Balance";
		cout << "\n\t 2. WithDraw Ammount";
		cout << "\n\t 3. Transfer Options";
		cout << "\n\t 4. Payment Options";
		cout << "\n\t 5. Account Details";
		cout << "\n\t 6. Apply for Loans";
		cout << "\n\t 7. GO BACK";
		cout << "\n\n  Your Choice :: ";
		cin >> Ans;

		switch (Ans)
		{
		case 1:CheckBalance(); break;
		case 2:WithdrawAmount(); break;
		case 3:Transfer_Option(); break;
		case 4:Payment_Option(); break;
		case 5:AccountDetails(); break;
		case 6:ApplyForLoan(); break;
		case 7:Mainmenu(); break;
		default:cout << "\n\n  Invalid Value. Please try again ...\n  ";
			system("pause"); break;
		}
	} while (1);	// Infinte
}

//////////////////////////  ADMIN  ///////////////////////
ADMIN::ADMIN() {
	AM_Email = "amad@ouratm.com";
	AM_Password = "Amaad";
	AM_Pin = "3527";

	BI_Email = "bisma@ouratm.com";
	BI_Password = "Bisma";
	BI_Pin = "3519";

	UB_Email = "ubaid@ouratm.com";
	UB_Password = "Ubaid";
	UB_Pin = "3453";
}

void ADMIN::NewUser() {
	fstream file;
	//Back:			// If User ID Already Exit then again
	system("cls");
	// Temp variables to catch data from file
	int ch, found = 0;
	float bal;
	string Na, Fna, Pa, Add, Ph, ID, pi, AT;
	cout << "\n\n\t\t\t\tAdd New User";
	cout << "\n\n  User ID : ";
	cin >> User_ID;
	cout << "\n\n  Name : ";
	cin >> User_Name;
	cout << "\n\n  Father Name : ";
	getline(cin,User_Fname);
	if(cin.peek ()=='\n') cin.ignore();
	cout << "\n\n  Parmanent Address : ";
	cin >> User_Address;
	cout << "\n\n  Pin Code : ";
	cin >> User_Pin;
	cout << "\n\n  Password : ";
	cin >> User_Password;
	cout << "\n\n  Phone No. : ";
	cin >> User_Phone;
	cout << "\n\n  Deposit Ammount : ";
	cin >> User_balance;

	abc:
	cout << "\n\n\t\tAccount Type";
	cout << "\n\n\t1. Platinum  2. Gold  3. Silver\n\n  Select One :: ";
	cin >> ch;
	switch (ch)
	{
	case 1: AccountType = "PLATINIUM"; break;
	case 2: AccountType = "GOLD"; break;
	case 3: AccountType = "SILVER"; break;
	default:
		cout << "\n\n  Invalid Choice ... ";
		system("pause");
		system("cls");
		cout << "\n\n\t\t\t\tAdd New User";
		cout << "\n\n  User ID : "<<User_ID;
		cout << "\n\n  Name : "<< User_Name;
		cout << "\n\n  Father Name : "<< User_Fname;
		cout << "\n\n  Parmanent Address : "<< User_Address;
		cout << "\n\n  Pin Code : "<< User_Pin;
		cout << "\n\n  Password : "<< User_Password;
		cout << "\n\n  Phone No. : "<< User_Phone;
		cout << "\n\n  Deposit Ammount : "<< User_balance;
		goto abc;
	}

	file.open("DATA.dat", ios::in);		// Open file
	if (!file)							// If file does not exit
	{						
		file.open("DATA.dat", ios::app | ios::out);
		file << User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
		file.close();
	}
	else
	{
		file >> ID >> Na >> Fna >> Add >> pi >> Pa >> Ph >> bal >> AT;
		while (!(file.eof()))
		{
			if (ID == User_ID)
			{
				cout << "\n\n    User ID Already Exit...\n\n  ";
				system("pause");
				found++;
				break;
				//goto Back;
			}
		file >> ID >> Na >> Fna >> Add >> pi >> Pa >> Ph >> bal>>AT;
		}
		file.close();
		if (found == 0)
		{
			file.open("DATA.dat", ios::app | ios::out);
			file << User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
			file.close();
		}
	}
	if(found == 0)
	{ 
	cout << "\n\n\t\tAccount Created Successfully....\n\n  ";
	system("pause");
	}
}

void ADMIN::AlreadyUser() {
	fstream file;
	system("cls");
	string id;
	int Found = 0;
	cout << "\n\n\t\t\t\tAlready User";
	file.open("DATA.dat", ios::in);
	// If file does not exit
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n Enter User ID :: ";
		cin >> id;
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof())
		{
			if (id == User_ID)
			{
				system("cls");
				cout << "\n\n\t\t\t\tAlready User";
				cout << "\n\n  User ID :: " << User_ID << "\n  Pin code :: " << User_Pin << "\n  Password :: " << User_Password;
				Found++;
				//break;
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance>>AccountType;
		}
		file.close();
		if (Found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  ";
		system("pause");
	}

}

void ADMIN::Deposit()
{
	fstream file, updatedFile;
	string id;
	float depAmount;
	int Found = 0;
	system("cls");
	cout << "\n\n\t\t\t\tDeposit Amount";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n Enter User ID :: ";
		cin >> id;
		updatedFile.open("updatedData.dat", ios::app | ios::out);
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance>>AccountType;
		while (!file.eof())
		{
			if (id == User_ID)
			{
				cout << "\n\n  Ammount for Deposit :: ";
				cin >> depAmount;
				User_balance += depAmount;
				updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
				Found++;
				cout << "\n\n\tYour Ammount " << depAmount << " Sucessfully Deposit\n\n";
			}
			else
			{
				updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance>>AccountType;
		}
		file.close();
		updatedFile.close();
		
		if (remove("DATA.dat") == 0)
			cout << ".";
		if(rename("updatedData.dat","DATA.dat") == 0)
			cout << ".";
		if (Found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  "; 
		system("pause");
	}
}

void ADMIN::AccountDetails()
{
	fstream file;
	system("cls");
	string id;
	int found = 0;
	cout << "\n\n\t\t\t\tSearching User Record";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  User ID :: ";
		cin >> id;
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof()){
			if (id == User_ID) {
				system("cls");
				cout << "\n\n\t\t\t\tSearched User Record";
				cout << "\n\n\n  User ID :: " << User_ID
					 << "\n\n  Name :: " << User_Name
					 << "\n\n  Father Name :: " << User_Fname
					 << "\n\n  Permanent Address :: " << User_Address
					 << "\n\n  Phone Number :: " << User_Phone
					 << "\n\n  Balance :: " << User_balance
					 << "\n\n  Account Type :: " << AccountType;
				cout << "\n\n====================================================\n\n  ";
				found++;
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance>>AccountType;
		}
		file.close();
		if (found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  ";
			system("pause");
	}

}


void ADMIN::EditUserRecord()
{
	int found = 0;
	system("cls");
	fstream file, updatedFile;
	string id, N, Fn, Add, Pi, Pass, Ph, AT;
	int ch;
	cout << "\n\n\t\t\t\tEdit User Record";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Enter User ID :: ";
		cin >> id;
		updatedFile.open("updatedData.dat", ios::app | ios::out);
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof()) {
			if (id == User_ID) {
				system("cls");
				cout << "\n\n\t\t\tEdit User Record";
				cout << "\n\n  Name : ";
				cin >> N;
				cout << "\n\n  Father Name : ";
				cin >> Fn;
				cout << "\n\n  Parmanent Address : ";
				cin >> Add;
				cout << "\n\n  Pin Code (4 digit) : ";
				cin >> Pi;
				cout << "\n\n  Password : ";
				cin >> Pass;
				cout << "\n\n  Phone No. : ";
				cin >> Ph;
				back:
				cout << "\n\n\t\tAccount Type";
				cout << "\n\n\t1. Platinum  2. Gold  3. Silver\n\n  Select One :: ";
				cin >> ch;
				switch (ch)
				{
				case 1: AccountType = "PLATINIUM"; break;
				case 2: AccountType = "GOLD"; break;
				case 3: AccountType = "SILVER"; break;
				default:
					system("cls");
					cout << "\n\n\t\t\tEdit User Record";
					cout << "\n\n  Name : "<<N;
					cout << "\n\n  Father Name : "<<Fn;
					cout << "\n\n  Parmanent Address : "<<Add;
					cout << "\n\n  Pin Code (4 digit) : "<<Pi;
					cout << "\n\n  Password : "<<Pass;
					cout << "\n\n  Phone No. : "<<Ph;
					goto back;
				}

				updatedFile<< User_ID << " " << N << " " << Fn << " " << Add << " " << Pi << " " << Pass << " " << Ph << " " << User_balance << " " << AT << "\n";
				cout << "\n\n  Record updated Successfully\n\n";
				found++;
			}
			else
			{
				updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		updatedFile.close();
		if (remove("DATA.dat") == 0)
			cout << ".";
		if (rename("updatedData.dat", "DATA.dat") == 0)
			cout << ".";
		if (found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  "; 
		system("pause");
	}
}


void ADMIN::DeleteUserRecord()
{
	fstream file, updatedFile;
	system("cls");
	string id;
	int found = 0;
	cout << "\n\n\t\t\t\tEdit User Record";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Enter User ID :: ";
		cin >> id;
		updatedFile.open("updatedData.dat", ios::app | ios::out);
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof()) {
			if (id == User_ID) {
				cout << "\n\n  Record Deleted Successfully\n\n";
				found++;
			}
			else
			{
				updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		updatedFile.close();
		if (remove("DATA.dat") == 0)
			cout << ".";
		if (rename("updatedData.dat", "DATA.dat") == 0)
			cout << ".";
		if (found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  "; 
		system("pause");
	}
}


void ADMIN::ShowAllRecords()
{
	fstream file;
	system("cls");
	cout << "\n\n\t\t\t\tAll User Records";
	string id;
	int found = 0;
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof()) {
			cout << "\n\n\n  User ID :: " << User_ID
				<< "\n\n  Name :: " << User_Name
				<< "\n\n  Father Name :: " << User_Fname
				<< "\n\n  Permanent Address :: " << User_Address
				<< "\n\n  Phone Number :: " << User_Phone
				<< "\n\n  Balance :: " << User_balance
				<< "\n\n=================================================";
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
			found++;
		}
		file.close();
		if(found == 0)
			cout << "\n\n\t\tDatabase is Empty.....";
		cout << "\n\n  ";
		system("pause");
	}
}

void ADMIN::PaymentAllRecords()
{
	fstream file;
	system("cls");
	cout << "\n\n\t\t\t\tAll Records of Paid Bills";
	float BillAmount;
	string ID, BillName, Date;
	int found = 0;
	file.open("bill.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		file >> ID >> BillName >> BillAmount >> Date;
		while (!file.eof()) {
			cout << "\n\n\n  User ID :: " << ID
				<< "\n\n  Bill Name :: " << BillName
				<< "\n\n  Bill Amount :: " << BillAmount
				<< "\n\n  Payment Date :: " << Date
				<< "\n\n=================================================";
			file >> ID >> BillName >> BillAmount >> Date;
			found++;
		}
		file.close();
		if (found == 0)
			cout << "\n\n\t\tDatabase is Empty.....";
		cout << "\n\n  ";
		system("pause");
	}
}

//////////////////////////  User  ///////////////////////
void USER::WithdrawAmount()
{
	fstream file, updatedFile;
	string id, pin;
	char ch;
	float withAmount, c = 0;
	int Found = 0;
	system("cls");
	cout << "\n\n\t\t\t\tWithdraw Amount";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Your ID :: ";
		cin >> id;
		cin.ignore(); //clear buffer before taking new Line
		cout << "\n\n  Pin :: ";
		while (ch = _getch())
		{
			if (ch != '\r')
				pin += ch;
			else
				break;
			cout << "*";
		}
		updatedFile.open("updatedData.dat", ios::app | ios::out);
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof())
		{
			if ((id == User_ID) && (pin == User_Pin))
			{
				cout << "\n\n  Withdraw Amount :: ";
				cin >> withAmount;
				if (withAmount <= User_balance)
				{
					User_balance -= withAmount;
					updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
					cout << "\n\n\tYour Ammount " << withAmount << " Sucessfully Withdrawn";
					cout << "\n\n\tCurrent Balance is " << User_balance << "\n\n";
				}
				else
				{
					updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
					cout << "\n\n\tYour are "<<withAmount-User_balance<<" credits Less .... ";
				}
				Found++;
			}
			else
			{
				updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		updatedFile.close();
		if (remove("DATA.dat") == 0)
			cout << ".";
		if (rename("updatedData.dat", "DATA.dat") == 0)
			cout << ".";
		if (Found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  ";
		system("pause");
	}

}

void USER::Transfer_Option()
{
	fstream file, updatedFile;
	system("cls");
	string SenderID, ReciverID;
	float TransactionAmount, found = 0;
	cout << "\n\n\t\t\t\tPayment Transfer";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Sender User ID for Transaction :: ";
		cin >> SenderID;
		cout << "\n\n  Reciver User ID for Transaction :: ";
		cin >> ReciverID;
		cout << "\n\n  Enter Transaction Amount :: ";
		cin >> TransactionAmount;
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		
		// Checking IDs exists or not
		while (!file.eof())
		{
			if ((SenderID == User_ID) && (TransactionAmount <= User_balance))
				found++;
			else if (ReciverID == User_ID)
				found++;

			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();

		// IF both User Exists
		if (found == 2)
		{
			file.open("DATA.dat", ios::in);
			updatedFile.open("updatedData.dat", ios::app | ios::out);
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
			while (!file.eof())
			{
				if (SenderID == User_ID)
				{
					User_balance -= TransactionAmount;
					updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
				}
				else if (ReciverID == User_ID)
				{
					User_balance += TransactionAmount;
					updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
				}
				else
				{
					updatedFile<< User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
				}
				file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
			}
			file.close();
			updatedFile.close();
			if (remove("DATA.dat") == 0)
				cout << ".";
			if (rename("updatedData.dat", "DATA.dat") == 0)
				cout << ".";
			cout << "\n\n\t\tPayment Arrived at the Destination Successfully";
		}
		else
		{
            if(found==1)
                cout<<"\n\n\t\tTransaction Amount is greater then User Current Balance";
            else
			    cout << "\n\n\t\tCannot find User records, Kindly check check the IDs or Record does not Exist.....";
		}
		cout << "\n\n  ";
		system("pause");
	}
}


void USER::Payment_Option()
{
	system("cls");
	fstream file, updatedFile;
	string id, BillName, pin;
	float BillAmount, found = 0;
	int ch;
	SYSTEMTIME time;
	cout << "\n\n\t\t\t\tBills Payment Option";
	file.open("DATA.dat", ios::in);
	if (!file)
	{
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
	Back:
		system("cls");
		cout << "\n\n\t\t\t\tBills Payment Option";
		cout << "\n\n  Select One of the Following :: ";
		cout << "\n\n  1. Utility";
		cout << "\n\n  2. TELCO";
		cout << "\n\n  3. STUDENT FEE";
		cout << "\n\n  4. CREDIT CARD";
		cout << "\n\n  5. INTERNET BILLS";
		cout << "\n\n  6. INTERNET SHOPPING";
		cout << "\n\n  7. Govt. PAYMENTS";
		cout << "\n\n  8. AIR FARE";
		cout << "\n\n  9. INSURANCE";
		cout << "\n\n 10. INVESTMENTS";
		cout << "\n\n 11. elPO";
		cout << "\n\n 12. ELECTRICITY";
		cout << "\n\n 13. GAS BILLS";
		cout << "\n\n  Select One :: ";
		cin >> ch;

		switch (ch)
		{
		case 1:BillName = "UTILITY"; break;
		case 2:BillName = "TELCO"; break;
		case 3:BillName = "STUDENT_FEE"; break;
		case 4:BillName = "CREDIT_CARD"; break;
		case 5:BillName = "INTERNET_BILLS"; break;
		case 6:BillName = "INTERNET_SHOPPING"; break;
		case 7:BillName = "Govt_PAYMENTS"; break;
		case 8:BillName = "AIR_FARE"; break;
		case 9:BillName = "INSURANCE"; break;
		case 10:BillName = "INVESTMENTS"; break;
		case 11:BillName = "elPO"; break;
		case 12:BillName = "ELECTRICITY"; break;
		case 13:BillName = "GAS_BILLS"; break;
		default:
			cout << "\n\n  Invalid Choice ... ";
			system("pause");
			goto Back;
		}

		system("cls");
		cout << "\n\n\t\t\t\tBills Payment Option";
		cout << "\n\n  Your ID :: ";
		cin >> id;
		cin.ignore(); //clear buffer before taking new Line
		cout << "\n\n  Pin :: ";
		while (ch = _getch())
		{
			if (ch != '\r')
				pin += ch;
			else
				break;
			cout << "*";
		}
		cout << "\n\n Bill Amount :: ";
		cin >> BillAmount;
		updatedFile.open("updatedData.dat", ios::app | ios::out);
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof())
		{
			if ((id == User_ID) && (BillAmount <= User_balance) && (User_Pin == pin))
			{
				User_balance -= BillAmount;
				updatedFile << User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";
				found++;
			}
			else
				updatedFile << User_ID << " " << User_Name << " " << User_Fname << " " << User_Address << " " << User_Pin << " " << User_Password << " " << User_Phone << " " << User_balance << " " << AccountType << "\n";

			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		updatedFile.close();
		if (remove("DATA.dat") == 0)
			cout << ".";
		if (rename("updatedData.dat", "DATA.dat") == 0)
			cout << ".";
		if (found == 1)
		{
			GetSystemTime(&time);
			file.open("bill.dat", ios::app | ios::out);
			file << id << " " << BillName << " " << BillAmount << " " << time.wDay << "/" << time.wMonth << "/" << time.wYear << "\n";
			file.close();
			cout << "\n\n\t" << BillName << " Bill Paid Successfully";
		}
		else
			cout << "\n\n\t\tUser ID is Invalid or Amount Exceeds the Total Balance";
		cout << "\n\n  ";
		system("pause");
	}
}

void USER::CheckBalance()
{
	system("cls");
	cout << "\n\n\t\t\t\tUser Login";
	fstream file;
	int found = 0;
	string id, pin;
	char ch, c = 0;
	file.open("DATA.dat", ios::in);
	if (!file)
	{
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Your ID :: ";
		cin >> id;
		cin.ignore(); //clear buffer before taking new Line
		cout << "\n\n  Pin :: ";
		while (ch = _getch())
		{
			if (ch != '\r')
				pin += ch;
			else
				break;
			cout << "*";
		}
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof())
		{
			if ((id == User_ID) && (pin == User_Pin))
			{
				cout << "\n\n\t Your Current Balance is :: " << User_balance;
				cout << "\n\n  ";
				system("pause");
				found++;
				break;
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		if (found == 0)
		{
			cout << "\n\n  Your credentials are incorrect or have expired. Please try again or reset your password...\n\n  ";
			system("pause");
		}
	}
}

void USER::AccountDetails()
{
	fstream file;
	string id, pin;
	char ch;
	float c = 0;
	int Found = 0;
	system("cls");
	cout << "\n\n\t\t\t\tAccount Details";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Your ID :: ";
		cin >> id;
		cin.ignore(); //clear buffer before taking new Line
		cout << "\n\n  Pin :: ";
		while (ch = _getch())
		{
			if (ch != '\r')
				pin += ch;
			else
				break;
			cout << "*";
		}
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof())
		{
			if ((id == User_ID) && (pin == User_Pin))
			{
				system("cls");
				cout << "\n\n\t\t\t\tCheck Details";
				cout << "\n\n\n  User ID :: " << User_ID
					<< "\n\n  Name :: " << User_Name
					<< "\n\n  Password :: " << User_Password
					<< "\n\n  Father Name :: " << User_Fname
					<< "\n\n  Permanent Address :: " << User_Address
					<< "\n\n  Phone Number :: " << User_Phone
					<< "\n\n  Balance :: " << User_balance
					<< "\n\n  Account Type :: " << AccountType
					<< "\n\n=================================================";
				Found++;
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		if (Found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  ";
		system("pause");
	}
}

void USER::ApplyForLoan()
{
	fstream file;
	string id, pin;
	char ch;
	float c = 0, Amount, MonthlyReturn = 0, Tenure, InterestRate = 0.08;
	int Found = 0, choice;
	system("cls");
	cout << "\n\n\t\t\t\tApply for Loan";
	file.open("DATA.dat", ios::in);
	if (!file) {
		cout << "\n\n  File Does not Exit\n\n  ";
		system("pause");
	}
	else
	{
		cout << "\n\n  Your ID :: ";
		cin >> id;
		cin.ignore(); //clear buffer before taking new Line
		cout << "\n\n  Pin :: ";
		while (ch = _getch())
		{
			if (ch != '\r')
				pin += ch;
			else
				break;
			cout << "*";
		}
		file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		while (!file.eof())
		{
			if ((id == User_ID) && (pin == User_Pin))
			{
				Back:
				system("cls");
				cout << "\n\n\t\t\t\tApply for Loan";
				cout << "\n\n  Select What Best Describes You\n";
				cout << "\n  1. Salaried Individual";
				cout << "\n  2. Self-Employeed";
				cout << "\n\n  Select One :: ";
				cin >> choice;
				
				cout << "\n\n  Amount For Loan :: ";
				cin >> Amount;
				cout << "\n  Tenure of Loan (In Months) :: ";
				cin >> Tenure;

				switch (choice)
				{
				case 1:InterestRate = 0.06;
					Amount += (Amount* InterestRate);
					MonthlyReturn = Amount / Tenure;
					  break;
				case 2:Amount += (Amount * InterestRate);
					  MonthlyReturn = Amount / Tenure; 
					  break;
				default:
					cout << "\n\n  Invalid Choice ... ";
					system("pause");
					goto Back;
				}

				cout << "\n\n\t\t _________________________________________________________________";
				cout << "\n\t\t|                                   |                             |";
				cout << "\n\t\t|         DESCRIPTION               |     INSTALMENT AMOUNT       |";
				cout << "\n\t\t|___________________________________|_____________________________|";
				cout << "\n\t\t|                                   |                             |";
				cout << "\n\t\t|   ESTIMATED MONTHLY INSTALMENT    |            "<<MonthlyReturn<<"             |";
				cout << "\n\t\t|___________________________________|_____________________________|";
				Found++;
				break;
			}
			file >> User_ID >> User_Name >> User_Fname >> User_Address >> User_Pin >> User_Password >> User_Phone >> User_balance >> AccountType;
		}
		file.close();
		if (Found == 0)
			cout << "\n\n\t\tCannot find user record, Kindly check check the ID or Record does not Exist.....";
		cout << "\n\n  ";
		system("pause");
	}
}


int main()
{
	BANK ATM;
	ATM.Mainmenu();
	return 0;
}