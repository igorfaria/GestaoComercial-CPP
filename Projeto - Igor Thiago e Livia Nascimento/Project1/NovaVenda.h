	/*
	
									Nova Venda

			Classe para registar uma nova venda no ficheiro VENDAS.txt

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
	/// Summary for NovaVenda
	/// </summary>
	public ref class NovaVenda : public System::Windows::Forms::Form
	{
	public:
		NovaVenda(System::String^ FUNCIONARIO)
		{
			InitializeComponent();

			this->tb_vendedor->Text = FUNCIONARIO;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NovaVenda()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  tb_total;

	private: System::Windows::Forms::TextBox^  tb_iva;

	private: System::Windows::Forms::TextBox^  tb_valor;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  cb_produtos;
	private: System::Windows::Forms::TextBox^  tb_nif_cliente;


	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_numero_venda;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  tabelaVenda;




	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numero_quantidade;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;





	private: System::Windows::Forms::TextBox^  tb_vendedor;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NovaVenda::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tb_total = (gcnew System::Windows::Forms::TextBox());
			this->tb_iva = (gcnew System::Windows::Forms::TextBox());
			this->tb_valor = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cb_produtos = (gcnew System::Windows::Forms::ComboBox());
			this->tb_nif_cliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_numero_venda = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabelaVenda = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fabricante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numero_quantidade = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tb_vendedor = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaVenda))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_quantidade))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 127);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(165, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Número da Venda";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(282, 385);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &NovaVenda::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(201, 385);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Registar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NovaVenda::button3_Click);
			// 
			// tb_total
			// 
			this->tb_total->Enabled = false;
			this->tb_total->Location = System::Drawing::Point(235, 359);
			this->tb_total->Name = L"tb_total";
			this->tb_total->Size = System::Drawing::Size(79, 20);
			this->tb_total->TabIndex = 30;
			this->tb_total->Text = L"0";
			this->tb_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tb_iva
			// 
			this->tb_iva->Enabled = false;
			this->tb_iva->Location = System::Drawing::Point(150, 359);
			this->tb_iva->Name = L"tb_iva";
			this->tb_iva->Size = System::Drawing::Size(79, 20);
			this->tb_iva->TabIndex = 29;
			this->tb_iva->Text = L"0";
			this->tb_iva->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tb_valor
			// 
			this->tb_valor->Enabled = false;
			this->tb_valor->Location = System::Drawing::Point(64, 359);
			this->tb_valor->Name = L"tb_valor";
			this->tb_valor->Size = System::Drawing::Size(79, 20);
			this->tb_valor->TabIndex = 28;
			this->tb_valor->Text = L"0";
			this->tb_valor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Adicionar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NovaVenda::button1_Click);
			// 
			// cb_produtos
			// 
			this->cb_produtos->FormattingEnabled = true;
			this->cb_produtos->Location = System::Drawing::Point(222, 84);
			this->cb_produtos->Name = L"cb_produtos";
			this->cb_produtos->Size = System::Drawing::Size(153, 21);
			this->cb_produtos->TabIndex = 26;
			// 
			// tb_nif_cliente
			// 
			this->tb_nif_cliente->Location = System::Drawing::Point(242, 54);
			this->tb_nif_cliente->MaxLength = 9;
			this->tb_nif_cliente->Name = L"tb_nif_cliente";
			this->tb_nif_cliente->Size = System::Drawing::Size(133, 20);
			this->tb_nif_cliente->TabIndex = 25;
			this->tb_nif_cliente->Text = L"0";
			this->tb_nif_cliente->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"NIF do Cliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(279, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Vendedor";
			// 
			// tb_numero_venda
			// 
			this->tb_numero_venda->Location = System::Drawing::Point(168, 27);
			this->tb_numero_venda->Name = L"tb_numero_venda";
			this->tb_numero_venda->ReadOnly = true;
			this->tb_numero_venda->Size = System::Drawing::Size(90, 20);
			this->tb_numero_venda->TabIndex = 21;
			this->tb_numero_venda->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(235, 343);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Total:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(61, 343);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Valor:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(147, 343);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"IVA:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(167, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Produto";
			// 
			// tabelaVenda
			// 
			this->tabelaVenda->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaVenda->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Nome,
					this->Fabricante, this->Preco, this->Quantidade
			});
			this->tabelaVenda->Location = System::Drawing::Point(12, 171);
			this->tabelaVenda->Name = L"tabelaVenda";
			this->tabelaVenda->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tabelaVenda->Size = System::Drawing::Size(382, 160);
			this->tabelaVenda->TabIndex = 38;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Visible = false;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 145;
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
			this->Preco->Width = 57;
			// 
			// Quantidade
			// 
			this->Quantidade->HeaderText = L"Quantidade";
			this->Quantidade->Name = L"Quantidade";
			this->Quantidade->ReadOnly = true;
			this->Quantidade->Width = 70;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(167, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 13);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Quantidade";
			// 
			// numero_quantidade
			// 
			this->numero_quantidade->Location = System::Drawing::Point(235, 116);
			this->numero_quantidade->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numero_quantidade->Name = L"numero_quantidade";
			this->numero_quantidade->Size = System::Drawing::Size(41, 20);
			this->numero_quantidade->TabIndex = 40;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(168, 145);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 41;
			// 
			// tb_vendedor
			// 
			this->tb_vendedor->Location = System::Drawing::Point(266, 27);
			this->tb_vendedor->Name = L"tb_vendedor";
			this->tb_vendedor->ReadOnly = true;
			this->tb_vendedor->Size = System::Drawing::Size(109, 20);
			this->tb_vendedor->TabIndex = 43;
			// 
			// NovaVenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 420);
			this->Controls->Add(this->tb_vendedor);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->numero_quantidade);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tabelaVenda);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->tb_total);
			this->Controls->Add(this->tb_iva);
			this->Controls->Add(this->tb_valor);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cb_produtos);
			this->Controls->Add(this->tb_nif_cliente);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_numero_venda);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"NovaVenda";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nova Venda";
			this->Load += gcnew System::EventHandler(this, &NovaVenda::NovaVenda_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaVenda))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numero_quantidade))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	/*
	
								AO ABRIR JANELA
								
			Lê ficheiro PRODUTOS.txt e armazena as linhas em um vetor de std::string
			Cria um objeto do tipo Produto(), percorre o vetor e associa os dados do produto ao objeto
			Verifica-se a disponibilidade em estoque e adiciona ao combobox cb_produtos

	*/
		
	private: System::Void NovaVenda_Load(System::Object^  sender, System::EventArgs^  e) {
		// Carregar lista de produto
		std::vector<std::string> PRODUTOS = Produto().listarProdutos();

		Produto produto = Produto();

		for (int i = 0; i < PRODUTOS.size(); i++) {

			std::vector<std::string> DADOS = Ferramentas::split(PRODUTOS[i], '|');

			produto.setID(Ferramentas::toInt(DADOS[0]));
			produto.setNome(DADOS[1]);
			produto.setPreco(Ferramentas::toDouble(DADOS[2]));
			produto.setQuantidade(Ferramentas::toInt(DADOS[3]));
			produto.setFabricante(DADOS[4]);
			produto.setRawDescricao(DADOS[5]);

			// Verifica se o produto está disponível
			if (produto.getQuantidade() > 0) {
				this->cb_produtos->Items->Add(Ferramentas::sysString(produto.getNome()));
			}
		}
		this->tb_numero_venda->Text = Ferramentas::sysString(std::to_string(Venda().numeroVenda()));
	}

	/*

							BOTÃO ADICIONAR PRODUTO

		Lê ficheiro PRODUTOS.txt e armazena as linhas em um vetor de std::string
		Percorre o vetor e compara o campo cb_produtos com o nome do produto
		Em caso de ocorrência verdadeira, verifica a disponibilidade e adiciona à tabela Venda

	*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if ((!System::String::IsNullOrEmpty(this->cb_produtos->Text))) {

			std::vector<std::string> PRODUTOS = Produto().listarProdutos();
			std::string ID;
			std::string valor;
			std::string nome;
			std::string fabricante;
			std::string Q_produto;
			int quantidade = Ferramentas::toInt(this->numero_quantidade->Text);
			double total = 0;

			if (quantidade > 0) {
				for (int i = 0; i < PRODUTOS.size(); i++) {

					std::vector<std::string> DADOS = Ferramentas::split(PRODUTOS[i], '|');

					nome = DADOS[1];
					if (nome == Ferramentas::stdString(this->cb_produtos->Text)) {
						ID = DADOS[0];
						valor = DADOS[2];
						Q_produto = DADOS[3];
						fabricante = DADOS[4];
						break;
					}

				}
				bool estoque = true;
				if (quantidade > Ferramentas::toInt(Q_produto)) {
					estoque = false;
					if (MessageBox::Show("Quantidade em estoque insuficiente\n\nProduto: " + Ferramentas::sysString(nome) + "\nUnidades disponíveis: " + Ferramentas::sysString(Q_produto) + "\n\nDeseja continuar?", "Erro", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
						quantidade = Ferramentas::toInt(Q_produto);
						estoque = true;
					}
				}
				if (estoque) {
					this->tabelaVenda->Rows->Add(Ferramentas::sysString(ID),
						Ferramentas::sysString(nome), Ferramentas::sysString(fabricante), 
						Ferramentas::sysString(Ferramentas::precoFormat(valor)), Ferramentas::sysString(std::to_string(quantidade)));

					total = std::stod(valor) * quantidade;

					this->numero_quantidade->Text = "0";
					this->cb_produtos->Text = "";

					atualizaTotal(total);
				}
			}
			else {
				MessageBox::Show("Indique a quantidade", "Erro", MessageBoxButtons::OK);
			}
		}
		else {
			MessageBox::Show("Selecione um produto", "Erro", MessageBoxButtons::OK);
		}
	}
			
	/*
	
								Atualiza Total


			Método para atualizar os campos referentes da venda
			
			Entrada: double

	*/

		 public: void atualizaTotal(double D) {
			 std::string valor = Ferramentas::stdString(this->tb_valor->Text);
			 double VALOR = std::stod(valor);
			 VALOR += D;
			 this->tb_valor->Text = Ferramentas::sysString(std::to_string(VALOR));

			 double IVA = VALOR * 0.23;
			 this->tb_iva->Text = Ferramentas::sysString(std::to_string(IVA));

			 double TOTAL = VALOR + IVA;
			 this->tb_total->Text = Ferramentas::sysString(std::to_string(TOTAL));
		 }

		/*
									BOTÃO REGISTAR VENDA

				Lê ficheiro PRODUTOS.txt, armazena as linhas em um vetor de Produto()
				Percorre vetor e subtraí a quantidade vendida da quantidade em estoque 
				Reescreve ficheiro PRODUTOS.txt com o atributo quantidade atualizado
				Cria um objeto do tipo Venda(), associa os valores e adiciona ao ficheiro VENDAS.txt

		*/

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			// Dados da venda
			System::String^ S_ID = this->tb_numero_venda->Text;
			int ID = Ferramentas::toInt(S_ID);

			System::String^ S_NF = this->tb_vendedor->Text;
			std::string nome_funcionario = Ferramentas::stdString(S_NF);

			System::String^ S_NC = this->tb_nif_cliente->Text;
			int nif_cliente = Ferramentas::toInt(S_NC);
			
			if (!System::String::IsNullOrEmpty(S_NC) || S_NC != "0") {
				std::string produtos;
				int COUNT = this->tabelaVenda->RowCount - 1;

				// Carrega lista de produtos
				std::vector<Produto> PRODUTOS = Produto().vectorProduto();
				// Percorre tabelaProdutos
				for (int i = 0; i < COUNT; i++) {
					// Formata std::string produtos
					std::string ID_ = Ferramentas::stdString(this->tabelaVenda->Rows[i]->Cells[0]->Value->ToString());
					std::string quantidade = Ferramentas::stdString(this->tabelaVenda->Rows[i]->Cells[4]->Value->ToString());
					produtos.append(quantidade + "x" + ID_); // quantidade x ID
					if (i < COUNT - 1) produtos.append("#"); // separador
					// Percorre vetor de produtos
					for (int x = 0; x < PRODUTOS.size(); x++) {
						// Compara ID
						if (std::stoi(ID_) == PRODUTOS.at(x).getID()) {
							int AUX_quantidade = PRODUTOS.at(x).getQuantidade() - std::stoi(quantidade);
								
							PRODUTOS.at(x).setQuantidade(AUX_quantidade);
							
							break;
						}
					}
				}

				// Grava vetor de Produto atualizado
				Produto().gravar(PRODUTOS);

				double valor = Ferramentas::toDouble(this->tb_total->Text);

				std::string data = Ferramentas::stdString(this->dateTimePicker1->Value.Date.ToString());

				// Gravar nova venda
				Venda novaVenda = Venda();
				novaVenda.setID(ID);
				novaVenda.setFuncionario(nome_funcionario);
				novaVenda.setNIF(nif_cliente);
				novaVenda.setProdutos(produtos);
				novaVenda.setValor(valor);
				novaVenda.setData(data);
				novaVenda.gravar();

				this->Close();
			}
			else {
				MessageBox::Show("Preencha o NIF do cliente", "Erro", MessageBoxButtons::OK);
			}
		}

		/*
									BOTÃO CANCELAR

				Confirma a ação de cancelar a venda
		
		*/

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			if (MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
				this->Close();
			}
		}
};
}
