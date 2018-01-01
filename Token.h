//
// Created by hamon11 on 12/27/17.
//

#ifndef C_TOKENIZER_TOKEN_H
#define C_TOKENIZER_TOKEN_H

#include <string>
#include <vector>

using namespace std;

class Token {
public:
    enum Type{
        INT_TYPE,
        CHAR_TYPE,
        INTEGER_CONSTANT,
        BAD_OCTAL,
        BAD_HEX,
        BAD_SUFFIX_TOKEN,
        FLOAT_CONSTANT,
        CHAR_CONSTANT,
        STRING_CONSTANT,
        AUTO_KEYWORD,
        DOUBLE_KEYWORD,
        INT_KEYWORD,
        STRUCT_KEYWORD,
        CONST_KEYWORD,
        FLOAT_KEYWORD,
        SHORT_KEYWORD,
        UNSIGNED_KEYWORD,
        BREAK_KEYWORD,
        ELSE_KEYWORD,
        LONG_KEYWORD,
        SWITCH_KEYWORD,
        CONTINUE_KEYWORD,
        FOR_KEYWORD,
        SIGNED_KEYWORD,
        VOID_KEYWORD,
        CASE_KEYWORD,
        ENUM_KEYWORD,
        REGISTER_KEYWORD,
        RESTRICT_KEYWORD,
        TYPEDEF_KEYWORD,
        DEFAULT_KEYWORD,
        GOTO_KEYWORD,
        SIZEOF_KEYWORD,
        VOLATILE_KEYWORD,
        CHAR_KEYWORD,
        EXTERN_KEYWORD,
        RETURN_KEYWORD,
        UNION_KEYWORD,
        DO_KEYWORD,
        IF_KEYWORD,
        INLINE_KEYWORD,
        STATIC_KEYWORD,
        WHILE_KEYWORD,
        IDENTIFIER,
        OPEN_BRACKET,
        CLOSE_BRACKET,
        OPEN_PARENT,
        CLOSE_PARENT,
        OPEN_BRACE,
        CLOSE_BRACE,
        ADD_OP,
        SUB_OP,
        MULT_OP,
        DIV_OP,
        MOD_OP,
        INCREMENT,
        DECREMENT,
        PERIOD,
        VARIADIC,
        ARROW,
        LOG_NOT,
        BIT_NOT,
        BIT_LEFT,
        BIT_RIGHT,
        LESS_THAN,
        GREATER_THAN,
        LESS_THAN_EQUAL,
        GREATER_THAN_EQUAL,
        EQUAL,
        NOT_EQUAL,
        BIT_AND,
        BIT_XOR,
        BIT_OR,
        LOG_AND,
        LOG_OR,
        ASSIGN,
        PLUS_EQUALS,
        MINUS_EQUALS,
        MULT_EQUALS,
        DIV_EQUALS,
        MOD_EQUALS,
        ASSIGN_LEFT,
        ASSIGN_RIGHT,
        ASSIGN_AND,
        ASSIGN_OR,
        ASSIGN_XOR,
        COMMA,
        COLON,
        SEMI_COLON,
        POUND,
        TERNARY,
        LEFT_ANGLE_COLON,
        RIGHT_ANGLE_COLON,
        LEFT_ANGLE_PERCENT,
        RIGHT_ANGLE_PERCENT,
        PERCENT_COLON,
        PERCENT_COLON_PERCENT_COLON,
        BLOCK_COMMENT,
        LINE_COMMENT,
        BAD_COMMENT,
        BAD_PUNCTUATOR,
        END,
        BAD_FLOAT,
        BAD_STRING,
        BAD_CHAR,
        NULL_TYPE,
        AND_KEYWORD,
        AND_EQ_KEYWORD,
        ASM_KEYWORD,
        BITAND_KEYWORD,
        BITOR_KEYWORD,
        BOOL_KEYWORD,
        CLASS_KEYWORD,
        COMPL_KEYWORD,
        CONST_CAST_KEYWORD,
        HASH_DEFINE_KEYWORD,
        DELETE_KEYWORD,
        DYNAMIC_CAST_KEYWORD,
        EXPLICIT_KEYWORD,
        EXPORT_KEYWORD,
        FALSE_KEYWORD,
        FRIEND_KEYWORD,
        MUTABLE_KEYWORD,
        NAMESPACE_KEYWORD,
        NEW_KEYWORD,
        NOT_KEYWORD,
        NOT_EQ_KEYWORD,
        OPERATOR_KEYWORD,
        OR_KEYWORD,
        OR_EQ_KEYWORD,
        PRIVATE_KEYWORD,
        PROTECTED_KEYWORD,
        PUBLIC_KEYWORD,
        REINTERPRET_CAST_KEYWORD,
        STATIC_CAST_KEYWORD,
        TEMPLATE_KEYWORD,
        THIS_KEYWORD,
        THROW_KEYWORD,
        TRUE_KEYWORD,
        TRY_KEYWORD,
        TYPEID_KEYWORD,
        TYPENAME_KEYWORD,
        USING_KEYWORD,
        VIRTUAL_KEYWORD,
        WCHAR_T_KEYWORD,
        XOR_KEYWORD,
        XOR_EQ_KEYWORD,
        CONDITIONAL,
        MEMBER_SELECT_POINTER,
        SCOPE_RESOLUTION,
        MEMBERSHIP
    };

    Token();

    Token(const char lexeme[], Type type);

    string getLexeme() const;

    Type getType() const;

    string toString();

private:
    string lexeme;
    Type type;

