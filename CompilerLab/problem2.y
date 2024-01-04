%{
#include<stdio.h>
void yyerror(char* s);
int yylex();
%}


%token COMMA QUES COLON PRINTF LESSEQ IF EQUAL PERC FOR INT  DIV MAIN LP RP ANDD LCB RCB NUM ID ASSIGN SEMI GREATER INCRI
%start cal
%left ADD SUB
%left MUL DIV

%%

program : INT MAIN LP RP LCB statement RCB 

statement : INT ID ASSIGN NUM SEMI INT ID ASSIGN LP NUM GREATER NUM RP SEMI CONDITION
  
CONDITION: FOR LP INT ID ASSIGN NUM SEMI ID LESSEQ NUM SEMI DIV NUM  ANDD ID  SEMI ID INCRI RP LCB NUM IFF RCB NUM 

IFF : IF LP NUM PERC ID EQUAL NUM RP LCB ID ASSIGN NUM SEMI  RCB  ENDD
ENDD : PRINTF LP ID COMMA exp COMMA ID QUES ID COLON ID RP SEMI ID exp SEMI
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