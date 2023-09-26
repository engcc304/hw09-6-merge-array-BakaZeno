/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย
    
    Test case:
        Enter element of Array1 :
            4
        --| Array1 [0] : 
            9
        --| Array1 [1] : 
            7
        --| Array1 [2] : 
            6
        --| Array1 [3] : 
            3
        Enter element of Array2 :
            5
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            3
        --| Array2 [2] : 
            5
        --| Array2 [3] : 
            8
        --| Array2 [4] : 
            9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2
    
    Test case:
        Enter element of Array1 :
            8
        --| Array1 [0] : 
            7
        --| Array1 [1] : 
            8
        --| Array1 [2] : 
            9
        --| Array1 [3] : 
            6
        --| Array1 [4] : 
            1
        --| Array1 [5] : 
            2
        --| Array1 [6] : 
            8
        --| Array1 [7] : 
            3
            
        Enter element of Array2 :
            6
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            1
        --| Array2 [2] : 
            3
        --| Array2 [3] : 
            5
        --| Array2 [4] : 
            3
        --| Array2 [5] : 
            6
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 8 8 7 6 6 5 3 3 3 2 2 1 1
*/

#include <stdio.h>

int main() {

    int N1, N2, N3, num1[ 100 ], num2[ 100 ], num3[ 100 ], i, j, hold = 0 ;

    printf( "Enter element of Array1 :\n" ) ;
    scanf( "%d", &N1 ) ;

    for ( i = 0 ; i < N1 ; i++ ) {
        printf( "--| Array1 [%d] :", i ) ;
        scanf( "%d", &num1[ i ] );
    }

    printf( "Enter element of Array2 :\n" ) ;
    scanf( "%d", &N2 ) ;

    for ( i = 0 ; i < N2 ; i++ ) {
        printf( "--| Array1 [%d] :", i ) ;
        scanf( "%d", &num2[ i ] );
    }

    for ( i = 0 ; i < N1 ; i++ ) {
        for ( int j = i + 1 ; j < N1 ; j++ ) {
            if ( num1[ i ] > num1[ j ] ) {
                hold = num1[ j ] ;
                num1[ j ] = num1[ i ] ;
                num1[ i ] = hold ;
            }
        }
    }

    for ( i = 0 ; i < N2 ; i++ ) {
        for ( int j = i + 1 ; j < N2 ; j++ ) {
            if ( num2[ i ] > num2[ j ] ) {
                hold = num2[ j ] ;
                num2[ j ] = num2[ i ] ;
                num2[ i ] = hold ;
            }
        }
    }

    N3 = N1 + N2 ;
    for ( i = 0 ; i < N1 ; i++ ) {
    num3[ i ] = num1[ i ];
    }

    for ( i = 0; i < N2; i++ ) {
        num3[i + N1] = num2[ i ] ;
    }


    for ( i = 0; i < N3; i++) {
        for (int j = i + 1 ; j < N3 ; j++) {
            if ( num3[ i ] < num3[ j ]) {
                hold = num3[ i ] ;
                num3[ i ] = num3[ j ] ;
                num3 [ j ] = hold ;
            }
        }
    }
    printf( "Merge Array1 & Array2 to Array3\n" ) ;
    printf( "Array3 😊 " );
    for ( int i = 0; i < N3; i++ ) {
        printf( " %d",num3[ i ] ) ;
    }

    return 0;
}