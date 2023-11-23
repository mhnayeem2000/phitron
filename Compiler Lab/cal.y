%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}


%token NUM ADD SUB
%start cal

%%

cal : NUM ADD NUM
    | NUM SUB NUM
    | NUM MUL NUM
    | NUM DIV NUM
    ; 

%%

int main(){
    yyparse();
    printf("Parsing successful \n");
}

void yyerror(char* s){
    fprintf(stderr,"Error =%s",s);
}