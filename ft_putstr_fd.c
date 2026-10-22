/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apazitor <apazitor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:06:44 by apazitor          #+#    #+#             */
/*   Updated: 2026/10/22 09:41:45 by apazitor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t s_len = ft_strlen(s);
    
    write(fd, s, s_len);
}

// int main(void)
// {
//     int fd = open("text.out", O_RDWR);
//     ft_putstr_fd("alice", fd);
// }