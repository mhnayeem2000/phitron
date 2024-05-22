%option noyywrap

%{
    #include "problem2.tab.h"
%}

delim [ \t\n]
ws {delim}+
digit [0-9]
number ({digit}+)
letter [A-Za-z]
us [_]
id ({us}|{letter})({letter}|{us}|{digit})*

%%

{ws} {}
{number} {yylval = atoi(yytext); return(NUM);}
"for" {return (FOR);}
"printf" {return (PRINTF);}
"scanf" {return (SCANF);}
"int" {return (INT);}
"main" {return (MAIN);}
"if" {return (IF);}
{id} {return (ID);}
"=" {return (ASSIGN);}
"==" {return (EQUAL);}
"++" {return (INCRI);}
";" {return (SEMI);}
":" {return (COLON);}
"?" {return (QUES);}
"&" {return (ADDTA);}
"&&" {return (ANDD);}
"," {return (COMMA);}
">" {return (GREATER);}
"<=" {return (LESSEQ);}
"%" {return (PERC);}
"+" {return (ADD);}
"'" {return (SEMECS);}
"-" {return (SUB);}
"*" {return (MUL);}
"/" {return (DIV);}
"(" {return (LP);}
")" {return (RP);}
"{" {return (LCB);}
"}" {return (RCB);}
"!=" {return (NOTEQUAL);}
"--" {return (DECREMENT);}
"/*" {  }
"*/" {  }
"//" { }
. { }

%%