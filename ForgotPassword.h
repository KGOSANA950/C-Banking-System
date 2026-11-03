#pragma once
#include "Syntax_Squad_Banking.h"
#using <Microsoft.VisualBasic.dll>  // ADD THIS LINE

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Design;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Collections::Generic;
	using namespace System::Globalization;
	using namespace Microsoft::VisualBasic;  // ADD THIS LINE

	/// <summary>
	/// Summary for ForgotPassword
	/// </summary>
	public ref class ForgotPassword : public System::Windows::Forms::Form
	{
	public:
		ForgotPassword(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor that receives the user list from LoginMain
		ForgotPassword(List<Syntax_Squad_Banking^>^ users)
		{
			InitializeComponent();
			userList = users;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ForgotPassword()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ mtxtIDNumber;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbReset;
	private: System::Windows::Forms::Button^ btnRestart;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::MaskedTextBox^ mtxtAccountNumber;
	private: System::Windows::Forms::MaskedTextBox^ mtxtPhoneNumber;




	private:
		List<Syntax_Squad_Banking^>^ userList;
		Syntax_Squad_Banking^ foundUser;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForgotPassword::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mtxtIDNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbReset = (gcnew System::Windows::Forms::ComboBox());
			this->btnRestart = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->mtxtAccountNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mtxtPhoneNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"IDNumber : ";
			// 
			// mtxtIDNumber
			// 
			this->mtxtIDNumber->Location = System::Drawing::Point(246, 135);
			this->mtxtIDNumber->Mask = L"0000000000000";
			this->mtxtIDNumber->Name = L"mtxtIDNumber";
			this->mtxtIDNumber->Size = System::Drawing::Size(360, 22);
			this->mtxtIDNumber->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Account Number : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Phone Number : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 32);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Reset";
			// 
			// cmbReset
			// 
			this->cmbReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbReset->FormattingEnabled = true;
			this->cmbReset->Location = System::Drawing::Point(248, 46);
			this->cmbReset->Name = L"cmbReset";
			this->cmbReset->Size = System::Drawing::Size(358, 28);
			this->cmbReset->TabIndex = 9;
			// 
			// btnRestart
			// 
			this->btnRestart->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnRestart->FlatAppearance->BorderSize = 0;
			this->btnRestart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRestart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRestart->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnRestart->Location = System::Drawing::Point(161, 373);
			this->btnRestart->Name = L"btnRestart";
			this->btnRestart->Size = System::Drawing::Size(166, 52);
			this->btnRestart->TabIndex = 10;
			this->btnRestart->Text = L"Restart";
			this->btnRestart->UseVisualStyleBackColor = false;
			this->btnRestart->Click += gcnew System::EventHandler(this, &ForgotPassword::btnRestart_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::SystemColors::Control;
			this->btnReset->FlatAppearance->BorderSize = 0;
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::MediumVioletRed;
			this->btnReset->Location = System::Drawing::Point(443, 373);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(168, 52);
			this->btnReset->TabIndex = 11;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &ForgotPassword::btnReset_Click);
			// 
			// mtxtAccountNumber
			// 
			this->mtxtAccountNumber->Location = System::Drawing::Point(248, 213);
			this->mtxtAccountNumber->Mask = L"000000";
			this->mtxtAccountNumber->Name = L"mtxtAccountNumber";
			this->mtxtAccountNumber->Size = System::Drawing::Size(358, 22);
			this->mtxtAccountNumber->TabIndex = 12;
			// 
			// mtxtPhoneNumber
			// 
			this->mtxtPhoneNumber->Location = System::Drawing::Point(246, 289);
			this->mtxtPhoneNumber->Mask = L"(000) 000-0000";
			this->mtxtPhoneNumber->Name = L"mtxtPhoneNumber";
			this->mtxtPhoneNumber->Size = System::Drawing::Size(360, 22);
			this->mtxtPhoneNumber->TabIndex = 13;
			// 
			// ForgotPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 501);
			this->Controls->Add(this->mtxtPhoneNumber);
			this->Controls->Add(this->mtxtAccountNumber);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnRestart);
			this->Controls->Add(this->cmbReset);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->mtxtIDNumber);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ForgotPassword";
			this->Text = L"ForgotPassword";
			this->Load += gcnew System::EventHandler(this, &ForgotPassword::ForgotPassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void ForgotPassword_Load(System::Object^ sender, System::EventArgs^ e)
	{
		cmbReset->Items->Add("Password");
		cmbReset->Items->Add("UserName");
		cmbReset->Items->Add("Passwors & UserName");
		    cmbReset->SelectedIndex = 0;
    
    // Remove the mask - just use plain textbox
    mtxtPhoneNumber->Mask = L"";


		//To make the button currved
		int radius = 20;

		System::Drawing::Drawing2D::GraphicsPath^ path =
			gcnew System::Drawing::Drawing2D::GraphicsPath();

		System::Drawing::Rectangle rect = btnReset->ClientRectangle;

		path->AddArc(rect.X, rect.Y, radius, radius, 180, 90);
		path->AddArc(rect.Width - radius, rect.Y, radius, radius, 270, 90);
		path->AddArc(rect.Width - radius, rect.Height - radius, radius, radius, 0, 90);
		path->AddArc(rect.X, rect.Height - radius, radius, radius, 90, 90);

		path->CloseFigure();

		btnReset->Region = gcnew System::Drawing::Region(path);
		btnRestart->Region = gcnew System::Drawing::Region(path);
	}

	private: System::Void btnRestart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to restart!",
			"Resart.", System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			cmbReset->SelectedIndex = -1;
			mtxtIDNumber->Clear();
			mtxtAccountNumber->Clear();
			mtxtPhoneNumber->Clear();
		}
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// Validate inputs
		if (mtxtIDNumber->Text->Length != 13)
		{
			MessageBox::Show("Please enter a valid 13-digit ID Number!", "Validation Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (mtxtAccountNumber->Text->Length != 6)
		{
			MessageBox::Show("Please enter a valid 6-digit Account Number!", "Validation Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (mtxtPhoneNumber->Text->Length != 10)
		{
			MessageBox::Show("Please enter a valid 10-digit Phone Number!", "Validation Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (cmbReset->SelectedIndex == -1)
		{
			MessageBox::Show("Please select what you want to reset!", "Validation Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Verify user
		if (VerifyUser())
		{
			String^ resetOption = cmbReset->SelectedItem->ToString();
			String^ message = "User Found!\n\n";
			message += "Name: " + foundUser->getFirstname() + " " + foundUser->getSurname() + "\n";
			message += "Account Number: " + foundUser->getAccountNumber() + "\n\n";
			message += "You have selected to reset: " + resetOption + "\n\n";
			message += "Do you want to continue?";

			System::Windows::Forms::DialogResult confirm = MessageBox::Show(message,
				"User Verified", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (confirm == System::Windows::Forms::DialogResult::Yes)
			{
				if (resetOption == "Password")
				{
					String^ newPassword = Microsoft::VisualBasic::Interaction::InputBox(
						"Enter your new password (minimum 6 characters):",
						"Reset Password",
						"",
						-1, -1);

					if (newPassword != "" && newPassword->Length >= 6)
					{
						String^ confirmPassword = Microsoft::VisualBasic::Interaction::InputBox(
							"Confirm your new password:",
							"Confirm Password",
							"",
							-1, -1);

						if (newPassword == confirmPassword)
						{
							foundUser->setPassword(newPassword);
							MessageBox::Show("Password reset successfully!\n\n" +
								"Username: " + foundUser->getUsername() + "\n" +
								"New Password: " + newPassword,
								"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
							this->Close();
						}
						else
						{
							MessageBox::Show("Passwords do not match!", "Error",
								MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else
					{
						MessageBox::Show("Password must be at least 6 characters!", "Error",
							MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
				else if (resetOption == "UserName")
				{
					String^ newUsername = Microsoft::VisualBasic::Interaction::InputBox(
						"Enter your new username:",
						"Reset Username",
						"",
						-1, -1);

					if (newUsername != "")
					{
						String^ confirmUsername = Microsoft::VisualBasic::Interaction::InputBox(
							"Confirm your new username:",
							"Confirm Username",
							"",
							-1, -1);

						if (newUsername == confirmUsername)
						{
							foundUser->setUsername(newUsername);
							MessageBox::Show("Username reset successfully!\n\n" +
								"New Username: " + newUsername,
								"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
							this->Close();
						}
						else
						{
							MessageBox::Show("Usernames do not match!", "Error",
								MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else
					{
						MessageBox::Show("Username cannot be empty!", "Error",
							MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
				else if (resetOption == "Password & UserName")
				{
					// Reset Password
					String^ newPassword = Microsoft::VisualBasic::Interaction::InputBox(
						"Enter your new password (minimum 6 characters):",
						"Reset Password",
						"",
						-1, -1);

					if (newPassword != "" && newPassword->Length >= 6)
					{
						String^ confirmPassword = Microsoft::VisualBasic::Interaction::InputBox(
							"Confirm your new password:",
							"Confirm Password",
							"",
							-1, -1);

						if (newPassword == confirmPassword)
						{
							foundUser->setPassword(newPassword);

							// Reset Username
							String^ newUsername = Microsoft::VisualBasic::Interaction::InputBox(
								"Enter your new username:",
								"Reset Username",
								"",
								-1, -1);

							if (newUsername != "")
							{
								String^ confirmUsername = Microsoft::VisualBasic::Interaction::InputBox(
									"Confirm your new username:",
									"Confirm Username",
									"",
									-1, -1);

								if (newUsername == confirmUsername)
								{
									foundUser->setUsername(newUsername);
									MessageBox::Show("Password and Username reset successfully!\n\n" +
										"New Username: " + newUsername + "\n" +
										"New Password: " + newPassword,
										"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
									this->Close();
								}
								else
								{
									MessageBox::Show("Usernames do not match!\nPassword was changed but Username was not.",
										"Partial Success", MessageBoxButtons::OK, MessageBoxIcon::Warning);
									this->Close();
								}
							}
							else
							{
								MessageBox::Show("Username cannot be empty!\nPassword was changed but Username was not.",
									"Partial Success", MessageBoxButtons::OK, MessageBoxIcon::Warning);
								this->Close();
							}
						}
						else
						{
							MessageBox::Show("Passwords do not match!", "Error",
								MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
					else
					{
						MessageBox::Show("Password must be at least 6 characters!", "Error",
							MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
			}
		}
		else
		{
			MessageBox::Show("User not found!\n\nPlease check your ID Number, Account Number, and Phone Number.",
				"Verification Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	   // Verify user from the received list
	private: bool VerifyUser()
	{

		String^ idNumber = mtxtIDNumber->Text;
		int accountNumber = Convert::ToInt32(mtxtAccountNumber->Text);
		String^ phoneNumber = mtxtPhoneNumber->Text;

		for each(Syntax_Squad_Banking ^ user in userList)
		{
			if (user->getIDNumber() == idNumber &&
				user->getAccountNumber() == accountNumber &&
				user->getPhoneNumber() == phoneNumber)
			{
				foundUser = user;
				return true;
			}
		}
		return false;
	}

};
}
