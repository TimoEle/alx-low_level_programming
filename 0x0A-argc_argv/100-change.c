#include <stdio.h>
#include <stdlib.h>

/**
 * calc_min_coins - Entry point
 *
 * Description: Calculates the minimum number of coins
 * required to make change
 * @cents: Integer
 *
 * Return: integer
 */

int calc_min_coins(int cents)
{
	int i;
	int num_coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);

	if (cents < 0)
	{
		return (0);
	}


	for (i = 0; i < num_coin_values; i++)
	{
		num_coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	return (num_coins);
}


/**
 * main - Entry point
 *
 * Descritpion: Calculates change
 * @argc: integer
 * @argv: pointer
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int min_coins = calc_min_coins(cents);

	if (argc == 2)
	{
		printf("%d\n", min_coins);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

}
