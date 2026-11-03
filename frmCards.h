#pragma once
//#include "HomeSystem.h"
//#include "frmMessage.h"
//#include "frmTransact.h"
#include "Syntax_Squad_Banking.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCards
	/// </summary>
	public ref class frmCards : public System::Windows::Forms::Form
	{
	public:
		frmCards(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor that accepts User object
		frmCards(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;
			DisplayUserInfo();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCards()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblLimit;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCashWithdrawalLimit;
	private: System::Windows::Forms::Button^ btnUpdates;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblCurrentLimit;



	private:
		Syntax_Squad_Banking^ loggedInUser;
	private: System::Windows::Forms::Label^ lblAccountType;
	private: System::Windows::Forms::Label^ lblAccountNumber;
	private: System::Windows::Forms::Label^ lblInitials;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCards::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblAccountType = (gcnew System::Windows::Forms::Label());
			this->lblAccountNumber = (gcnew System::Windows::Forms::Label());
			this->lblInitials = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lblCurrentLimit = (gcnew System::Windows::Forms::Label());
			this->lblLimit = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtCashWithdrawalLimit = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnUpdates = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(33, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(972, 103);
			this->panel1->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(404, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 32);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Cards";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->lblAccountType);
			this->panel2->Controls->Add(this->lblAccountNumber);
			this->panel2->Controls->Add(this->lblInitials);
			this->panel2->Location = System::Drawing::Point(206, 148);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(662, 403);
			this->panel2->TabIndex = 7;
			// 
			// lblAccountType
			// 
			this->lblAccountType->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblAccountType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccountType->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lblAccountType->Location = System::Drawing::Point(231, 197);
			this->lblAccountType->Name = L"lblAccountType";
			this->lblAccountType->Size = System::Drawing::Size(263, 29);
			this->lblAccountType->TabIndex = 14;
			this->lblAccountType->Text = L"label3";
			// 
			// lblAccountNumber
			// 
			this->lblAccountNumber->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblAccountNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccountNumber->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lblAccountNumber->Location = System::Drawing::Point(234, 149);
			this->lblAccountNumber->Name = L"lblAccountNumber";
			this->lblAccountNumber->Size = System::Drawing::Size(260, 29);
			this->lblAccountNumber->TabIndex = 13;
			this->lblAccountNumber->Text = L"label2";
			// 
			// lblInitials
			// 
			this->lblInitials->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInitials->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInitials->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lblInitials->Location = System::Drawing::Point(234, 106);
			this->lblInitials->Name = L"lblInitials";
			this->lblInitials->Size = System::Drawing::Size(260, 29);
			this->lblInitials->TabIndex = 12;
			this->lblInitials->Text = L"label1";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel3->Controls->Add(this->lblCurrentLimit);
			this->panel3->Controls->Add(this->lblLimit);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(311, 557);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(557, 55);
			this->panel3->TabIndex = 8;
			// 
			// lblCurrentLimit
			// 
			this->lblCurrentLimit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrentLimit->ForeColor = System::Drawing::SystemColors::Control;
			this->lblCurrentLimit->Location = System::Drawing::Point(321, 16);
			this->lblCurrentLimit->Name = L"lblCurrentLimit";
			this->lblCurrentLimit->Size = System::Drawing::Size(197, 31);
			this->lblCurrentLimit->TabIndex = 12;
			this->lblCurrentLimit->Text = L"label1";
			// 
			// lblLimit
			// 
			this->lblLimit->AutoSize = true;
			this->lblLimit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLimit->ForeColor = System::Drawing::SystemColors::Control;
			this->lblLimit->Location = System::Drawing::Point(301, 27);
			this->lblLimit->Name = L"lblLimit";
			this->lblLimit->Size = System::Drawing::Size(0, 20);
			this->lblLimit->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(66, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Your daily Limit is ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel4->Controls->Add(this->txtCashWithdrawalLimit);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(55, 618);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(915, 112);
			this->panel4->TabIndex = 9;
			// 
			// txtCashWithdrawalLimit
			// 
			this->txtCashWithdrawalLimit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCashWithdrawalLimit->Location = System::Drawing::Point(410, 48);
			this->txtCashWithdrawalLimit->Name = L"txtCashWithdrawalLimit";
			this->txtCashWithdrawalLimit->Size = System::Drawing::Size(395, 27);
			this->txtCashWithdrawalLimit->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(72, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(240, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Update permanent Limit";
			// 
			// btnUpdates
			// 
			this->btnUpdates->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnUpdates->Location = System::Drawing::Point(848, 880);
			this->btnUpdates->Name = L"btnUpdates";
			this->btnUpdates->Size = System::Drawing::Size(122, 55);
			this->btnUpdates->TabIndex = 11;
			this->btnUpdates->Text = L"Updates";
			this->btnUpdates->UseVisualStyleBackColor = false;
			this->btnUpdates->Click += gcnew System::EventHandler(this, &frmCards::btnUpdates_Click);
			// 
			// frmCards
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1065, 1004);
			this->Controls->Add(this->btnUpdates);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"frmCards";
			this->Text = L"frmCards";
			this->Load += gcnew System::EventHandler(this, &frmCards::frmCards_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnTransact_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//frmTransact^ transact = gcnew frmTransact();
		//this->Hide();  // Hides current form
		//transact->ShowDialog();
		//this->Show();  // When Cards closes, this form reappears
	}

	private: System::Void frmCards_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void btnMessage_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//frmMessage^ Message = gcnew frmMessage();
		//this->Hide();  // Hides current form
		//Message->ShowDialog();
		//this->Show();  // When Cards closes, this form reappears
	}

	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//HomeSystem^ Home = gcnew HomeSystem();
		//this->Hide();  // Hides current form
		//Home->ShowDialog();
		//this->Show();  // When Cards closes, this form reappears
	}

		   // Display user's current limit
		   void DisplayUserInfo()
		   {
			   //if (loggedInUser != nullptr)
			   //{
				  // double currentLimit = loggedInUser->getLimit();
				  // lblCurrentLimit->Text = "R " + currentLimit.ToString("F2");
				  // txtCashWithdrawalLimit->Text = currentLimit.ToString("F0");
			   //}

			   if (loggedInUser != nullptr)
			   {
				   // Display limit
				   double currentLimit = loggedInUser->getLimit();
				   lblCurrentLimit->Text = "R " + currentLimit.ToString("F2");
				   txtCashWithdrawalLimit->Text = currentLimit.ToString("F0");

				   // Display user initials (First name + Last name initial)
				   String^ initials = loggedInUser->getMiddleName()->Substring(0, 1) + " " + 
					   loggedInUser->getFirstname()->Substring(0, 1) + " " + loggedInUser->getSurname() + ".";
				   lblInitials->Text = initials;

				   // Display account number
				   lblAccountNumber->Text = "Account: " + loggedInUser->getAccountNumber().ToString();

				   // Display account type
				   lblAccountType->Text = "Type: " + loggedInUser->getAccountType();
			   }
		   }

		   // Update the limit
		   void UpdateLimit()
		   {
			   if (loggedInUser != nullptr)
			   {
				   double newLimit;
				   if (Double::TryParse(txtCashWithdrawalLimit->Text, newLimit))
				   {
					   // Validate minimum limit (R1000)
					   if (newLimit < 1000)
					   {
						   MessageBox::Show("Daily limit cannot be less than R1,000!",
							   "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						   txtCashWithdrawalLimit->Text = loggedInUser->getLimit().ToString("F0");
						   return;
					   }

					   // Validate maximum limit (R1,000,000)
					   if (newLimit > 1000000)
					   {
						   MessageBox::Show("Daily limit cannot exceed R1,000,000!",
							   "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						   txtCashWithdrawalLimit->Text = loggedInUser->getLimit().ToString("F0");
						   return;
					   }

					   // Update the limit
					   loggedInUser->setLimit(newLimit);
					   lblCurrentLimit->Text = "R " + newLimit.ToString("F2");

					   MessageBox::Show("Daily limit updated successfully!\n\n" +
						   "New daily limit: R" + newLimit.ToString("F2"),
						   "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   }
				   else
				   {
					   MessageBox::Show("Please enter a valid amount!",
						   "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					   txtCashWithdrawalLimit->Text = loggedInUser->getLimit().ToString("F0");
				   }
			   }
		   }

	private: System::Void btnUpdates_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to update your daily limit?",
			"Confirm Update", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			UpdateLimit();
		}
	}
};
}
