/*
								Alterar Produto
			
			Classe para editar os produtos gravados no ficheiro PRODUTO.txt.


*/

#pragma once
#include "Produto.h" // Classe para objeto Produto().
#include "Venda.h"   // Classe para objeto Venda().
#include "Helpers.h" // Classe para objeto Ferramentas() e Ficheiro().
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AlterarProduto
	/// </summary>
	public ref class AlterarProduto : public System::Windows::Forms::Form
	{
	public:
		AlterarProduto(void)
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
		~AlterarProduto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_ID;

	private: System::Windows::Forms::ComboBox^  tb_fabricante;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btn_salvar;
	private: System::Windows::Forms::TextBox^  tb_nome;
	private: System::Windows::Forms::RichTextBox^  tb_descricao;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tb_preco;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btn_OK;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  tb_quantidade;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AlterarProduto::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_ID = (gcnew System::Windows::Forms::TextBox());
			this->tb_fabricante = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_salvar = (gcnew System::Windows::Forms::Button());
			this->tb_nome = (gcnew System::Windows::Forms::TextBox());
			this->tb_descricao = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_preco = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tb_quantidade = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_quantidade))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(128, 131);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(146, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID:";
			// 
			// tb_ID
			// 
			this->tb_ID->Location = System::Drawing::Point(173, 12);
			this->tb_ID->Name = L"tb_ID";
			this->tb_ID->Size = System::Drawing::Size(110, 20);
			this->tb_ID->TabIndex = 4;
			this->tb_ID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AlterarProduto::tb_ID_KeyDown);
			// 
			// tb_fabricante
			// 
			this->tb_fabricante->Enabled = false;
			this->tb_fabricante->FormattingEnabled = true;
			this->tb_fabricante->Location = System::Drawing::Point(15, 162);
			this->tb_fabricante->Name = L"tb_fabricante";
			this->tb_fabricante->Size = System::Drawing::Size(121, 21);
			this->tb_fabricante->TabIndex = 29;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(173, 338);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AlterarProduto::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(149, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Nome";
			// 
			// btn_salvar
			// 
			this->btn_salvar->Enabled = false;
			this->btn_salvar->Location = System::Drawing::Point(65, 338);
			this->btn_salvar->Name = L"btn_salvar";
			this->btn_salvar->Size = System::Drawing::Size(75, 23);
			this->btn_salvar->TabIndex = 25;
			this->btn_salvar->Text = L"Salvar";
			this->btn_salvar->UseVisualStyleBackColor = true;
			this->btn_salvar->Click += gcnew System::EventHandler(this, &AlterarProduto::btn_salvar_Click);
			// 
			// tb_nome
			// 
			this->tb_nome->Enabled = false;
			this->tb_nome->Location = System::Drawing::Point(152, 84);
			this->tb_nome->Name = L"tb_nome";
			this->tb_nome->Size = System::Drawing::Size(131, 20);
			this->tb_nome->TabIndex = 18;
			// 
			// tb_descricao
			// 
			this->tb_descricao->Enabled = false;
			this->tb_descricao->Location = System::Drawing::Point(12, 215);
			this->tb_descricao->Name = L"tb_descricao";
			this->tb_descricao->Size = System::Drawing::Size(294, 117);
			this->tb_descricao->TabIndex = 24;
			this->tb_descricao->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Preço";
			// 
			// tb_preco
			// 
			this->tb_preco->Enabled = false;
			this->tb_preco->Location = System::Drawing::Point(152, 123);
			this->tb_preco->Name = L"tb_preco";
			this->tb_preco->Size = System::Drawing::Size(131, 20);
			this->tb_preco->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Fabricante";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(221, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Quantidade";
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(208, 38);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 30;
			this->btn_OK->Text = L"OK";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &AlterarProduto::btn_OK_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Descrição";
			// 
			// tb_quantidade
			// 
			this->tb_quantidade->Location = System::Drawing::Point(224, 162);
			this->tb_quantidade->Name = L"tb_quantidade";
			this->tb_quantidade->Size = System::Drawing::Size(58, 20);
			this->tb_quantidade->TabIndex = 32;
			// 
			// AlterarProduto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 373);
			this->Controls->Add(this->tb_quantidade);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->tb_fabricante);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_salvar);
			this->Controls->Add(this->tb_nome);
			this->Controls->Add(this->tb_descricao);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tb_preco);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tb_ID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"AlterarProduto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alterar Produto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_quantidade))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*
								BOTÃO OK
			
			Lê ficheiro PRODUTOS.txt monta um vetor de objetos Produto().
			Percorre os elementos do vetor e compara o ID inserido com o campo tb_ID.
			Caso encontre uma ocorrência verdadeira, insere os dados do produto em seus respectivos campos para a edição.

		*/

	private: System::Void btn_OK_Click(System::Object^  sender, System::EventArgs^  e) {

		if (!System::String::IsNullOrEmpty(this->tb_ID->Text)) {

			// Carregar lista de produtos
			std::vector<std::string> PRODUTOS = Produto().listarProdutos();

			std::string ID;
			std::string nome;
			std::string preco;
			std::string fabricante;
			std::string quantidade;
			std::string descricao;

			bool existe = false;

			std::vector<Produto> ESTOQUE_PRODUTOS;

			for (int i = 0; i < PRODUTOS.size(); i++) {

				std::vector<std::string> DADOS = Ferramentas::split(PRODUTOS[i], '|');
				ID = DADOS[0];
				nome = DADOS[1];
				preco = DADOS[2];
				quantidade = DADOS[3];
				fabricante = DADOS[4];
				descricao = DADOS[5];

				if (ID == Ferramentas::stdString(this->tb_ID->Text)) {
					existe = true;
					break;
				}

			}

			if (existe) {
				this->tb_nome->Enabled = true;
				this->tb_preco->Enabled = true;
				this->tb_quantidade->Enabled = true;
				this->tb_fabricante->Enabled = true;
				this->tb_descricao->Enabled = true;
				this->btn_salvar->Enabled = true;

				this->tb_nome->Text = "";
				this->tb_preco->Text = "";
				this->tb_quantidade->Text = "";
				this->tb_fabricante->Text = "";
				this->tb_descricao->Text = "";

				Produto produto = Produto();
				produto.setID(Ferramentas::toInt(ID));
				produto.setNome(nome);
				produto.setPreco(Ferramentas::toDouble(preco));
				produto.setFabricante(fabricante);
				produto.setQuantidade(Ferramentas::toInt(quantidade));
				produto.setDescricao(descricao);


				this->tb_nome->Text = Ferramentas::sysString(produto.getNome());
				this->tb_preco->Text = Ferramentas::sysString(std::to_string(produto.getPreco()));
				this->tb_quantidade->Text = Ferramentas::sysString(std::to_string(produto.getQuantidade()));
				this->tb_fabricante->Text = Ferramentas::sysString(produto.getFabricante());
				this->tb_descricao->Text = Ferramentas::sysString(produto.getDescricao());

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
								BOTÃO SALVAR.

			Confirma a alteração do produto.
			Cria um objeto do tipo Produto() e armazena as informações através dos métodos setters e
			altera o ficheiro PRODUTOS.txt através do método alterarProduto.
	
	*/

	private: System::Void btn_salvar_Click(System::Object^  sender, System::EventArgs^  e) {

		if (MessageBox::Show("Confirma a alteração ao produto?", "Confirmar ação", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			if (!System::String::IsNullOrEmpty(this->tb_nome->Text) &&
				!System::String::IsNullOrEmpty(this->tb_preco->Text) &&
				!System::String::IsNullOrEmpty(this->tb_fabricante->Text) &&
				!System::String::IsNullOrEmpty(this->tb_quantidade->Text)) {

				Produto produto = Produto();

				int ID = Ferramentas::toInt(this->tb_ID->Text);
				std::string nome = Ferramentas::stdString(this->tb_nome->Text);
				double preco = std::stod(Ferramentas::stdString(this->tb_preco->Text));
				std::string fabricante = Ferramentas::stdString(this->tb_fabricante->Text);
				int quantidade = Ferramentas::toInt(this->tb_quantidade->Text);
				std::string descricao = Ferramentas::stdString(this->tb_descricao->Text);

				produto.setID(ID);
				produto.setNome(nome);
				produto.setPreco(preco);
				produto.setFabricante(fabricante);
				produto.setQuantidade(quantidade);
				produto.setDescricao(descricao);

				if (produto.alterarProduto(produto)) {
					this->Close();
				}
				else {
					MessageBox::Show("Erro ao alterar o produto", "Erro", MessageBoxButtons::OK);
				};
			}
			else {
				MessageBox::Show("Todos os campos, excepto Descrição, são de preenchimento obrigatório", "Erro", MessageBoxButtons::OK);
			}
		}

	}

	/*
								BOTÃO FECHAR.

		Confirma a ação de fechar a janela.
	
	*/	

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Deseja cancelar a alteração?", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}
	}

	/*
								TECLA ENTER.

		Verifica se a tecla premida no teclado corresponde a tecla Enter.

	*/

	private: System::Void tb_ID_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			btn_OK_Click(sender, e);
		}
	}
};
}
