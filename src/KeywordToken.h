/**
 * @file KeywordToken.h
 *
 * @author  Berin Martini
 * @license GPL v2+
 */

#ifndef KEYWORK_TOKEN_H
#define KEYWORK_TOKEN_H

#define MAX_LITERAL_SIZE 20

typedef enum {
        TA_NONE,
        TA_MACRO,
        TA_STATEMENT,
        TA_LOOP,
        TA_IF,
        TA_MODULE,
        TA_GROUP,
        TA_BLOCK,
} token_act;


typedef enum {
        OTHER = 0,
        DISPLAY,
        BRACKET_OPEN,
        BRACKET_CLOSE,
        SEMICOLON,
        PRO_CELLDEFINE,
        PRO_DEFAULT_NETTYPE,
        PRO_DEFINE,
        PRO_ELSE,
        PRO_ENDCELLDEFINE,
        PRO_ENDIF,
        PRO_IFDEF,
        PRO_IFNDEF,
        PRO_INCLUDE,
        PRO_NOUNCONNECTED_DRIVE,
        PRO_RESETALL,
        PRO_TIMESCALE,
        PRO_UNCONNECTED_DRIVE,
        PRO_UNDEF,
        ALWAYS,
        ASSIGN,
        BEGIN,
        CASE,
        CASEX,
        CASEZ,
        DEFAULT,
        ELSE,
        END,
        ENDCASE,
        ENDFUNCTION,
        ENDGENERATE,
        ENDMODULE,
        ENDPRIMITIVE,
        ENDSPECIFY,
        ENDTABLE,
        ENDTASK,
        FOR,
        FOREVER,
        FORK,
        FUNCTION,
        GENERATE,
        GENVAR,
        IF,
        INITIAL,
        INTEGER,
        JOIN,
        LOCALPARAM,
        MODULE,
        PARAMETER,
        PRIMITIVE,
        REG,
        REPEAT,
        SPECIFY,
        TABLE,
        TASK,
        WHILE,
        WIRE,
        BRACES_OPEN,
        BRACES_CLOSE,
} token_id;


struct token {
	const char *literal;
	token_id    id;
	token_act   action;
};


static const token keywords[] = {
	{ "",                     OTHER,                   TA_NONE},
	{ "$display",             DISPLAY,                 TA_NONE},
	{ "(",                    BRACKET_OPEN,            TA_GROUP},
	{ ")",                    BRACKET_CLOSE,           TA_NONE},
	{ ";",                    SEMICOLON,               TA_NONE},
	{ "`celldefine",          PRO_CELLDEFINE,          TA_MACRO},
	{ "`default_nettype",     PRO_DEFAULT_NETTYPE,     TA_MACRO},
	{ "`define",              PRO_DEFINE,              TA_MACRO},
	{ "`else",                PRO_ELSE,                TA_MACRO},
	{ "`endcelldefine",       PRO_ENDCELLDEFINE,       TA_MACRO},
	{ "`endif",               PRO_ENDIF,               TA_MACRO},
	{ "`ifdef",               PRO_IFDEF,               TA_BLOCK},
	{ "`ifndef",              PRO_IFNDEF,              TA_BLOCK},
	{ "`include",             PRO_INCLUDE,             TA_MACRO},
	{ "`nounconnected_drive", PRO_NOUNCONNECTED_DRIVE, TA_MACRO},
	{ "`resetall",            PRO_RESETALL,            TA_MACRO},
	{ "`timescale",           PRO_TIMESCALE,           TA_MACRO},
	{ "`unconnected_drive",   PRO_UNCONNECTED_DRIVE,   TA_MACRO},
	{ "`undef",               PRO_UNDEF,               TA_MACRO},
	{ "always",               ALWAYS,                  TA_LOOP},
	{ "assign",               ASSIGN,                  TA_STATEMENT},
	{ "begin",                BEGIN,                   TA_BLOCK},
	{ "case",                 CASE,                    TA_BLOCK},
	{ "casex",                CASEX,                   TA_BLOCK},
	{ "casez",                CASEZ,                   TA_BLOCK},
	{ "default",              DEFAULT,                 TA_NONE},
	{ "else",                 ELSE,                    TA_NONE},
	{ "end",                  END,                     TA_NONE},
	{ "endcase",              ENDCASE,                 TA_NONE},
	{ "endfunction",          ENDFUNCTION,             TA_NONE},
	{ "endgenerate",          ENDGENERATE,             TA_NONE},
	{ "endmodule",            ENDMODULE,               TA_NONE},
	{ "endprimitive",         ENDPRIMITIVE,            TA_NONE},
	{ "endspecify",           ENDSPECIFY,              TA_NONE},
	{ "endtable",             ENDTABLE,                TA_NONE},
	{ "endtask",              ENDTASK,                 TA_NONE},
	{ "for",                  FOR,                     TA_LOOP},
	{ "forever",              FOREVER,                 TA_LOOP},
	{ "fork",                 FORK,                    TA_BLOCK},
	{ "function",             FUNCTION,                TA_BLOCK},
	{ "generate",             GENERATE,                TA_BLOCK},
	{ "genvar",               GENVAR,                  TA_STATEMENT},
	{ "if",                   IF,                      TA_IF},
	{ "initial",              INITIAL,                 TA_LOOP},
	{ "integer",              INTEGER,                 TA_STATEMENT},
	{ "join",                 JOIN,                    TA_NONE},
	{ "localparam",		  LOCALPARAM,              TA_STATEMENT},
	{ "module",               MODULE,                  TA_MODULE},
	{ "parameter",            PARAMETER,               TA_STATEMENT},
	{ "primitive",            PRIMITIVE,               TA_BLOCK},
	{ "reg",                  REG,                     TA_STATEMENT},
	{ "repeat",               REPEAT,                  TA_LOOP},
	{ "specify",              SPECIFY,                 TA_BLOCK},
	{ "table",                TABLE,                   TA_BLOCK},
	{ "task",                 TASK,                    TA_BLOCK},
	{ "while",                WHILE,                   TA_LOOP},
	{ "wire",                 WIRE,                    TA_STATEMENT},
	{ "{",                    BRACES_OPEN,             TA_GROUP},
	{ "}",                    BRACES_CLOSE,            TA_NONE},
};


#endif // closes KEYWORK_TOKEN_H
