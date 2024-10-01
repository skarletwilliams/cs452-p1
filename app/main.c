#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "../src/lab.h"


int main(int argc, char *argv[])
{    
  const char *prompt = getenv("MY_PROMPT");
    
  if (prompt == NULL) {
    prompt = ">";  // Default prompt
  }

  int opt;

  // Switch case to handle command line options
  while ((opt = getopt(argc, argv, "v")) != -1) {
      switch (opt) {
          case 'v': //if version is requested
              printf("%d.%d\n", lab_VERSION_MAJOR, lab_VERSION_MINOR);
              exit(0);
      }
  }

  char *line;
  using_history();
  while ((line=readline(prompt))){
    
    //char *commands[] = cmd_parse(line);
    cmd_parse(line);

    if (strstr(line, "quit")){
      //Do any memory clean up I need to find here.
      clear_history();
      free(line);
      break;
    } else if (strstr(line, "cd")){
      //... Change directory
    } else if (strstr(line, "history")){
      //... Print History
    } 
    add_history(line);
    free(line);
  }
    
  return 0;
}
