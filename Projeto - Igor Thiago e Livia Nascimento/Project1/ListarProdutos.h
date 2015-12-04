	/*
									Listar Produtos

			Classe para listar os produtos gravados no ficheiro PRODUTO.txt.


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
	/// Summary for ListarProdutos
	/// </summary>
	public ref class ListarProdutos : public System::Windows::Forms::Form
	{
	public:
		ListarProdutos(void)
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
		~ListarProdutos()
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
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ComboBox^  cb_fabricante;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Preco;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantidade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fabricante;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Descricao;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ListarProdutos::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fabricante = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descricao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->cb_fabricante = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->Nome,
					this->Preco, this->Quantidade, this->Fabricante, this->Descricao
			});
			this->dataGridView1->Location = System::Drawing::Point(167, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(596, 301);
			this->dataGridView1->TabIndex = 0;
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
			this->Preco->Width = 60;
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
			this->Descricao->Width = 150;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 138);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Fechar janela";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ListarProdutos::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 166);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(122, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Filtrar por Fabricante";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ListarProdutos::checkBox1_CheckedChanged);
			// 
			// cb_fabricante
			// 
			this->cb_fabricante->Enabled = false;
			this->cb_fabricante->FormattingEnabled = true;
			this->cb_fabricante->Location = System::Drawing::Point(13, 190);
			this->cb_fabricante->Name = L"cb_fabricante";
			this->cb_fabricante->Size = System::Drawing::Size(121, 21);
			this->cb_fabricante->TabIndex = 6;
			this->cb_fabricante->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ListarProdutos::cb_fabricante_KeyDown);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(87, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ListarProdutos::button2_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(13, 227);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(38, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &ListarProdutos::pictureBox9_Click);
			// 
			// ListarProdutos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 319);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->cb_fabricante);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ListarProdutos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Listar Produtos";
			this->Load += gcnew System::EventHandler(this, &ListarProdutos::ListarProdutos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/*
	
									AO ABRIR JANELA

			Lê ficheiro PRODUTOS.txt, percorre vetor e adiciona os valores referentes aos 
			atributos do produto à tabela de produtos
			Lê ficheiro FABRICANTES.txt e adiciona os nomes ao campo cb_fabricantes
	
	*/

	private: System::Void ListarProdutos_Load(System::Object^  sender, System::EventArgs^  e) {
		
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
			
			this->dataGridView1->Rows->Add(
				Ferramentas::sysString(std::to_string(produto.getID())),
				Ferramentas::sysString(produto.getNome()),
				Ferramentas::sysString(Ferramentas::precoFormat(std::to_string(produto.getPreco()))),
				Ferramentas::sysString(std::to_string(produto.getQuantidade())),
				Ferramentas::sysString(produto.getFabricante()),
				Ferramentas::sysString(produto.getDescricao_inline()));
		}
		

		std::vector<std::string> MARCAS = Ficheiro("FABRICANTES.txt", "L").le();

		for (int i = 1; i < MARCAS.size(); i++) {
			this->cb_fabricante->Items->Add(Ferramentas::sysString(MARCAS[i]));
		}


	}

	/*
									CHECKBOX FILTRAR POR FABRICANTE

			Verifica checkbox referente à filtrar por nome de fabricante
			Em caso de ocorrência verdadeira, habilita o combobox com a lista de nomes dos fabricantes e o botão OK 
									
	*/

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox1->Checked) {
			this->cb_fabricante->Enabled = true;
			this->button2->Enabled = true;
		}
		else {
			this->cb_fabricante->Enabled = false;
			this->button2->Enabled = false;
		}
	}

	/*
									BOTÃO OK

			Lê ficheiro PRODUTOS.txt, percorre o vetor e compara o valor inserido em cb_fabricante
			Em caso de ocorrência verdadeira, adiciona uma linha referente ao produto na tabela de produtos
	
	*/

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (!System::String::IsNullOrEmpty(this->cb_fabricante->Text)) {

		this->dataGridView1->Rows->Clear();

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
				this->dataGridView1->Rows->Add(
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
		MessageBox::Show("Selecione um fabricante ou desmarque a checkbox", "Erro", MessageBoxButtons::OK);
	}
}

	/*
										BOTÃO FECHAR.

			Confirma a ação de fechar a janela.

	*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
	}

	/*
										BOTÃO IMPRESSORA.

			 A ser implementado :D :D

	*/

	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Funcionalidade indisponível", "Desculpe", MessageBoxButtons::OK);
	}
	private: System::Void cb_fabricante_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			button2_Click(sender, e);
		}
	}
};
}
