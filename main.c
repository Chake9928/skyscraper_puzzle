extern void	ft_putstr(char *str);
extern int	arg_chk(int ac, char **av);
extern int	*get_value(char *str, int n);
extern void	output_answer(int **matrix, int dim);
extern int	calculate(int **matrix, int *value, int dim, int id);
extern int	chk_duplication(int **matrix, int dim, int id, int bld_height);
extern int	chk_visible_bld_count(int **matrix, int dim, int id, int *value);
extern int	**allocate_matrix_mem(int dim);
extern int	*allocate_base_matrix_mem(int dim);
extern void	connect_address(int **matrix, int *base_matrix, int dim);
extern void	freeing(int *value, int *base_matrix, int **matrix);

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
