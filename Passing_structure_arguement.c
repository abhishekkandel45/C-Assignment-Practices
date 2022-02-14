#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[20];
   float percentage;
   char temp;
};
struct student record; // Global declaration of structure
int main(){
   record.id=1;
   strcpy(record.name, "Raju");
   record.percentage = 86.5;
   structure_demo(record.id,record.name,record.percentage);
   return 0;
}
void structure_demo(int id,char name[],float percentage){
   printf(" Id is: %d \n", id);
   printf(" Name is: %s \n", name);
   printf(" Percentage is: %.2f \n",percentage);
}
