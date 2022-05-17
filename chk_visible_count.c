int	chk_col_up(int **matrix, int dim, int id, int *value)
{
	int	i;
	int	max;
	int	visible_bld_count;

	i = 0;
	max = 0;
	visible_bld_count = 0;
	if (id / dim == dim - 1)
	{
		while (i < dim)
		{
			if (matrix[i][id % dim] > max)
			{
				max = matrix[i][id % dim];
				visible_bld_count++;
			}
			i++;
		}
		if (value[id % dim] != visible_bld_count)
			return (1);
	}
	return (0);
}

int	chk_col_down(int **matrix, int dim, int id, int *value)
{
	int	i;
	int	max;
	int	visible_bld_count;

	i = dim - 1;
	max = 0;
	visible_bld_count = 0;
	if (id / dim == dim - 1)
	{
		while (i >= 0)
		{
			if (matrix[i][id % dim] > max)
			{
				max = matrix[i][id % dim];
				visible_bld_count++;
			}
			i--;
		}
		if (value[dim + id % dim] != visible_bld_count)
			return (1);
	}
	return (0);
}

int	chk_row_left(int **matrix, int dim, int id, int *value)
{
	int	i;
	int	max;
	int	visible_bld_count;

	i = 0;
	max = 0;
	visible_bld_count = 0;
	if (id % dim == dim - 1)
	{
		while (i < dim)
		{
			if (matrix[id / dim][i] > max)
			{
				max = matrix[id / dim][i];
				visible_bld_count++;
			}
			i++;
		}
		if (value[dim * 2 + id / dim] != visible_bld_count)
			return (1);
	}
	return (0);
}

int	chk_row_right(int **matrix, int dim, int id, int *value)
{
	int	i;
	int	max;
	int	visible_bld_count;

	i = dim - 1;
	max = 0;
	visible_bld_count = 0;
	if (id % dim == dim - 1)
	{
		while (i >= 0)
		{
			if (matrix[id / dim][i] > max)
			{
				max = matrix[id / dim][i];
				visible_bld_count++;
			}
			i--;
		}
		if (value[dim * 3 + id / dim] != visible_bld_count)
			return (1);
	}
	return (0);
}

int	chk_visible_bld_count(int **matrix, int dim, int id, int *value)
{
	if (chk_row_left(matrix, dim, id, value) == 1)
	{
		return (1);
	}
	if (chk_row_right(matrix, dim, id, value) == 1)
	{
		return (1);
	}
	if (chk_col_down(matrix, dim, id, value) == 1)
	{
		return (1);
	}
	if (chk_col_up(matrix, dim, id, value) == 1)
	{
		return (1);
	}
	return (0);
}
