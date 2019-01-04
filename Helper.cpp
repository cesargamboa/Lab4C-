int mcd(int m, int n)
{
	int r = 1000;

	while (r != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return(m);
}