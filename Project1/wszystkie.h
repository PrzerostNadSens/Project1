#pragma once
#include <stdio.h>



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o wszystkie
	/// </summary>
	public ref class wszystkie : public System::Windows::Forms::Form
	{
	public:
		wszystkie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~wszystkie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &wszystkie::fontDialog1_Apply);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"informacje na temat szyfru: \n\nSzyfr przek¹tnokolumnowy (ze s³owem-kluczem)\n\ntekst jawny wpisujemy do tablicy wierszami, wype³niaj¹c ka¿dy wiersz do koñca,\nniezale¿nie od indeksów liter klucza.Szyfrogram równie¿ jest odczytywany w zgodnie z kluczem od góry do  do³u tablicy skosem,\nod prawej do lewej(przyjmuj¹c, kolumny skrajne za s¹siednie).\n\nTekst wczytywany z pliku jest wczytywany bez polskich znaków,\npamiêtaj o tym.";
			this->label1->Click += gcnew System::EventHandler(this, &wszystkie::label1_Click);
			// 
			// wszystkie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1222, 399);
			this->Controls->Add(this->label1);
			this->Name = L"wszystkie";
			this->Text = L"Informacje";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
		printf("\nOdszyfrowany tekst:\n");
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};

