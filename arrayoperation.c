#include <stdio.h>

int main()
{
    int a[50], n, i, j, pos, item, ch, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n < 0 || n > 50)
    {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Search");
        printf("\n4. Sort");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                if (n >= 50)
                {
                    printf("Array is full!");
                    break;
                }

                printf("Enter position and item: ");
                scanf("%d%d", &pos, &item);

                if (pos < 1 || pos > n + 1)
                {
                    printf("Invalid position!");
                    break;
                }

                for (i = n; i >= pos; i--)
                {
                    a[i] = a[i - 1];
                }

                a[pos - 1] = item;
                n++;

                printf("Insertion successful.");
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n)
                {
                    printf("Invalid position!");
                    break;
                }

                for (i = pos - 1; i < n - 1; i++)
                {
                    a[i] = a[i + 1];
                }

                n--;

                printf("Deletion successful.");
                break;

            case 3:
                printf("Enter item: ");
                scanf("%d", &item);

                for (i = 0; i < n; i++)
                {
                    if (a[i] == item)
                    {
                        break;
                    }
                }

                if (i < n)
                {
                    printf("Found at position %d", i + 1);
                }
                else
                {
                    printf("Not found");
                }

                break;

            case 4:
                for (i = 0; i < n - 1; i++)
                {
                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (a[j] > a[j + 1])
                        {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }

                printf("Array sorted successfully.");
                break;

            case 5:
                printf("Array elements: ");

                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }

                printf("\n");
                break;

            case 6:
                printf("Exiting program.");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (ch != 6);

    return 0;
}
