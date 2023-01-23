#include<stdio.h>

void route1();
void route2();
void route3();
void route4();
void route5();

int main(){
   int a,route;
   char b;
   char c;
   char f;
   printf("-------------------------------------------------------------------------------------------\n");

   printf("Welcome\n");

   printf("-------------------------------------------------------------------------------------------\n");

   printf("enter your first name:");
   scanf("%s",&b);

   printf("enter your last name:");
   scanf("%s",&f);

   printf("enter your email:");
   scanf("%s",&c);

   printf("enter your password:\n");
   scanf("%d",&a);
 
   printf("-------------------------------------------------------------------------------------------\n");

   printf("enter your number for given routes\n(1)Kalupur to sci city\n(2)sci city to gota\n(3)gota to manigar\n(4)kalupur to naroda\n(5)Akhbarnagar to kalupur:"); 
   scanf("%d",&route);

   switch(route){
      case 1:route1();
      break;
      case 2:route2();
      break;
      case 3:route3();
      break;
      case 4:route4();
      break;
      case 5:route5();
      break;
   };
   return 0; 
}

void route1(){

   printf("Cost:30 rupees\nduration:45 min\n");
   return;
}

void route2(){
   printf("Cost:10 rupees\nduration:10 min\n");
   return;
}

void route3(){
   printf("Cost:50 rupees\nduration:1 hr\n");
   return;
}

void route4(){
   printf("Cost:15 rupees\nduration:20 min\n");
   return;
}

void route5(){
   printf("Cost:30 rupees\nduration:45 min\n");
   return;
}

