%option noyywrap
%{

%} 
delim[\t]
ws {delim}+
digit [0-9]
number ({digit}+)


%%
{ws} {}
{number} {yylval = atoi(yytext);}
"+" {return(ADD);}
"-" {return(SUB);}
%%