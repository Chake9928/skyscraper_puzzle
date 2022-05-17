#include "declaration.h"

int	main(int argc, char **argv)
{
	int	*value;
	int	**matrix;
	int	*base_matrix;
	int	n;
	int	dim;

	if (arg_chk(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
		n = arg_chk(argc, argv);
	dim = n / 4;
	value = get_value(argv[1], n);
	matrix = allocate_matrix_mem(dim);
	base_matrix = allocate_base_matrix_mem(dim);
	connect_address(matrix, base_matrix, dim);
	if (calculate(matrix, value, dim, 0) == 1)
		output_answer(matrix, dim);
	else
		ft_putstr("Error\n");
	freeing(value, base_matrix, matrix);
	return (0);
}
