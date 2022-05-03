/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:27:15 by mtsuji            #+#    #+#             */
/*   Updated: 2022/05/01 17:27:17 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
#define GET_NEXE_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <fcntl.h>
//#define BUFFER_SIZE 1


char  *get_next_line(int fd);

#endif
