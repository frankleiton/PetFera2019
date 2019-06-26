#include "Repository.h"

//funções padrões das tabelas
repository::repository(){
    rc = sqlite3_open("PetFera.db", &db);
   if( rc ) {
    cout<<"Can't open database: "<< sqlite3_errmsg(db)<< endl;
   } else {
    cout<<"Opened database successfully"<<endl;
   }
}
repository::~repository(){
    sqlite3_close(db);
}
int repository::callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
   for(i = 0; i<argc; i++) {
      printf("%d %s = %s\n",i, azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}
void repository::runSql (){
rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
      cout<< "SQL error: "<< zErrMsg<<endl;
      sqlite3_free(zErrMsg);
   } 
}
void repository::runSql(const char * code){
    rc = sqlite3_exec(db, code, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
      cout<< "SQL error: "<< zErrMsg<<endl;
      sqlite3_free(zErrMsg);
   }
}

void repository::reset_table(){
    sql = "DROP TABLE ANIMAL;" \
        "DROP TABLE FUNCIONARIO;";
    runSql();
    creat_table();
}
void repository::drop_table(){
    sql = "DROP TABLE ANIMAL;" \
        "DROP TABLE FUNCIONARIO;";
        runSql();
}
void repository::creat_table(){
    sql = "CREATE TABLE ANIMAL("  \
      "ID               INTEGER PRIMARY KEY AUTOINCREMENT," \
      "CLASSE           TEXT    ," \
      "NOME_ANIMAL      TEXT    ," \
      "NOME_CIENTIFICO   TEXT    ," \
      "SEXO             CHAR    ," \
      "TAMANHO          INTEGER ," \
      "DIETA            TEXT    ," \
      "VETERINARIO      INTEGER ," \
      "TRATADOR         INTEGER ," \
      "NOME_DE_BATISMO  TEXT );";
      
      runSql();
      
      sql = "CREATE TABLE FUNCIONARIO("  \
      "ID               INTEGER PRIMARY KEY AUTOINCREMENT," \
      "FUNCAO           TEXT    ," \
      "NOME             TEXT    ," \
      "CPF              TEXT    ," \
      "IDADE            INTEGER    ," \
      "TIPO_SANGUINEO   TEXT ," \
      "FATOR_RH         CHAR    ," \
      "ESPECIALIDADE    TEXT ," \
      "CRMV             TEXT ," \
      "NIVEL_DE_SEGURANCA INTEGER );";

      runSql();

}

//Funçôes para tabela animal
void repository::insert_table_animal(string classe,string nome_animal,string nome_cientifico,char sexo,string tamanho,string dieta,string veterinario,string tratador,string nome){
    string aux = "INSERT INTO ANIMAL (CLASSE,NOME_ANIMAL,NOME_CIENTIFICO,SEXO,TAMANHO,DIETA,VETERINARIO,TRATADOR,NOME_DE_BATISMO) " ;
    aux += "VALUES ( '"+classe+"','"+nome_animal+"', '"+nome_cientifico+"','"+sexo+"',"+tamanho+",'"+dieta+"',"+veterinario+","+tratador+",'"+nome+"' ); ";
    cout<< aux;
    runSql(aux.c_str());  
}
void repository::select_table_animal(){
     sql = "SELECT * from ANIMAL";
    runSql();
}
void repository::delete_table_animal(string id){
    string aux ;
    aux = "DELETE from ANIMAL where ID="+id+";";
    runSql(aux.c_str());
}
void repository::select_table_animal_id(string id){
    string aux = "SELECT * from ANIMAL where ID="+id+";";
    runSql(aux.c_str());
}

//funções do funcionario
void repository::insert_table_funcionario(string funcao,string nome, string cpf,string idade,string sangue,string rh,string especialidade, string crmv,string seguranca ){
    string aux = "INSERT INTO FUNCIONARIO (FUNCAO,NOME,CPF,IDADE,TIPO_SANGUINEO,FATOR_RH,ESPECIALIDADE,CRMV,NIVEL_DE_SEGURANCA) " ;
    aux += "VALUES ( '"+funcao+"','"+nome+"', '"+cpf+"',"+idade+",'"+sangue+"','"+rh+"','"+especialidade+"','"+crmv+"',"+seguranca+" ); ";
    runSql(aux.c_str()); 
}
void repository::select_table_funcionario(){
    sql = "SELECT * from FUNCIONARIO";
    runSql();
}

void repository::delete_table_funcionario(string id ){
    string aux ;
    aux = "DELETE from FUNCIONARIO where ID="+id+";";
    runSql(aux.c_str());
}
void repository::select_table_funcionario_id(string id){
    string aux = "SELECT * from FUNCIONARIO where ID="+id+";";
    runSql(aux.c_str());
}
