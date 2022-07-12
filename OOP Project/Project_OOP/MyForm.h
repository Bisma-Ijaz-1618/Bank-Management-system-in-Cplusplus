#pragma once


namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel->Hide();
			EmailP->Hide();
			Panab->Hide();
			ab->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Details;
	private: System::Windows::Forms::Button^ Demo;

	private: System::Windows::Forms::PictureBox^ Insta;
	private: System::Windows::Forms::PictureBox^ Wha;

	private: System::Windows::Forms::PictureBox^ Twi;

	private: System::Windows::Forms::PictureBox^ Face;

	private: System::Windows::Forms::Button^ Contact;
	private: System::Windows::Forms::Button^ Instagram;
	private: System::Windows::Forms::Button^ WhatsApp;


	private: System::Windows::Forms::Button^ Twitter;

	private: System::Windows::Forms::Button^ facebook;

	private: System::Windows::Forms::Button^ About;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Panel^ EmailP;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;




	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ AD;

	private: System::Windows::Forms::TextBox^ Msg;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ Email;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ NAME;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Send;
	private: System::Windows::Forms::Button^ Close;
	private: System::Windows::Forms::Button^ BDemo;
	private: System::Windows::Forms::Button^ BPartner;

	private: System::Windows::Forms::Button^ GI;
	private: System::Windows::Forms::Panel^ Panab;




	private: System::Windows::Forms::Button^ Clab;






	private: System::Windows::Forms::Panel^ ab;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;



















	protected:


	protected:

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Details = (gcnew System::Windows::Forms::Button());
			this->Demo = (gcnew System::Windows::Forms::Button());
			this->Insta = (gcnew System::Windows::Forms::PictureBox());
			this->Wha = (gcnew System::Windows::Forms::PictureBox());
			this->Twi = (gcnew System::Windows::Forms::PictureBox());
			this->Face = (gcnew System::Windows::Forms::PictureBox());
			this->Contact = (gcnew System::Windows::Forms::Button());
			this->Instagram = (gcnew System::Windows::Forms::Button());
			this->WhatsApp = (gcnew System::Windows::Forms::Button());
			this->Twitter = (gcnew System::Windows::Forms::Button());
			this->facebook = (gcnew System::Windows::Forms::Button());
			this->About = (gcnew System::Windows::Forms::Button());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->BPartner = (gcnew System::Windows::Forms::Button());
			this->GI = (gcnew System::Windows::Forms::Button());
			this->BDemo = (gcnew System::Windows::Forms::Button());
			this->Close = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EmailP = (gcnew System::Windows::Forms::Panel());
			this->Send = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->AD = (gcnew System::Windows::Forms::TextBox());
			this->Msg = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NAME = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Panab = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Clab = (gcnew System::Windows::Forms::Button());
			this->ab = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Insta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Twi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Face))->BeginInit();
			this->panel->SuspendLayout();
			this->EmailP->SuspendLayout();
			this->Panab->SuspendLayout();
			this->SuspendLayout();
			// 
			// Details
			// 
			this->Details->AutoEllipsis = true;
			this->Details->BackColor = System::Drawing::Color::SlateBlue;
			this->Details->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Details->FlatAppearance->BorderSize = 0;
			this->Details->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Details->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->Details->ForeColor = System::Drawing::Color::LightPink;
			this->Details->Location = System::Drawing::Point(83, 484);
			this->Details->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Details->Name = L"Details";
			this->Details->Size = System::Drawing::Size(172, 35);
			this->Details->TabIndex = 0;
			this->Details->Text = L"More Details";
			this->Details->UseVisualStyleBackColor = false;
			this->Details->Click += gcnew System::EventHandler(this, &MyForm::Details_Click);
			// 
			// Demo
			// 
			this->Demo->AutoEllipsis = true;
			this->Demo->BackColor = System::Drawing::Color::LightPink;
			this->Demo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Demo->FlatAppearance->BorderSize = 3;
			this->Demo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Demo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->Demo->ForeColor = System::Drawing::Color::SlateBlue;
			this->Demo->Location = System::Drawing::Point(284, 484);
			this->Demo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Demo->Name = L"Demo";
			this->Demo->Size = System::Drawing::Size(172, 35);
			this->Demo->TabIndex = 1;
			this->Demo->Text = L"View Demo";
			this->Demo->UseVisualStyleBackColor = false;
			this->Demo->Click += gcnew System::EventHandler(this, &MyForm::Demo_Click);
			// 
			// Insta
			// 
			this->Insta->BackColor = System::Drawing::Color::Transparent;
			this->Insta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Insta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Insta.Image")));
			this->Insta->Location = System::Drawing::Point(83, 648);
			this->Insta->Name = L"Insta";
			this->Insta->Size = System::Drawing::Size(39, 31);
			this->Insta->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Insta->TabIndex = 3;
			this->Insta->TabStop = false;
			// 
			// Wha
			// 
			this->Wha->BackColor = System::Drawing::Color::Transparent;
			this->Wha->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Wha->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Wha.Image")));
			this->Wha->Location = System::Drawing::Point(284, 687);
			this->Wha->Name = L"Wha";
			this->Wha->Size = System::Drawing::Size(39, 31);
			this->Wha->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Wha->TabIndex = 4;
			this->Wha->TabStop = false;
			// 
			// Twi
			// 
			this->Twi->BackColor = System::Drawing::Color::Transparent;
			this->Twi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Twi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Twi.Image")));
			this->Twi->Location = System::Drawing::Point(284, 650);
			this->Twi->Name = L"Twi";
			this->Twi->Size = System::Drawing::Size(39, 31);
			this->Twi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Twi->TabIndex = 5;
			this->Twi->TabStop = false;
			// 
			// Face
			// 
			this->Face->BackColor = System::Drawing::Color::Transparent;
			this->Face->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Face->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Face.Image")));
			this->Face->Location = System::Drawing::Point(83, 687);
			this->Face->Name = L"Face";
			this->Face->Size = System::Drawing::Size(39, 31);
			this->Face->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Face->TabIndex = 6;
			this->Face->TabStop = false;
			// 
			// Contact
			// 
			this->Contact->AutoEllipsis = true;
			this->Contact->BackColor = System::Drawing::Color::Transparent;
			this->Contact->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Contact.BackgroundImage")));
			this->Contact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Contact->FlatAppearance->BorderSize = 0;
			this->Contact->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Contact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->Contact->ForeColor = System::Drawing::Color::Thistle;
			this->Contact->Location = System::Drawing::Point(937, 24);
			this->Contact->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Contact->Name = L"Contact";
			this->Contact->Size = System::Drawing::Size(88, 27);
			this->Contact->TabIndex = 7;
			this->Contact->Text = L"Contact Us";
			this->Contact->UseVisualStyleBackColor = false;
			this->Contact->Click += gcnew System::EventHandler(this, &MyForm::Contact_Click);
			// 
			// Instagram
			// 
			this->Instagram->AutoEllipsis = true;
			this->Instagram->BackColor = System::Drawing::Color::Transparent;
			this->Instagram->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Instagram.BackgroundImage")));
			this->Instagram->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Instagram->FlatAppearance->BorderSize = 0;
			this->Instagram->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Instagram->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->Instagram->ForeColor = System::Drawing::Color::LightPink;
			this->Instagram->Location = System::Drawing::Point(140, 648);
			this->Instagram->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Instagram->Name = L"Instagram";
			this->Instagram->Size = System::Drawing::Size(96, 31);
			this->Instagram->TabIndex = 8;
			this->Instagram->Text = L"Instagram";
			this->Instagram->UseVisualStyleBackColor = false;
			// 
			// WhatsApp
			// 
			this->WhatsApp->AutoEllipsis = true;
			this->WhatsApp->BackColor = System::Drawing::Color::Transparent;
			this->WhatsApp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WhatsApp.BackgroundImage")));
			this->WhatsApp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->WhatsApp->FlatAppearance->BorderSize = 0;
			this->WhatsApp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->WhatsApp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->WhatsApp->ForeColor = System::Drawing::Color::Green;
			this->WhatsApp->Location = System::Drawing::Point(341, 689);
			this->WhatsApp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WhatsApp->Name = L"WhatsApp";
			this->WhatsApp->Size = System::Drawing::Size(96, 28);
			this->WhatsApp->TabIndex = 9;
			this->WhatsApp->Text = L"WhatsApp";
			this->WhatsApp->UseVisualStyleBackColor = false;
			// 
			// Twitter
			// 
			this->Twitter->AutoEllipsis = true;
			this->Twitter->BackColor = System::Drawing::Color::Transparent;
			this->Twitter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Twitter.BackgroundImage")));
			this->Twitter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Twitter->FlatAppearance->BorderSize = 0;
			this->Twitter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Twitter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->Twitter->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->Twitter->Location = System::Drawing::Point(341, 650);
			this->Twitter->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Twitter->Name = L"Twitter";
			this->Twitter->Size = System::Drawing::Size(96, 31);
			this->Twitter->TabIndex = 10;
			this->Twitter->Text = L"Twitter";
			this->Twitter->UseVisualStyleBackColor = false;
			// 
			// facebook
			// 
			this->facebook->AutoEllipsis = true;
			this->facebook->BackColor = System::Drawing::Color::Transparent;
			this->facebook->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"facebook.BackgroundImage")));
			this->facebook->Cursor = System::Windows::Forms::Cursors::Hand;
			this->facebook->FlatAppearance->BorderSize = 0;
			this->facebook->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->facebook->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->facebook->ForeColor = System::Drawing::Color::RoyalBlue;
			this->facebook->Location = System::Drawing::Point(140, 687);
			this->facebook->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->facebook->Name = L"facebook";
			this->facebook->Size = System::Drawing::Size(96, 31);
			this->facebook->TabIndex = 11;
			this->facebook->Text = L"Facebook";
			this->facebook->UseVisualStyleBackColor = false;
			// 
			// About
			// 
			this->About->AutoEllipsis = true;
			this->About->BackColor = System::Drawing::Color::Transparent;
			this->About->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"About.BackgroundImage")));
			this->About->Cursor = System::Windows::Forms::Cursors::Hand;
			this->About->FlatAppearance->BorderSize = 0;
			this->About->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->About->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->About->ForeColor = System::Drawing::Color::Thistle;
			this->About->Location = System::Drawing::Point(937, 59);
			this->About->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->About->Name = L"About";
			this->About->Size = System::Drawing::Size(88, 27);
			this->About->TabIndex = 12;
			this->About->Text = L"About Us";
			this->About->UseVisualStyleBackColor = false;
			this->About->Click += gcnew System::EventHandler(this, &MyForm::About_Click);
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::Color::SlateBlue;
			this->panel->Controls->Add(this->BPartner);
			this->panel->Controls->Add(this->GI);
			this->panel->Controls->Add(this->BDemo);
			this->panel->Controls->Add(this->Close);
			this->panel->Controls->Add(this->textBox4);
			this->panel->Controls->Add(this->textBox3);
			this->panel->Controls->Add(this->textBox2);
			this->panel->Controls->Add(this->textBox1);
			this->panel->Controls->Add(this->label1);
			this->panel->Controls->Add(this->EmailP);
			this->panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(1064, 749);
			this->panel->TabIndex = 13;
			// 
			// BPartner
			// 
			this->BPartner->AllowDrop = true;
			this->BPartner->BackColor = System::Drawing::Color::SlateBlue;
			this->BPartner->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BPartner->FlatAppearance->BorderSize = 0;
			this->BPartner->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BPartner->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F));
			this->BPartner->ForeColor = System::Drawing::Color::Pink;
			this->BPartner->Location = System::Drawing::Point(529, 518);
			this->BPartner->Name = L"BPartner";
			this->BPartner->Size = System::Drawing::Size(226, 46);
			this->BPartner->TabIndex = 22;
			this->BPartner->Text = L"Become a Partner";
			this->BPartner->UseVisualStyleBackColor = false;
			this->BPartner->Click += gcnew System::EventHandler(this, &MyForm::BPartner_Click);
			// 
			// GI
			// 
			this->GI->AllowDrop = true;
			this->GI->BackColor = System::Drawing::Color::SlateBlue;
			this->GI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GI->FlatAppearance->BorderSize = 0;
			this->GI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GI->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F));
			this->GI->ForeColor = System::Drawing::Color::Pink;
			this->GI->Location = System::Drawing::Point(516, 402);
			this->GI->Name = L"GI";
			this->GI->Size = System::Drawing::Size(188, 46);
			this->GI->TabIndex = 21;
			this->GI->Text = L"Get Inspired";
			this->GI->UseVisualStyleBackColor = false;
			this->GI->Click += gcnew System::EventHandler(this, &MyForm::GI_Click);
			// 
			// BDemo
			// 
			this->BDemo->AllowDrop = true;
			this->BDemo->BackColor = System::Drawing::Color::SlateBlue;
			this->BDemo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BDemo->FlatAppearance->BorderSize = 0;
			this->BDemo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BDemo->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F));
			this->BDemo->ForeColor = System::Drawing::Color::Pink;
			this->BDemo->Location = System::Drawing::Point(526, 286);
			this->BDemo->Name = L"BDemo";
			this->BDemo->Size = System::Drawing::Size(188, 46);
			this->BDemo->TabIndex = 20;
			this->BDemo->Text = L"Book a Demo";
			this->BDemo->UseVisualStyleBackColor = false;
			this->BDemo->Click += gcnew System::EventHandler(this, &MyForm::BDemo_Click);
			// 
			// Close
			// 
			this->Close->BackColor = System::Drawing::Color::SlateBlue;
			this->Close->FlatAppearance->BorderSize = 0;
			this->Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Close->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Close->ForeColor = System::Drawing::Color::DarkRed;
			this->Close->Location = System::Drawing::Point(1008, 17);
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(44, 43);
			this->Close->TabIndex = 9;
			this->Close->Text = L"X";
			this->Close->UseVisualStyleBackColor = false;
			this->Close->Click += gcnew System::EventHandler(this, &MyForm::Close_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SlateBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::LightGray;
			this->textBox4->Location = System::Drawing::Point(538, 570);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(485, 65);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"Join our Partner Program and earn 25% recurring commissions.";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SlateBlue;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::LightGray;
			this->textBox3->Location = System::Drawing::Point(540, 454);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(485, 65);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"Discover many ways in our customers use sleeknote.";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SlateBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(540, 338);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(485, 65);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Request a Demo from our conversion specialists.";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SlateBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(538, 197);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(485, 90);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Please Select a Topic Below Related to your Inquiry. If you don\'t find what you n"
				L"eed, fill out our contact form.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SlateBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Pink;
			this->label1->Location = System::Drawing::Point(532, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"How Can we Help\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EmailP
			// 
			this->EmailP->BackColor = System::Drawing::Color::LightPink;
			this->EmailP->Controls->Add(this->Send);
			this->EmailP->Controls->Add(this->panel3);
			this->EmailP->Controls->Add(this->AD);
			this->EmailP->Controls->Add(this->Msg);
			this->EmailP->Controls->Add(this->panel2);
			this->EmailP->Controls->Add(this->Email);
			this->EmailP->Controls->Add(this->panel1);
			this->EmailP->Controls->Add(this->NAME);
			this->EmailP->Controls->Add(this->label8);
			this->EmailP->Controls->Add(this->label7);
			this->EmailP->Controls->Add(this->label6);
			this->EmailP->Controls->Add(this->label5);
			this->EmailP->Location = System::Drawing::Point(4, 5);
			this->EmailP->Name = L"EmailP";
			this->EmailP->Size = System::Drawing::Size(477, 741);
			this->EmailP->TabIndex = 0;
			// 
			// Send
			// 
			this->Send->AllowDrop = true;
			this->Send->BackColor = System::Drawing::Color::SlateBlue;
			this->Send->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Send->FlatAppearance->BorderSize = 0;
			this->Send->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Send->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Send->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Send->Location = System::Drawing::Point(40, 596);
			this->Send->Name = L"Send";
			this->Send->Size = System::Drawing::Size(332, 34);
			this->Send->TabIndex = 19;
			this->Send->Text = L"Send Message";
			this->Send->UseVisualStyleBackColor = false;
			this->Send->Click += gcnew System::EventHandler(this, &MyForm::Send_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(31, 521);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(341, 2);
			this->panel3->TabIndex = 18;
			// 
			// AD
			// 
			this->AD->BackColor = System::Drawing::Color::LightPink;
			this->AD->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AD->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->AD->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->AD->Location = System::Drawing::Point(31, 500);
			this->AD->Name = L"AD";
			this->AD->Size = System::Drawing::Size(341, 19);
			this->AD->TabIndex = 17;
			this->AD->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::AD_KeyDown);
			// 
			// Msg
			// 
			this->Msg->BackColor = System::Drawing::Color::LightPink;
			this->Msg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Msg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->Msg->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->Msg->Location = System::Drawing::Point(31, 312);
			this->Msg->Multiline = true;
			this->Msg->Name = L"Msg";
			this->Msg->Size = System::Drawing::Size(341, 109);
			this->Msg->TabIndex = 15;
			this->Msg->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Msg_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(31, 229);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(341, 2);
			this->panel2->TabIndex = 16;
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::Color::LightPink;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->Email->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->Email->Location = System::Drawing::Point(31, 208);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(341, 19);
			this->Email->TabIndex = 15;
			this->Email->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Email_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(31, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(341, 2);
			this->panel1->TabIndex = 14;
			// 
			// NAME
			// 
			this->NAME->BackColor = System::Drawing::Color::LightPink;
			this->NAME->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NAME->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F));
			this->NAME->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->NAME->Location = System::Drawing::Point(31, 97);
			this->NAME->Name = L"NAME";
			this->NAME->Size = System::Drawing::Size(341, 19);
			this->NAME->TabIndex = 13;
			this->NAME->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::NAME_KeyDown);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SlateBlue;
			this->label8->Location = System::Drawing::Point(25, 449);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(259, 33);
			this->label8->TabIndex = 12;
			this->label8->Text = L"ADDITIONAL DETAILS";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SlateBlue;
			this->label7->Location = System::Drawing::Point(25, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 33);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Message *";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SlateBlue;
			this->label6->Location = System::Drawing::Point(25, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 33);
			this->label6->TabIndex = 10;
			this->label6->Text = L"EMAIL *";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SlateBlue;
			this->label5->Location = System::Drawing::Point(25, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 33);
			this->label5->TabIndex = 9;
			this->label5->Text = L"NAME *";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panab
			// 
			this->Panab->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->Panab->Controls->Add(this->button2);
			this->Panab->Controls->Add(this->button1);
			this->Panab->Controls->Add(this->label4);
			this->Panab->Controls->Add(this->button3);
			this->Panab->Controls->Add(this->Clab);
			this->Panab->Controls->Add(this->ab);
			this->Panab->Location = System::Drawing::Point(0, 0);
			this->Panab->Name = L"Panab";
			this->Panab->Size = System::Drawing::Size(1064, 749);
			this->Panab->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->AllowDrop = true;
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F));
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->Location = System::Drawing::Point(628, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 45);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Bisma Ijaz";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(628, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 49);
			this->button1->TabIndex = 25;
			this->button1->Text = L"UbaidUllah";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 24.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(620, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 44);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Team Members";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->AllowDrop = true;
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 18.25F));
			this->button3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button3->Location = System::Drawing::Point(628, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 45);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Amad Ahmed";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Clab
			// 
			this->Clab->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->Clab->FlatAppearance->BorderSize = 0;
			this->Clab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clab->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clab->ForeColor = System::Drawing::Color::DarkRed;
			this->Clab->Location = System::Drawing::Point(1008, 17);
			this->Clab->Name = L"Clab";
			this->Clab->Size = System::Drawing::Size(44, 43);
			this->Clab->TabIndex = 9;
			this->Clab->Text = L"X";
			this->Clab->UseVisualStyleBackColor = false;
			this->Clab->Click += gcnew System::EventHandler(this, &MyForm::Clab_Click);
			// 
			// ab
			// 
			this->ab->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ab.BackgroundImage")));
			this->ab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ab->Location = System::Drawing::Point(3, 148);
			this->ab->Name = L"ab";
			this->ab->Size = System::Drawing::Size(484, 442);
			this->ab->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1064, 749);
			this->Controls->Add(this->Panab);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->About);
			this->Controls->Add(this->facebook);
			this->Controls->Add(this->Twitter);
			this->Controls->Add(this->WhatsApp);
			this->Controls->Add(this->Instagram);
			this->Controls->Add(this->Contact);
			this->Controls->Add(this->Face);
			this->Controls->Add(this->Twi);
			this->Controls->Add(this->Wha);
			this->Controls->Add(this->Insta);
			this->Controls->Add(this->Demo);
			this->Controls->Add(this->Details);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(1080, 788);
			this->MinimumSize = System::Drawing::Size(1080, 766);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"D i g i B a n k";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Insta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Twi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Face))->EndInit();
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->EmailP->ResumeLayout(false);
			this->EmailP->PerformLayout();
			this->Panab->ResumeLayout(false);
			this->Panab->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Demo_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("..\\DigiBank\\Debug\\DigiBank.exe");
}


