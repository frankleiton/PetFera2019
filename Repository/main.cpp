#include "Repository.h"
int main(){
    repository *repo = new repository();
    repo->creat_table();
    repo->insert_table_animal("ok","ok","ok",'F',"10","ok","0","0","ok");
    repo->select_table_animal();
    // repo->delete_table_animal("1");
    repo->insert_table_funcionario("ok","ok","ok","10","ok","+","ok","ok","10");
    repo->select_table_funcionario();
    repo->select_table_animal_id("1");
    repo->select_table_funcionario_id("1");
// VALUES ( 'a','a', 'a','a',1.000000,'1',1,0,'a' );
// VALUES ( '5','2', '4','1',7.000000,'6',8,0,'2' );
// VALUES ( 'a','a', 'a','a',1.000000,'a',1,0,'a' );
    return 0;
}