#include <iostream>
#include <string>

int	centuryFromYear(int year) {
	return (year - 1) / 100 + 1 ;
}

bool	stringIsNum(const std::string str) {
	for (size_t i = 0; i < str.length(); i++)
		if (!isdigit(str[i])) return false;
	return true;
}

int	Err(std::string err) {
	std::cout << "Error param! " + err << std::endl;
	return (0);
}

int	main(int ac, char **av) {
	if (ac != 2) return (Err("pls used: ./a_1 \"your num\""));
	if (!stringIsNum(av[1])) return (Err("string is not a number"));
	
	int num = std::atoi(av[1]);

	std::cout << num << " --> " <<
		centuryFromYear (num) << std::endl;	
	
	return (0);
}
