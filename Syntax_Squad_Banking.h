#pragma once
using namespace System;

ref class Syntax_Squad_Banking
{
private:
	String^ Firstname;		//name of the user
	String^ MiddleName;		//second name of the user
	String^ Surname;		//surname of the user
	char Gender;			//gender of the user
	String^ IDNumber;		//identification of the user must be 13 digit
	String^ Address;		//it store the address of the user

	String^ Race;

	DateTime DateOfBirth;	//the date of birth of the user 1887-09-31
	String^ Marital;		//store if the user is maried , single or divorced
	String^ HomeLanguage;	//store the user Home Language
	String^ Citizenship;	//store the Citizenship of the user
	String^ PhoneNumber;		// the phone number of the user must be 10 digit

	String^ Username;		//The login user name
	String^ Password;		// the encrypted password *
	String^ Role;			//it store if the user is a admin or the customer
	String^ Email;			//store the email of the user like ac.za , co.za , gmail.com
	String^ AccountStatus;	//it store if the account is active or Locked 

	//account number must be int
	int AccountNumber;	//The account number of the user and it must be 6 digit and it will use random number but it must not start with 0
	double balance;			//The remaining balance the user is left with
	String^ AccountType;	//it store if the account is savings or current
	double Limit;			//this set the limit so that you can not send too much money.

public:
	Syntax_Squad_Banking();		//default constracture
	Syntax_Squad_Banking(String^ _Firstname, String^ _MiddleName, String^ _Surname,
		char _Gender, String^ _IDNumber, String^ _Address, String^ _Race, DateTime _DateOfBirth, String^ _Marital,
		String^ _HomeLanguage, String^ _Citizenship, String^ _PhoneNumber, String^ _Username,
		String^ _Password, String^ _Role, String^ _Email,String^ _AccountStatus,
		int _AccountNumber,double _balance, String^ _AccountType, double _Limit); // construtor

	//setters
	void setFirstname(String^ _Firstname);
	void setMiddleName(String^ _MiddleName);
	void setSurname(String^ _Surname);
	void setGender(char _Gender);
	void setIDNumber(String^ _IDNumber);
	void setAddress(String^ _Address);

	void setRace(String^ _Race);

	void setDateOfBirth(DateTime _DateOfBirth);
	void setMarital(String^ _Marital);
	void setHomeLanguage(String^ _HomeLanguage);
	void setCitizenship(String^ _Citizenship);
	void setPhoneNumber(String^ _PhoneNumber);

	void setUsername(String^ _Username);
	void setPassword(String^ _Password);
	void setRole(String^ _Role);
	void setEmail(String^ _Email);
	void setAccountStatus(String^ _AccountStatus);

	void setAccountNumber(int _AccountNumber);
	void setBalance(double _balance);
	void setAccountType(String^ _AccountType);
	void setLimit(double _Limit);

	//getters
	String^ getFirstname();
	String^ getMiddleName();
	String^ getSurname();
	char	getGender();
	String^ getIDNumber();
	String^ getAddress();

	String^ getRace();

	DateTime getDateOfBirth();
	String^	 getMarital();
	String^	 getHomeLanguage();	
	String^  getCitizenship();	
	String^ getPhoneNumber();

	String^ getUsername();		
	String^ getPassword();		
	String^ getRole();			
	String^ getEmail();			
	String^ getAccountStatus();	

	int getAccountNumber();	
	double	getBalance();			
	String^ getAccountType();	
	double	getLimit();			

};

