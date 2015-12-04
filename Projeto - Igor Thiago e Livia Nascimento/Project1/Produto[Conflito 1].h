#pragma once
#include <string>

#include <msclr\marshal_cppstd.h>

static class Produto
{
public:
	int ID;
	std::string nome;
	double preco;
	std::string descricao;
public:
	Produto();

	// Setters
	void setID(System::String^ ID) {
		this->ID = int::Parse(ID);
	}
	void setNome(System::String^ nome) {
		//nome = stdString(nome);
		//this->nome = nome;
	}

	// Métodos para conversões 
	// stdString: System::String^ -> std::string 
	static std::string stdString(System::String^ S){
		msclr::interop::marshal_context context;
		std::string std_String = context.marshal_as<std::string>(S);
		
		return std_String;
	}
	// sysString: std::string -> System::String
	static System::String^ sysString(std::string S){
		return gcnew System::String(S.c_str());
	}

	

};

