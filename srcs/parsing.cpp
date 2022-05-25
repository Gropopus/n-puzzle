# include "../includes/n_puzzle.hpp"
# include "../includes/puzzle.hpp"

int     parsing(Puzzle *puzzle, char *file, char op)
{
    if (op == 'f')
        puzzle->getFile(file);
    else
        puzzle->generateMap(file);
   /* is_map_valid();*/
    return (0);
}