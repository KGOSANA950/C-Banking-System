#pragma once
#include "frmCards.h"
#include "frmMessage.h"
#include "frmTransact.h"
#include "frmDataAndAirTime.h"
#include "frmPayBeneficiary.h"
#include "frmCashSend.h"
#include "frmBuyElectricity.h"
#include "Syntax_Squad_Banking.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for HomeSystem
	/// </summary>
	public ref class HomeSystem : public System::Windows::Forms::Form
	{
	public:
		HomeSystem(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// NEW: Constructor that accepts User object
		HomeSystem(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;

			// Initialize timer for visual feedback
			refreshTimer = gcnew Timer();
			refreshTimer->Interval = 500;
			refreshTimer->Tick += gcnew EventHandler(this, &HomeSystem::refreshTimer_Tick);

			// Set labels
			if (loggedInUser != nullptr)
			{
				lblBalance->Text = "R " + loggedInUser->getBalance().ToString("F2");
				lblWelcome->Text = "Welcome, " + loggedInUser->getFirstname() + " " + loggedInUser->getSurname();
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeSystem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Button^ btnCards;
	private: System::Windows::Forms::Button^ btnMessage;

	protected:

	protected:


	private: System::Windows::Forms::Button^ btnTransact;
	private: System::Windows::Forms::Panel^ pnlHome;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ pnlMainAccount;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblPhoneCall;
	private: System::Windows::Forms::Label^ lblPersonInfo;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblBalance;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblAirTime;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ lblPayBeneficiary;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ lblElectricity;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ lblCashSend;

	private:
		// Store logged in user
		Syntax_Squad_Banking^ loggedInUser;
	private: System::Windows::Forms::Label^ lblWelcome;
	private: System::Windows::Forms::Timer^ refreshTimer;
	private: System::ComponentModel::IContainer^ components;
		   /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeSystem::typeid));
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnCards = (gcnew System::Windows::Forms::Button());
			this->btnMessage = (gcnew System::Windows::Forms::Button());
			this->btnTransact = (gcnew System::Windows::Forms::Button());
			this->pnlHome = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlMainAccount = (gcnew System::Windows::Forms::Panel());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblPersonInfo = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblPhoneCall = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblAirTime = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lblPayBeneficiary = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->lblElectricity = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lblCashSend = (gcnew System::Windows::Forms::Label());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->refreshTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlHome->SuspendLayout();
			this->pnlMainAccount->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnHome
			// 
			this->btnHome->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.BackgroundImage")));
			this->btnHome->Location = System::Drawing::Point(104, 28);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(69, 62);
			this->btnHome->TabIndex = 0;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &HomeSystem::btnHome_Click);
			// 
			// btnCards
			// 
			this->btnCards->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCards.BackgroundImage")));
			this->btnCards->Location = System::Drawing::Point(333, 26);
			this->btnCards->Name = L"btnCards";
			this->btnCards->Size = System::Drawing::Size(68, 67);
			this->btnCards->TabIndex = 1;
			this->btnCards->UseVisualStyleBackColor = true;
			this->btnCards->Click += gcnew System::EventHandler(this, &HomeSystem::btnCards_Click);
			// 
			// btnMessage
			// 
			this->btnMessage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMessage.BackgroundImage")));
			this->btnMessage->Location = System::Drawing::Point(799, 31);
			this->btnMessage->Name = L"btnMessage";
			this->btnMessage->Size = System::Drawing::Size(67, 59);
			this->btnMessage->TabIndex = 2;
			this->btnMessage->UseVisualStyleBackColor = true;
			this->btnMessage->Click += gcnew System::EventHandler(this, &HomeSystem::btnMessage_Click);
			// 
			// btnTransact
			// 
			this->btnTransact->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTransact.BackgroundImage")));
			this->btnTransact->Location = System::Drawing::Point(593, 23);
			this->btnTransact->Name = L"btnTransact";
			this->btnTransact->Size = System::Drawing::Size(91, 67);
			this->btnTransact->TabIndex = 3;
			this->btnTransact->UseVisualStyleBackColor = true;
			this->btnTransact->Click += gcnew System::EventHandler(this, &HomeSystem::btnTransact_Click);
			// 
			// pnlHome
			// 
			this->pnlHome->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->pnlHome->Controls->Add(this->label4);
			this->pnlHome->Controls->Add(this->label2);
			this->pnlHome->Controls->Add(this->label1);
			this->pnlHome->Controls->Add(this->label3);
			this->pnlHome->Controls->Add(this->btnHome);
			this->pnlHome->Controls->Add(this->btnMessage);
			this->pnlHome->Controls->Add(this->btnTransact);
			this->pnlHome->Controls->Add(this->btnCards);
			this->pnlHome->Location = System::Drawing::Point(14, 839);
			this->pnlHome->Name = L"pnlHome";
			this->pnlHome->Size = System::Drawing::Size(1005, 145);
			this->pnlHome->TabIndex = 4;
			this->pnlHome->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HomeSystem::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(802, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Message";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Cards";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(100, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Home";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(589, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Transact";
			// 
			// pnlMainAccount
			// 
			this->pnlMainAccount->Controls->Add(this->lblBalance);
			this->pnlMainAccount->Controls->Add(this->label10);
			this->pnlMainAccount->Controls->Add(this->label7);
			this->pnlMainAccount->Controls->Add(this->label8);
			this->pnlMainAccount->Location = System::Drawing::Point(17, 195);
			this->pnlMainAccount->Name = L"pnlMainAccount";
			this->pnlMainAccount->Size = System::Drawing::Size(999, 108);
			this->pnlMainAccount->TabIndex = 8;
			// 
			// lblBalance
			// 
			this->lblBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalance->Location = System::Drawing::Point(722, 22);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(243, 49);
			this->lblBalance->TabIndex = 11;
			this->lblBalance->Text = L"balance";
			this->lblBalance->Click += gcnew System::EventHandler(this, &HomeSystem::lblBalance_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(228, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 29);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Available Balance";
			// 
			// label7
			// 
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(27, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 91);
			this->label7->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(228, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 23);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Main Account";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel2->Controls->Add(this->lblPersonInfo);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->lblPhoneCall);
			this->panel2->Location = System::Drawing::Point(11, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1005, 100);
			this->panel2->TabIndex = 5;
			// 
			// lblPersonInfo
			// 
			this->lblPersonInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPersonInfo.Image")));
			this->lblPersonInfo->Location = System::Drawing::Point(58, 19);
			this->lblPersonInfo->Name = L"lblPersonInfo";
			this->lblPersonInfo->Size = System::Drawing::Size(100, 69);
			this->lblPersonInfo->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(372, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 32);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Syntax Squad";
			// 
			// lblPhoneCall
			// 
			this->lblPhoneCall->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPhoneCall.Image")));
			this->lblPhoneCall->Location = System::Drawing::Point(871, 28);
			this->lblPhoneCall->Name = L"lblPhoneCall";
			this->lblPhoneCall->Size = System::Drawing::Size(100, 49);
			this->lblPhoneCall->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"My dashboard";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 335);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 29);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Favorites";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->lblAirTime);
			this->panel1->ForeColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(35, 398);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 149);
			this->panel1->TabIndex = 14;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HomeSystem::panel1_Paint_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(119, 112);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(194, 20);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Buy AirTime and Data";
			// 
			// lblAirTime
			// 
			this->lblAirTime->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblAirTime.Image")));
			this->lblAirTime->Location = System::Drawing::Point(164, 15);
			this->lblAirTime->Name = L"lblAirTime";
			this->lblAirTime->Size = System::Drawing::Size(99, 83);
			this->lblAirTime->TabIndex = 20;
			this->lblAirTime->Click += gcnew System::EventHandler(this, &HomeSystem::lblAirTime_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->lblPayBeneficiary);
			this->panel3->Location = System::Drawing::Point(607, 398);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(409, 149);
			this->panel3->TabIndex = 15;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(160, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(138, 20);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Pay beneficiary";
			// 
			// lblPayBeneficiary
			// 
			this->lblPayBeneficiary->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPayBeneficiary.Image")));
			this->lblPayBeneficiary->Location = System::Drawing::Point(161, 15);
			this->lblPayBeneficiary->Name = L"lblPayBeneficiary";
			this->lblPayBeneficiary->Size = System::Drawing::Size(100, 67);
			this->lblPayBeneficiary->TabIndex = 20;
			this->lblPayBeneficiary->Click += gcnew System::EventHandler(this, &HomeSystem::lblPayBeneficiary_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->lblElectricity);
			this->panel4->Location = System::Drawing::Point(607, 606);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(409, 146);
			this->panel4->TabIndex = 17;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(2)));
			this->label18->Location = System::Drawing::Point(133, 109);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(132, 20);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Buy Electricity";
			// 
			// lblElectricity
			// 
			this->lblElectricity->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblElectricity.Image")));
			this->lblElectricity->Location = System::Drawing::Point(160, 15);
			this->lblElectricity->Name = L"lblElectricity";
			this->lblElectricity->Size = System::Drawing::Size(100, 72);
			this->lblElectricity->TabIndex = 20;
			this->lblElectricity->Click += gcnew System::EventHandler(this, &HomeSystem::lblElectricity_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->lblCashSend);
			this->panel5->Location = System::Drawing::Point(35, 606);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(430, 146);
			this->panel5->TabIndex = 16;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::Control;
			this->label16->Location = System::Drawing::Point(137, 109);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 20);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Cash Send";
			// 
			// lblCashSend
			// 
			this->lblCashSend->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblCashSend.Image")));
			this->lblCashSend->Location = System::Drawing::Point(138, 15);
			this->lblCashSend->Name = L"lblCashSend";
			this->lblCashSend->Size = System::Drawing::Size(125, 76);
			this->lblCashSend->TabIndex = 20;
			this->lblCashSend->Click += gcnew System::EventHandler(this, &HomeSystem::lblCashSend_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWelcome->Location = System::Drawing::Point(214, 135);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(611, 42);
			this->lblWelcome->TabIndex = 18;
			this->lblWelcome->Text = L"label11";
			// 
			// refreshTimer
			// 
			this->refreshTimer->Tick += gcnew System::EventHandler(this, &HomeSystem::refreshTimer_Tick);
			// 
			// HomeSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 1008);
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pnlMainAccount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pnlHome);
			this->Name = L"HomeSystem";
			this->Text = L"HomeSystem";
			this->Load += gcnew System::EventHandler(this, &HomeSystem::HomeSystem_Load);
			this->Shown += gcnew System::EventHandler(this, &HomeSystem::HomeSystem_Shown);
			this->pnlHome->ResumeLayout(false);
			this->pnlHome->PerformLayout();
			this->pnlMainAccount->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}

	private: System::Void HomeSystem_Load(System::Object^ sender, System::EventArgs^ e) 
	{

		if (loggedInUser != nullptr)
		{
			double balance = loggedInUser->getBalance();
			String^ balanceText = "R " + balance.ToString("F2");

			if (lblWelcome != nullptr)
			{
				/*lblWelcome->Text = "Welcome, " + loggedInUser->getFirstname() + " " + loggedInUser->getSurname();
				MessageBox::Show("lblWelcome updated to: " + lblWelcome->Text, "Debug");*/
			}
			else
			{
				MessageBox::Show("lblWelcome is NULL!", "Error");
			}
		}

	}

	private: System::Void lblBalance_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*MessageBox::Show("Money", "Money", MessageBoxButtons::OK, MessageBoxIcon::Hand);*/
	}

	private: System::Void btnTransact_Click(System::Object^ sender, System::EventArgs^ e)
	{
		frmTransact^ transact = gcnew frmTransact(loggedInUser);
		this->Hide();  // Hides current form
		transact->ShowDialog();
		this->Show();  // When Cards closes, this form reappears
	}

	private: System::Void btnCards_Click(System::Object^ sender, System::EventArgs^ e)
	{
		frmCards^ cards = gcnew frmCards(loggedInUser);
		this->Hide();  // Hides current form
		cards->ShowDialog();  // Shows Cards form
		this->Show();  // When Cards closes, this form reappears
	}

	private: System::Void btnMessage_Click(System::Object^ sender, System::EventArgs^ e)
	{
		frmMessage^ Message = gcnew frmMessage();
		this->Hide();  // Hides current form
		Message->ShowDialog();
		this->Show();  // When Cards closes, this form reappears
	}

	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
	}

	private: System::Void lblAirTime_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		frmDataAndAirTime^ Airtime = gcnew frmDataAndAirTime(loggedInUser);
		this->Hide();	// Hides current form
		Airtime->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}

	private: System::Void lblPayBeneficiary_Click(System::Object^ sender, System::EventArgs^ e)
	{
		frmPayBeneficiary^ Beneficiary = gcnew frmPayBeneficiary();
		this->Hide();	// Hides current form
		Beneficiary->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}

	private: System::Void lblCashSend_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		frmCashSend^ CashSend = gcnew frmCashSend(loggedInUser);
		this->Hide();	// Hides current form
		CashSend->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}

	private: System::Void lblElectricity_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		frmBuyElectricity^ Electricity = gcnew frmBuyElectricity(loggedInUser);
		this->Hide();	// Hides current form
		Electricity->ShowDialog();
		this->Show();	 // When Cards closes, this form reappears
	}

	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e)
	{
		lblBalance->Text = "R " + loggedInUser->getBalance().ToString("F2");

		// Flash the label to show refresh happened
		Color originalColor = lblBalance->ForeColor;
		lblBalance->ForeColor = Color::Green;
		refreshTimer->Start();
	}
	private: System::Void HomeSystem_Shown(System::Object^ sender, System::EventArgs^ e) 
	{
		if (loggedInUser != nullptr)
		{
			// Find the control that says "label11" and update it
			for each (Control ^ ctrl in this->Controls)
			{
				if (ctrl->Text == "label11")
				{
					ctrl->Text = "Welcome, " + loggedInUser->getFirstname() + " " + loggedInUser->getSurname();
					break;
				}
			}

			// Update balance label
			lblBalance->Text = "R " + loggedInUser->getBalance().ToString("F2");
		}
	}


	private: System::Void refreshTimer_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		refreshTimer->Stop();
		lblBalance->ForeColor = Color::Black;
	}
};
}
