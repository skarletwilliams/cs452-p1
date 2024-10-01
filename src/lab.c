#ifndef LAB_C
#define LAB_C
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>
#include "lab.h"
#include <readline/readline.h>
#include <readline/history.h>


#ifdef __cplusplus
extern "C"
{
#endif

  char *get_prompt(const char *env)
  {

  }

  int change_dir(char **dir)
  {

  }

  char **cmd_parse(char const *line)
  {
    char *no_trailing_line = trimwhite(line);
    char parse_on[] = " ";
    char *where_to_split = strstr(line, parse_on);


    char **returnMe = {"hi", "hi"};
    return returnMe;
  }

  void cmd_free(char ** line)
  {

  }

  char *trim_white(char *line)
  {
    strncmp(line, " ", 1);
    
  }

  bool do_builtin(struct shell *sh, char **argv)
  {

  } 

  void sh_init(struct shell *sh)
  {
    sh->shell_is_interactive;
    sh->shell_pgid;
    sh->shell_tmodes;
    sh->shell_terminal;
    sh->prompt;
  }

  void sh_destroy(struct shell *sh)
  {
    sh->shell_is_interactive;
    sh->shell_pgid;
    sh->shell_tmodes;
    sh->shell_terminal;
    sh->prompt;
  }

  void parse_args(int argc, char **argv)
  {

  }

#ifdef __cplusplus
} // extern "C"
#endif

#endif
