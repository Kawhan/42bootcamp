#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char numeric[] = "0123456789";
	char *p_num;
	p_num = numeric;

	char special[] = "0123456789_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String que só tem caracteres numericos\n0 = String que não somente caracteres numericos\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Vazio = %d\n-----\n", ft_str_is_numeric(p_emp));

	return (0);
}