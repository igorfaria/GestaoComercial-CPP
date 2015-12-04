#pragma once

	/*
								FORM PRINCIPAL

			Classe com botões que exibe as janelas para as operações relacionadas a gestão de produtos e vendas

	*/

#include "NovaVenda.h"			 // Classe referente à operação Nova Venda
#include "NovoProduto.h"		 // Classe referente à operação Novo Produto
#include "ListarProdutos.h"		 // Classe referente à operação Listar Produtos
#include "ConsultarProduto.h"    // Classe referente à operação Consultar Produtos	
#include "AlterarProduto.h"		 // Classe referente à operação Alterar Produto
#include "ConsultarVenda.h"		 // Classe referente à operação Consultar Vendas
#include "ListarVendas.h"		 // Classe referente à operação Listar Vendas
#include "VendasFuncionario.h"	 // Classe referente à operação Listar Vendas por Funcionário
#include "VendasData.h"			 // Classe referente à operação Listar Vendas por Data
#include "VendasValor.h"		 // Classe referente à operação Listar Vendas por Valor
#include "Helpers.h"			 // Classe que contém o objeto Ferramentas() e Ficheiro()

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
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
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;


	private: Project1::NovaVenda^ janelaNovaVenda;
	private: Project1::NovoProduto^ janelaNovoProduto;
	private: Project1::ListarProdutos^ janelaListarProdutos;
	private: Project1::ConsultarProduto^ janelaConsultarProduto;
	private: Project1::AlterarProduto^ janelaAlterarProduto;
	private: Project1::ConsultarVenda^ janelaConsultarVenda;
	private: Project1::ListarVendas^ janelaListarVendas;
	private: Project1::VendasFuncionario^ janelaVendasFuncionario;
	private: Project1::VendasData^ janelaVendasData;
	private: Project1::VendasValor^ janelaVendasValor;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_tempo;

	private: System::Windows::Forms::Label^  lbl_funcionario;


	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Panel^  panelAutenticacao;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  tb_palavrapasse;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::TextBox^  tb_utilizador;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  btn_alterar_produto;




	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;


	private: System::String^ hora;
	private: System::String^ minuto;
	private: System::String^ segundo;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;









	private: System::String^ FUNCIONARIO;
			 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPrincipal::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panelAutenticacao = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tb_palavrapasse = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tb_utilizador = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_tempo = (gcnew System::Windows::Forms::Label());
			this->lbl_funcionario = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_alterar_produto = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panelAutenticacao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(744, 347);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &FormPrincipal::tabControl1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panelAutenticacao);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(736, 321);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Autenticar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panelAutenticacao
			// 
			this->panelAutenticacao->Controls->Add(this->pictureBox7);
			this->panelAutenticacao->Controls->Add(this->pictureBox6);
			this->panelAutenticacao->Controls->Add(this->button12);
			this->panelAutenticacao->Controls->Add(this->tb_palavrapasse);
			this->panelAutenticacao->Controls->Add(this->pictureBox5);
			this->panelAutenticacao->Controls->Add(this->tb_utilizador);
			this->panelAutenticacao->Controls->Add(this->label6);
			this->panelAutenticacao->Controls->Add(this->label5);
			this->panelAutenticacao->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelAutenticacao->Location = System::Drawing::Point(3, 3);
			this->panelAutenticacao->Name = L"panelAutenticacao";
			this->panelAutenticacao->Size = System::Drawing::Size(730, 315);
			this->panelAutenticacao->TabIndex = 2;
			this->panelAutenticacao->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormPrincipal::panelAutenticacao_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(695, 281);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(29, 30);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &FormPrincipal::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(663, 280);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 31);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &FormPrincipal::pictureBox6_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(305, 255);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 5;
			this->button12->Text = L"Autenticar";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &FormPrincipal::button12_Click);
			// 
			// tb_palavrapasse
			// 
			this->tb_palavrapasse->Location = System::Drawing::Point(279, 215);
			this->tb_palavrapasse->Name = L"tb_palavrapasse";
			this->tb_palavrapasse->Size = System::Drawing::Size(128, 20);
			this->tb_palavrapasse->TabIndex = 4;
			this->tb_palavrapasse->UseSystemPasswordChar = true;
			this->tb_palavrapasse->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormPrincipal::tb_palavrapasse_KeyDown);
			this->tb_palavrapasse->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormPrincipal::tb_palavrapasse_KeyPress);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(279, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(128, 131);
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// tb_utilizador
			// 
			this->tb_utilizador->Location = System::Drawing::Point(279, 172);
			this->tb_utilizador->Name = L"tb_utilizador";
			this->tb_utilizador->Size = System::Drawing::Size(128, 20);
			this->tb_utilizador->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(276, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Palavra-passe";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(276, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Utilizador";
			this->label5->Click += gcnew System::EventHandler(this, &FormPrincipal::label5_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lbl_tempo);
			this->groupBox4->Controls->Add(this->lbl_funcionario);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->pictureBox4);
			this->groupBox4->Location = System::Drawing::Point(361, 162);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(367, 156);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Funcionário";
			// 
			// lbl_tempo
			// 
			this->lbl_tempo->AutoSize = true;
			this->lbl_tempo->Location = System::Drawing::Point(207, 59);
			this->lbl_tempo->Name = L"lbl_tempo";
			this->lbl_tempo->Size = System::Drawing::Size(52, 13);
			this->lbl_tempo->TabIndex = 11;
			this->lbl_tempo->Text = L"0 minutos";
			// 
			// lbl_funcionario
			// 
			this->lbl_funcionario->AutoSize = true;
			this->lbl_funcionario->Location = System::Drawing::Point(207, 30);
			this->lbl_funcionario->Name = L"lbl_funcionario";
			this->lbl_funcionario->Size = System::Drawing::Size(64, 13);
			this->lbl_funcionario->TabIndex = 10;
			this->lbl_funcionario->Text = L"Igor Thiago ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(169, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Tempo:  ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(169, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nome:  ";
			this->label1->Click += gcnew System::EventHandler(this, &FormPrincipal::label1_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(172, 88);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 23);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Terminar Sessão";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &FormPrincipal::button10_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 19);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(128, 131);
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Location = System::Drawing::Point(8, 162);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(336, 156);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Relatórios";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(160, 77);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 23);
			this->button11->TabIndex = 7;
			this->button11->Text = L"Vendas por Valor";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &FormPrincipal::button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(160, 48);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 23);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Vendas por Data";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &FormPrincipal::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(160, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 23);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Vendas por Funcionário";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &FormPrincipal::button8_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 131);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_alterar_produto);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Location = System::Drawing::Point(361, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(367, 150);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Produtos";
			// 
			// btn_alterar_produto
			// 
			this->btn_alterar_produto->Location = System::Drawing::Point(172, 88);
			this->btn_alterar_produto->Name = L"btn_alterar_produto";
			this->btn_alterar_produto->Size = System::Drawing::Size(150, 23);
			this->btn_alterar_produto->TabIndex = 7;
			this->btn_alterar_produto->Text = L"Alterar Produto";
			this->btn_alterar_produto->UseVisualStyleBackColor = true;
			this->btn_alterar_produto->Click += gcnew System::EventHandler(this, &FormPrincipal::btn_alterar_produto_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(172, 117);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Listar Produtos";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormPrincipal::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(172, 59);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Consultar Produto";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormPrincipal::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(172, 30);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Novo Produto";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormPrincipal::button4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 19);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(128, 131);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(336, 150);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vendas";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Listar Vendas\r\n";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormPrincipal::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Consultar Venda";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormPrincipal::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nova Venda";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormPrincipal::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 108);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormPrincipal::timer1_Tick);
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 347);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FormPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Loja de Telemóveis";
			this->Load += gcnew System::EventHandler(this, &FormPrincipal::FormPrincipal_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->panelAutenticacao->ResumeLayout(false);
			this->panelAutenticacao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	/*
								BOTÃO ENCERRAR SESSÃO

			Confirma a ação de encerrar a sessão do utilizador.

	*/

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Encerrar a sessão?", "Confirmação", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			Application::Exit();
		}
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	/*
								BOTÃO NOVA VENDA

			Cria um objeto do tipo NovaVenda(nome_do_funcionario), passa o nome do utilizador por argumento do construtor.
			Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaNovaVenda = (gcnew NovaVenda(FUNCIONARIO));
		janelaNovaVenda->Show();
	}

	/*
								BOTÃO CONSULTAR VENDA

		Cria um objeto do tipo ConsultarVenda().
		Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaConsultarVenda = (gcnew ConsultarVenda(""));
		janelaConsultarVenda->Show();
	}

	/*
								BOTÃO NOVO PRODUTO

			 Cria um objeto do tipo NovoProduto().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaNovoProduto = (gcnew NovoProduto());
		janelaNovoProduto->Show();
	}

	/*
								BOTÃO LISTAR PRODUTO

			 Cria um objeto do tipo ListarProduto().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaListarProdutos = (gcnew ListarProdutos());
		janelaListarProdutos->Show();
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) { }

	/*
	
								BOTÃO AUTENTICAR

			Lê o ficheiro UTILIZADORES.txt e compara os valores inseridos no campo tb_utilizador e tb_palavrapasse.
			Em caso de ocorrência verdadeira, exibe os botões relacionado às operações disponíveis e inicia o contador de tempo de sessão. 

	*/

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

		std::vector<std::string> LINHAS = Ficheiro("UTILIZADORES.txt", "L").le();

		System::String^ user;
		System::String^ pass;
		System::String^ nome;

		if (System::String::IsNullOrEmpty(this->tb_utilizador->Text) && System::String::IsNullOrEmpty(this->tb_palavrapasse->Text)) {
			MessageBox::Show("Preencha os dados para iniciar a sessão", "Erro", MessageBoxButtons::OK);
		}
		else {
			if (System::String::IsNullOrEmpty(this->tb_utilizador->Text)) {
				MessageBox::Show("Preencha o campo utilizador", "Erro", MessageBoxButtons::OK);
			}
			else {
				if (System::String::IsNullOrEmpty(this->tb_palavrapasse->Text)) {
					MessageBox::Show("Preencha o campo palavra-passe", "Erro", MessageBoxButtons::OK);
				}
				else {
					bool logado = false;
					for (int i = 0; i < LINHAS.size(); i++) {

						std::vector<std::string> CAMPO = Ferramentas::split(LINHAS[i], '|');

						user = Ferramentas::sysString(CAMPO[0]);
						pass = Ferramentas::sysString(CAMPO[1]);
						nome = Ferramentas::sysString(CAMPO[2]);

						if (user == this->tb_utilizador->Text) {
							if (pass == this->tb_palavrapasse->Text) {
								logado = true;
								break;
							}
						}
					}
					if (logado) {
						this->panelAutenticacao->Hide();
						this->lbl_funcionario->Text = nome;
						// Inicia contador de tempo da sessão
						this->timer1->Start();
						this->tabPage2->Text = "Menu";
						this->hora = "0";
						this->minuto = "0";
						this->segundo = "0";

						FUNCIONARIO = nome;
					}
					else {
						MessageBox::Show("Falha na autenticação!\nTente novamente", "Erro", MessageBoxButtons::OK);
					}
				}
			}
		}
	}

	private: System::Void FormPrincipal_Load(System::Object^  sender, System::EventArgs^  e) { 
		this->tb_utilizador->Focus();
	}

	/*
								BOTÃO CONSULTAR PRODUTO

			 Cria um objeto do tipo ConsultarProduto().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaConsultarProduto = (gcnew ConsultarProduto());
		janelaConsultarProduto->Show();
	}

	/*
								BOTÃO ALTERAR PRODUTO

			 Cria um objeto do tipo AlterarProduto().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void btn_alterar_produto_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaAlterarProduto = (gcnew AlterarProduto());
		janelaAlterarProduto->Show();
	}
			 
	/*
								 BOTÃO LISTAR VENDAS

			 Cria um objeto do tipo ListarVendas().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaListarVendas = (gcnew ListarVendas());
		janelaListarVendas->Show();
	}
	
	/*
								 BOTÃO VENDAS POR FUNCIONÁRIO

			 Cria um objeto do tipo VendasFuncionario().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaVendasFuncionario = (gcnew VendasFuncionario());
		janelaVendasFuncionario->Show();
	}


	/*
								 BOTÃO VENDAS POR DATA

			 Cria um objeto do tipo VendasData().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaVendasData = (gcnew VendasData());
		janelaVendasData->Show();
	}


	/*
								CALCULA TEMPO DA SESSÃO DO UTILIZADOR

			 Algoritmo que calcula o tempo de sessão de um utilizador.

	*/

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
		int S = Ferramentas::toInt(segundo);
		int M = Ferramentas::toInt(minuto);
		int H = Ferramentas::toInt(hora);

		if (S < 60) {
			S += 1;
		}
		else {
			M += 1;
			S = 0;
		}

		if (M > 59) {
			M = 0;
			H += 1;
		}

		if (H > 23) {
			H = 0;
		}

		// Formatação
		if (S < 10) {
			segundo = "0" + Ferramentas::sysString(std::to_string(S));
		}
		else {
			segundo = Ferramentas::sysString(std::to_string(S));
		}
		if (M < 10) {
			minuto = "0" + Ferramentas::sysString(std::to_string(M));
		}
		else {
			minuto = Ferramentas::sysString(std::to_string(M));
		}
		if (H < 10) {
			hora = "0" + Ferramentas::sysString(std::to_string(H));
		}
		else {
			hora = Ferramentas::sysString(std::to_string(H));
		}
		System::String^ SEP = ":";
		// Apresentação
		this->lbl_tempo->Text = hora + SEP + minuto + SEP + segundo;
	}

	/*
								 BOTÃO VENDAS POR VALOR

			 Cria um objeto do tipo VendasValor().
			 Executa o método Show(), que exibe a janela.

	*/

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		janelaVendasValor = (gcnew VendasValor());
		janelaVendasValor->Show();
	}

	private: System::Void panelAutenticacao_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {}
	private: System::Void tb_palavrapasse_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {}
		
	/*
								TECLA ENTER.

			 Verifica se a tecla premida no teclado corresponde a tecla Enter.

	*/

	private: System::Void tb_palavrapasse_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter){ 
			button12_Click(sender, e );
		}
	}
	
	/*
								BOTÃO NOVO UTILIZADOR

			Operação a ser implementada
	
	*/

	private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("A ser implementado", "Novo Utilizador", MessageBoxButtons::OK);
	}

	/*
								 BOTÃO NOVO UTILIZADOR

			 A ser implementado

	*/

	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("A ser implementado", "Alterar Utilizador", MessageBoxButtons::OK);
	}
};
};
