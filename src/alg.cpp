int countPairs1(int *arr,int len,int value)
{
	int a = 0;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] + arr[j] == value)
				a++;
		}
	}
	return a;
}
int countPairs2(int *arr,int len,int value)
{
	int a = 0;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] + arr[j] == value)
				a++;
		}
	}
	return a;
}int countPairs3(int *arr,int len,int value)
{
	int a = 0;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] + arr[j] == value)
				a++;
		}
	}
	return a;
}
