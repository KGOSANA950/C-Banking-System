#pragma once
//#include "frmCards.h"
//#include "frmMessage.h"
//#include "HomeSystem.h"

#include "frmPayBeneficiary.h"
#include "frmDataAndAirTime.h"
#include "frmBuyElectricity.h"
#include "frmDeposit.h"
#include "frmWithdraw.h"
#include "Syntax_Squad_Banking.h"


namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmTransact
	/// </summary>
	public ref class frmTransact : public System::Windows::Forms::Form
	{
	public:
		frmTransact(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor that accepts User object
		frmTransact(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmTransact()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnlBeneficiary;
	private: System::Windows::Forms::Panel^ pnlAirTime;
	private: System::Windows::Forms::Panel^ pnlDeposit;



	private: System::Windows::Forms::Panel^ pnlElectricity;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnPayBeneficiary;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBuyAirTime;
	private: System::Windows::Forms::Button^ btnDeposit;


	private: System::Windows::Forms::Button^ btnBuyElectricity;
	private: System::Windows::Forms::Panel^ pnlWithdraw;


	private: System::Windows::Forms::Button^ btnWithdraw;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private:
		Syntax_Squad_Banking^ loggedInUser;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTransact::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pnlBeneficiary = (gcnew System::Windows::Forms::Panel());
			this->btnPayBeneficiary = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pnlAirTime = (gcnew System::Windows::Forms::Panel());
			this->btnBuyAirTime = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pnlDeposit = (gcnew System::Windows::Forms::Panel());
			this->btnDeposit = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pnlElectricity = (gcnew System::Windows::Forms::Panel());
			this->btnBuyElectricity = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pnlWithdraw = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnWithdraw = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pnlBeneficiary->SuspendLayout();
			this->pnlAirTime->SuspendLayout();
			this->pnlDeposit->SuspendLayout();
			this->pnlElectricity->SuspendLayout();
			this->pnlWithdraw->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(28, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1005, 83);
			this->panel1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(407, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Transact";
			// 
			// pnlBeneficiary
			// 
			this->pnlBeneficiary->BackColor = System::Drawing::Color::LightSkyBlue;
			this->pnlBeneficiary->Controls->Add(this->btnPayBeneficiary);
			this->pnlBeneficiary->Controls->Add(this->label14);
			this->pnlBeneficiary->Controls->Add(this->label13);
			this->pnlBeneficiary->Location = System::Drawing::Point(28, 135);
			this->pnlBeneficiary->Name = L"pnlBeneficiary";
			this->pnlBeneficiary->Size = System::Drawing::Size(1005, 95);
			this->pnlBeneficiary->TabIndex = 8;
			this->pnlBeneficiary->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTransact::pnlBeneficiary_Paint);
			// 
			// btnPayBeneficiary
			// 
			this->btnPayBeneficiary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPayBeneficiary->Location = System::Drawing::Point(903, 14);
			this->btnPayBeneficiary->Name = L"btnPayBeneficiary";
			this->btnPayBeneficiary->Size = System::Drawing::Size(75, 67);
			this->btnPayBeneficiary->TabIndex = 23;
			this->btnPayBeneficiary->Text = L">";
			this->btnPayBeneficiary->UseVisualStyleBackColor = true;
			this->btnPayBeneficiary->Click += gcnew System::EventHandler(this, &frmTransact::btnPayBeneficiary_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(252, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(138, 20);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Pay beneficiary";
			// 
			// label13
			// 
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(37, 14);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 67);
			this->label13->TabIndex = 21;
			// 
			// pnlAirTime
			// 
			this->pnlAirTime->BackColor = System::Drawing::Color::LightSkyBlue;
			this->pnlAirTime->Controls->Add(this->btnBuyAirTime);
			this->pnlAirTime->Controls->Add(this->label12);
			this->pnlAirTime->Controls->Add(this->label11);
			this->pnlAirTime->Location = System::Drawing::Point(28, 270);
			this->pnlAirTime->Name = L"pnlAirTime";
			this->pnlAirTime->Size = System::Drawing::Size(1005, 119);
			this->pnlAirTime->TabIndex = 9;
			this->pnlAirTime->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTransact::pnlAirTime_Paint);
			// 
			// btnBuyAirTime
			// 
			this->btnBuyAirTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuyAirTime->Location = System::Drawing::Point(903, 35);
			this->btnBuyAirTime->Name = L"btnBuyAirTime";
			this->btnBuyAirTime->Size = System::Drawing::Size(75, 67);
			this->btnBuyAirTime->TabIndex = 24;
			this->btnBuyAirTime->Text = L">";
			this->btnBuyAirTime->UseVisualStyleBackColor = true;
			this->btnBuyAirTime->Click += gcnew System::EventHandler(this, &frmTransact::btnBuyAirTime_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(252, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(194, 20);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Buy AirTime and Data";
			// 
			// label11
			// 
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(38, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 83);
			this->label11->TabIndex = 21;
			// 
			// pnlDeposit
			// 
			this->pnlDeposit->BackColor = System::Drawing::Color::LightSkyBlue;
			this->pnlDeposit->Controls->Add(this->btnDeposit);
			this->pnlDeposit->Controls->Add(this->label16);
			this->pnlDeposit->Controls->Add(this->label15);
			this->pnlDeposit->Location = System::Drawing::Point(28, 624);
			this->pnlDeposit->Name = L"pnlDeposit";
			this->pnlDeposit->Size = System::Drawing::Size(1005, 113);
			this->pnlDeposit->TabIndex = 10;
			this->pnlDeposit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTransact::pnlDeposit_Paint);
			// 
			// btnDeposit
			// 
			this->btnDeposit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeposit->Location = System::Drawing::Point(903, 21);
			this->btnDeposit->Name = L"btnDeposit";
			this->btnDeposit->Size = System::Drawing::Size(75, 67);
			this->btnDeposit->TabIndex = 24;
			this->btnDeposit->Text = L">";
			this->btnDeposit->UseVisualStyleBackColor = true;
			this->btnDeposit->Click += gcnew System::EventHandler(this, &frmTransact::btnDeposit_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::Control;
			this->label16->Location = System::Drawing::Point(252, 45);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 20);
			this->label16->TabIndex = 22;
			this->label16->Text = L"Deposit";
			// 
			// label15
			// 
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->Location = System::Drawing::Point(37, 21);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(125, 76);
			this->label15->TabIndex = 21;
			// 
			// pnlElectricity
			// 
			this->pnlElectricity->BackColor = System::Drawing::Color::LightSkyBlue;
			this->pnlElectricity->Controls->Add(this->btnBuyElectricity);
			this->pnlElectricity->Controls->Add(this->label18);
			this->pnlElectricity->Controls->Add(this->label17);
			this->pnlElectricity->Location = System::Drawing::Point(28, 447);
			this->pnlElectricity->Name = L"pnlElectricity";
			this->pnlElectricity->Size = System::Drawing::Size(1005, 119);
			this->pnlElectricity->TabIndex = 11;
			this->pnlElectricity->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTransact::pnlElectricity_Paint);
			// 
			// btnBuyElectricity
			// 
			this->btnBuyElectricity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuyElectricity->Location = System::Drawing::Point(903, 29);
			this->btnBuyElectricity->Name = L"btnBuyElectricity";
			this->btnBuyElectricity->Size = System::Drawing::Size(75, 67);
			this->btnBuyElectricity->TabIndex = 24;
			this->btnBuyElectricity->Text = L">";
			this->btnBuyElectricity->UseVisualStyleBackColor = true;
			this->btnBuyElectricity->Click += gcnew System::EventHandler(this, &frmTransact::btnBuyElectricity_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::Control;
			this->label18->Location = System::Drawing::Point(252, 51);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(132, 20);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Buy Electricity";
			// 
			// label17
			// 
			this->label17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label17.Image")));
			this->label17->Location = System::Drawing::Point(38, 24);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 72);
			this->label17->TabIndex = 21;
			// 
			// pnlWithdraw
			// 
			this->pnlWithdraw->BackColor = System::Drawing::Color::LightSkyBlue;
			this->pnlWithdraw->Controls->Add(this->label7);
			this->pnlWithdraw->Controls->Add(this->btnWithdraw);
			this->pnlWithdraw->Controls->Add(this->label6);
			this->pnlWithdraw->Location = System::Drawing::Point(28, 778);
			this->pnlWithdraw->Name = L"pnlWithdraw";
			this->pnlWithdraw->Size = System::Drawing::Size(1005, 110);
			this->pnlWithdraw->TabIndex = 23;
			this->pnlWithdraw->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmTransact::pnlWithdraw_Paint);
			// 
			// label7
			// 
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(33, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 89);
			this->label7->TabIndex = 25;
			// 
			// btnWithdraw
			// 
			this->btnWithdraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWithdraw->Location = System::Drawing::Point(903, 30);
			this->btnWithdraw->Name = L"btnWithdraw";
			this->btnWithdraw->Size = System::Drawing::Size(75, 67);
			this->btnWithdraw->TabIndex = 24;
			this->btnWithdraw->Text = L">";
			this->btnWithdraw->UseVisualStyleBackColor = true;
			this->btnWithdraw->Click += gcnew System::EventHandler(this, &frmTransact::btnWithdraw_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(253, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Withdraw";
			// 
			// frmTransact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 950);
			this->Controls->Add(this->pnlWithdraw);
			this->Controls->Add(this->pnlElectricity);
			this->Controls->Add(this->pnlDeposit);
			this->Controls->Add(this->pnlAirTime);
			this->Controls->Add(this->pnlBeneficiary);
			this->Controls->Add(this->panel1);
			this->Name = L"frmTransact";
			this->Text = L"Transact";
			this->Load += gcnew System::EventHandler(this, &frmTransact::frmTransact_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnlBeneficiary->ResumeLayout(false);
			this->pnlBeneficiary->PerformLayout();
			this->pnlAirTime->ResumeLayout(false);
			this->pnlAirTime->PerformLayout();
			this->pnlDeposit->ResumeLayout(false);
			this->pnlDeposit->PerformLayout();
			this->pnlElectricity->ResumeLayout(false);
			this->pnlElectricity->PerformLayout();
			this->pnlWithdraw->ResumeLayout(false);
			this->pnlWithdraw->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmTransact_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void pnlDeposit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		//MessageBox::Show("Comming soon", "Deposit", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void pnlBeneficiary_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{

	}

	private: System::Void pnlAirTime_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}

	private: System::Void pnlElectricity_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{

	}

	private: System::Void pnlWithdraw_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{

	}

	private: System::Void btnDeposit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		frmDeposit^ Deposit = gcnew frmDeposit(loggedInUser);
		this->Hide();	// Hides current form
		Deposit->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}
	private: System::Void btnPayBeneficiary_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		frmPayBeneficiary^ Beneficiary = gcnew frmPayBeneficiary();
		this->Hide();	// Hides current form
		Beneficiary->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}
	private: System::Void btnBuyAirTime_Click(System::Object^ sender, System::EventArgs^ e)
	{
		frmDataAndAirTime^ Airtime = gcnew frmDataAndAirTime(loggedInUser);
		this->Hide();	// Hides current form
		Airtime->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}
	private: System::Void btnBuyElectricity_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		frmBuyElectricity^ Electricity = gcnew frmBuyElectricity(loggedInUser);
		this->Hide();	// Hides current form
		Electricity->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}
	private: System::Void btnWithdraw_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//frmTransact^ transact = gcnew frmTransact(loggedInUser);
		frmWithdraw^ Withdraw = gcnew frmWithdraw(loggedInUser);
		this->Hide();	// Hides current form
		Withdraw->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}
};
}
