#include <map>
#include <string>
#include <iostream>
using m = std::map<char, unsigned>;

m count(const std::string& string) {
  std::map<char, unsigned> chars;
  for(char x : string) chars[x]++;
  return chars;
}

int	main(int ac, char **av) {
	if (ac != 2){
		std::cout << "Error param! pls used: ./a_0 \"your string\"" << std::endl;
		return (0);
	}
		
	m mapa = count(av[1]);
	
	for (m::iterator i = mapa.begin(); i != mapa.end(); i++)
		std::cout << i->first << "\t" << i->second << std::endl;
	return (0);
}