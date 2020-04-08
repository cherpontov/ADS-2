int countPairs1(int* arr, int len, int value)
{
	int k = 0;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] + arr[j] == value)
				k++;
		}
	}
	return k;
}
int countPairs2(int* arr, int len, int value)
{
	int par = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j =len-1 ; j>i; j--)
		{
			while (arr[i] + arr[j] == value && j > i)
			{
				par++;
				j--;
			}
			if (arr[i] + arr[j] < value)
				break;
		}
	}
	return par;
}
int countPairs3(int* arr, int len, int value)
{
	int pr = 0;
	for (int i = 0; i < len - 1; i++)
	{
		int left = i, right = len;
		
		while (left < right-1)
		{
			int mid = (left + right) / 2;
			if (arr[i] + arr[mid] == value)
			{
				pr++;
				int j = mid+1;
				while (arr[i] + arr[j] == value && j <right)
				{
					pr++;
					j++;
				}
				j = mid - 1;
				while (arr[i] + arr[j] == value && j>left)
				{
					pr++;
					j--;
				}
				break;
			}
			if (arr[i] + arr[mid] > value)
				right = mid;
			else
				left = mid;
		}
	
	}
	return pr;
}
