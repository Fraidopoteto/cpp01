#ifndef	HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		void complain(std::string level);
		static void (Harl::*func_ptr[4])(void);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

};


#endif