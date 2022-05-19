/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_puzzle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:33:55 by thsembel          #+#    #+#             */
/*   Updated: 2022/01/06 18:31:41 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef N_PUZZLE_HPP
# define N_PUZZLE_HPP
# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE   "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN   "\033[0;36m"
# define NC     "\033[0m"
# include <vector>
# include <map>
# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <cfloat>
# include <cstring>
# include "puzzle.hpp"

int     ft_error(std::string error);
int     parsing(class Puzzle *puzzle, char *file, char op);

# endif