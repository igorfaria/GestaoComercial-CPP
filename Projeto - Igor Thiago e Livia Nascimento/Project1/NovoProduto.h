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
	/// Summary for NovoProduto
	/// </summary>
	public ref class NovoProduto : public System::Windows::Forms::Form
	{
	public: Produto* produto = &Produto();

	public:
		NovoProduto(void)
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
		~NovoProduto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_nome;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb_preco;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  tb_quantidade;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  tbDescricao;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  tb_codigo;
	private: System::Windows::Forms::Label^  codigo;
	private: System::Windows::Forms::ComboBox^  tb_fabricante;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NovoProduto::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_nome = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_preco = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_quantidade = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbDescricao = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tb_fabricante = (gcnew System::Windows::Forms::ComboBox());
			this->tb_codigo = (gcnew System::Windows::Forms::TextBox());
			this->codigo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_quantidade))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 138);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nome";
			// 
			// tb_nome
			// 
			this->tb_nome->Location = System::Drawing::Point(143, 19);
			this->tb_nome->Name = L"tb_nome";
			this->tb_nome->Size = System::Drawing::Size(137, 20);
			this->tb_nome->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Preço";
			// 
			// tb_preco
			// 
			this->tb_preco->Location = System::Drawing::Point(143, 56);
			this->tb_preco->Name = L"tb_preco";
			this->tb_preco->Size = System::Drawing::Size(137, 20);
			this->tb_preco->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(140, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Fabricante";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Quantidade";
			// 
			// tb_quantidade
			// 
			this->tb_quantidade->Location = System::Drawing::Point(219, 123);
			this->tb_quantidade->Name = L"tb_quantidade";
			this->tb_quantidade->Size = System::Drawing::Size(53, 20);
			this->tb_quantidade->TabIndex = 9;
			this->tb_quantidade->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Descrição";
			// 
			// tbDescricao
			// 
			this->tbDescricao->Location = System::Drawing::Point(9, 210);
			this->tbDescricao->Name = L"tbDescricao";
			this->tbDescricao->Size = System::Drawing::Size(271, 102);
			this->tbDescricao->TabIndex = 11;
			this->tbDescricao->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(59, 318);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NovoProduto::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(159, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NovoProduto::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(301, 386);
			this->tabControl1->TabIndex = 14;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tb_fabricante);
			this->tabPage2->Controls->Add(this->tb_codigo);
			this->tabPage2->Controls->Add(this->codigo);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->tb_nome);
			this->tabPage2->Controls->Add(this->tbDescricao);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->tb_preco);
			this->tabPage2->Controls->Add(this->tb_quantidade);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(293, 360);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Novo Produto";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &NovoProduto::tabPage2_Click);
			// 
			// tb_fabricante
			// 
			this->tb_fabricante->FormattingEnabled = true;
			this->tb_fabricante->Location = System::Drawing::Point(159, 96);
			this->tb_fabricante->Name = L"tb_fabricante";
			this->tb_fabricante->Size = System::Drawing::Size(121, 21);
			this->tb_fabricante->TabIndex = 16;
			// 
			// tb_codigo
			// 
			this->tb_codigo->Location = System::Drawing::Point(143, 170);
			this->tb_codigo->Name = L"tb_codigo";
			this->tb_codigo->ReadOnly = true;
			this->tb_codigo->Size = System::Drawing::Size(137, 20);
			this->tb_codigo->TabIndex = 15;
			// 
			// codigo
			// 
			this->codigo->AutoSize = true;
			this->codigo->Location = System::Drawing::Point(140, 154);
			this->codigo->Name = L"codigo";
			this->codigo->Size = System::Drawing::Size(40, 13);
			this->codigo->TabIndex = 14;
			this->codigo->Text = L"Código";
			// 
			// NovoProduto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 386);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"NovoProduto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Novo Produto";
			this->Load += gcnew System::EventHandler(this, &NovoProduto::NovoProduto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_quantidade))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	/*
								BOTÃO SALVAR

			Verifica só todos os campos obrigatórios foram preenchidos
			Cria uma instância do objeto Produto e atribuí os valores através dos métodos setters
			Cria um vetor de std::string com os valores obtidos através dos métodos getters 
			Grava o vetor de dados no ficheiro PRODUTOS.txt através do método gravar(DADOS)

	*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (!System::String::IsNullOrEmpty(this->tb_codigo->Text) &&
			!System::String::IsNullOrEmpty(this->tb_nome->Text) &&
			!System::String::IsNullOrEmpty(this->tb_fabricante->Text) &&
			!System::String::IsNullOrEmpty(this->tb_preco->Text) &&
			!System::String::IsNullOrEmpty(this->tb_quantidade->Text)) {
			
		int ID = Ferramentas::toInt(this->tb_codigo->Text);
		std::string nome = Ferramentas::stdString(this->tb_nome->Text);
		std::string fabricante = Ferramentas::stdString(this->tb_fabricante->Text);
		double preco = Ferramentas::toDouble(this->tb_preco->Text);
		int quantidade = Ferramentas::toInt(this->tb_quantidade->Text);
		std::string descricao = Ferramentas::stdString(this->tbDescricao->Text);
		
			Produto novoProduto = Produto();
			novoProduto.setID(ID);
			novoProduto.setNome(nome);
			novoProduto.setFabricante(fabricante);
			novoProduto.setPreco(preco);
			novoProduto.setQuantidade(quantidade);
			novoProduto.setDescricao(descricao);

			// Vetor com atributos do produto
			std::vector<std::string> DADOS;

			DADOS.push_back(std::to_string(novoProduto.getID()));
			DADOS.push_back(novoProduto.getNome());
			DADOS.push_back(std::to_string(novoProduto.getPreco()));
			DADOS.push_back(std::to_string(novoProduto.getQuantidade()));
			DADOS.push_back(novoProduto.getFabricante());
			DADOS.push_back(novoProduto.getRawDescricao());

			// Caso não exista, grava novo produto no ficheiro
			if (!novoProduto.existe(novoProduto.getID())) {
				//Ficheiro("PRODUTOS.txt", "A").escrever(novoProduto);
				novoProduto.gravar(DADOS);

				this->Close();
			}
			else {
				// ID já existente. Soma quantidade?
			}
		}
		else {
			MessageBox::Show("Todos os dados, excepto a descrição, são de preenchimentos obrigatórios", "Erro", MessageBoxButtons::OK);
		}

	}
	
	private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {}

	/*
								AO ABRIR JANELA

			Lê ficheiro FABRICANTES.txt, carrega o conteúdo em um vetor de std::string
			Adiciona os nomes a combobox tb_fabricante 
			Lê ficheiro CONTADOR_P.txt e incrementa o seu valor atual, através do método numeroProduto() do objeto Produto()
			Atribuí o retorno do método numeroProduto() ao campo tb_codigo

	*/

	private: System::Void NovoProduto_Load(System::Object^  sender, System::EventArgs^  e) {

		// Carrega lista de fabricantes
		std::vector<std::string> MARCAS = Ficheiro("FABRICANTES.txt", "L").le();

		for (int i = 1; i < MARCAS.size(); i++) {
			this->tb_fabricante->Items->Add(Ferramentas::sysString(MARCAS[i]));
		}

		// Gera código de produto
		this->tb_codigo->Text = Ferramentas::sysString(std::to_string(Produto().numeroProduto()));

	}

	/*
								BOTÃO FECHAR

			Confirma a intenção de fechar a janela

	*/

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
	}
};
}
