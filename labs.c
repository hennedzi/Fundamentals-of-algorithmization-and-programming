#include <stdio.h>


int main() {
   float mapScale;
   float distanceBetweenPoints;


   printf("Введите масштаб(Количество км в одном см)!\n");
   scanf("%f",&mapScale);
   printf("Введите расстояние между точками)!\n");
   scanf("%f",&distanceBetweenPoints);


   mapScale=mapScale>0?mapScale:1;
   distanceBetweenPoints=distanceBetweenPoints>0?distanceBetweenPoints:1;


   float result = distanceBetweenPoints*mapScale;
   printf("result =%f \n",result);
   return 0;
}

//Вторая лаба

#include <stdio.h>


int main() {
   int n=0;
   int temp=0;
   printf("Для прерывания последовтельности введите 0 или отрицательное число\n");
   do{
       scanf("%d",&n);
       temp=n>temp?n:temp;
   } while (n>0);


   printf("Max: %d",temp);
   return 0;
}



//Третья лаба

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
   char *row = (char *) malloc(50*sizeof(char ));
   scanf("%[^\n]s",row);
   printf("%d", strlen(row));
   printf("\n%s",row);
   int temp=0;
   for (int i = 0; i < strlen(row); i++) {
       if(*(row+i)==' '){
           temp++;
       }
   }


   printf("\nКоличество пробелов в строке\n");
   printf("%d ",temp);
   return 0;
}

//Четвертая лаба

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


float Treeangle(float a,float h);
float Trap(float a,float b, float h);


int main(int argc, char *argv[]) {
   float (*treeangle)(float ,float );
   float (*trap)(float ,float,float );


   treeangle=Treeangle;
   trap=Trap;
   float result=0;
   if (argc == 3)
       result = treeangle((int) argv[1], (int) argv[2]);
   if(argc==4)
       result = trap((int)argv[1],(int)argv[2],(int)argv[3]);


   printf("%d\n",result);
   return 0;
}
float Treeangle(float a,float h){
   return 0.5*a*h;
}
float Trap(float a,float b, float h){
   return ((a+b)/2)*h;
}
