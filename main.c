/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znazam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:57:38 by znazam            #+#    #+#             */
/*   Updated: 2019/05/27 08:53:27 by znazam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strchr.c

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

ft_strstr.c

#include <stdio.h>

int		main()
{
	char haystack[] = "HelloZ Zaid Nazam";
	char needle[] = "Zaid";
	printf("%s", ft_strstr(haystack, needle));
	return (0);
}
