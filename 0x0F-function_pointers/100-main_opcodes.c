{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: O
 */
int main(int argc, char **argv)
{
int a;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, a);
return (0);
}
