//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int j=5;
    struct node a,b,*head,c,first ;
    a.value = j;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    b.next=&c;
    c.value=head->value+6;
    c.next=NULL;

    head=&first;
    first.value=2;
    first.next=&a;

    printf("%d\n", head ->value ); // first
    printf("%d\n", head ->next->value ); // a
    printf("%d\n", head->next->next->value);// b
    printf("%d\nloop\n", head->next->next->next->value);// c
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
    4. Print by head
*/

    
     /*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
    */
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
    */
    int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp=tmp->next;
        }
    printf("\nwhile\n");

    
    
    /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         
           // What is missing???
        
    */
    tmp=head;
    while(1){
            printf("%3d", tmp->value);
            
            if(tmp->next==NULL){
                break;
            }tmp=tmp->next;
    }
    /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
    */
    
    head=(NodePtr)malloc(sizeof(struct node));
    tmp=head;
    
    printf("\nmalloc\n");
    for(i=2;i<=11;i+=3){
        tmp->value=i;
        printf("%3d", tmp->value);
        if(i==11){
            tmp->next=NULL;
        }
        else{
            tmp->next=(NodePtr)malloc(sizeof(struct node));
            tmp=tmp->next;
        }
    }  
    
    /*  Exercise VI Free all node !!
         //use a loop to help
          
    */
    printf("\nfree\n");
    while(head){
        tmp=head;
        head=head->next;
        printf("%3d", tmp->value);
        free(tmp);
    }
    
    
    return 0;}
    
