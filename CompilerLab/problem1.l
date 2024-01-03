%option noyywrap

%{
    #include "cal.tab.h"
%}

delim [ \t\n]
ws {delim}+
digit [0-9]
number ({digit}+)
letter [A-Za-z]
us [_]
id ({us}|{letter})({letter}|{us}|{digit})({digit})*

%%

{ws} {}
{number} {yylval = atoi(yytext); return(NUM);}
"while" {return(WHILE);}
"float" {return(FLOAT);}
"printf" {return(PRINTF);}
"scanf" {return(SCANF);}
"int" {return(INT);}
"main" {return(MAIN);}
"if" {return(IF);}
{id} {return(ID);}
"=" {return(ASSIGN);}
"==" {return(EQUAL);}
";" {return(SEMI);}
"&" {return(ADDTA);}
"," {return(COMMA);}
"%" {return(PERC);}
"+" {return(ADD);}
"'" {return(SEMECS);}
"'" {return(SEMECF);}
"-" {return(SUB);}
"*" {return(MUL);}
"/" {return(DIV);}
"(" {return(LP);}
")" {return(RP);}
"{" {return(LCB);}
"}" {return(RCB);}
"!=" {return(NOTEQUAL);}
"--" {return(DECREMENT);}
%%
