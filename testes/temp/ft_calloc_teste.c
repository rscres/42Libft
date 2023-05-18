int main()
{
    //******************* CALLOC  *******************
	//******************* TESTE 1 *******************
    int        size = 0;
    int*    array = (int*) calloc(size, sizeof(int));
	
	printf("NMEMB == 0\n");
    for (int i = 0; i < size; i++)
    {
	    printf("std[%d]: %d\n", i, array[i]);
	}
	free(array);

    int        sizef = 0;
    int*    arrayf = (int*) ft_calloc(sizef, sizeof(int));

    for (int e = 0; e < sizef; e++)
    {
	    printf("ft[%d]: %d\n", e, arrayf[e]);
	}
	free(arrayf);

	// ******************* TESTE 2 *******************
	size = 10;
    array = (int*) calloc(size, sizeof(int));
	printf("\nNMEMB AND SIZE NOT NULL\n");
    for (int i = 0; i < size; i++)
    {
	    printf("std[%d]: %d\n", i, array[i]);
	}
	free(array);

    sizef = 10;
    arrayf = (int*) ft_calloc(sizef, sizeof(int));

    for (int e = 0; e < sizef; e++)
    {
	    printf("ft[%d]: %d\n", e, arrayf[e]);
	}
	free(arrayf);

	//******************* TESTE 3 *******************
	size = 10;
    array = (int*) calloc(size, 0);
	printf("\nSIZE == 0\n");
    for (int i = 0; i < size; i++)
	{
	    printf("std[%d]: %d\n", i, array[i]);
	}
	free(array);

    sizef = 10;
    arrayf = (int*) ft_calloc(sizef, 0);

    for (int e = 0; e < sizef; e++)
	{
	    printf("ft[%d]: %d\n", e, arrayf[e]);
	}
	free(arrayf);
    return (0);

	
}