#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node NODETYPE;

int main(int argc, const char *argv[])
{
    int m,n;
    m=atoi(argv[1]);
    n=atoi( argv[2]);
	NODETYPE *head, *p, *item;
	int i, count = 0;

	head = (NODETYPE *) malloc(sizeof(NODETYPE) * 100);
	item = head;
	for (i = 1; i < m+1; i++) {
		item->data = i;
		if (i == m) 
			item->next = head;
		 else
		
			item->next = item + 1;
   

		item++;

	}

    item = head ;
    for(i = 1; i < m+1; i++)
	{
        while (++count < n)
        {p = item;
        
        item = item -> next;}
       
       
        
        printf ("%3d: %3d out",i,item -> data);
        if(i%5 == 0 )

        printf ("\n");
       p ->next = item -> next;
       
       item = p -> next; 
        count = 0;    
    }
	
	

free(head);

	return 0;
}
