#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <cmath>

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
    // para determinar si ingresa -i
    
    string poli2 = argv[2]; // polinomio a string
    
    //string poli2 = "10x^2+2*x^3+5";
    int aux = poli2.size(); //largo del polinomio ;
    char arr[aux];
    string arr2[20] ;
    int aux2 = sizeof(arr2); //largo arreglo nuevo
    
    string prueba;
    string arr3[30];
    
    if(argc <=1)
    {
            cout<<"debes ingresar mas parametros "<<endl;
    }
    else{
         if(strcmp(argv[1],"-i")==0)
         {
           if(argc == 3)
             {       cout<<"se debe integrar"<<endl;
                    for(int i=0;i<=aux;i++)
                    {       
                            arr[i] = poli2[i];
                            //cout<<arr[i]<<endl;
                            
                    }
                    
                    
                    for(int i=0;i<=sizeof(arr)+1;i++)
                    {
                            if(arr[i]>= 48 && arr[i] <= 57 && arr[i+1]>= 48 && arr[i+1] <= 57) //comprueba si son 2 numeros
                            {
                            
                                        int num = ((arr[i]-'0')*10) + ((arr[i+1]-'0')); //transformar los dos numeros a uno         
                            
                                        prueba = pasarachar(num);
                                        arr2[i+1] = prueba; 
                                        i++;
                            
                                        //cout<<arr2[i+1]<<endl;
                            
                            }
                             else{
                             
                                  if(arr[i] == 94 && arr[i+1]>= 48 && arr[i+1] <= 57) // si es ^ y el siguiente es numero
                                  {
                                            int num = (arr[i+1]-'0');
                                            num = num + 1;
                                            arr2[i+1] =  pasarachar(num);
                                            arr2[i] = arr[i];
                                            i++;
                                    
                                  }
                                   else{
                                            if(arr[i] == 120 && arr[i+1]== 43) // si es x solo
                                            {
                                                      arr2[i] = "x^2";
                                          
                                           
                                             }     else{
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
                                
              }      }
                    
                   
         }
         //fin del primer if
            int i;
                        
                        
                        //mostrar el arreglo
                        cout<<"El resultado de la integral simbolica es: ";
                        for(i=0; i<20;i++){
                            cout<<arr2[i];
                            }
                            cout<<endl;         
              
              
          }else {
                    if(strcmp(argv[1],"-g")==0)
                    {
                     if(argc == 5)
                     {                          
                    
               
                    
                        cout<<"            graficar        ";
               
                     }
          
               }else{
                if(argc ==2) 
                {
                if(strcmp(argv[1],"-v")==0)
                {
                 cout << "Integrantes" << endl;
			     cout << "Carla Arteaga" << endl;
			     cout << "Juan Carlos Perez" << endl;
			     cout << "Paula Lineros" << endl;
           }
                }
           else{
			cout << "Opcion invalida" << endl;            
                        }
                        }
                        }
                        
                          
}
    system("PAUSE");
}



//for(int i=0; i<argc;i++)
  //  {
    //        cout<<"argumento ["<<i<<"]: "<<argv[i]<<endl;
            
    //}
