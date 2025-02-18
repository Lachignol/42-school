/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:03:10 by ascordil          #+#    #+#             */
/*   Updated: 2025/02/03 18:00:57 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/so_long.h>

void	handler(int sigint)
{
	ft_printf("value every 2 sec %d", sigint);
}

int	setup_timer(void)
{
	struct itimerval	timer;

	signal(SIGALRM, handler);
	timer.it_value.tv_sec = 2;
	timer.it_value.tv_usec = 0;
	timer.it_interval.tv_sec = 2;
	timer.it_interval.tv_usec = 0;
	if (setitimer(ITIMER_REAL, &timer, NULL) == -1)
	{
		perror("setitimer");
		exit(EXIT_FAILURE);
	}
	return (1);
}
