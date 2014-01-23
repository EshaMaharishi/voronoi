#include <stdio.h>
#include <cstdlib>
#include <math.h>

const double PI = atan(1)*4;

// RADIUS is the distance from the center of the hexagon to any vertex
const double RADIUS = 10;

// WIDTH is the distance from the center of the hexagon to the
// middle of an edge
const double WIDTH = RADIUS * cos( 30.0 * PI / 180.0 ); 

int main( int argc, char *argv ){

	FILE *dfile;
	dfile = fopen( "data1.csv", "w" );

/*	for( double i=200; i<250; i+=2*WIDTH ){
		for( int j=200; j<250; j+=1.5*RADIUS ){
			if( j%2 != 0 )
				fprintf( dfile, "%d,%d\n", (int)(ceil(i) + WIDTH), (int)(ceil(j)) ); 
			else
				fprintf( dfile, "%d,%d\n", (int)(ceil(i)), (int)(ceil(j)) ); 
		}
	}
*/
	for( int i=0; i<300; i++ ){
			fprintf( dfile, "%d,%d\n", (int)( rand()%400 ), (int)( rand()%400 ) ); 
	}


}
