int rand(void)
{
	static int i = -1;
	int randoms[6] = {9, 8, 10, 24, 75, 9};
	i++;
	return(randoms[i]);
}
