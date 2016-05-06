//
//  main.cpp
//  Matriz_Rotacion
//
//  Created by Miguel Bazán on 8/12/15.
//  Copyright (c) 2015 MiguelBazan. All rights reserved.
//  A01281010

#include <iostream>
using namespace std;
#include <time.h>
void despliega (int iMatA [3][3])
{
    for (int iR = 0; iR < 3; iR++)
    {
        for (int iC = 0; iC < 3; iC++)
        {
            cout<<iMatA[iR][iC]<<"\t";
        }
        cout<<endl;
    }
}
void Cambiar1 (int iMatA [3][3])
{
    for ( int iR = 0; iR < 3; iR++ )
    {
        for ( int iC = iR + 1; iC < 3; iC++ )
        {
            int iTemp = iMatA[iR][iC];
            
            iMatA[iR][iC] = iMatA[iC][iR];
            
            iMatA[iC][iR] = iTemp;
        }
    }

}
void Cambiar2 (int iMatB [3][3])
{
    
    for ( int iR = 0; iR < 3; iR++ )
    {
        for ( int iC= 0; iC < 3/2; iC++ )
        {
            int iTemp = iMatB[iR][iC];
            
        
            iMatB[iR][iC] = iMatB[iR][3-1-iC];
            
            iMatB[iR][3-1-iC] = iTemp;
        }
    }

    
}
void ValorMatriz (int iMatA [3][3])
{
    for (int iR = 0; iR < 3; iR++)
    {
        for (int iC = 0; iC < 3; iC++)
        {
            iMatA[iR][iC] = rand() % 100 +  1;
        }
    }

}
int main(int argc, const char * argv[])
{
    int iMatA[3][3];
    int iNum = 0;
    srand(time(NULL));
    int iCont = 0;
    
    ValorMatriz(iMatA);
    despliega(iMatA);
    
    cout<<"Numero: ";
    cin>> iNum;
    
    iNum %= 4;
    
    switch (iNum)
    {
        case 1 :
            Cambiar1(iMatA);
            Cambiar2(iMatA);
            despliega(iMatA);
            break;
        
        case 2:
            
            while (iCont != iNum)
            {
                Cambiar1(iMatA);
                Cambiar2(iMatA);
                iCont++;
            }
            despliega(iMatA);
            break;
            
        case 3:
            
            while (iCont != iNum)
            {
                Cambiar1(iMatA);
                Cambiar2(iMatA);
                iCont++;
            }
            despliega(iMatA);
            break;
            
        case 0:
            
            despliega(iMatA);
            
            break;
    }
    return 0;
}
