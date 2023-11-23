%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}


%token NUM ADD SUB MUL DIV SEMI ASSIGN ID IF EQUAL LP RP RCB LCB
%start cal
%left ADD SUB
%left MUL DIV

%%

cal : ID ASSIGN NUM SEMI 
    |exp

    ;
exp : exp ADD exp
    | exp SUB exp
    | exp MUL exp
    | exp DIV exp
    | NUM
    ; 

%%

int main(){
    yyparse();
    printf("Parsing successful \n");
}

void yyerror(char* s){
    fprintf(stderr,"Error =%s",s);
}