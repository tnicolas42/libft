/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:45:47 by tnicolas          #+#    #+#             */
/*   Updated: 2017/11/09 15:57:05 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2) +
						1))))
		return (NULL);
	ft_strncpy(ret, s1, ft_strlen(s1));
	ft_strncat(ret, s2, ft_strlen(s2));
	return (ret);
}
