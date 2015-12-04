	/*
								Vendas por Data	

			Classe para listar vendas por data

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
	/// Summary for VendasData
	/// </summary>
	public ref class VendasData : public System::Windows::Forms::Form
	{
	public:
		VendasData(void)
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
		~VendasData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nif_cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Data;
	private: System::Windows::Forms::Button^  btn_OK;
	private: System::Windows::Forms::CheckBox^  cb_dia;
	private: System::Windows::Forms::CheckBox^  cb_mes;
	private: System::Windows::Forms::CheckBox^  cb_Ano;
	private: System::Windows::Forms::Button^  btn_fechar;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VendasData::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nif_cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->cb_dia = (gcnew System::Windows::Forms::CheckBox());
			this->cb_mes = (gcnew System::Windows::Forms::CheckBox());
			this->cb_Ano = (gcnew System::Windows::Forms::CheckBox());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 131);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(146, 29);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(146, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Indique a data";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Nome,
					this->nif_cliente, this->Total, this->Data
			});
			this->dataGridView1->Location = System::Drawing::Point(149, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(574, 301);
			this->dataGridView1->TabIndex = 44;
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
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(361, 49);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 45;
			this->btn_OK->Text = L"OK";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &VendasData::btn_OK_Click);
			// 
			// cb_dia
			// 
			this->cb_dia->AutoSize = true;
			this->cb_dia->Location = System::Drawing::Point(149, 55);
			this->cb_dia->Name = L"cb_dia";
			this->cb_dia->Size = System::Drawing::Size(42, 17);
			this->cb_dia->TabIndex = 46;
			this->cb_dia->Text = L"Dia";
			this->cb_dia->UseVisualStyleBackColor = true;
			this->cb_dia->CheckedChanged += gcnew System::EventHandler(this, &VendasData::cb_dia_CheckedChanged);
			// 
			// cb_mes
			// 
			this->cb_mes->AutoSize = true;
			this->cb_mes->Location = System::Drawing::Point(222, 55);
			this->cb_mes->Name = L"cb_mes";
			this->cb_mes->Size = System::Drawing::Size(46, 17);
			this->cb_mes->TabIndex = 47;
			this->cb_mes->Text = L"Mês";
			this->cb_mes->UseVisualStyleBackColor = true;
			this->cb_mes->CheckedChanged += gcnew System::EventHandler(this, &VendasData::cb_mes_CheckedChanged);
			// 
			// cb_Ano
			// 
			this->cb_Ano->AutoSize = true;
			this->cb_Ano->Location = System::Drawing::Point(301, 55);
			this->cb_Ano->Name = L"cb_Ano";
			this->cb_Ano->Size = System::Drawing::Size(45, 17);
			this->cb_Ano->TabIndex = 48;
			this->cb_Ano->Text = L"Ano";
			this->cb_Ano->UseVisualStyleBackColor = true;
			// 
			// btn_fechar
			// 
			this->btn_fechar->Location = System::Drawing::Point(23, 378);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(75, 23);
			this->btn_fechar->TabIndex = 49;
			this->btn_fechar->Text = L"Fechar";
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &VendasData::btn_fechar_Click);
			// 
			// VendasData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 411);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->cb_Ano);
			this->Controls->Add(this->cb_mes);
			this->Controls->Add(this->cb_dia);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"VendasData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vendas por Data";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/*
									BOTÃO FECHAR

			Confirma a ação de fechar a janela

	*/

	private: System::Void btn_fechar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída?", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
		
	}

	/*
									BOTÃO OK

			Lê ficheiro VENDAS.txt, armazena as linhas em um vetor std::string
			Percorre vetor, compara a data escolhida e adiciona à tabela de vendas as ocorrências que satisfazem os critérios selecionados

	*/

	private: System::Void btn_OK_Click(System::Object^  sender, System::EventArgs^  e) {

		if (this->cb_dia->Checked || this->cb_mes->Checked || this->cb_Ano->Checked) {

			this->dataGridView1->Rows->Clear();

			std::vector<std::string> VENDAS = Venda().listarVendas();

			std::string DATA = Ferramentas::stdString(this->dateTimePicker1->Value.Date.ToString());

			std::string DIA = DATA.substr(0, 2);
			std::string MES = DATA.substr(3, 2);
			std::string ANO = DATA.substr(6, 4);

			for (int i = 0; i < VENDAS.size(); i++) {
				std::vector<std::string> DADOS = Ferramentas::split(VENDAS[i], '|');

				std::string ID = DADOS[0];
				std::string nome = DADOS[1];
				std::string NIF = DADOS[2];
				std::string total = DADOS[4];
				std::string data = DADOS[5];

				std::string diaVenda = data.substr(0, 2);
				std::string mesVenda = data.substr(3, 2);
				std::string anoVenda = data.substr(6, 4);

				if(this->cb_Ano->Checked && !this->cb_mes->Checked){

					if (ANO == anoVenda) {
						this->dataGridView1->Rows->Add(
							Ferramentas::sysString(ID),
							Ferramentas::sysString(nome),
							Ferramentas::sysString(NIF),
							Ferramentas::sysString(Ferramentas::precoFormat(total)),
							Ferramentas::sysString(Ferramentas::dataFormat(data))

							);
					}
				}
				else if (this->cb_mes->Checked && !this->cb_dia->Checked) {
					if (MES == mesVenda && ANO == anoVenda) {
						this->dataGridView1->Rows->Add(
							Ferramentas::sysString(ID),
							Ferramentas::sysString(nome),
							Ferramentas::sysString(NIF),
							Ferramentas::sysString(Ferramentas::precoFormat(total)),
							Ferramentas::sysString(Ferramentas::dataFormat(data))

							);
					}
				}
				else {
					if (ANO == anoVenda && MES == mesVenda && DIA == diaVenda) {
						this->dataGridView1->Rows->Add(
							Ferramentas::sysString(ID),
							Ferramentas::sysString(nome),
							Ferramentas::sysString(NIF),
							Ferramentas::sysString(Ferramentas::precoFormat(total)),
							Ferramentas::sysString(Ferramentas::dataFormat(data))

							);
					}
				}


			}

		}
		else {
			MessageBox::Show("Selecione um critério: Dia, Mês ou Ano", "Erro", MessageBoxButtons::OK);
		}
	}

	/*
								CHECKBOX MES

			Atribuí o valor de true à propriedade Checked de cb_Ano 

	*/

	private: System::Void cb_mes_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->cb_Ano->Checked = true;
	}

	/*
								CHECKBOX DIA

			Atribuí o valor de true à propriedade Checked de cb_mes e cb_Ano
			 
	*/

	private: System::Void cb_dia_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->cb_mes->Checked = true;
		this->cb_Ano->Checked = true;
	}
};
}
