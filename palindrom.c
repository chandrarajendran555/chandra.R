include <stdio.h>
void main()
{
    int n, i= 0, rem, j;

    printf("Enter an integer: ");
    scanf("%d", &n);

    i= n;
    while( n!=0 )
    {
        rem = n%10;
        j = j*10 + rem;
        n /= 10;
    }
    if (i == j)
        printf("%d is a palindrome.", i);
    else
        printf("%d is not a palindrome.", i);
    
}
