#pragma once
#include "LoginMain.h"
#include "RegisterMain.h"
#include "Syntax_Squad_Banking.h"
#include "ForgotPassword.h"
#include "HomeSystem.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Design;
	using namespace System::Drawing::Drawing2D;
	using namespace System::IO; 
	using namespace System::Collections::Generic;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for LoginMain
	/// </summary>
	public ref class LoginMain : public System::Windows::Forms::Form
	{
	public:
		LoginMain(void)
		{
			InitializeComponent();

			userList = gcnew List<Syntax_Squad_Banking^>();
			LoadUsersFromFile();

			// DEBUG: Show first user data if available
			if (userList->Count > 0)
			{
				/*MessageBox::Show(
					"Total Users: " + userList->Count + "\n\n" +
					"First User Details:\n" +
					"Username: " + userList[0]->getUsername() + "\n" +
					"ID Number: " + userList[0]->getIDNumber() + "\n" +
					"Phone: " + userList[0]->getPhoneNumber() + "\n" +
					"Account: " + userList[0]->getAccountNumber(),
					"Debug - Users Loaded",
					MessageBoxButtons::OK, MessageBoxIcon::Information);*/
			}
			else
			{
				MessageBox::Show("No users were loaded from file!\n\n" +
					"File path: " + Application::StartupPath + "\\bankingUser.txt",
					"Debug - No Users",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			// Start with password VISIBLE
			isPasswordVisible = true;
			txtPassword->PasswordChar = L'\0';
			chkHidePassword->Checked = false;
			chkHidePassword->Text = L"Hide Password";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ lblPassword;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ lblRegister;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnForgotPassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ chkHidePassword;





	private:
		// List to store all users loaded from file
		List<Syntax_Squad_Banking^>^ userList;
		bool isPasswordVisible; //  DECLARE THIS FIRST!
		Syntax_Squad_Banking^ currentLoggedInUser;  // store logged in user

		String^ CleanString(String^ input)
		{
			if (input == nullptr) return "";
			return input->Trim();
		}


		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginMain::typeid));
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblRegister = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnForgotPassword = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chkHidePassword = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(269, 152);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(110, 25);
			this->lblUsername->TabIndex = 0;
			this->lblUsername->Text = L"Username";
			// 
			// lblPassword
			// 
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(269, 245);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(124, 29);
			this->lblPassword->TabIndex = 1;
			this->lblPassword->Text = L"Password";
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(438, 146);
			this->txtUsername->MaxLength = 30;
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(541, 30);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(438, 242);
			this->txtPassword->MaxLength = 30;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(541, 30);
			this->txtPassword->TabIndex = 3;
			// 
			// lblRegister
			// 
			this->lblRegister->AutoSize = true;
			this->lblRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegister->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lblRegister->Location = System::Drawing::Point(904, 404);
			this->lblRegister->Name = L"lblRegister";
			this->lblRegister->Size = System::Drawing::Size(91, 25);
			this->lblRegister->TabIndex = 4;
			this->lblRegister->Text = L"Register";
			this->lblRegister->Click += gcnew System::EventHandler(this, &LoginMain::lblRegister_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::Control;
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnLogin->Location = System::Drawing::Point(421, 464);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(192, 62);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginMain::btnLogin_Click);
			// 
			// btnForgotPassword
			// 
			this->btnForgotPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnForgotPassword->FlatAppearance->BorderSize = 0;
			this->btnForgotPassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnForgotPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnForgotPassword->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnForgotPassword->Location = System::Drawing::Point(770, 464);
			this->btnForgotPassword->Name = L"btnForgotPassword";
			this->btnForgotPassword->Size = System::Drawing::Size(192, 62);
			this->btnForgotPassword->TabIndex = 6;
			this->btnForgotPassword->Text = L"Forgot Password";
			this->btnForgotPassword->UseVisualStyleBackColor = false;
			this->btnForgotPassword->Click += gcnew System::EventHandler(this, &LoginMain::btnForgotPassword_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 66);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Login";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel1->Location = System::Drawing::Point(33, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1249, 298);
			this->panel1->TabIndex = 18;
			// 
			// chkHidePassword
			// 
			this->chkHidePassword->AutoSize = true;
			this->chkHidePassword->BackColor = System::Drawing::Color::LightSkyBlue;
			this->chkHidePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkHidePassword->Location = System::Drawing::Point(900, 328);
			this->chkHidePassword->Name = L"chkHidePassword";
			this->chkHidePassword->Size = System::Drawing::Size(181, 30);
			this->chkHidePassword->TabIndex = 19;
			this->chkHidePassword->Text = L"Hide Password";
			this->chkHidePassword->UseVisualStyleBackColor = false;
			this->chkHidePassword->CheckedChanged += gcnew System::EventHandler(this, &LoginMain::chkHidePassword_CheckedChanged);
			// 
			// LoginMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1416, 675);
			this->Controls->Add(this->chkHidePassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnForgotPassword);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->lblRegister);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginMain";
			this->Text = L"LoginMain";
			this->Load += gcnew System::EventHandler(this, &LoginMain::LoginMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void LoginMain_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//To make the button currved
		int radius = 20;

		System::Drawing::Drawing2D::GraphicsPath^ path =
			gcnew System::Drawing::Drawing2D::GraphicsPath();

		System::Drawing::Rectangle rect = btnLogin->ClientRectangle;

		path->AddArc(rect.X, rect.Y, radius, radius, 180, 90);
		path->AddArc(rect.Width - radius, rect.Y, radius, radius, 270, 90);
		path->AddArc(rect.Width - radius, rect.Height - radius, radius, radius, 0, 90);
		path->AddArc(rect.X, rect.Height - radius, radius, radius, 90, 90);

		path->CloseFigure();

		btnLogin->Region = gcnew System::Drawing::Region(path);
		btnForgotPassword->Region = gcnew System::Drawing::Region(path);

		//LoadUsersFromFile();


		
		
	}

	private: System::Void lblRegister_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RegisterMain^ r1 = gcnew RegisterMain();
		this->Hide();  // Hides current form
		r1->ShowDialog();
		this->Show();  // When Cards closes, this form reappears

	}

	private: System::Void btnForgotPassword_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//this must show a forgot password form to reset the password
		ForgotPassword^ forgatpassword = gcnew ForgotPassword(userList);
		this->Hide();  // Hides current form
		forgatpassword->ShowDialog();
		this->Show();  // When Cards closes, this form reappears

	}

	private: System::Void chkHidePassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (chkHidePassword->Checked)  // When checkbox is TICKED (checked)
		{
			// HIDE the password
			txtPassword->PasswordChar = L'*';  // Mask with *
			chkHidePassword->Text = L"Show Password";
		}
		if(chkHidePassword->Checked == false) // When checkbox is UNCHECKED
		{
			// SHOW the password
			txtPassword->PasswordChar = L'\0';  // No mask (shows actual characters)
			chkHidePassword->Text = L"Hide Password";
		}

	}

	// In your form constructor or InitializeComponent() method
	void InitializePasswordHideFeature()
	{
		isPasswordVisible = false;  // Initially password is hidden

		//Set password char to mask the password (default: hidden)
		txtPassword->PasswordChar = L'*';  // or L'*'

		//Attach click event to the Hide button
		chkHidePassword->Click += gcnew System::EventHandler(this, &LoginMain::chkHidePassword_CheckedChanged);
	}

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;

		if (username == "" || password == "")
		{
			MessageBox::Show("Please enter both Username and Password!", "Login Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (ValidateLogin(username, password))
		{

			/*MessageBox::Show("Login Successful!\n\nWelcome back " + currentLoggedInUser->getFirstname() + " " + currentLoggedInUser->getSurname(),
				"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);*/

			// Open HomeSystem with logged-in user
			HomeSystem^ HomePage = gcnew HomeSystem(currentLoggedInUser);
			this->Hide();
			HomePage->ShowDialog();
			this->Close();
		}
		else
		{
			MessageBox::Show("Invalid Username or Password!\nPlease try again.", "Login Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			txtPassword->Clear();
			txtPassword->Focus();
		}


	}

		   // ADD THIS METHOD - Load users from file
	private: void LoadUsersFromFile()
	{

try
{
	String^ filePath = Application::StartupPath + "\\bankingUser.txt";

	if (!File::Exists(filePath))
	{
		MessageBox::Show("File not found: " + filePath, "Debug",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	StreamReader^ sr = gcnew StreamReader(filePath);
	String^ line;
	Syntax_Squad_Banking^ user = nullptr;
	int userCount = 0;

	while ((line = sr->ReadLine()) != nullptr)
	{
		// Trim the line first
		String^ trimmedLine = line->Trim();

		// Skip empty lines
		if (trimmedLine == "") continue;

		// Look for PERSONAL INFORMATION section (where user data starts)
		if (trimmedLine->Contains("PERSONAL INFORMATION:"))
		{
			user = gcnew Syntax_Squad_Banking();
			continue;
		}

		if (user != nullptr)
		{
			// Parse using colon position
			int colonPos = trimmedLine->IndexOf(':');
			if (colonPos > 0 && colonPos + 1 <= trimmedLine->Length)
			{
				String^ key = trimmedLine->Substring(0, colonPos);
				String^ value = trimmedLine->Substring(colonPos + 1);
				value = CleanString(value);

				// Personal Information
				if (key == "First Name")
				{
					user->setFirstname(value);
				}
				else if (key == "Middle Name")
				{
					user->setMiddleName(value);
				}
				else if (key == "Surname")
				{
					user->setSurname(value);
				}
				else if (key == "Gender")
				{
					if (value->Length > 0)
					{
						// Force it to be treated as a character, not a number
						user->setGender((char)value[0]);
					}
				}
				else if (key == "ID Number")
				{
					user->setIDNumber(value);
				}
				else if (key == "Date of Birth")
				{
					user->setDateOfBirth(DateTime::Parse(value));
				}
				else if (key == "Marital Status")
				{
					user->setMarital(value);
				}
				else if (key == "Race")
				{
					user->setRace(value);
				}
				else if (key == "Citizenship")
				{
					user->setCitizenship(value);
				}
				else if (key == "Home Language")
				{
					user->setHomeLanguage(value);
				}
				else if (key == "Phone Number")
				{
					user->setPhoneNumber(value);
				}
				else if (key == "Email")
				{
					user->setEmail(value);
				}
				else if (key == "Address")
				{
					user->setAddress(value);
				}
				// Account Information
				else if (key == "Account Number")
				{
					user->setAccountNumber(Convert::ToInt32(value));
				}
				else if (key == "Account Type")
				{
					user->setAccountType(value);
				}
				else if (key == "Balance")
				{
					value = value->Replace("R", "");
					user->setBalance(Convert::ToDouble(value));
				}
				else if (key == "Daily Limit")
				{
					value = value->Replace("R", "");
					user->setLimit(Convert::ToDouble(value));
				}
				// Login Information
				else if (key == "Username")
				{
					user->setUsername(value);
				}
				else if (key == "Password")
				{
					user->setPassword(value);
				}
				else if (key == "Role")
				{
					user->setRole(value);
				}
				else if (key == "Account Status")
				{
					user->setAccountStatus(value);
				}
			}

			// End of user record
			if (trimmedLine->Contains("=================================================="))
			{
				if (user->getUsername() != nullptr && user->getUsername() != "" &&
					user->getPassword() != nullptr && user->getPassword() != "")
				{
					userList->Add(user);
					userCount++;
				}
				user = nullptr;
			}
		}
	}

	sr->Close();

	// BUILD DEBUG MESSAGE TO SHOW ALL USER DATA
	String^ debugMessage = "Loaded " + userCount + " users from file.\n\n";
	debugMessage += "File path: " + filePath + "\n\n";
	debugMessage += "==========================================\n";
	debugMessage += "USER DETAILS:\n";
	debugMessage += "==========================================\n";

	for (int i = 0; i < userList->Count; i++)
	{
		debugMessage += "\n--- USER " + (i + 1) + " ---\n";
		debugMessage += "First Name:     " + userList[i]->getFirstname() + "\n";
		debugMessage += "Middle Name:    " + userList[i]->getMiddleName() + "\n";
		debugMessage += "Surname:        " + userList[i]->getSurname() + "\n";
		/*debugMessage += "Gender:         " + userList[i]->getGender() + "\n";*/
		// When displaying:
		String^ genderDisplay = gcnew String(userList[i]->getGender(), 1);
		debugMessage += "Gender:         " + genderDisplay + "\n";
		debugMessage += "ID Number:      " + userList[i]->getIDNumber() + "\n";
		debugMessage += "Date of Birth:  " + userList[i]->getDateOfBirth().ToString("yyyy-MM-dd") + "\n";
		debugMessage += "Marital Status: " + userList[i]->getMarital() + "\n";
		debugMessage += "Race:           " + userList[i]->getRace() + "\n";
		debugMessage += "Citizenship:    " + userList[i]->getCitizenship() + "\n";
		debugMessage += "Home Language:  " + userList[i]->getHomeLanguage() + "\n";
		debugMessage += "Phone Number:   " + userList[i]->getPhoneNumber() + "\n";
		debugMessage += "Email:          " + userList[i]->getEmail() + "\n";
		debugMessage += "Address:        " + userList[i]->getAddress() + "\n";
		debugMessage += "Account Number: " + userList[i]->getAccountNumber() + "\n";
		debugMessage += "Account Type:   " + userList[i]->getAccountType() + "\n";
		debugMessage += "Balance:        R" + userList[i]->getBalance().ToString("F2") + "\n";
		debugMessage += "Daily Limit:    R" + userList[i]->getLimit().ToString("F2") + "\n";
		debugMessage += "Username:       " + userList[i]->getUsername() + "\n";
		debugMessage += "Password:       " + userList[i]->getPassword() + "\n";
		debugMessage += "Role:           " + userList[i]->getRole() + "\n";
		debugMessage += "Account Status: " + userList[i]->getAccountStatus() + "\n";
		debugMessage += "------------------------------------------\n";
	}

	/*MessageBox::Show(debugMessage, "Debug - All Users Loaded",
		MessageBoxButtons::OK, MessageBoxIcon::Information);*/
}
catch (Exception^ ex)
{
	MessageBox::Show("Error loading users: " + ex->Message, "Error",
		MessageBoxButtons::OK, MessageBoxIcon::Error);
}
	}

		   // ADD THIS METHOD - Validate login
	private: bool ValidateLogin(String^ username, String^ password)
	{
		for each (Syntax_Squad_Banking ^ user in userList)
		{
			if (user->getUsername() == username && user->getPassword() == password)
			{
				currentLoggedInUser = user;
				// DEBUG: Confirm user is found
				/*MessageBox::Show("User found: " + user->getFirstname() + " " + user->getSurname(),
					"Debug - Login", MessageBoxButtons::OK, MessageBoxIcon::Information);*/

				return true;
			}
		}
		return false;
	}
};
}
