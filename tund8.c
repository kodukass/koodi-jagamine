#include <stdio.h>
#include <string.h>
#define maxN 10

void main(void) {
   FILE *tf=NULL;
   int i, j, m, n, number;
   char name[20];
   int matrix[maxN][maxN];

   tf = fopen("proov.txt","r");

/* Peale avamist loetakse esimeselt realt 2 t�hikutega eraldatud t�isarvu
 * Seda n�itab formaat "%d %d"
 * Arvud loetakse muutujatesse m ja n
 */

   fscanf(tf,"%d %d",&m,&n);
   printf("%d %d\n",m,n);

/* J�rgnev ts�kkel loeb m reast ja n veerust andmeid.
 * Eeldus: andmed on t�pselt lubatud koguses.
 * Loetud arvud kirjutatakse massiivi.
 */

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
        	fscanf(tf,"%d", &number);
        	printf("%d ", number);
        	matrix[i][j] = number;
        }
    }
    printf("\n");

/* Loeme while-ts�kliga kuni faili l�puni - ridade kaupa ja stringideks
 */

    while (!feof(tf)) {
    	fgets(name, 20, tf);
    	printf("%d",strlen(name));
    	printf("%s", name);
    }

	printf("Tr�kime v�lja maatriksi ilusal kujul.\n");
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
        	printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}
