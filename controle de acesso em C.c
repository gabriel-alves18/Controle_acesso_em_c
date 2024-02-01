#include <stdio.h>
#include <string.h>
//DADOS DO USUARIO
struct dados{
    char nome[50];
    char senha[50];
};
//FUNCAO PARA CADASTRAR USUARIO NAO CADASTRADO 
void cadastrar_novo_usuario()
{
    char novo_usuario[50];
    char nova_senha[50];
    printf("Qual o seu nome? ");
    scanf("%49s", novo_usuario);
    printf("Cadastre sua senha: ");
    scanf("%49s", nova_senha);
    printf("USUÁRIO E SENHA CADASTRADOS!");
}
int main(){
    struct dados usuario;
    char resposta[50];
    //ENTRADA DE DADOS USUARIO 
    printf("Nome: ");
    scanf("%49s", usuario.nome);
    printf("Senha:");
    scanf("%49s", usuario.senha);

    //SE O USUARIO ESTIVER CADASTRADO
    if(strcmp(usuario.nome, "Gabriel") == 0){
        if(strcmp(usuario.senha, "1818") == 0){
            printf("Bem vindo!");
        }
    }
    //SE O USUARIO NAO ESTIVER CADASTRADO
    else{
        //VERIFICAÇÃO SE SEDEJA SE CADASTRAR
        printf("Usuario ou senha não encontrados... \n");
        printf("Deseja se cadastrar? ");
        scanf("%49s", resposta);
        //SE O USUARIO NOVO QUER SE CADASTRAR 
        if(strcmp(resposta, "sim") == 0){
            cadastrar_novo_usuario();
        }
        //SE O USUARIO NÃO QUER SE CADASTRAR
        else{
            printf("Progama encerrado!");
        }   
    }
}