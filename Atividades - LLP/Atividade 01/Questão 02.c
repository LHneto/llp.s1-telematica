int main()


{
    int m1 [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m2 [3] [3] = {10, 11, 12, 13, 14, 15, 16, 17, 18};
    int resultado [3] [3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
        resultado [i][j] = m1 [i][j] + m2[i][j];

        }
        
    }
    
    printf ("\n\n Resultado da Soma: \n ");
    for (int k=0; k<3; k++){
        printf ("\n ");
        for (int l=0; l<3; l++){
            printf ("%d, ", resultado [k][l] ); 
        

        }
        
    }



return 0;
}

