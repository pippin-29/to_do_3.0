/*
 * Filename: /home/pippin-29/dev_thynk/TO_DO-3.0/source/main.c
 * Path: /home/pippin-29/dev_thynk/TO_DO-3.0/source
 * Created Date: Thursday, March 14th 2024, 3:30:21 am
 * Author: Daniel Haddington
 * 
 * Copyright (c) 2024 Copyright © [2024] [Daniel Haddington]. All rights reserved.
 */

# include "../includes/todo.h"

t_cleanup_function cleanup(t_program *program)
{
	if (program->line)
		free(program->line);
	if (program)
		free(program);
}

int		check_file(t_program *program, char *filename)
{
	if (access(filename, R_OK) == -1)
		error_exit("Could Not Find Or Access File, Please Check Permissions\n", 42, program, cleanup);
	else
	program->fd1 = open(filename, O_RDONLY);


}

void	init_(t_program *program, char **argv)
{
	check_file(program, argv[1]);
}

void	run_(t_program *program)
{

}

int main (int argc, char **argv)
{
	t_program *program;

	program = malloc(sizeof(t_program));
	*program = (t_program){0};
	if (argc == 1)
		error_exit("Parameter Not Set!\n", 555, program, cleanup);
	if (argc == 2)
	{
		init_(program, argv);
		run_(program);
	}
	else
		error_exit("Too Many Paramaters Set!", 555, program, cleanup);
	
	return (0);
}