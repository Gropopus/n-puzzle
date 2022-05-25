# include "../includes/puzzle.hpp"

void	ft_gnl(std::string &buffer, std::string &line, char to)
{
	size_t	i;

	i = buffer.find(to);
	if (i != std::string::npos)
	{
		line = std::string (buffer, 0, i++);
		buffer = buffer.substr(i);
	}
	else
	{
		if (buffer[buffer.size() - 1] == to)
			buffer = buffer.substr(buffer.size());
		else
		{
			line = buffer;
			buffer = buffer.substr(buffer.size());
		}
	}
}

bool    str_is_digit(std::string &str)
{
    int     i = 0;
    bool    digit = false;
    
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = true;
        i++;
    }
    return (digit);
}

int     Puzzle::stringToGrid(void)
{
    std::string line;
    int     hash = 0;

    while (!this->_content.empty())
    {
        ft_gnl(this->_content, line, '\n');
        if ((hash = line.find("#")) == std::string::npos && str_is_digit(line) == false)
            return (ft_error("Invalid char in map.txt"));
        if (hash)  
            line = line.substr(0, hash);
        
        std::cout << line << std::endl;
        line.clear();
    }
    return (0);
}

int     Puzzle::getFile(std::string file)
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
    if (this->stringToGrid())
        return (ft_error("invalid map"));
	return (0);
}

int     Puzzle::generateMap(std::string nb)
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

Puzzle::Puzzle(void)
{ 
    this->_max = 0;
    this->_min = 0;
    this->_size = 0;
    return;
}

Puzzle::~Puzzle(void) { return; }