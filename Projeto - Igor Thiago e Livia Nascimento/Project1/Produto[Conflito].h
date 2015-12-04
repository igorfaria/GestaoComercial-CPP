#pragma once
#include <cstdlib>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>

/*
	<msclr\marshal_cppstd.h> - System::String^ to std::string
	
	System::String^ managed = "test";
	std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
*/



class Produto
{
private:
	int ID;
	std::string nome;
	double preco;
	std::string descricao;
public:
	Produto();

	// ------------------------------------------------------
	// M�todo toString()
	// Retorna o valor passado por argumento em um objeto System::String
	// ------------------------------------------------------
	static System::String^ toString(int Inteiro) {
		return System::Convert::ToString(Inteiro);
	}
	static System::String^ toString(std::string String) {
		return gcnew System::String(String.c_str());
	}
	// M�todos de convers�o de valores System::String^ em int, double e string

	static std::string toString(System::String^ S) {
		return msclr::interop::marshal_as<std::string>(S);
	}

	static int toInt(System::String^ String) {
		return int::Parse(String);
	}

	static double toDouble(System::String^ String) {
		return double::Parse(String);
	}


	// ------------------------------------------------------
	// Defini��o dos m�todos "setters"
	// ID
	// ------------------------------------------------------
	void setID(int ID) {
		this->ID = ID;
	}
	void setID(System::String^ ID) {
		this->ID = toInt(ID);
	}
	// Nome
	void setNome(std::string nome) {
		this->nome = nome;
	}
	void setNome(System::String^ nome) {
		this->nome = toString(nome);
	}
	// Pre�o
	void setPreco(double preco) {
		this->preco = preco;
	}
	void setPreco(System::String^ preco) {
		this->preco = toDouble(preco);
	}
	// Descri��o
	void setDescricao(std::string descricao) {
		this->descricao = descricao;
	}
	void setDescricao(System::String^ descricao) {
		this->descricao = toString(descricao);
	}
	// ------------------------------------------------------
	// Defini��o dos m�todos "getters"
	// ID
	// ------------------------------------------------------
	int getID() {
		return ID;
	}
	// Nome
	std::string getNome() {
		return nome;
	}
	// Pre�o
	double getPreco(){
		return preco;
	}
	std::string getDescricao() {
		return descricao;
	}
};

class Estoque {
public:
	int ID;
	std::vector<Produto> PRODUTOS;
};