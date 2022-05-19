/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:33:55 by thsembel          #+#    #+#             */
/*   Updated: 2022/01/06 18:31:41 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/n_puzzle.hpp"
#include "../includes/puzzle.hpp"

int     ft_error(std::string error)
{
    std::cerr << RED << "Error:\t" << NC << error << std::endl;
    return (EXIT_FAILURE);
}

int     ft_usage(void)
{
    std::cerr << YELLOW << "Usage:\t" << NC << "./n-puzzle [-f] [map.txt]\t" << "or\t";
    std::cerr << "./n-puzzle [-n]  [size of the map]\n";
    return (EXIT_FAILURE);
}

int     main(int ac, char **av)
{
    Puzzle puzzle;
    if (ac != 3)
    {
        std::cerr << RED << "Error:\t" << NC << "Wrong number of arguments.\n";
        return (ft_usage());    
    }
    if (strcmp(av[1], "-f") != 0 && strcmp(av[1], "-n") != 0)
        return (ft_usage());
    parsing(&puzzle, av[2], av[1][1]);
    return (0);
}