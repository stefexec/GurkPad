#ifndef SYNTAX_H
#define SYNTAX_H

#define HL_HIGHLIGHT_NUMBERS (1<<0)
#define HL_HIGHLIGHT_STRINGS (1<<1)

struct editorSyntax {
  char *filetype;
  char **filematch;
  char **keywords;
  char *singleline_comment_start;
  char *multiline_comment_start;
  char *multiline_comment_end;
  int flags;
};

extern struct editorSyntax HLDB[];
extern const unsigned int HLDB_ENTRIES;

#endif // !SYNTAX_H
