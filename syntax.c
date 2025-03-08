#include <stdlib.h>
#include "syntax.h"

char *C_HL_extensions[] = { ".c", ".h", ".cpp", NULL };
char *C_HL_keywords[] = {
    "switch", "if", "while", "for", "break", "continue", "return", "else",
    "struct", "union", "typedef", "static", "enum", "class", "case",
    "int|", "long|", "double|", "float|", "char|", "unsigned|", "signed|",
    "void|", NULL
};

char *PY_HL_extensions[] = { ".py", NULL };
char *PY_HL_keywords[] = {
    "def", "return", "if", "elif", "else", "for", "while", "break", "continue",
    "import", "from", "as", "class", "try", "except", "finally", "with", "pass",
    "raise", "yield", "lambda", "global", "nonlocal", "assert", "del",

    "True|", "False|", "None|", "int|", "float|", "str|", "list|", "dict|",
    "set|", "tuple|", "bool|", "bytes|", NULL
};

char *JAVA_HL_extensions[] = { ".java", NULL };
char *JAVA_HL_keywords[] = {
    "public", "private", "protected", "static", "final", "class", "interface", "extends", "implements",
    "new", "return", "if", "else", "switch", "case", "break", "continue", "while", "for", "do",
    "try", "catch", "finally", "throw", "throws", "synchronized", "volatile", "transient", "abstract",
    "this", "super", "instanceof", "import", "package",

    "true|", "false|", "null|", "void|", "int|", "long|", "float|", "double|", "char|", "boolean|",
    "String|", "Object|", "List|", "Map|", "Set|", "Queue|",
    NULL
};

char *JS_HL_extensions[] = { ".js", ".mjs", "cjs", NULL };
char *JS_HL_keywords[] = {
    "function", "return", "if", "else", "for", "while", "do", "switch", "case", "break", "continue",
    "var", "let", "const", "new", "delete", "typeof", "instanceof", "this", "void", "throw",
    "try", "catch", "finally", "class", "extends", "super", "import", "export", "default", "from",
    "async", "await", "yield", "static", "get", "set", "constructor",

    "true|", "false|", "null|", "undefined|", "NaN|", "Infinity|",
    "Number|", "String|", "Boolean|", "Array|", "Object|", "Set|", "Map|", "Date|", "RegExp|",
    NULL
};

char *GO_HL_extensions[] = { ".go", NULL };
char *GO_HL_keywords[] = {
    "func", "return", "if", "else", "for", "range", "switch", "case", "break", "continue", "fallthrough",
    "var", "const", "type", "struct", "interface", "package", "import", "go", "defer", "select", "chan",
    "map", "make", "new", "append", "copy", "delete", "len", "cap", "print", "println",

    "true|", "false|", "iota|", "nil|", "int|", "float64|", "string|", "bool|", "byte|", "rune|",
    NULL
};

char *RUST_HL_extensions[] = { ".go", NULL };
char *RUST_HL_keywords[] = {
    "fn", "return", "if", "else", "match", "while", "loop", "for", "in", "break", "continue",
    "let", "mut", "const", "static", "struct", "enum", "trait", "impl", "mod", "use", "pub",
    "super", "self", "crate", "type", "as", "where", "move", "unsafe", "async", "await",

    "true|", "false|", "Some|", "None|", "Ok|", "Err|", "Result|", "Option|", "String|",
    "i8|", "i16|", "i32|", "i64|", "u8|", "u16|", "u32|", "u64|", "f32|", "f64|",
    NULL
};

struct editorSyntax HLDB[] = {
    {
        "c",
        C_HL_extensions,
        C_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
    },
    {
        "python",
        PY_HL_extensions,
        PY_HL_keywords,
        "#", NULL, NULL,  // Python has no multi-line comment markers
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
    },
    {
        "java",
        JAVA_HL_extensions,
        JAVA_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
    },
    {
        "javascript",
        JS_HL_extensions,
        JS_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
    },
    {
        "go",
        GO_HL_extensions,
        GO_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
    },
    {
        "rust",
        RUST_HL_extensions,
        RUST_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
    }
};

// Update HLDB_ENTRIES count
const unsigned int HLDB_ENTRIES = sizeof(HLDB) / sizeof(HLDB[0]);
