#include"myshell.h"
#include"utili.h"

int main(int argc, char **argv)
{
	int i;
	int argcount = 0;
	char arglist[100][256];
	char **arg = NULL;
	char *buf = NULL;

	buf = (char *)malloc(256);
	if(buf == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	while(1)
	{
		memset(buf, 0, 256);
		print_prompt();
		get_input(buf);
		
		if(strcmp(buf, "exit\n") == 0 || strcmp(buf,"logout\n") == 0)
			break;
		for(i=0; i<100; ++i)
		{
			arglist[i][0]='\0';
		}
		argcount = 0;
		explain_input(buf, &argcount, arglist);
		do_cmd(argcount, arglist);
	}

	if(buf != NULL)
	{
		free(buf);
		buf = NULL;
	}
	exit(0);
}
