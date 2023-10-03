#pragma once

namespace trainticket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
			fromcombo();
			Tocombo();
			
			//timecombo();
			
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

	protected:











	private: System::Windows::Forms::GroupBox^ groupBox9;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label23;


	private: System::Windows::Forms::TextBox^ textBox2;











	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;


	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;

private: System::Windows::Forms::Label^ label34;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;




private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;

private: System::Windows::Forms::Button^ button2;

private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox5;






private: System::Windows::Forms::Panel^ panel1;














private: System::Windows::Forms::Panel^ panel2;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label33;

private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ label51;

private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label3;

private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;

private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox1;


private: System::ComponentModel::IContainer^ components;





















	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(77, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N.I.C No";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(77, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(29, 433);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 15);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Child";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(77, 430);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"0";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 399);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 15);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Adult";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(77, 396);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 366);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 15);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Number of passanger";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(77, 319);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 23);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->Text = L"Choose One...........";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 15);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Time";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(75, 239);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(119, 23);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"Choose One...........";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 15);
			this->label4->TabIndex = 2;
			this->label4->Text = L"From";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->dataGridView1);
			this->groupBox9->Controls->Add(this->button1);
			this->groupBox9->Location = System::Drawing::Point(246, 163);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(1039, 227);
			this->groupBox9->TabIndex = 4;
			this->groupBox9->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1015, 179);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(10, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Click here to view deatils\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(86, 203);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(0, 13);
			this->label47->TabIndex = 45;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(86, 176);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(0, 13);
			this->label46->TabIndex = 44;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(18, 152);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(54, 13);
			this->label44->TabIndex = 42;
			this->label44->Text = L"Train No :";
			this->label44->Click += gcnew System::EventHandler(this, &MyForm::label44_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(18, 176);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(68, 13);
			this->label43->TabIndex = 41;
			this->label43->Text = L"Train Name :";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(22, 203);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(64, 13);
			this->label42->TabIndex = 40;
			this->label42->Text = L"Train Type :";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(85, 152);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(0, 13);
			this->label41->TabIndex = 39;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(531, 124);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(0, 13);
			this->label40->TabIndex = 38;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(531, 100);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(0, 13);
			this->label39->TabIndex = 37;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(18, 87);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(54, 13);
			this->label37->TabIndex = 36;
			this->label37->Text = L"N.I.C No :";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(86, 87);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(0, 13);
			this->label36->TabIndex = 35;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(86, 62);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(0, 13);
			this->label35->TabIndex = 34;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(19, 62);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 13);
			this->label34->TabIndex = 33;
			this->label34->Text = L"Name :";
			this->label34->Click += gcnew System::EventHandler(this, &MyForm::label34_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(495, 121);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(13, 13);
			this->label32->TabIndex = 31;
			this->label32->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(495, 203);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 13);
			this->label31->TabIndex = 30;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(495, 39);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 13);
			this->label30->TabIndex = 29;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(495, 152);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 13);
			this->label29->TabIndex = 28;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(495, 62);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 25;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(495, 100);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(13, 13);
			this->label25->TabIndex = 24;
			this->label25->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(453, 100);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 13);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Adult :";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(453, 121);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(36, 13);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Child :";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(429, 203);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 13);
			this->label20->TabIndex = 10;
			this->label20->Text = L"Total :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(255, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(118, 20);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Ticket Details";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(430, 39);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Date :";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(430, 62);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Time :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(430, 82);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(69, 13);
			this->label16->TabIndex = 6;
			this->label16->Text = L"No. of Ticket";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 133);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"To :";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(430, 175);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Class :";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(19, 109);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 3;
			this->label13->Text = L"From :";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(495, 176);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"3rd Class";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(430, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Return Type :";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Ref.No :";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(77, 529);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 19);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Two way";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(77, 501);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(72, 19);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"One way";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(12, 476);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(70, 15);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Ticket Type";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(77, 278);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 23);
			this->comboBox5->TabIndex = 4;
			this->comboBox5->Text = L"Choose One...........";
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 281);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 15);
			this->label7->TabIndex = 2;
			this->label7->Text = L"To";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(15, 568);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Total";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(96, 573);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(0, 13);
			this->label49->TabIndex = 46;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label59);
			this->panel1->Controls->Add(this->label50);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label51);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label49);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label48);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->comboBox5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->groupBox9);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1346, 725);
			this->panel1->TabIndex = 15;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1094, 638);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 60;
			this->button3->Text = L"Reset seat";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_2);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(1076, 612);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(11, 15);
			this->label59->TabIndex = 56;
			this->label59->Text = L"/";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(1091, 612);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(14, 15);
			this->label50->TabIndex = 55;
			this->label50->Text = L"0";
			this->label50->Click += gcnew System::EventHandler(this, &MyForm::label50_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1042, 612);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 15);
			this->label3->TabIndex = 53;
			this->label3->Text = L"0";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(133, 638);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 52;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1222, 474);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(18, 46);
			this->richTextBox1->TabIndex = 51;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(77, 604);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 50;
			this->button5->Text = L"Print Bill";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(1116, 121);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(0, 15);
			this->label51->TabIndex = 49;
			this->label51->Click += gcnew System::EventHandler(this, &MyForm::label51_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(1116, 108);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 15);
			this->label38->TabIndex = 48;
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::label38_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label58);
			this->panel2->Controls->Add(this->label57);
			this->panel2->Controls->Add(this->label56);
			this->panel2->Controls->Add(this->label55);
			this->panel2->Controls->Add(this->label54);
			this->panel2->Controls->Add(this->label53);
			this->panel2->Controls->Add(this->label52);
			this->panel2->Controls->Add(this->label45);
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label47);
			this->panel2->Controls->Add(this->label46);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label43);
			this->panel2->Controls->Add(this->label44);
			this->panel2->Controls->Add(this->label34);
			this->panel2->Controls->Add(this->label40);
			this->panel2->Controls->Add(this->label41);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label39);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->label37);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label36);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Location = System::Drawing::Point(246, 433);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(745, 228);
			this->panel2->TabIndex = 47;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(596, 121);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(0, 13);
			this->label58->TabIndex = 59;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(596, 100);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(0, 13);
			this->label57->TabIndex = 58;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(577, 124);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(13, 13);
			this->label56->TabIndex = 57;
			this->label56->Text = L"=";
			this->label56->Click += gcnew System::EventHandler(this, &MyForm::label56_Click);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(577, 100);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(13, 13);
			this->label55->TabIndex = 56;
			this->label55->Text = L"=";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(85, 133);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(0, 13);
			this->label54->TabIndex = 55;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(86, 118);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(0, 13);
			this->label53->TabIndex = 54;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(85, 39);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(0, 13);
			this->label52->TabIndex = 53;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(514, 118);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(11, 13);
			this->label45->TabIndex = 52;
			this->label45->Text = L"*";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(514, 100);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(11, 13);
			this->label33->TabIndex = 51;
			this->label33->Text = L"*";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(1015, 587);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(112, 19);
			this->label48->TabIndex = 46;
			this->label48->Text = L"Avalaible Seats";
			this->label48->Click += gcnew System::EventHandler(this, &MyForm::label48_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label27);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(12, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1343, 105);
			this->panel3->TabIndex = 61;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(646, 34);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(231, 31);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Kelani Valley Line";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(974, -2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(368, 130);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(123, 65);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(284, 25);
			this->label27->TabIndex = 4;
			this->label27->Text = L"இலங்கை புகையிரத சேவை";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(127, 3);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(280, 31);
			this->label28->TabIndex = 3;
			this->label28->Text = L"ශ්‍රී ලංකා දුම්රිය සේවය ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(93, 95);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(149, 34);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(233, 31);
			this->label60->TabIndex = 1;
			this->label60->Text = L"Srilankan Railway";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(413, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(113, 95);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1366, 745);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"Srilankan Railway";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime today= DateTime::Now;
		label38->Text = today.ToLongDateString();
		label30->Text = today.ToShortDateString();
	}
	private: System::Void groupBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox8_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		label53->Text = comboBox1->Text;
		label41->Text = ""; 
		label46->Text = ""; 
		label47->Text = "";
		label49->Text = "";
		Random^ refNumber = gcnew Random;
		int randNumb = refNumber->Next(232, 99999);
		label52->Text = Convert::ToString(randNumb);
		comboBox2->Text = "Choose One...........";
		comboBox5->Text = "Choose One...........";
		label3->Text = "";
		label50->Text = "";
		label25->Text = "0";
		label32->Text = "0";
		label54->Text = "";
		label57->Text = "";
		label58->Text = "";
		textBox3->Text = "0";
		textBox5->Text = "0";
	
		
		
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		label26->Text = comboBox2->Text;
		String^ from_combo = comboBox1->Text;
		String^ to_combo = comboBox5->Text;
		String^ time_combo = comboBox2->Text;
		label25->Text = "0";
		label32->Text = "0";
		label57->Text = "";
		label58->Text = "";
		textBox3->Text = "0";
		textBox5->Text = "0";
		

		String^ constring = "datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select * from traindata.train_details where Depature_From='" + from_combo + "' and Arrival_To='" + to_combo + "'and Depature_Time='" + time_combo + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
			if(myReader->Read())
			{
				String^ tr_id = myReader->GetInt32("Train_Number").ToString();
				label41->Text = tr_id;
				String^ tr_name = myReader->GetString("Train_Name");
				label46->Text = tr_name;
				String^ tr_type = myReader->GetString("Train_Type");
				label47->Text = tr_type;
				String^ fx_seat = myReader->GetInt32("fix_seat").ToString();
				label50->Text = fx_seat;
				String^ seat = myReader->GetInt32("Seat").ToString();
				label3->Text = seat;
				
				
		
			}

		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);

		}

	}
	
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		label29->Text = "One way";
		label49->Text = "";
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox6_Enter_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private:System::Void fromcombo(void) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select DISTINCT Depature_From from traindata.train_details;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ from;
				from = myReader->GetString("Depature_From");
				comboBox1->Items->Add(from);

			}

		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);

		}
	}
	private:System::Void Tocombo(void) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select DISTINCT Arrival_To from traindata.train_details;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ arrival;
				arrival= myReader->GetString("Arrival_To");
				comboBox5->Items->Add(arrival);

			}

		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);

		}
	}
	
	/*private:System::Void timecombo(void) {
		String^ from_combo = comboBox1->Text;
		String^ to_combo = comboBox5->Text;
		String^ constring = "datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select Depature_Time from traindata.train_details where Depature_From='"+from_combo +"' and Arrival_To='"+to_combo+"';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ tim;
				tim= myReader->GetString("Depature_Time");
				comboBox2->Items->Add(tim);

			}

		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);

		}
	}
*/

	
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "";
		label50->Text = "";
		label41->Text = "";
		label46->Text = ""; 
		label47->Text = "";
		label25->Text = "0";
		label32->Text = "0";
		label57->Text = "";
		label58->Text = "";
		textBox3->Text = "0";
		textBox5->Text = "0";

		comboBox2->Text = "Choose One...........";
		label54->Text = comboBox5->Text;
		String^ from_combo = comboBox1->Text;
		String^ to_combo = comboBox5->Text;
		String^ constring = "datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select DISTINCT Depature_Time from traindata.train_details where Depature_From='" + from_combo + "' and Arrival_To='" + to_combo + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			comboBox2->Items->Clear();
			while(myReader->Read())
			{
				 
				String^ tim;
				tim = myReader->GetString("Depature_Time");
				comboBox2->Items->Add(tim);

			}

		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);

		}
	}

	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ constring = "datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select * from traindata.train_details;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

	

	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);

	}
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	label35->Text = textBox1->Text;
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	label36->Text = textBox2->Text;
}
private: System::Void groupBox13_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox13_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label29->Text = "Two way";
	label49->Text = "";
}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	

	String^ from_combo = comboBox1->Text;
	String^ to_combo = comboBox5->Text;
	String^ time_combo = comboBox2->Text;

	
	String^ constring = "datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select * from traindata.train_details where Depature_From='" + from_combo + "' and Arrival_To='" + to_combo + "'and Depature_Time='" + time_combo + "';", conDataBase);
	MySqlDataReader^ myReader;
	
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		
		
		

		while (myReader->Read())
		{
		
			int ticket_pr = myReader->GetInt32("Ticket_Price");
			int  no_adults = Convert::ToInt32(textBox3->Text);
			int  no_children = Convert::ToInt32(textBox5->Text);
			double total_pr = (no_adults * ticket_pr) + (no_children * (ticket_pr/2));

			/*available seat*/int numberofseat = myReader->GetInt32("Seat");
			int nowseat = numberofseat - no_adults;
		
			String^ constring = "datasource=localhost;port=3306;username=root;password=root";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update traindata.train_details set Seat = '" +nowseat + "' where Depature_From='" + from_combo + "' and Arrival_To='" + to_combo + "'and Depature_Time='" + time_combo + "';", conDataBase);
			MySqlDataReader^ myReader;
			try {
				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				label3->Text = Convert::ToString(nowseat);
			}
			catch (Exception^ ex)
			{
				conDataBase->Close();
				MessageBox::Show(ex->Message);

			}

			if (radioButton2->Checked)
			{
				label49->Text = Convert::ToString(total_pr * 2)+".00 LKR";
				label31->Text = Convert::ToString(total_pr * 2) + ".00 LKR";
				label57->Text = (no_adults * ticket_pr*2).ToString() + ".00 LKR";
				label58->Text = (no_children * (ticket_pr / 2)*2).ToString() + ".00 LKR";
				label39->Text =(ticket_pr * 2).ToString() + ".00";
				label40->Text = (ticket_pr ).ToString() + ".00";
			}
			else if (radioButton1->Checked)
			{
				label49->Text = Convert::ToString(total_pr ) + ".00 LKR";
				label31->Text = Convert::ToString(total_pr) + ".00 LKR";
				label57->Text = (no_adults * ticket_pr  ).ToString() + ".00 LKR";
				label58->Text = (no_children * (ticket_pr / 2) ).ToString() + ".00 LKR";
				label39->Text = ticket_pr .ToString() + ".00";
				label40->Text = (ticket_pr/2).ToString() + ".00";
			}
			else
			{
				label49->Text =  "Error";
			}
		
			
		}
		

	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show("Select Number only for Adult and Child");
	}
	
	

	richTextBox1->Text = "";
	
	richTextBox1->AppendText("\t      "+"Sri Lanka Railway" +Environment::NewLine);
	richTextBox1->AppendText("********************************************"+Environment::NewLine);
	richTextBox1->AppendText("\t            " + "Receipt" + Environment::NewLine);
	richTextBox1->AppendText("--------------------------------------------------"+Environment::NewLine);
	richTextBox1->AppendText("\t\t\t    "+label30->Text+Environment::NewLine); 
	richTextBox1->AppendText("Ref No : " + label52->Text +Environment::NewLine);
	
	richTextBox1->AppendText( Environment::NewLine);
	richTextBox1->AppendText("Name: " + label35->Text + Environment::NewLine);
	richTextBox1->AppendText("Nic No: " + label36->Text + Environment::NewLine);
	richTextBox1->AppendText(Environment::NewLine);
	richTextBox1->AppendText("Train No : " + label41->Text + Environment::NewLine);
	richTextBox1->AppendText("Train Name: " + label46->Text + Environment::NewLine);
	richTextBox1->AppendText("Train Type : " + label47->Text + Environment::NewLine);
	richTextBox1->AppendText("Class : " + "3rd Class" + Environment::NewLine);
	richTextBox1->AppendText( Environment::NewLine);
	richTextBox1->AppendText("From : " + label53->Text +  Environment::NewLine);
	richTextBox1->AppendText("To : " + label54->Text +  Environment::NewLine);
	richTextBox1->AppendText("Depature Time : " + label26->Text +  Environment::NewLine);
	richTextBox1->AppendText("Return type : " + label29->Text +Environment::NewLine);
	richTextBox1->AppendText( Environment::NewLine);
	richTextBox1->AppendText("Number of Ticket : " + Environment::NewLine);
	richTextBox1->AppendText("\tAdults    : " + label25->Text + label33->Text + label39->Text +label55->Text+label57->Text+ Environment::NewLine);
	richTextBox1->AppendText("\tChildren : " + label32->Text + label45->Text + label40->Text +label56->Text+label58->Text+ Environment::NewLine);
	richTextBox1->AppendText(Environment::NewLine);
	richTextBox1->AppendText( "Total : " + label31->Text + Environment::NewLine);
	richTextBox1->AppendText("-----------------------------------------------------------"+Environment::NewLine);
	richTextBox1->AppendText("\t           "+"Thank you" + Environment::NewLine);
	richTextBox1->AppendText("**************************************************" + Environment::NewLine);

	
}


