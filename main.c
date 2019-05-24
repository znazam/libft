/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:57:38 by znazam            #+#    #+#             */
/*   Updated: 2019/05/24 12:20:15 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strchr

int	main()
{
	char *s = "hello this is me";
	int c = 'm';
	printf("%s\n", ft_strchr(s, c));
	return (0);
}

ft_strdup.c

#include <stdio.h>

int		main()
{
	char *j;
	j = ft_strdup("justine");
	printf("%s", j);
	return (0);

