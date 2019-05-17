/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countlines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:09:35 by vzamyati          #+#    #+#             */
/*   Updated: 2018/08/08 15:10:45 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_countlines(char *str)
{
	int		lines;
	int		i;

	lines = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '\n' || str[i + 1] == '\0')
			lines++;
		i++;
	}
	return (lines);
}