private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
	panel->Hide();
	EmailP->Hide();
}
private: System::Void Contact_Click(System::Object^ sender, System::EventArgs^ e) {
	panel->Show(); 
	EmailP->Show();
}
private: System::Void NAME_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		Email->Focus();
}

private: System::Void Email_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		Msg->Focus();
}
private: System::Void Msg_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		AD->Focus();
}
private: System::Void AD_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		Send->PerformClick();
}
private: System::Void Send_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((NAME->TextLength == 0) || (Email->TextLength == 0) || (Msg->TextLength == 0))
		MessageBox::Show(" * Fields are Necessary", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("Message Dispatched!\nWe will contact you soon", "Sending", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void BDemo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((NAME->TextLength == 0) || (Email->TextLength == 0) || (Msg->TextLength == 0))
		MessageBox::Show(" * Fields are Necessary", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("Message Dispatched!\nWe will contact you soon", "Sending", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void GI_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((NAME->TextLength == 0) || (Email->TextLength == 0) || (Msg->TextLength == 0))
		MessageBox::Show(" * Fields are Necessary", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("Message Dispatched!\nWe will contact you soon", "Sending", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void BPartner_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((NAME->TextLength == 0) || (Email->TextLength == 0) || (Msg->TextLength == 0))
		MessageBox::Show(" * Fields are Necessary", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("Message Dispatched!\nWe will contact you soon", "Sending", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void About_Click(System::Object^ sender, System::EventArgs^ e) {
	Panab->Show();
	ab->Show();
}
private: System::Void Clab_Click(System::Object^ sender, System::EventArgs^ e) {
	Panab->Hide();
	ab->Hide();
}
private: System::Void Details_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("..\\Bank Management System.pptx");
}
};
}
