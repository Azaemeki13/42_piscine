#include <stdlib.h>
#include <stdio.h>

int	strcount(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	countall(int size, char **strs, char *sep)
{
	int	index;
	int	total_length;

	index = 0;
	total_length = 0;
	if (size == 0)
		return (0);
	while (index < size)
	{
		total_length += strcount(strs[index]);
		index++;
	}
	total_length += strcount(sep) * size - 1;
	return (total_length);
}

char	*nav_them_all(char *nav, char *ptr_nav)
{
	while (*ptr_nav != '\0')
	{
		*nav = *ptr_nav;
		nav++;
		ptr_nav++;
	}
	return (nav);
}

char	*sep_them_all(char *nav, char *ptr_sep)
{
	while (*ptr_sep != '\0')
	{
		*nav = *ptr_sep;
		nav++;
		ptr_sep++;
	}
	return (nav);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int index;
    char *nav;
    char *ptr_nav;
    char *ptr_sep;
    char *finish_str;

    // Calculate total length of the resulting string
    index = countall(size, strs, sep);

    // Allocate memory for the resulting string
    finish_str = malloc(sizeof(char) * (index + 1));
    if (!finish_str)
        return (NULL); // Check for successful memory allocation

    nav = finish_str; // Start filling from the beginning of the allocated memory

    // Loop through each string in strs
    index = 0;
    while (index < size)
    {
        ptr_nav = strs[index]; // Pointer to the current string
        ptr_sep = sep; // Pointer to the separator

        // Copy the current string to finish_str
        nav = nav_them_all(nav, ptr_nav);

        // If not the last string, add the separator
        if (index < size - 1)
            nav = sep_them_all(nav, ptr_sep);

        index++;
    }

    *nav = '\0'; // Null-terminate the resulting string
    return (finish_str);
}

int main(void)
{
    // Define some test strings and separators
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
    char *sep = " ";
    char *result;

    // Join the strings with the separator
    result = ft_strjoin(6, strs, sep);

    // Print the result
    if (result)
    {
        printf("Joined string: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}
