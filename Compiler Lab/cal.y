%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}


%token NUM ADD SUB
%start cal

%%

cal : NUM ADD NUM ; 

%%

int main(){
    yyparse();
    printf("Parsing successful \n");
}

void yyerror(char* s){
    fprintf(stderr,"Error =%s",s);
}