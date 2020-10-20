#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    /*
     *Primero declaramos las constantes que nos indican en el enunciado 
     * */
     const int NUM_SUPERM = 3;
     const float POINTS_SURFACE = 2.5;
     const float POINTS_PARKING = 3.5;
     const int POINTS_DELIVERY = 100;
     
	/*
     *Lo primero que nos piden es crear 3 vectores para almacenar los datos de nuestro supermercado. 
     * Uno almacenará datos de tipo entero(0-9), otro para datos reales(decimales) y otro de datos booleanos(true/false). 
     * Los representaremos de la siguiente forma: */
     float v_surface[NUM_SUPERM];
     int v_parking[NUM_SUPERM];
     bool v_delivery[NUM_SUPERM];
     int i = 0;
     int temp;
     
     /*
     *En el enunciado nos pide que introduzcamos los valores de forma iterativa, quiere decir que, 
     * debemos hacer un bucle para que introduzca los valores, de la siguiente forma: */
     
     //Dentro del propio while introduciremos los print para que muestre los mensajes correspondientes.
     while(i++<NUM_SUPERM){
         printf("INPUT DATA SUPERMARKET #%d \n",i);
         printf("SURFACE IN M2 ? >> \n");
         scanf("%f",&v_surface[i-1]);
         printf("DISABLED PARKING LOTS ? >> \n");
         scanf("%d",&v_parking[i-1]);
         printf("HAS DELIVERY (0-FALSE, 1-TRUE) ? >> \n");
         scanf("%d",&temp);
         v_delivery[i-1]=temp;
     };
      /*Ahora vamos a crear las variables con los puntos totales de cada superercado*/
      double t_supermarket1 = (v_surface[0]* POINTS_SURFACE)+(v_parking[0]*POINTS_PARKING)+(v_delivery[0]*POINTS_DELIVERY);
      double t_supermarket2 = (v_surface[1]* POINTS_SURFACE)+(v_parking[1]*POINTS_PARKING)+(v_delivery[1]*POINTS_DELIVERY);
      double t_supermarket3 = (v_surface[2]* POINTS_SURFACE)+(v_parking[2]*POINTS_PARKING)+(v_delivery[2]*POINTS_DELIVERY);
      
      /**En el enunciado nos indica que el supermercado con mayor cantidad de puntos, 
       * en caso de que sean iguales ganará el supermercado que haya sido introducido antes.
        En este apartado utilizaré condiciones para conseguir el supermercado ganador. */
        
        /*
         * Ya que el resultado se tiene que mostrar sin decimales y sin redondear, he optado por pasar los numero reales a enteros
         * simplemente creando una variable int e introducir los valores reales.*/
      if(t_supermarket1>t_supermarket2){
          if(t_supermarket1>t_supermarket3){
              int result = t_supermarket1;
              int v_s = v_surface[0]*POINTS_SURFACE;
              int v_p = v_parking[0]*POINTS_PARKING;
              int v_d = v_delivery[0]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #1 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }else if (t_supermarket1==t_supermarket3){
              int result = t_supermarket1;
              int v_s = v_surface[0]*POINTS_SURFACE;
              int v_p = v_parking[0]*POINTS_PARKING;
              int v_d = v_delivery[0]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #1 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }else{
              int result = t_supermarket3;
              int v_s3 = v_surface[2]*POINTS_SURFACE;
              int v_p3 = v_parking[2]*POINTS_PARKING;
              int v_d3 = v_delivery[2]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #3 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s3);
              printf("PARKING POINTS: %d \n",v_p3);
              printf("DELIVERY POINTS: %d \n",v_d3);
          }
      }else if(t_supermarket2>t_supermarket1){
          if(t_supermarket2>t_supermarket3){
              int result = t_supermarket2;
              int v_s = v_surface[1]*POINTS_SURFACE;
              int v_p = v_parking[1]*POINTS_PARKING;
              int v_d = v_delivery[1]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #2 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }else if (t_supermarket2==t_supermarket3){
              int result = t_supermarket2;
              int v_s = v_surface[1]*POINTS_SURFACE;
              int v_p = v_parking[1]*POINTS_PARKING;
              int v_d = v_delivery[1]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #2 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }else{
              int result = t_supermarket3;
              int v_s3 = v_surface[2]*POINTS_SURFACE;
              int v_p3 = v_parking[2]*POINTS_PARKING;
              int v_d3 = v_delivery[2]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #3 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s3);
              printf("PARKING POINTS: %d \n",v_p3);
              printf("DELIVERY POINTS: %d \n",v_d3);
          }
      }else {
          if(t_supermarket1>t_supermarket3){
              int result = t_supermarket1;
              int v_s = v_surface[0]*POINTS_SURFACE;
              int v_p = v_parking[0]*POINTS_PARKING;
              int v_d = v_delivery[0]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #1 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }else if (t_supermarket1==t_supermarket3){
              int result = t_supermarket1;
              int v_s = v_surface[0]*POINTS_SURFACE;
              int v_p = v_parking[0]*POINTS_PARKING;
              int v_d = v_delivery[0]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #1 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }else{
              int result = t_supermarket3;
              int v_s = v_surface[2]*POINTS_SURFACE;
              int v_p = v_parking[2]*POINTS_PARKING;
              int v_d = v_delivery[2]*POINTS_DELIVERY;
              printf("RESULTS \n");
              printf("BEST SUPERMARKET IS #3 \n");
              printf("TOTAL POINTS: %d \n",result);
              printf("SURFACE POINTS: %d \n",v_s);
              printf("PARKING POINTS: %d \n",v_p);
              printf("DELIVERY POINTS: %d \n",v_d);
          }
      }
}
