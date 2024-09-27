#ifndef LAB_C
#define LAB_C
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>
#include "lab.h"

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
    

    printf("\nThis is the end\n");
    return 0;
  }

#ifdef __cplusplus
} // extern "C"
#endif

#endif