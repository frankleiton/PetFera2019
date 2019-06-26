#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <stdlib.h>
#include <stdio.h>
#include <sqlite3.h> 
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class repository {
private :
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    char *sql;
public:
static int callback(void *NotUsed, int argc, char **argv, char **azColName);
repository();
~repository();
void runSql ();
void runSql( const char* code);
void reset_table();
void drop_table();
void creat_table();
void insert_table_animal(string classe,string nome_animal,string nome_cientifico,char sexo,string tamanho,string dieta,string veterinario,string tratador,string nome);
void insert_table_funcionario(string funcao,string nome, string cpf,string idade,string sangue,string rh,string especialidade, string crmv,string seguranca);
void select_table_animal();
void select_table_animal_id(string id);
void select_table_funcionario();
void select_table_funcionario_id(string id);
// void update_table_animal();
// void update_table_funcionario();
void delete_table_animal(string id );
void delete_table_funcionario(string id);
};

#endif