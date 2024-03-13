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

void	init_program(t_program *program, char **argv)
{
		
		(void)program;
		(void)argv;

}

int main (int argc, char **argv)
{
	t_program *program;

	program = malloc(sizeof(t_program));
	*program = (t_program){0};
	if (argc == 1)
		error_exit("Parameter Not Set!\n", 555, program, cleanup);
	init_program(program, argv); 
	return (0);
}