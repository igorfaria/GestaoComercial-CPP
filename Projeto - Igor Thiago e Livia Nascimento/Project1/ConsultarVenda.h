#pragma once

	/*
								Consultar Venda.
		
			Classe que exibe os dados de uma respectiva venda.

	*/

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
	/// Summary for ConsultarVenda
	/// </summary>
	public ref class ConsultarVenda : public System::Windows::Forms::Form
	{
	private: System::String^ numero_venda;
	public:

		ConsultarVenda(System::String^ nr_venda)
		{
			numero_venda = nr_venda;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConsultarVenda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DataGridView^  tabelaVenda;




	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  tb_total;


	private: System::Windows::Forms::TextBox^  tb_nif_cliente;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_vendedor;
	private: System::Windows::Forms::TextBox^  tb_id_venda;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tb_data;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fabricante;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Preco;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantidade;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultarVenda::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabelaVenda = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fabricante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tb_total = (gcnew System::Windows::Forms::TextBox());
			this->tb_nif_cliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_vendedor = (gcnew System::Windows::Forms::TextBox());
			this->tb_id_venda = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_data = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaVenda))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
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
			// tabelaVenda
			// 
			this->tabelaVenda->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaVenda->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Nome,
					this->Fabricante, this->Preco, this->Quantidade
			});
			this->tabelaVenda->Location = System::Drawing::Point(12, 169);
			this->tabelaVenda->Name = L"tabelaVenda";
			this->tabelaVenda->ReadOnly = true;
			this->tabelaVenda->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tabelaVenda->Size = System::Drawing::Size(384, 160);
			this->tabelaVenda->TabIndex = 53;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Visible = false;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 140;
			// 
			// Fabricante
			// 
			this->Fabricante->HeaderText = L"Fabricante";
			this->Fabricante->Name = L"Fabricante";
			this->Fabricante->ReadOnly = true;
			this->Fabricante->Width = 70;
			// 
			// Preco
			// 
			this->Preco->HeaderText = L"Preço";
			this->Preco->Name = L"Preco";
			this->Preco->ReadOnly = true;
			this->Preco->Width = 65;
			// 
			// Quantidade
			// 
			this->Quantidade->HeaderText = L"Quantidade";
			this->Quantidade->Name = L"Quantidade";
			this->Quantidade->ReadOnly = true;
			this->Quantidade->Width = 70;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 13);
			this->label7->TabIndex = 51;
			this->label7->Text = L"Total com IVA:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(292, 358);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 48;
			this->button4->Text = L"Fechar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ConsultarVenda::button4_Click);
			// 
			// tb_total
			// 
			this->tb_total->Location = System::Drawing::Point(92, 339);
			this->tb_total->Name = L"tb_total";
			this->tb_total->ReadOnly = true;
			this->tb_total->Size = System::Drawing::Size(79, 20);
			this->tb_total->TabIndex = 47;
			this->tb_total->Text = L"0";
			this->tb_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tb_nif_cliente
			// 
			this->tb_nif_cliente->Location = System::Drawing::Point(239, 116);
			this->tb_nif_cliente->MaxLength = 9;
			this->tb_nif_cliente->Name = L"tb_nif_cliente";
			this->tb_nif_cliente->ReadOnly = true;
			this->tb_nif_cliente->Size = System::Drawing::Size(133, 20);
			this->tb_nif_cliente->TabIndex = 44;
			this->tb_nif_cliente->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 43;
			this->label3->Text = L"NIF do Cliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(149, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Vendedor";
			// 
			// tb_vendedor
			// 
			this->tb_vendedor->Location = System::Drawing::Point(239, 86);
			this->tb_vendedor->MaxLength = 9;
			this->tb_vendedor->Name = L"tb_vendedor";
			this->tb_vendedor->ReadOnly = true;
			this->tb_vendedor->Size = System::Drawing::Size(133, 20);
			this->tb_vendedor->TabIndex = 55;
			this->tb_vendedor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tb_id_venda
			// 
			this->tb_id_venda->Location = System::Drawing::Point(149, 28);
			this->tb_id_venda->MaxLength = 9;
			this->tb_id_venda->Name = L"tb_id_venda";
			this->tb_id_venda->Size = System::Drawing::Size(133, 20);
			this->tb_id_venda->TabIndex = 56;
			this->tb_id_venda->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tb_id_venda->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConsultarVenda::tb_id_venda_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(149, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 57;
			this->label2->Text = L"ID da Venda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 58;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarVenda::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(149, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Data";
			// 
			// tb_data
			// 
			this->tb_data->Location = System::Drawing::Point(239, 143);
			this->tb_data->MaxLength = 9;
			this->tb_data->Name = L"tb_data";
			this->tb_data->ReadOnly = true;
			this->tb_data->Size = System::Drawing::Size(133, 20);
			this->tb_data->TabIndex = 60;
			this->tb_data->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(221, 344);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(38, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 61;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &ConsultarVenda::pictureBox9_Click);
			// 
			// ConsultarVenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 393);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->tb_data);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_id_venda);
			this->Controls->Add(this->tb_vendedor);
			this->Controls->Add(this->tabelaVenda);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->tb_total);
			this->Controls->Add(this->tb_nif_cliente);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ConsultarVenda";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Consultar Venda";
			this->Load += gcnew System::EventHandler(this, &ConsultarVenda::ConsultarVenda_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaVenda))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/*
								BOTÃO OK.

			Lê ficheiro VENDAS.txt e armazena as linhas em um vetor de std::string.
			Percorre os elementos do vetor e compara o ID inserido com o campo tb_id_venda.
			Caso encontre uma ocorrência verdadeira, exibe os dados da respectiva venda.

	*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (!System::String::IsNullOrEmpty(this->tb_id_venda->Text)) {
			this->tabelaVenda->Rows->Clear();

			std::vector<std::string> VENDAS = Venda().listarVendas();
			std::vector<std::string> PRODUTOS = Produto().listarProdutos();

			std::string funcionario;
			std::string nif;
			std::string total;
			std::string data;
			bool existe = false;

			int ID_ATUAL = Ferramentas::toInt(this->tb_id_venda->Text);
			// Percorro vendas realizadas
			for (int i = 0; i < VENDAS.size(); i++) {
				std::vector<std::string> DADOS = Ferramentas::split(VENDAS[i], '|');
				int ID_VENDAS = Ferramentas::toInt(DADOS[0]);
				std::string PRODUTOS_VENDA = DADOS[3];
				// Comparo ID de venda com lista de vendas

				if (ID_ATUAL == ID_VENDAS) {

					funcionario = DADOS[1];
					nif = DADOS[2];
					total = DADOS[4];
					data = DADOS[5];

					existe = true;

					std::vector<std::string> PRODUTOS_2 = Ferramentas::split(PRODUTOS_VENDA, '#');
					// Percorro produtos da venda
					for (int x = 0; x < PRODUTOS_2.size(); x++) {
						std::vector<std::string> V = Ferramentas::split(PRODUTOS_2[x], 'x');
						std::string ID_PRODUTO = V[1];
						std::string QUANTIDADE = V[0];
						// Percorro vetor de produtos disponiveis
						for (int y = 0; y < PRODUTOS.size(); y++) {
							std::vector<std::string> X = Ferramentas::split(PRODUTOS[y], '|');
							// Comparo produtos com lista de produtos
							if (ID_PRODUTO == X[0]) {
								System::String^ nome = Ferramentas::sysString(X[1]);
								System::String^ preco = Ferramentas::sysString(Ferramentas::precoFormat(X[2]));
								System::String^ fabricante = Ferramentas::sysString(X[4]);
								// Adiciona produtos na tabela Venda
								this->tabelaVenda->Rows->Add(
									Ferramentas::toInt(ID_PRODUTO),
									nome,
									fabricante,
									preco,
									Ferramentas::sysString(QUANTIDADE)
									);
								break;
							}
						}
					}
					break;
				}
			}

			if (existe) {
				this->tb_vendedor->Text = Ferramentas::sysString(funcionario);
				this->tb_nif_cliente->Text = Ferramentas::sysString(nif);
				this->tb_data->Text = Ferramentas::sysString(Ferramentas::dataFormat(data));
				this->tb_total->Text = Ferramentas::sysString(Ferramentas::precoFormat(total));
			}
			else {
				MessageBox::Show("ID inexistente", "Erro", MessageBoxButtons::OK);
			}
			}
		else {
			MessageBox::Show("Preencha o ID", "Erro", MessageBoxButtons::OK);
		}
	}
	
	/*
								BOTÃO FECHAR.

			Confirma a ação de fechar a janela.

	*/
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
	}
	
	/*

								AO ABRIR JANELA

			Verifica se o campo tb_id_venda possuí um valor.
			Em caso afirmativo, executa o método button1_Click para carregar as informações relacionada à venda.

	
	*/

	private: System::Void ConsultarVenda_Load(System::Object^  sender, System::EventArgs^  e) {
		if (!System::String::IsNullOrEmpty(numero_venda)) {
			this->tb_id_venda->Text = numero_venda;
			button1_Click(sender, e);
		}
		this->tb_id_venda->Focus();
	}

	/*
								TECLA ENTER.

			 Verifica se a tecla premida no teclado corresponde a tecla Enter.

	*/

	private: System::Void tb_id_venda_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	  if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
		  button1_Click(sender, e);
	  }
  }

	/*	
							    BOTÃO IMPRESSORA.

			 A ser implementado :D.

	 */

	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Funcionalidade indisponível", "Desculpe", MessageBoxButtons::OK);
	}
};
}
