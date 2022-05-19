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
        int get_file(std::string file);
        int generate_map(std::string nb);


    private:
        std::string     _content;
        int             _size;

        Puzzle(Puzzle const &copy);
        Puzzle  &operator=(Puzzle const &rhs);  
};

# endif