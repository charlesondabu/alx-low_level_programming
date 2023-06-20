/**
 * _isalpha - function that print 10 x
 * @a: parameter
 * Return: void
 */
int _isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
	{
		return (1);
	}
	return (0);
}
