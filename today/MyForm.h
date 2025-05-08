#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label16;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ComboBox^ Ï·«·«·«;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

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
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Ï·«·«·« = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 19));
			this->label16->Location = System::Drawing::Point(344, 680);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(235, 39);
			this->label16->TabIndex = 23;
			this->label16->Text = L"«·’›ÕÂ «·—«∆”ÌÂ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 19));
			this->label1->Location = System::Drawing::Point(346, 623);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 39);
			this->label1->TabIndex = 24;
			this->label1->Text = L"   Õ›Ÿ „”«⁄œÂ ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 19));
			this->label2->Location = System::Drawing::Point(711, 414);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 39);
			this->label2->TabIndex = 25;
			this->label2->Text = L"‰Ê⁄ «·„”«⁄œÂ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 19));
			this->label3->Location = System::Drawing::Point(573, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 39);
			this->label3->TabIndex = 26;
			this->label3->Text = L"»Ì«‰«  «·„”«⁄œÂ «·ÃœÌœÂ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->Ï·«·«·«);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel3->Location = System::Drawing::Point(564, 131);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(342, 256);
			this->panel3->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label7->Location = System::Drawing::Point(16, 216);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(172, 23);
			this->label7->TabIndex = 30;
			this->label7->Text = L"id:12345678912345";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label8->Location = System::Drawing::Point(96, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(244, 23);
			this->label8->TabIndex = 29;
			this->label8->Text = L"√Õ„œ „Õ„œ «Õ„œ «·”Ìœ ’«·Õ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label5->Location = System::Drawing::Point(3, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 23);
			this->label5->TabIndex = 28;
			this->label5->Text = L"id:12345678912345";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label6->Location = System::Drawing::Point(96, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(244, 23);
			this->label6->TabIndex = 27;
			this->label6->Text = L"√Õ„œ „Õ„œ «Õ„œ «·”Ìœ ’«·Õ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label4->Location = System::Drawing::Point(3, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 23);
			this->label4->TabIndex = 26;
			this->label4->Text = L"id:12345678912345";
			// 
			// Ï·«·«·«
			// 
			this->Ï·«·«·«->DisplayMember = L"«··«·«";
			this->Ï·«·«·«->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->Ï·«·«·«->FormattingEnabled = true;
			this->Ï·«·«·«->Location = System::Drawing::Point(3, 3);
			this->Ï·«·«·«->Name = L"Ï·«·«·«";
			this->Ï·«·«·«->Size = System::Drawing::Size(332, 29);
			this->Ï·«·«·«->TabIndex = 25;
			this->Ï·«·«·«->Text = L"                                «·Õ«·… «·„” ›ÌœÂ";
			this->Ï·«·«·«->ValueMember = L"«·««";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label14->Location = System::Drawing::Point(96, 43);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(244, 23);
			this->label14->TabIndex = 23;
			this->label14->Text = L"√Õ„œ „Õ„œ «Õ„œ «·”Ìœ ’«·Õ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label13->Location = System::Drawing::Point(149, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 23);
			this->label13->TabIndex = 24;
			this->label13->Text = L"€–«∆Ì…";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label15->Location = System::Drawing::Point(154, 39);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 23);
			this->label15->TabIndex = 22;
			this->label15->Text = L"„«·ÌÂ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(695, 468);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(215, 150);
			this->panel1->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label9->Location = System::Drawing::Point(150, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 23);
			this->label9->TabIndex = 26;
			this->label9->Text = L"⁄Ì‰ÌÂ";
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"«··«·«";
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(3, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 29);
			this->comboBox1->TabIndex = 25;
			this->comboBox1->Text = L"             ‰Ê⁄ «·„”«⁄œÂ";
			this->comboBox1->ValueMember = L"«·««";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 19));
			this->label10->Location = System::Drawing::Point(125, 414);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(456, 39);
			this->label10->TabIndex = 32;
			this->label10->Text = L"          «·„»·€ «Ê «·ﬁÌ„…              ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 19));
			this->label11->Location = System::Drawing::Point(304, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(301, 39);
			this->label11->TabIndex = 33;
			this->label11->Text = L" ≈÷«›… „”«⁄œ… Œ«’…";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(920, 741);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label16);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
