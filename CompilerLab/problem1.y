%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}


%token FLOAT SEMECS SEMECF PERC PRINTF MAIN COMMA NUM ADDTA SCANF ADD  SUB MUL DIV SEMI ASSIGN ID INT  LP RP RCB LCB
%start cal
%left ADD SUB
%left MUL DIV

%%

program : INT MAIN LP RP LCB statement RCB

statement : FLOAT ID SEMI PRINTF LP SEMECS ID SEMECF RP SEMI SCANF RP SEMECS PERC ID SEMECF COMMA ADDTA ID SEMI ID ASSIGN exp PRINTF LP SEMECS ID  SEMECF COMMA ID RP SEMI ID NUM SEMI
  
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