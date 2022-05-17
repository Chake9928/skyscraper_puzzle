extern int	chk_duplication(int **matrix, int dim, int id, int bld_height);
extern int	chk_visible_bld_count(int **matrix, int dim, int id, int *value);

int	calculate(int **matrix, int *value, int dim, int id)
{
	int	bld_height;

	if (id >= dim * dim)
		return (1);
	bld_height = 0;
	while (++bld_height <= dim)
	{
		if (chk_duplication(matrix, dim, id, bld_height) == 0)
		{
			matrix[id / dim][id % dim] = bld_height;
			if (chk_visible_bld_count(matrix, dim, id, value) == 0)
			{
				if (calculate(matrix, value, dim, id + 1) == 1)
					return (1);
			}
			else
				matrix[id / dim][id % dim] = 0;
		}
	}
	return (0);
}
