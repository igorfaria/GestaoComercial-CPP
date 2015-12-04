/*
								Vendas por valor
			
			Classe que lista vendas por valor
*/


#pragma once
#include "Produto.h" // Classe com o objeto Produto().
#include "Venda.h"   // Classe com o objeto Venda().
#include "Helpers.h" // Classe com o objeto Ferramentas() e Ficheiro().

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VendasValor
	/// </summary>
	public ref class VendasValor : public System::Windows::Forms::Form
	{
	public:
		VendasValor(void)
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
		~VendasValor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nif_cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Data;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btn_fechar;
	private: System::Windows::Forms::PictureBox^  pictureBox9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VendasValor::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nif_cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
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
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(156, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(574, 301);
			this->dataGridView1->TabIndex = 45;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 50;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome Funcionário";
			this->Nome->Name = L"Nome";
			this->Nome->Width = 150;
			// 
			// nif_cliente
			// 
			this->nif_cliente->HeaderText = L"NIF Cliente";
			this->nif_cliente->MaxInputLength = 9;
			this->nif_cliente->Name = L"nif_cliente";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Total->Width = 80;
			// 
			// Data
			// 
			this->Data->HeaderText = L"Data";
			this->Data->Name = L"Data";
			this->Data->Width = 150;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 131);
			this->pictureBox2->TabIndex = 46;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 166);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 50);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 47;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &VendasValor::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(90, 166);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 50);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 48;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &VendasValor::pictureBox8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Maiores";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(87, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Menores";
			// 
			// btn_fechar
			// 
			this->btn_fechar->Location = System::Drawing::Point(33, 286);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(75, 23);
			this->btn_fechar->TabIndex = 51;
			this->btn_fechar->Text = L"Fechar";
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &VendasValor::btn_fechar_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(680, 262);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(38, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 52;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &VendasValor::pictureBox9_Click);
			// 
			// VendasValor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 321);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"VendasValor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vendas por Valor";
			this->Load += gcnew System::EventHandler(this, &VendasValor::VendasValor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	private: System::Void VendasValor_Load(System::Object^  sender, System::EventArgs^  e) { }
			 

	/*
								 BOTÃO CANCELAR

			 Confirma a ação de cancelar a venda.

	*/

	private: System::Void btn_fechar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
	}
	
	/*
								ORDENA EM ORDEM ASCENDENTE					

			Lê ficheiro VENDA.txt e armazena em um vetor de objetos std::string
			Percorre o vetor e atribui os valores a objetos do tipo Venda() e adiciona-os em um vetor de objetos Venda()
			Ordena o vetor de acordo com o atributo valor em ordem ascendente e exibe na tabela de vendas

	*/

	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {

		std::vector<std::string> VENDAS = Venda().listarVendas();

		std::vector<Venda> VETOR_VENDA;

		for (int l = 0; l < VENDAS.size(); l++) {

			Venda venda = Venda();

			std::vector<std::string> DADOS = Ferramentas::split(VENDAS[l], '|');

			int ID = Ferramentas::toInt(DADOS[0]);
			std::string funcionario = DADOS[1];
			int NIF = Ferramentas::toInt(DADOS[2]);
			std::string produtos = DADOS[3];
			double valor = std::stod(DADOS[4]);
			std::string data = Ferramentas::dataFormat(DADOS[5]);

			venda.setID(ID);
			venda.setFuncionario(funcionario);
			venda.setNIF(NIF);
			venda.setProdutos(produtos);
			venda.setValor(valor);
			venda.setData(data);

			VETOR_VENDA.push_back(venda);
		}
		std::sort(VETOR_VENDA.begin(), VETOR_VENDA.end());
		std::reverse(VETOR_VENDA.begin(), VETOR_VENDA.end());

		this->dataGridView1->Rows->Clear();

		for (int i = 0; i < VETOR_VENDA.size(); i++) {

			this->dataGridView1->Rows->Add(
				VETOR_VENDA[i].getID(),
				Ferramentas::sysString(VETOR_VENDA[i].getFuncionario()),
				VETOR_VENDA[i].getNIF(),
				Ferramentas::sysString(Ferramentas::precoFormat(std::to_string(VETOR_VENDA[i].getValor()))),
				Ferramentas::sysString(Ferramentas::dataFormat(VETOR_VENDA[i].getData()))
				);
		}

	}

	/*
								ORDENA EM ORDEM DECRESCENTE

			Lê ficheiro VENDA.txt e armazena em um vetor de objetos std::string
			Percorre o vetor e atribui os valores a objetos do tipo Venda() e adiciona-os em um vetor de objetos Venda()
			Ordena o vetor de acordo com o atributo valor em ordem decrescente e exibe na tabela de vendas
	*/
	private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {

		std::vector<std::string> VENDAS = Venda().listarVendas();

		std::vector<Venda> VETOR_VENDA;

		for (int l = 0; l < VENDAS.size(); l++) {

			Venda venda = Venda();

			std::vector<std::string> DADOS = Ferramentas::split(VENDAS[l], '|');

			int ID = Ferramentas::toInt(DADOS[0]);
			std::string funcionario = DADOS[1];
			int NIF = Ferramentas::toInt(DADOS[2]);
			std::string produtos = DADOS[3];
			double valor = std::stod(DADOS[4]);
			std::string data = Ferramentas::dataFormat(DADOS[5]);

			venda.setID(ID);
			venda.setFuncionario(funcionario);
			venda.setNIF(NIF);
			venda.setProdutos(produtos);
			venda.setValor(valor);
			venda.setData(data);

			VETOR_VENDA.push_back(venda);
		}
		std::sort(VETOR_VENDA.begin(), VETOR_VENDA.end());

		this->dataGridView1->Rows->Clear();

		for (int i = 0; i < VETOR_VENDA.size(); i++) {

			this->dataGridView1->Rows->Add(
				VETOR_VENDA[i].getID(),
				Ferramentas::sysString(VETOR_VENDA[i].getFuncionario()),
				VETOR_VENDA[i].getNIF(),
				Ferramentas::sysString(Ferramentas::precoFormat(std::to_string(VETOR_VENDA[i].getValor()))),
				Ferramentas::sysString(Ferramentas::dataFormat(VETOR_VENDA[i].getData()))
				);



		}
	};
	/*
								BOTÃO IMPRESSORA
			
			A ser implementado :D :D
	
	*/
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Funcionalidade indisponível", "Desculpe", MessageBoxButtons::OK);
	}
};
}