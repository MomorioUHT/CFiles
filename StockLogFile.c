#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename) {
    FILE *file = fopen(filename, "r");
    Product list[100];

    int typesAmt, amt;
    int i = 0, last_stock = 0, found = 0;

    char InputName[30];
    double cost;

    fscanf(file, "%d", &typesAmt);

    while (fscanf(file, "%*d,%*d:%*d:%*d,%29[^,],%d,%lf",InputName, &amt, &cost) == 3) { 
        for (i=0; i<typesAmt; i++) {
            if (strcmp(list[i].name, InputName) == 0) {
                list[i].amount += amt;
                list[i].totalCost += cost;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            strcpy(list[last_stock].name, InputName);
            list[last_stock].amount = amt;
            list[last_stock].totalCost = cost;
            last_stock++;
        }
        found = 0;
    }
    fclose(file);
    printStock(list, typesAmt);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}