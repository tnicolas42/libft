/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:58:47 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/07 09:58:48 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	while (s[++i])
		f(i, &(s[i]));
}