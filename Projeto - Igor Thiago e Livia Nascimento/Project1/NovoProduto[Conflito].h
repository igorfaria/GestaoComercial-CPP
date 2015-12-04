#pragma once
#include "Produto.h"
#include "vector"
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

	public: std::vector<Produto>* PRODUTOS;
	public: Estoque* estoque;
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
	private: System::Windows::Forms::TextBox^  tbNome;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbPreco;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbFabricante;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  quantidade;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  tbDescricao;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
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
			this->estoque->PRODUTOS.push_back(Produto());



			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NovoProduto::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbNome = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbPreco = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbFabricante = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->quantidade = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbDescricao = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantidade))->BeginInit();
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
			// tbNome
			// 
			this->tbNome->Location = System::Drawing::Point(143, 19);
			this->tbNome->Name = L"tbNome";
			this->tbNome->Size = System::Drawing::Size(137, 20);
			this->tbNome->TabIndex = 3;
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
			// tbPreco
			// 
			this->tbPreco->Location = System::Drawing::Point(143, 56);
			this->tbPreco->Name = L"tbPreco";
			this->tbPreco->Size = System::Drawing::Size(137, 20);
			this->tbPreco->TabIndex = 5;
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
			// tbFabricante
			// 
			this->tbFabricante->Location = System::Drawing::Point(143, 95);
			this->tbFabricante->Name = L"tbFabricante";
			this->tbFabricante->Size = System::Drawing::Size(137, 20);
			this->tbFabricante->TabIndex = 7;
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
			// quantidade
			// 
			this->quantidade->Location = System::Drawing::Point(226, 121);
			this->quantidade->Name = L"quantidade";
			this->quantidade->Size = System::Drawing::Size(53, 20);
			this->quantidade->TabIndex = 9;
			this->quantidade->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Descrição";
			// 
			// tbDescricao
			// 
			this->tbDescricao->Location = System::Drawing::Point(9, 170);
			this->tbDescricao->Name = L"tbDescricao";
			this->tbDescricao->Size = System::Drawing::Size(263, 102);
			this->tbDescricao->TabIndex = 11;
			this->tbDescricao->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(49, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NovoProduto::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(154, 289);
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
			this->tabControl1->Size = System::Drawing::Size(292, 361);
			this->tabControl1->TabIndex = 14;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->tbNome);
			this->tabPage2->Controls->Add(this->tbDescricao);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->tbPreco);
			this->tabPage2->Controls->Add(this->quantidade);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->tbFabricante);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(284, 335);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Novo Produto";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// NovoProduto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 361);
			this->Controls->Add(this->tabControl1);
			this->Name = L"NovoProduto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Produto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantidade))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	/*
	Botão: Salvar
	*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			// Inicia a instância de um ponteiro de um objeto Produto
			Produto novoProduto = Produto();

			// Atribui o ID
			novoProduto.setID(10);
			// Atribui Nome
			novoProduto.setNome(Produto::toString(this->tbNome->Text));
			// Atribui Preço
			//novoProduto->setPreco(Produto::toDouble(this->tbPreco->Text));
			// Atribui Descrição
			novoProduto.setDescricao(Produto::toString(this->tbDescricao->Text));
			
			this->estoque->PRODUTOS.push_back((novoProduto));

			//this->produtos->push_back(novoProduto);


		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
}
};
}