private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ from_combo = comboBox1->Text;
	String^ to_combo = comboBox5->Text;
	String^ time_combo = comboBox2->Text;
	String^ constring = "datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew   MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select * from traindata.train_details where Depature_From='" + from_combo + "' and Arrival_To='" + to_combo + "'and Depature_Time='" + time_combo + "';", conDataBase);
	MySqlDataReader^ myReader;

	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read())
		{
			int sea = myReader->GetInt32("Seat");
			int  adult = Convert::ToInt32(textBox3->Text);
			if (adult <= sea) {
				label25->Text = textBox3->Text;
				label49->Text = "";
			}
			else
			{
				MessageBox::Show("Seat is not enough...try again");
			}
		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		
	}

}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	label32->Text = textBox5->Text;
	label49->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label24_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void groupBox11_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void groupBox10_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime now = DateTime::Now;
	label51->Text = now.ToLongTimeString();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	String^ ds = richTextBox1->Text;
	System::Drawing::Font^ df = gcnew System::Drawing::Font("arial", 20);
	SolidBrush^ db = gcnew SolidBrush(Color::Black);
	PointF dp = Point(150.0f,150.0f);
	e->Graphics->DrawString(ds,df,db,dp);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
	label3->Text = "";
	label50->Text = "";
	label26->Text = "";
	label29->Text = "";
	label31->Text = "";
	label35->Text = "";
	label36->Text = "";
	label39->Text = "";
	label40->Text = "";
	label41->Text = "";
	label46->Text = "";
	label47->Text = "";
	label49->Text = "";
	label52->Text = "";
	label53->Text = "";
	label54->Text = "";
	label57->Text = "";
	label58->Text = "";
	richTextBox1->Text = "";

	textBox1->Text = "";
	textBox5->Text = "0";
	textBox3->Text = "0";
	textBox2->Text = "";
	comboBox1->Text = "Choose One...........";
	comboBox2->Text = "Choose One...........";
	comboBox5->Text = "Choose One...........";

	
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = "";
	label50->Text = "";
	label26->Text = "";
	label29->Text = "";
	label31->Text = "";
	label35->Text = "";
	label36->Text = "";
	label39->Text = "";
	label40->Text = "";
	label41->Text = "";
	label46->Text = "";
	label47->Text = "";
	label49->Text = "";
	label52->Text = "";
	label53->Text = "";
	label54->Text = "";
	label57->Text = "";
	label58->Text = "";

	richTextBox1->Text = "";

	textBox1->Text = "";
	textBox5->Text = "0";
	textBox3->Text = "0";
	textBox2->Text = "";
	comboBox1->Text="Choose One...........";
	comboBox2->Text = "Choose One...........";
	comboBox5->Text = "Choose One...........";

}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label50_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_2(System::Object^ sender, System::EventArgs^ e) {
	int  fixedseat = Convert::ToInt32(label50->Text);
	String^ from_combo = comboBox1->Text;
	String^ to_combo = comboBox5->Text;
	String^ time_combo = comboBox2->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update traindata.train_details set Seat = '" + fixedseat+ "' where Depature_From='" + from_combo + "' and Arrival_To='" + to_combo + "'and Depature_Time='" + time_combo + "';", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		int  fixedseat = Convert::ToInt32(label50->Text);
		label3->Text = label50->Text;
		MessageBox::Show("Reset Secussfuly");
		
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);

	}



}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

