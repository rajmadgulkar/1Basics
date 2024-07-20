#include<stdio.h>
#include<string.h>
struct batsMen{
       int jerNo;
       char pname[20];
       float avg;
       struct batsMen *next;
};
void main(){                                                                        
    struct batsMen obj1,obj2,obj3;  

    struct batsMen *head=&obj1;

    head->jerNo=7;                                                              
    strcpy(head->pname,"M S Dhoni");                                            
    head->avg=9.8;   

    obj1.next=&obj2;   

    obj1.next->jerNo=18;                                                        
    strcpy(obj1.next->pname,"Virat Kohli");                                     
    obj1.next->avg=9.6;   

    obj2.next=&obj3;

    obj2.next->jerNo=45;                                                        
    strcpy(obj2.next->pname,"Rohit Sharma");                                    
    obj2.next->avg=9.5; 

     printf("%d\n",head->jerNo);                                                 
     printf("%s\n",head->pname);                                                 
     printf("%f\n",head->avg);   

     printf("%d\n",obj1.next->jerNo);                                            
     printf("%s\n",obj1.next->pname);                                            
     printf("%f\n",obj1.next->avg);

     printf("%d\n",obj2.next->jerNo);
     printf("%s\n",obj2.next->pname); 
     printf("%f\n",obj2.next->avg);
}
/*
7
M S Dhoni
9.800000
18
Virat Kohli
9.600000
45
Rohit Sharma
9.500000
*/