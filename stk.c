#include <stdio.h>   
#include <stdlib.h>
/* these arrays are just used to give the parameters to 'insert',   
   to create the 'people' array
*/

#define HOW_MANY 7 
char *names[HOW_MANY]= {"Simon", "Suzie", "Alfred", "Chip", "John", "Tim","Harriet"}; 
int ages[HOW_MANY]= {22, 24, 106, 6, 18, 32, 24};

/* declare your struct for a person here */
typedef  struct{   
    char*  name;
    int   age;
} person;

/* declare the people array here */   
person *people[7];

person* insert(char *name, int age,int i) {  
    /* put name and age into the next free place in the array parameter
       here */
    
    people[i] = malloc(sizeof(person));
    people[i]->name = name;
    people[i]->age = age;
    
    /* modify nextfreeplace here */
}

int main(int argc, char **argv) {    

	int index;
    for (index=0;index < HOW_MANY;index=index+1)   {
        insert(names[index], ages[index],index);
    }

    /* print the people array here*/
    for(index=0;index < HOW_MANY;index=index+1)     {
        printf("name: %s, age: %i\n",
               people[index]->name, people[index]->age);
    }
    return 0;
}
