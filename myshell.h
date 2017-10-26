#ifndef _MYSHELL_H
#define _MYSHELL_H

void print_prompt();
void get_input(char *);
void explain_input(char *, int *, char [][]);
void do_cmd(int, char a[]][]);
int find_command(char *);

#endif
