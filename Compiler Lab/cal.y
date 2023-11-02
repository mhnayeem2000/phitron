%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}

%%

%token NUM ADD SUB
%start cal

%%

cal : 

%%

int main(){
    yyparse();
}

void yyerror(char* s){
    fprintf(stderr,"Error =%s",s);
}