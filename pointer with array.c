#include <stdio.h>
void fun(int *bPtr);
 int main( void )
 {
 int b[] = { 10, 20, 30, 40 }; /* initialize array b */
 int *bPtr = b;          /* set bPtr to point to array b */
 int i,offset;
 fun(bPtr);
printf("%u \n",b);  
 /* output array b using array subscript notation */
 printf( "Array b printed with:\nArray subscript notation\n" );

 /* loop through array b */
 for ( i = 0; i < 4; i++ ) {
 printf( "b[ %d ] = %d\n", i,b[ i ] );
 } /* end for */

 /* output array b using array name and pointer/offset notation */
 printf( "\nPointer/offset notation where\n"
 "the pointer is the array name\n" );
  /* loop through array b */
 for ( offset = 0; offset < 4; offset++ ) {
 printf( "*( %u + %d ) = %d\n",bPtr, offset, *(b + offset) );
 } /* end for */

return 0; 
}
	void fun(int *bPtr){

 int i; /* counter */
 int offset; /* counter */
printf("%u \n",bPtr);

/* output array b using bPtr and array subscript notation */
 printf( "\nPointer subscript notation\n" );

 /* loop through array b */
 for ( i = 0; i < 4; i++ ) {
 printf( "bPtr[ %d ] = %d\n", i,bPtr[ i ] );
 } /* end for */

 /* output array b using bPtr and pointer/offset notation */
 printf( "\nPointer/offset notation\n" );

 /* loop through array b */
 for ( offset = 0; offset < 4; offset++ ) {
 printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset) );
 } /* end for */

 } 
