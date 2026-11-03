#include "Syntax_Squad_Banking.h"

Syntax_Squad_Banking::Syntax_Squad_Banking()
{
	//default constructor
	Firstname = "";
	MiddleName = "";
	Surname = "";
	Gender = ' ';
	IDNumber = "1234567891234";
	Address = "";

	Race = "";

	DateOfBirth = DateTime::Today;
	Marital = "";
	HomeLanguage = "";
	Citizenship = "";
	PhoneNumber = "1234567890";

	Username = "";
	Password = "";
	Role = "";
	Email = "";
	AccountStatus = "";

	AccountNumber = 000000;
	balance = 0.0;
	AccountType = "";
	Limit = 0.0;
}

Syntax_Squad_Banking::Syntax_Squad_Banking(String^ _Firstname, String^ _MiddleName,
    String^ _Surname, char _Gender, String^ _IDNumber, String^ _Address, String^ _Race ,
    DateTime _DateOfBirth, String^ _Marital, String^ _HomeLanguage, String^ _Citizenship,
	String^ _PhoneNumber, String^ _Username, String^ _Password, String^ _Role, String^ _Email,
    String^ _AccountStatus, int _AccountNumber, double _balance, String^ _AccountType,
    double _Limit)
{
	this->Firstname = _Firstname;
	this->MiddleName = _MiddleName;
	this->Surname = _Surname;
	this->Gender = _Gender;
	this->IDNumber = _IDNumber;
	this->Address = _Address;

	this->Race = _Race;

	this->DateOfBirth = _DateOfBirth;
	this->Marital = _Marital;
	this->HomeLanguage = _HomeLanguage;
	this->Citizenship = _Citizenship;
	this->PhoneNumber = _PhoneNumber;

	this->Username = _Username;
	this->Password = _Password;
	this->Role = _Role;
	this->Email = _Email;
	this->AccountStatus = _AccountStatus;

	this->AccountNumber = _AccountNumber;
	this->balance = _balance;
	this->AccountType = _AccountType;
	this->Limit = _Limit;
}

//setters

void Syntax_Squad_Banking::setFirstname(String^ _Firstname)
{
	this->Firstname = _Firstname;

}

void Syntax_Squad_Banking::setMiddleName(String^ _MiddleName)
{
	this->MiddleName = _MiddleName;

}

void Syntax_Squad_Banking::setSurname(String^ _Surname)
{
	this->Surname = _Surname;

}

void Syntax_Squad_Banking::setGender(char _Gender)
{
	this->Gender = _Gender;

}

void Syntax_Squad_Banking::setIDNumber(String^ _IDNumber)
{
	
	this->IDNumber = _IDNumber;
}

void Syntax_Squad_Banking::setAddress(String^ _Address)
{
	this->Address = _Address;
}

void Syntax_Squad_Banking::setRace(String^ _Race)
{
	this->Race = _Race;
}

void Syntax_Squad_Banking::setDateOfBirth(DateTime _DateOfBirth)
{
	this->DateOfBirth = _DateOfBirth;

}

void Syntax_Squad_Banking::setMarital(String^ _Marital)
{
	this->Marital = _Marital;

}

void Syntax_Squad_Banking::setHomeLanguage(String^ _HomeLanguage)
{
	this->HomeLanguage = _HomeLanguage;

}

void Syntax_Squad_Banking::setCitizenship(String^ _Citizenship)
{
	this->Citizenship = _Citizenship;
	
}

void Syntax_Squad_Banking::setPhoneNumber(String^ _PhoneNumber)
{
	this->PhoneNumber = _PhoneNumber;
}

void Syntax_Squad_Banking::setUsername(String^ _Username)
{
	this->Username = _Username;

}

void Syntax_Squad_Banking::setPassword(String^ _Password)
{
	this->Password = _Password;

}

void Syntax_Squad_Banking::setRole(String^ _Role)
{
	this->Role = _Role;

}

void Syntax_Squad_Banking::setEmail(String^ _Email)
{
	this->Email = _Email;
	
}

void Syntax_Squad_Banking::setAccountStatus(String^ _AccountStatus)
{
	this->AccountStatus = _AccountStatus;
}

void Syntax_Squad_Banking::setAccountNumber(int _AccountNumber)
{
	this->AccountNumber = _AccountNumber;

}

void Syntax_Squad_Banking::setBalance(double _balance)
{
	this->balance = _balance;

}

void Syntax_Squad_Banking::setAccountType(String^ _AccountType)
{
	this->AccountType = _AccountType;
	
}

void Syntax_Squad_Banking::setLimit(double _Limit)
{
	this->Limit = _Limit;
}

//getters

String^ Syntax_Squad_Banking::getFirstname()
{
	return Firstname;
}

String^ Syntax_Squad_Banking::getMiddleName()
{
	return MiddleName;
}

String^ Syntax_Squad_Banking::getSurname()
{
	return Surname;
}

char Syntax_Squad_Banking::getGender()
{
	return Gender;
}

String^ Syntax_Squad_Banking::getIDNumber()
{
	return IDNumber;
}

String^ Syntax_Squad_Banking::getAddress()
{
	return Address;
}

String^ Syntax_Squad_Banking::getRace()
{
	return Race;
}

DateTime Syntax_Squad_Banking::getDateOfBirth()
{
	return DateOfBirth;
}

String^ Syntax_Squad_Banking::getMarital()
{
	return Marital;
}

String^ Syntax_Squad_Banking::getHomeLanguage()
{
	return HomeLanguage;
}

String^ Syntax_Squad_Banking::getCitizenship()
{
	return Citizenship;
}

String^ Syntax_Squad_Banking::getPhoneNumber()
{
	return PhoneNumber;
}

String^ Syntax_Squad_Banking::getUsername()
{
	return Username;
}

String^ Syntax_Squad_Banking::getPassword()
{
	return Password;
}

String^ Syntax_Squad_Banking::getRole()
{
	return Role;
}

String^ Syntax_Squad_Banking::getEmail()
{
	return Email;
}

String^ Syntax_Squad_Banking::getAccountStatus()
{
	return AccountStatus;
}

int Syntax_Squad_Banking::getAccountNumber()
{
	return AccountNumber;
}

double Syntax_Squad_Banking::getBalance()
{
	return balance;
}

String^ Syntax_Squad_Banking::getAccountType()
{
	return AccountType;
}

double Syntax_Squad_Banking::getLimit()
{
	return Limit;
}
