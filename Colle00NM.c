#include <unistd.h>

void		ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_char(int ny, int nx, int x, int y)
{
	if (ny == 0 || ny == y - 1)
	{
        
		if (nx == 0 || nx == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (nx == 0 || nx == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void rush(int x, int y)
{
	int ny;
	int nx;

	ny = 0;
	while (ny < y)
	{
		nx = 0;
		while (nx < x)
		{
			print_char(ny, nx, x, y);
			nx++;
		}
		if (x > 0)
			ft_putchar('\n');
		ny++;
	}
}

int main ()
{
    rush(5, 3);
    return(0);
}