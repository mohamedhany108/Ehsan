namespace TodayPageWinForms {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ titleLabel;
    private: System::Windows::Forms::Label^ seasonsLabel;
    private: System::Windows::Forms::GroupBox^ caseBox1;





    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->titleLabel = (gcnew System::Windows::Forms::Label());
               this->seasonsLabel = (gcnew System::Windows::Forms::Label());
               this->caseBox1 = (gcnew System::Windows::Forms::GroupBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->caseBox1->SuspendLayout();
               this->SuspendLayout();
               // 
               // titleLabel
               // 
               this->titleLabel->AutoSize = true;
               this->titleLabel->Location = System::Drawing::Point(261, 19);
               this->titleLabel->Name = L"titleLabel";
               this->titleLabel->Size = System::Drawing::Size(0, 16);
               this->titleLabel->TabIndex = 1;
               // 
               // seasonsLabel
               // 
               this->seasonsLabel->AutoSize = true;
               this->seasonsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->seasonsLabel->Location = System::Drawing::Point(168, 18);
               this->seasonsLabel->Name = L"seasonsLabel";
               this->seasonsLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
               this->seasonsLabel->Size = System::Drawing::Size(96, 29);
               this->seasonsLabel->TabIndex = 2;
               this->seasonsLabel->Text = L"حذف حاله";
               this->seasonsLabel->Click += gcnew System::EventHandler(this, &Form1::seasonsLabel_Click);
               // 
               // caseBox1
               // 
               this->caseBox1->Controls->Add(this->button3);
               this->caseBox1->Controls->Add(this->button2);
               this->caseBox1->Controls->Add(this->label1);
               this->caseBox1->Controls->Add(this->seasonsLabel);
               this->caseBox1->Location = System::Drawing::Point(35, 97);
               this->caseBox1->Name = L"caseBox1";
               this->caseBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
               this->caseBox1->Size = System::Drawing::Size(442, 153);
               this->caseBox1->TabIndex = 3;
               this->caseBox1->TabStop = false;
               this->caseBox1->Enter += gcnew System::EventHandler(this, &Form1::caseBox1_Enter);
               // 
               // button1
               // 
               this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button1->Location = System::Drawing::Point(141, 19);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(244, 51);
               this->button1->TabIndex = 5;
               this->button1->Text = L"اضافه حاله جديده";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(93, 47);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(239, 25);
               this->label1->TabIndex = 3;
               this->label1->Text = L"هل انت متاكد من حذف هذه الحاله؟";
               // 
               // button2
               // 
               this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button2->Location = System::Drawing::Point(265, 98);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(85, 49);
               this->button2->TabIndex = 6;
               this->button2->Text = L"نعم";
               this->button2->UseVisualStyleBackColor = true;
               // 
               // button3
               // 
               this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button3->Location = System::Drawing::Point(93, 98);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(85, 49);
               this->button3->TabIndex = 7;
               this->button3->Text = L"لا";
               this->button3->UseVisualStyleBackColor = true;
               // 
               // Form1
               // 
               this->ClientSize = System::Drawing::Size(532, 469);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->titleLabel);
               this->Controls->Add(this->caseBox1);
               this->Name = L"Form1";
               this->Text = L"صفحة اليوم";
               this->caseBox1->ResumeLayout(false);
               this->caseBox1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void caseBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void seasonsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void caseBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
