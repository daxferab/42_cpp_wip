/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:32:24 by daxferna          #+#    #+#             */
/*   Updated: 2025/08/03 20:15:55 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char	*argv[])
{
	(void) argv;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (size_t j = 0; j < std::string(argv[i]).length(); j++)
				std::cout << (char)toupper(argv[i][j]);
			if (i != argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}