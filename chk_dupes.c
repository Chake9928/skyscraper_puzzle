int	chk_duplication(int **matrix, int dim, int id, int bld_height)
{
	int	i;

	i = 0;
	while (i < id / dim)
	{
		if (matrix[i][id % dim] == bld_height)
		{
			return (1);
		}
		i++;
	}
	i = 0;
	while (i < id % dim)
	{
		if (matrix[id / dim][i] == bld_height)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
