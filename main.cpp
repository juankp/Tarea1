#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define largo = 20;
using namespace std;

string pasarachar(int i) //funcion que transforma de entero a char
{ 
  // int to string en c++
  string num;
  int temp;
  while(i / 10!=0)
  {
   temp=i%10;
   i= i/10;
   temp =temp + 48;
   num = (char)temp + num;
  }
  i=i+48;
  num = (char)i + num ;
  return num;
}


int main(int argc, char *argv[]) //tomar los argumentos de acuerdo al orden
{
    //int cmp = strcmp(argv[1],"-i"); // para determinar si ingresa -i
    
    //string poli = argv[2]; // polinomio a string
    
    string poli2 = "x^4+2*x+5*x^3";
    int aux = poli2.size(); //largo del polinomio ;
    char arr[aux];
    string arr2[20] ;
    int aux2 = sizeof(arr2); //largo arreglo nuevo
    
    string prueba;
    string arr3[30];
    
    //if(argc == 1)
    //{
    //        cout<<"debes ingresar mas parametros "<<endl;
    //}
    //else{
         //if(cmp ==0)
         //{
                    cout<<"se debe integrar"<<endl;
                    for(int i=0;i<=aux;i++)
                    {       
                            arr[i] = poli2[i];
                            cout<<arr[i]<<endl;
                            
                    }
                    
                    
                    for(int i=0;i<=sizeof(arr)+1;i++)
                    {
                            if(arr[i]>= 48 && arr[i] <= 57 && arr[i+1]>= 48 && arr[i+1] <= 57) //comprueba si son 2 numeros
                            {
                            
                            int num = ((arr[i]-'0')*10) + ((arr[i+1]-'0')) ; //transformar los dos numeros a uno         
                            prueba = pasarachar(num);
                            arr2[i+1] = prueba; 
                            i++;
                            
                            //cout<<arr2[i+1]<<endl;
                            
                             }else{
                             
                            if(arr[i] == 94 && arr[i+1]>= 48 && arr[i+1] <= 57) // si es ^ y el siguiente es numero
                                {
                                   int num = (arr[i+1]-'0');
                                    num = num + 1;
                                    arr2[i+1] =  pasarachar(num);
                                    arr2[i] = arr[i];
                                    i++;
                                    
                                }else{
                                       if(arr[i] == 120 && arr[i+1]== 43) // si es x solo
                                       {
                                           arr2[i] = "x^2";
                                          
                                           
                                       }else{
                                             if(arr[i]>= 48 && arr[i] <= 57 && arr[i+1] != 42) //si es solo numeros
                                             {
                                                 arr2[i]= arr[i];
                                                 arr2[i+1]= "x";
                                                 i++;
                                             }
                                             else{
                                             arr2[i] = arr[i];
                                             }
                                       }
                                       }
                                
                                }
                                }
                            
                            
                                        
                            
                        int i;
                        //mostrar el arreglo
                        for(i=0; i<aux+5;i++){
                            cout<<arr2[i];
                            
                        }
                        
                          
    
    system("PAUSE");

    
    
}

//for(int i=0; i<argc;i++)
  //  {
    //        cout<<"argumento ["<<i<<"]: "<<argv[i]<<endl;
            
    //}
