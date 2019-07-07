#ifndef KEYFUNCTION_HPP
# define KEYFUNCTION_HPP
# include <string>

struct	keyFunc
{
	std::string action;
	void		(*func)(PhoneBook*);
};
//typedef struct          s_operators
//{
//   int                 out_put_function;
//   void                (*fn)(t_printf*);
//}                       t_operators;
#endif
