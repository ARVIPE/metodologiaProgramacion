#include <stdio.h>
#include <stdlib.h>

int main(){

int x = 7 ; /* x is an integer with the value 7 */
int *px ;   /* px is a pointer to an integer */

px = &x ;   /* px gets the address of x */
*px = 8 ;   /* the thing pointed to by px (x) gets the value 8 */

printf( "%d\n" , x ) ;  /* show the value of x */
printf( "%d\n" , &x ) ;  /* show the address of x */

}