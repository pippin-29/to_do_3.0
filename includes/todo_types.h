/*
 * Filename: /home/pippin-29/dev_thynk/TO_DO-3.0/includes/todo_types.h
 * Path: /home/pippin-29/dev_thynk/TO_DO-3.0/includes
 * Created Date: Thursday, March 14th 2024, 3:53:42 am
 * Author: Daniel Haddington
 * 
 * Copyright (c) 2024 Copyright © [2024] [Daniel Haddington]. All rights reserved.
 */


#ifndef TODO_TYPES_H
# define TODO_TYPES_H

typedef struct s_todo 
{
	int		fd1, fd2;
	char	*line;
} t_program;

typedef void (*p_cleanup_function)(t_program *);
typedef void t_cleanup_function;

# endif