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
    }
};

// Update HLDB_ENTRIES count
const unsigned int HLDB_ENTRIES = sizeof(HLDB) / sizeof(HLDB[0]);
