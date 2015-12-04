	/*
									Listar Vendas

			Classe para listar as vendas gravadas no ficheiro VENDAS.txt

	*/

#pragma once
#include "Venda.h"	 // Classe com o objeto Venda().
#include "Produto.h" // Classe com o objeto Produto().
#include "Helpers.h" // Classe com o objeto Ferramentas() e Ficheiro().

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ListarVendas
	/// </summary>
	public ref class ListarVendas : public System::Windows::Forms::Form
	{
	public:
		ListarVendas(void)
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
		~ListarVendas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nif_cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Data;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ListarVendas::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nif_cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Nome,
					this->nif_cliente, this->Total, this->Data
			});
			this->dataGridView1->Location = System::Drawing::Point(149, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(574, 301);
			this->dataGridView1->TabIndex = 1;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 50;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome Funcionário";
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 150;
			// 
			// nif_cliente
			// 
			this->nif_cliente->HeaderText = L"NIF Cliente";
			this->nif_cliente->MaxInputLength = 9;
			this->nif_cliente->Name = L"nif_cliente";
			this->nif_cliente->ReadOnly = true;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->ReadOnly = true;
			this->Total->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Total->Width = 85;
			// 
			// Data
			// 
			this->Data->HeaderText = L"Data";
			this->Data->Name = L"Data";
			this->Data->ReadOnly = true;
			this->Data->Width = 150;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 127);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Fechar Janela";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListarVendas::button1_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(665, 259);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(38, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &ListarVendas::pictureBox9_Click);
			// 
			// ListarVendas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 321);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ListarVendas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Listar Vendas";
			this->Load += gcnew System::EventHandler(this, &ListarVendas::ListarVendas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	/*
	
									AO ABRIR JANELA

			Lê ficheiro VENDAS.txt e armazena as linhas em um vetor de std::string
			Percorre o vetor e adiciona uma linha com os atributos referente ao produto na tabela de produtos
	
	*/

	private: System::Void ListarVendas_Load(System::Object^  sender, System::EventArgs^  e) {

		std::vector<std::string> VENDAS = Venda().listarVendas();

		for (int i = 0; i < VENDAS.size(); i++) {

			std::vector<std::string> DADOS = Ferramentas::split(VENDAS[i], '|');

			std::string ID = DADOS[0];
			std::string funcionario = DADOS[1];
			std::string nif = DADOS[2];
			std::string total = DADOS[4];
			std::string data = DADOS[5].substr(0, 10);

			this->dataGridView1->Rows->Add(
				Ferramentas::sysString(ID),
				Ferramentas::sysString(funcionario),
				Ferramentas::sysString(nif),
				Ferramentas::sysString(Ferramentas::precoFormat(total)),
				Ferramentas::sysString(Ferramentas::dataFormat(data))
				);
		}
	}


	/*
									BOTÃO FECHAR.

			Confirma a ação de fechar a janela.

	*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if(MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK){
			this->Close();
		}
	}

	/*	
									BOTÃO IMPRESSORA

				A ser implementado :D :D

	*/

	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Funcionalidade indisponível", "Desculpe", MessageBoxButtons::OK);
	}

};
}
