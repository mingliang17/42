#include <unistd.h>

void	rush(int row, int col)
{
	int	rowcount;
	int	colcount;

	colcount =1;
	while(colcount <= col)
	{	
		rowcount =1;
		while(rowcount <= row)
		{
			if((colcount == 1 || colcount == row) && rowcount == 1)
				write(1, "A", 1);
			else if((colcount == 1 || colcount == col) && rowcount == row)
            	write(1, "C", 1);
			else if((colcount > 1 && colcount < col-1) && (rowcount > 1 && rowcount < row-1))
				write(1, " ", 1);
			else
				write(1, "B", 1);
			rowcount++;
		}
		write(1, "\n", 1);
		colcount++;
	}
}

int	main(void)
{	
	int	row;
	int	col;

	row = 5;
	col = 5;

	rush(row,col);
	return 0;
}


