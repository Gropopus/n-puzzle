/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:33:55 by thsembel          #+#    #+#             */
/*   Updated: 2022/01/06 18:31:41 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUZZLE_HPP
# define PUZZLE_HPP
# include "n_puzzle.hpp"

class Puzzle 
{
    public:
        Puzzle(void);
        ~Puzzle(void);
        int getFile(std::string file);
        int generateMap(std::string nb);
        int stringToGrid(void);


    private:
        std::string     _content;
        int             _size;
        int             _max;
        int             _min;
        int             **grid;

        Puzzle(Puzzle const &copy);
        Puzzle  &operator=(Puzzle const &rhs);  
};

# endif