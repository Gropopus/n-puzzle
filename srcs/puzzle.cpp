# include "../includes/puzzle.hpp"

int     Puzzle::get_file(std::string file)
{
	std::stringstream	buffer;
	std::ifstream       infile(file);
    size_t len = file.length() - 4;
    
    if (strcmp(file.c_str() + len, ".txt") != 0)
        return (ft_error("file is not a .txt"));
	if (infile.fail())
		return (ft_error("enable to open file"));
	buffer << infile.rdbuf();
	if (buffer.fail())
		return (ft_error("enable to read file"));
	infile.close();
	this->_content = buffer.str();
	buffer.clear();
	if(this->_content.empty())
		return (ft_error("file is empty"));
	return (0);
}

int     Puzzle::generate_map(std::string nb)
{
    try
    {
        this->_size = std::stoi(nb);
    }
    catch (const std::exception& e)
    {
        return (ft_error("Invalid number"));
    }
    if (this->_size < 2 || this->_size > 20)
        return (ft_error("Invalid number, it must be greater than 1 and smaller than 20"));
    return (0);
}

Puzzle::Puzzle(void) { return; }

Puzzle::~Puzzle(void) { return; }