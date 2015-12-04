#pragma once

	/*
									Consultar Produto.

			Lê o ficheiro PRODUTOS.txt e compara com os valores inseridos de acordo com o critério selecionado.
			Caso encontre ocorrências verdadeiras, exibe os respectivos dados relacionados ao produto em uma tabela.

	*/

#include "Produto.h" // Classe para objeto Produto().
#include "Helpers.h" // Classe para objeto Ferramentas() e Ficheiro().

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConsultarProduto
	/// </summary>
	public ref class ConsultarProduto : public System::Windows::Forms::Form
	{
	public:
		ConsultarProduto(void)
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
		~ConsultarProduto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  tabelaProduto;






	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  btn_consultar;
	private: System::Windows::Forms::TextBox^  tb_ID;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  btn_fechar;


	private: std::vector<std::string>* PRODUTOS;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  btn_fabricante;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  maiorPreco;
	private: System::Windows::Forms::NumericUpDown^  menorPreco;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  cb_fabricante;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Preco;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantidade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fabricante;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Descricao;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultarProduto::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabelaProduto = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fabricante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descricao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btn_consultar = (gcnew System::Windows::Forms::Button());
			this->tb_ID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->cb_fabricante = (gcnew System::Windows::Forms::ComboBox());
			this->btn_fabricante = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->maiorPreco = (gcnew System::Windows::Forms::NumericUpDown());
			this->menorPreco = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_fechar = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaProduto))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maiorPreco))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menorPreco))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 138);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(167, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 4;
			// 
			// tabelaProduto
			// 
			this->tabelaProduto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaProduto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->Nome,
					this->Preco, this->Quantidade, this->Fabricante, this->Descricao
			});
			this->tabelaProduto->Location = System::Drawing::Point(12, 156);
			this->tabelaProduto->Name = L"tabelaProduto";
			this->tabelaProduto->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tabelaProduto->Size = System::Drawing::Size(596, 301);
			this->tabelaProduto->TabIndex = 5;
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
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 150;
			// 
			// Preco
			// 
			this->Preco->HeaderText = L"Preço";
			this->Preco->Name = L"Preco";
			this->Preco->ReadOnly = true;
			this->Preco->Width = 50;
			// 
			// Quantidade
			// 
			this->Quantidade->HeaderText = L"Quantidade";
			this->Quantidade->Name = L"Quantidade";
			this->Quantidade->ReadOnly = true;
			this->Quantidade->Width = 70;
			// 
			// Fabricante
			// 
			this->Fabricante->HeaderText = L"Fabricante";
			this->Fabricante->Name = L"Fabricante";
			this->Fabricante->ReadOnly = true;
			this->Fabricante->Width = 80;
			// 
			// Descricao
			// 
			this->Descricao->HeaderText = L"Descrição";
			this->Descricao->Name = L"Descricao";
			this->Descricao->ReadOnly = true;
			this->Descricao->Width = 160;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(150, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(359, 137);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btn_consultar);
			this->tabPage1->Controls->Add(this->tb_ID);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(351, 111);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Por ID";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &ConsultarProduto::tabPage1_Click);
			// 
			// btn_consultar
			// 
			this->btn_consultar->Location = System::Drawing::Point(187, 49);
			this->btn_consultar->Name = L"btn_consultar";
			this->btn_consultar->Size = System::Drawing::Size(75, 23);
			this->btn_consultar->TabIndex = 10;
			this->btn_consultar->Text = L"Consultar";
			this->btn_consultar->UseVisualStyleBackColor = true;
			this->btn_consultar->Click += gcnew System::EventHandler(this, &ConsultarProduto::btn_consultar_Click);
			// 
			// tb_ID
			// 
			this->tb_ID->Location = System::Drawing::Point(55, 50);
			this->tb_ID->Name = L"tb_ID";
			this->tb_ID->Size = System::Drawing::Size(100, 20);
			this->tb_ID->TabIndex = 1;
			this->tb_ID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConsultarProduto::tb_ID_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Indique o ID";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->cb_fabricante);
			this->tabPage2->Controls->Add(this->btn_fabricante);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(351, 111);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Fabricante";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// cb_fabricante
			// 
			this->cb_fabricante->FormattingEnabled = true;
			this->cb_fabricante->Location = System::Drawing::Point(60, 50);
			this->cb_fabricante->Name = L"cb_fabricante";
			this->cb_fabricante->Size = System::Drawing::Size(121, 21);
			this->cb_fabricante->TabIndex = 12;
			this->cb_fabricante->Text = L"<selecione>";
			this->cb_fabricante->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConsultarProduto::cb_fabricante_KeyDown);
			// 
			// btn_fabricante
			// 
			this->btn_fabricante->Location = System::Drawing::Point(195, 49);
			this->btn_fabricante->Name = L"btn_fabricante";
			this->btn_fabricante->Size = System::Drawing::Size(75, 23);
			this->btn_fabricante->TabIndex = 11;
			this->btn_fabricante->Text = L"Consultar";
			this->btn_fabricante->UseVisualStyleBackColor = true;
			this->btn_fabricante->Click += gcnew System::EventHandler(this, &ConsultarProduto::btn_fabricante_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nome do Fabricante";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->maiorPreco);
			this->tabPage3->Controls->Add(this->menorPreco);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(351, 111);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Preço";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// maiorPreco
			// 
			this->maiorPreco->Location = System::Drawing::Point(130, 50);
			this->maiorPreco->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->maiorPreco->Name = L"maiorPreco";
			this->maiorPreco->Size = System::Drawing::Size(53, 20);
			this->maiorPreco->TabIndex = 17;
			this->maiorPreco->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConsultarProduto::maiorPreco_KeyDown);
			// 
			// menorPreco
			// 
			this->menorPreco->Location = System::Drawing::Point(50, 50);
			this->menorPreco->Name = L"menorPreco";
			this->menorPreco->Size = System::Drawing::Size(53, 20);
			this->menorPreco->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(120, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Maior preço";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultarProduto::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Menor preço";
			// 
			// btn_fechar
			// 
			this->btn_fechar->Location = System::Drawing::Point(511, 123);
			this->btn_fechar->Name = L"btn_fechar";
			this->btn_fechar->Size = System::Drawing::Size(92, 23);
			this->btn_fechar->TabIndex = 8;
			this->btn_fechar->Text = L"Fechar";
			this->btn_fechar->UseVisualStyleBackColor = true;
			this->btn_fechar->Click += gcnew System::EventHandler(this, &ConsultarProduto::btn_fechar_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(511, 35);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(92, 87);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &ConsultarProduto::pictureBox9_Click);
			// 
			// ConsultarProduto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 466);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->btn_fechar);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->tabelaProduto);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ConsultarProduto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Consultar Produto";
			this->Load += gcnew System::EventHandler(this, &ConsultarProduto::ConsultarProduto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaProduto))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maiorPreco))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menorPreco))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
	
	 /*
								BOTÃO CONSULTAR POR ID.

		Lê ficheiro PRODUTOS.txt monta um vetor de objetos Produto().
		Percorre os elementos do vetor e compara com o ID inserido no campo tb_ID.
		Caso encontre uma ocorrência verdadeira, adiciona uma linha com as informações do respectivo produto na tabela de produtos.

	 */

	private: System::Void btn_consultar_Click(System::Object^  sender, System::EventArgs^  e) {


		if (!System::String::IsNullOrEmpty(this->tb_ID->Text)) {
			this->tabelaProduto->Rows->Clear();

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

				if (std::to_string(produto.getID()) == Ferramentas::stdString(this->tb_ID->Text)) {
					this->tabelaProduto->Rows->Add(
						Ferramentas::sysString(std::to_string(produto.getID())),
						Ferramentas::sysString(produto.getNome()),
						Ferramentas::sysString(Ferramentas::precoFormat(std::to_string(produto.getPreco()))),
						Ferramentas::sysString(std::to_string(produto.getQuantidade())),
						Ferramentas::sysString(produto.getFabricante()),
						Ferramentas::sysString(produto.getDescricao()));
				}
			}
		}
		else {
			MessageBox::Show("Preencha o ID", "Erro", MessageBoxButtons::OK);
		}
	}

	/*
				
								BOTÃO CONSULTAR POR FABRICANTE.

		Lê ficheiro PRODUTOS.txt monta um vetor de objetos Produto().
		Percorre os elementos do vetor e compara com o fabricante inserido no campo tb_fabricante.
		Caso encontre uma ocorrência verdadeira, adiciona uma linha com as informações do respectivo produto na tabela de produtos.

	*/

	private: System::Void btn_fabricante_Click(System::Object^  sender, System::EventArgs^  e) {

		if ((!System::String::IsNullOrEmpty(this->cb_fabricante->Text)) && (this->cb_fabricante->Text != "<selecione>")) {

			this->tabelaProduto->Rows->Clear();

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

				if (produto.getFabricante() == Ferramentas::stdString(this->cb_fabricante->Text)) {
					this->tabelaProduto->Rows->Add(
						Ferramentas::sysString(std::to_string(produto.getID())),
						Ferramentas::sysString(produto.getNome()),
						Ferramentas::sysString(Ferramentas::precoFormat(std::to_string(produto.getPreco()))),
						Ferramentas::sysString(std::to_string(produto.getQuantidade())),
						Ferramentas::sysString(produto.getFabricante()),
						Ferramentas::sysString(produto.getDescricao()));
				}
			}
		}
	}

	/*

								BOTÃO CONSULTAR POR PREÇO.

			Lê ficheiro PRODUTOS.txt monta um vetor de objetos Produto().
			Percorre os elementos do vetor e compara com o intervalo entre os valores inseridos nos campos menorPreco e maiorPreco.
			Caso encontre uma ocorrência verdadeira, adiciona uma linha com as informações do respectivo produto na tabela de produtos.

	 */

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (std::stod(Ferramentas::stdString(this->menorPreco->Text)) >= 0 && std::stod(Ferramentas::stdString(this->menorPreco->Text)) <= std::stod(Ferramentas::stdString(this->maiorPreco->Text))) {
			this->tabelaProduto->Rows->Clear();

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

				if (produto.getPreco() >= System::Convert::ToDouble(this->menorPreco->Text) &&
					produto.getPreco() <= System::Convert::ToDouble(this->maiorPreco->Text)) {
					this->tabelaProduto->Rows->Add(
						Ferramentas::sysString(std::to_string(produto.getID())),
						Ferramentas::sysString(produto.getNome()),
						Ferramentas::sysString(Ferramentas::precoFormat(std::to_string(produto.getPreco()))),
						Ferramentas::sysString(std::to_string(produto.getQuantidade())),
						Ferramentas::sysString(produto.getFabricante()),
						Ferramentas::sysString(produto.getDescricao()));
				}


			}
		}
		else {
			MessageBox::Show("Intervalo de preços inválido", "Erro", MessageBoxButtons::OK);
		}
	}
	
	 /*
								BOTÃO FECHAR.

			Confirma a ação de fechar a janela.

	 */

	private: System::Void btn_fechar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
	}

	/*
								AO ABRIR JANELA

			Lê ficheiro FABRICANTES.txt e adiciona os nomes no elemento cb_fabricante.
	
	*/
	private: System::Void ConsultarProduto_Load(System::Object^  sender, System::EventArgs^  e) {

		// Carregar lista de fabricantes
		std::vector<std::string> MARCAS = Ficheiro("FABRICANTES.txt", "L").le();

		for (int i = 1; i < MARCAS.size(); i++) {
			this->cb_fabricante->Items->Add(Ferramentas::sysString(MARCAS[i]));
		}


	}

	/*
								BOTÃO IMPRESSORA.

			A ser implementado :D.	
	
	*/

	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Funcionalidade não disponivel", "Desculpe", MessageBoxButtons::OK);
	}

	 /*
							 TECLA ENTER.

			Verifica se a tecla premida no teclado corresponde a tecla Enter.

	 */

	private: System::Void tb_ID_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			btn_consultar_Click(sender, e);
		}
	}

	 /*
					 		 TECLA ENTER.

			Verifica se a tecla premida no teclado corresponde a tecla Enter.

	 */

	private: System::Void cb_fabricante_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			btn_fabricante_Click(sender, e);
		}
	}

	 /*
							 TECLA ENTER.

			 Verifica se a tecla premida no teclado corresponde a tecla Enter.

	 */

	private: System::Void maiorPreco_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			button1_Click(sender, e);
		}
	}
};
}
