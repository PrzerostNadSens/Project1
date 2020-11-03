#pragma once
#include "Class.h"
#include "wszystkie.h"
#include <string>
#include <fstream>
#include <istream>
#include <streambuf>
#include <iostream>
#include <sstream>


namespace Project1 {

	using namespace System;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			kalkulator = gcnew Class;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ informacjeToolStripMenuItem;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(857, 37);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 116);
			this->button1->TabIndex = 0;
			this->button1->Text = L"szyfruj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(-3, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(852, 539);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1061, 37);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(676, 539);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(-3, 695);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(1740, 142);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(857, 263);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 116);
			this->button2->TabIndex = 4;
			this->button2->Text = L"deszyfruj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(857, 462);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 116);
			this->button3->TabIndex = 5;
			this->button3->Text = L"usuñ wszystkie dane";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 623);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(199, 37);
			this->button4->TabIndex = 6;
			this->button4->Text = L"usuñ tekst";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1085, 623);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(199, 37);
			this->button5->TabIndex = 7;
			this->button5->Text = L"usuñ zaszyfrowany tekst";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(541, 623);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(199, 37);
			this->button6->TabIndex = 8;
			this->button6->Text = L"usuñ klucz";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1733, 28);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(94, 24);
			this->informacjeToolStripMenuItem->Text = L"informacje";
			this->informacjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::informacjeToolStripMenuItem_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(263, 623);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(199, 37);
			this->button7->TabIndex = 10;
			this->button7->Text = L"wczytaj tekst z pliku";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1333, 623);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(199, 37);
			this->button8->TabIndex = 11;
			this->button8->Text = L"wczytaj tekst z pliku";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(789, 623);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(199, 37);
			this->button9->TabIndex = 12;
			this->button9->Text = L"wczytaj klucz z pliku";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1733, 835);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->menuStrip1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Szyfr przek¹tnokolumnowy_140687";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Class^ kalkulator;
		 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		kalkulator->main_Clasa();
		//arg2->Text = "tatatatatatatatatattatata";//
		textBox2->Text = kalkulator->ztekst_String;
	}
		   
		   
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		kalkulator->setarg1(textBox1->Text);
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	kalkulator->setarg2(textBox2->Text);
	//kalkulator->main_Clasa();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	kalkulator->setarg3(textBox3->Text);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	kalkulator->main_odszyfrowanie();
	textBox1->Text = kalkulator->tekst_String2;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
	kalkulator->setarg3("");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	kalkulator->setarg1("");
	textBox2->Text = "";
	kalkulator->setarg2("");
	textBox3->Text = "";
	kalkulator->setarg3("");
	kalkulator->setarg4("");
	kalkulator->setarg5("");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	kalkulator->setarg1("");
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
		kalkulator->setarg2("");
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void informacjeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	wszystkie^ wszystkie1 = gcnew wszystkie();
	wszystkie1->Show();
}
	   void MarshalString(String^ s, std::string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars =
			   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }
	   String^ wczytaj()
	   {
		   openFileDialog1->InitialDirectory = "";
		   openFileDialog1->Title = "tytul";
		   openFileDialog1->ShowDialog();
		   openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";

		   String^ strtext = openFileDialog1->FileName;
		   std::string ez;
		   MarshalString(strtext, ez);

		   FILE* plik;
		   plik = fopen(ez.c_str(), "r");
		   char znak;
		   std::vector<char> vec;
		   do
		   {
			   znak = fgetc(plik);
			   vec.push_back(znak);
		   } while (znak != EOF);

		   fclose(plik);
		   std::string s(vec.begin(), vec.end());
		   String^ str1 = gcnew String(s.c_str());
			return str1;
	   }
	  
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	
	textBox1->Text = wczytaj();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = wczytaj();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = wczytaj();
}
};
}
