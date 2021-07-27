#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char string[] = "Normal characters string";
	char *p_str;
	p_str = string;

	char unpr[] = "Não imprimiveis: \t (tab), \a (?)";
	char *p_unp;
	p_unp = unpr;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = Contendo apenas caracteres printados\n0 = Contendo caracteres que não podem ser printados\n\n");
	printf("%s = %d\n", string, ft_str_is_printable(p_str));
	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
	printf("Vazio = %d\n-----\n", ft_str_is_printable(p_emp));

	return (0);
}