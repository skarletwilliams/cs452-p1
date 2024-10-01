# Makefile Project Template

Steps to configure, build, run, and test the project.

## Building

```bash
make
```

## Testing

```bash
make check
```

## Clean

```bash
make clean
```

## Install Dependencies

In order to use git send-mail you need to run the following command:

```bash
make install-deps
```

## Test just the file
From the src folder...
```bash
gcc -I/usr/include/readline lab.c -o lab -lreadline -lhistory
```

9/26: My general plan to create the terminal is to create a do-while loop. First it will
collect the input before an enter key is pressed, 'sanitize' the input,
then deal with what the command was. If it is exit, then the terminal will exit.
I need to review my general c programming class in order to remember how to do this,
I know that I did create an interactive 'terminal' of sorts before, but alas my onyx was
wiped from lack of use so I need to look for any lost local files or read docs, since it has 
been at least a year since I coded in c.  
    

After looking over the header file again, I will first set things up so first I create the shell struct, then I call sh_init and sh_destroy at the end 