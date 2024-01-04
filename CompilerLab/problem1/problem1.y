%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}


%token FLOAT  SEMECS PERC PRINTF MAIN COMMA NUM ADDTA SCANF ADD  SUB MUL DIV SEMI ASSIGN ID INT  LP RP RCB LCB
%start problem1
%left ADD SUB
%left MUL DIV

%%

problem1 : INT MAIN LP RP LCB statement RCB

statement : FLOAT ID SEMI PRINTF LP SEMECS ID SEMECS RP SEMI SCANF RP SEMECS PERC ID SEMECS COMMA ADDTA ID SEMI ID ASSIGN exp PRINTF LP SEMECS ID  SEMECS COMMA ID RP SEMI ID NUM SEMI
  
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
    return 0;
}

void yyerror(char* s){
    fprintf(stderr,"Error = %s\n",s);
}