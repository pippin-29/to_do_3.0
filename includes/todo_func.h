/*
 * Filename: /home/pippin-29/dev_thynk/TO_DO-3.0/includes/todo_func.h
 * Path: /home/pippin-29/dev_thynk/TO_DO-3.0/includes
 * Created Date: Thursday, March 14th 2024, 3:53:28 am
 * Author: Daniel Haddington
 * 
 * Copyright (c) 2024 Copyright © [2024] [Daniel Haddington]. All rights reserved.
 */


#ifndef TODO_FUNC_H
# define TODO_FUNC_H

# include "todo_types.h"
/* 
	EXIT_C 
*/
// Assign cleanup with type t_cleanup_function or void
void				error_exit(char *mess, int error_type, t_program *strct, p_cleanup_function cleanup);

/* 
	MAIN_C 
*/
t_cleanup_function	cleanup(t_program *program);



# endif