    vector<string> strEnums = {
            "INT_TYPE",
            "CHAR_TYPE",
            "INTEGER_CONSTANT",
            "BAD_OCTAL",
            "BAD_HEX",
            "BAD_SUFFIX_TOKEN",
            "FLOAT_CONSTANT",
            "CHAR_CONSTANT",
            "STRING_CONSTANT",
            "AUTO_KEYWORD",
            "DOUBLE_KEYWORD",
            "INT_KEYWORD",
            "STRUCT_KEYWORD",
            "CONST_KEYWORD",
            "FLOAT_KEYWORD",
            "SHORT_KEYWORD",
            "UNSIGNED_KEYWORD",
            "BREAK_KEYWORD",
            "ELSE_KEYWORD",
            "LONG_KEYWORD",
            "SWITCH_KEYWORD",
            "CONTINUE_KEYWORD",
            "FOR_KEYWORD",
            "SIGNED_KEYWORD",
            "VOID_KEYWORD",
            "CASE_KEYWORD",
            "ENUM_KEYWORD",
            "REGISTER_KEYWORD",
            "RESTRICT_KEYWORD",
            "TYPEDEF_KEYWORD",
            "DEFAULT_KEYWORD",
            "GOTO_KEYWORD",
            "SIZEOF_KEYWORD",
            "VOLATILE_KEYWORD",
            "CHAR_KEYWORD",
            "EXTERN_KEYWORD",
            "RETURN_KEYWORD",
            "UNION_KEYWORD",
            "DO_KEYWORD",
            "IF_KEYWORD",
            "INLINE_KEYWORD",
            "STATIC_KEYWORD",
            "WHILE_KEYWORD",
            "IDENTIFIER",
            "OPEN_BRACKET",
            "CLOSE_BRACKET",
            "OPEN_PARENT",
            "CLOSE_PARENT",
            "OPEN_BRACE",
            "CLOSE_BRACE",
            "ADD_OP",
            "SUB_OP",
            "MULT_OP",
            "DIV_OP",
            "MOD_OP",
            "INCREMENT",
            "DECREMENT",
            "PERIOD",
            "VARIADIC",
            "ARROW",
            "LOG_NOT",
            "BIT_NOT",
            "BIT_LEFT",
            "BIT_RIGHT",
            "LESS_THAN",
            "GREATER_THAN",
            "LESS_THAN_EQUAL",
            "GREATER_THAN_EQUAL",
            "EQUAL",
            "NOT_EQUAL",
            "BIT_AND",
            "BIT_XOR",
            "BIT_OR",
            "LOG_AND",
            "LOG_OR",
            "ASSIGN",
            "PLUS_EQUALS",
            "MINUS_EQUALS",
            "MULT_EQUALS",
            "DIV_EQUALS",
            "MOD_EQUALS",
            "ASSIGN_LEFT",
            "ASSIGN_RIGHT",
            "ASSIGN_AND",
            "ASSIGN_OR",
            "ASSIGN_XOR",
            "COMMA",
            "COLON",
            "SEMI_COLON",
            "POUND",
            "TERNARY",
            "LEFT_ANGLE_COLON",
            "RIGHT_ANGLE_COLON",
            "LEFT_ANGLE_PERCENT",
            "RIGHT_ANGLE_PERCENT",
            "PERCENT_COLON",
            "PERCENT_COLON_PERCENT_COLON",
            "BLOCK_COMMENT",
            "LINE_COMMENT",
            "BAD_COMMENT",
            "BAD_PUNCTUATOR",
            "END",
            "BAD_FLOAT",
            "BAD_STRING",
            "BAD_CHAR",
            "NULL_TYPE",
            "AND_KEYWORD",
            "AND_EQ_KEYWORD",
            "ASM_KEYWORD",
            "BITAND_KEYWORD",
            "BITOR_KEYWORD",
            "BOOL_KEYWORD",
            "CLASS_KEYWORD",
            "COMPL_KEYWORD",
            "CONST_CAST_KEYWORD",
            "HASH_DEFINE_KEYWORD",
            "DELETE_KEYWORD",
            "DYNAMIC_CAST_KEYWORD",
            "EXPLICIT_KEYWORD",
            "EXPORT_KEYWORD",
            "FALSE_KEYWORD",
            "FRIEND_KEYWORD",
            "MUTABLE_KEYWORD",
            "NAMESPACE_KEYWORD",
            "NEW_KEYWORD",
            "NOT_KEYWORD",
            "NOT_EQ_KEYWORD",
            "OPERATOR_KEYWORD",
            "OR_KEYWORD",
            "OR_EQ_KEYWORD",
            "PRIVATE_KEYWORD",
            "PROTECTED_KEYWORD",
            "PUBLIC_KEYWORD",
            "REINTERPRET_CAST_KEYWORD",
            "STATIC_CAST_KEYWORD",
            "TEMPLATE_KEYWORD",
            "THIS_KEYWORD",
            "THROW_KEYWORD",
            "TRUE_KEYWORD",
            "TRY_KEYWORD",
            "TYPEID_KEYWORD",
            "TYPENAME_KEYWORD",
            "USING_KEYWORD",
            "VIRTUAL_KEYWORD",
            "WCHAR_T_KEYWORD",
            "XOR_KEYWORD",
            "XOR_EQ_KEYWORD",
            "CONDITIONAL",
            "MEMBER_SELECT_POINTER",
            "SCOPE_RESOLUTION",
            "MEMBERSHIP"
    };
};


#endif //C_TOKENIZER_TOKEN_H
