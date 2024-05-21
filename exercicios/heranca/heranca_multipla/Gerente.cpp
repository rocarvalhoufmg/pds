 #include "Gerente.hpp"
 Gerente::Gerente(string nome, string cpf, string area, string senha)
 :Pessoa(nome, cpf), Autenticavel(senha), area(area){

 }

