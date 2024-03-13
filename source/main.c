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

void	init_program(t_program **program)
{
		*program = malloc(sizeof(t_program));
		**program = (t_program){0};
		(*program)->line = malloc(sizeof(char) * 5);
}

int main (int argc, char **argv)
{
	t_program *program;

	init_program(&program); 
	if (argc == 1)
		error_exit("Parameter Not Set!\n", 555, program, cleanup);
	(void)argv;
	return (0);
}