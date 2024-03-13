/*
 * Filename: /home/pippin-29/dev_thynk/TO_DO-3.0/source/exit.c
 * Path: /home/pippin-29/dev_thynk/TO_DO-3.0/source
 * Created Date: Thursday, March 14th 2024, 4:40:58 am
 * Author: Daniel Haddington
 * 
 * Copyright (c) 2024 Copyright © [2024] [Daniel Haddington]. All rights reserved.
 */


# include "../includes/todo.h"

void	error_exit(char *mess, int error_type, t_program *strct, p_cleanup_function cleanup)
{
	printf("\e[1;31mError; Explicit: %s\n", mess);
	cleanup(strct);
	printf("codename: --___-- has exited with an error code <%d>\e[0;32m\n", error_type);
	exit(error_type);
}
