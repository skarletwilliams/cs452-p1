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

  }

  void cmd_free(char ** line)
  {

  }

  char *trim_white(char *line)
  {

  }

  bool do_builtin(struct shell *sh, char **argv)
  {

  } 

  void sh_init(struct shell *sh)
  {

  }

  void sh_destroy(struct shell *sh)
  {

  }

  void parse_args(int argc, char **argv)
  {

  }

  int main() {
    /** 9/26: My general plan to create the terminal is to create a do-while loop. First it will
     * collect the input before an enter key is pressed, 'sanitize' the input,
     * then deal with what the command was. If it is exit, then the terminal will exit.
     * I need to review my general c programming class in order to remember how to do this,
     * I know that I did create an interactive 'terminal' of sorts before, but alas my onyx was
     * wiped from lack of use so I need to look for any lost local files or read docs, since it has 
     * been at least a year since I coded in c. */ 
    
    char *line;
    using_history();
    while ((line=readline("$"))){
        printf("%s\n",line);
        add_history(line);
        free(line);
    }


    printf("\nThis is the end\n");
    return 0;
  }

#ifdef __cplusplus
} // extern "C"
#endif

#endif