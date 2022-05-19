# include "../includes/n_puzzle.hpp"
# include "../includes/puzzle.hpp"

int     parsing(Puzzle *puzzle, char *file, char op)
{
    if (op == 'f')
        puzzle->get_file(file);
    else
        puzzle->generate_map(file);
   /* is_map_valid();*/
    return (0);
}