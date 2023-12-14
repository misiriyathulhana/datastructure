
#include<stdio.h>
#include<stdlib.h>

struct node
	{
		int data;
		struct node*link;
	};

struct node *header=NULL;

void insfrnt(int item)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;	
	if(header==NULL)
	{
        header=new;
        new->link=NULL;
	}
	else
    {   
        new->link=header;//here header is a pointer and it pointes to th old node so the new node link will point to old node
        header=new;//header is pointed  to new node
	}	
}

void insend(int item)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;	
	new->link=NULL;

	if(header==NULL)
	{
	header=new;
	}
	else{	
	struct node *temp=header;
	while(temp->link!=NULL)
	{
		temp=temp->link;	
	}
	temp->link=new;
		}	
}

void inspos(int item,int key)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;
	struct node *temp=header;
	while((temp->data!=key) && (temp->link!=NULL))
	{
		temp=temp->link;	
	}	
    if((temp->link==NULL) && (temp->data==key))
    {
        new->link=NULL;
		temp->link=new;
    }

	else if((temp->link==NULL) && (temp->data!=key))
	{
	printf("key not found");
	}

	else
    {	
		new->link=temp->link;
		temp->link=new;
		}	
}

void delfrnt()
{   if (header==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *temp=header;
        header=temp->link;
        free(temp);
    }
}

void delend()
{
if (header==NULL)
    {
        printf("list is empty");
    }
    else if(header->link == NULL)  
    {  
        header=NULL;  
        
    }  
    else
    {
        struct node *temp1=header;
        struct node *temp2=header;
        while(temp1->link!=NULL)
        {   
            temp2=temp1;
            temp1=temp1->link;
        }
        temp2->link=NULL;
        free(temp1);
    }
}

void delpos(int key)
{
	if (header==NULL)
    {
        printf("list is empty");
    }
    
    else
    {
        struct node *temp1=header;
        struct node *temp2=header;
	while((temp1!=NULL) && (temp1->data!=key))
	{
		temp2=temp1;
            	temp1=temp1->link;
	}

	if(temp1 == NULL)
	{
		printf("Key not found");
	}
	else
	{
		if(temp2->link == NULL)
		{
			free(temp2);
			header = NULL;
		}
		else
		{
			if(temp1 == header)
			{
				header = temp1->link;
			}
			else
			{
				temp2->link = temp1->link;
			}			
			free(temp1);
		}
	}
    }
       
}

void disp()
{	if(header==NULL)
	{
		printf("\n ---list is empty--- \n");	
	}
	else{
            struct node *temp=header;
            printf("\nentered items are:\n");
            while(temp!=NULL)
            {
                    printf("  %d  ",temp->data);
                    temp=temp->link;	
            }
            printf("  \n  ");	
	}
}

void srch(int key)
{	int count=0;
	if(header==NULL)
	{
		printf("\n ---list is empty--- \n");	
	}
	else{
		struct node *temp1=header;
	       	
        while((temp1->data!=key) && (temp1->link!=NULL))
        {
            
            temp1=temp1->link;	
		count++;
        }	
        
         if((temp1->link==NULL) && (temp1->data!=key))
        {
            printf("key not found");
        }
	else
	   {
		printf("\nkey fount at position %d\n",count+1);		
	   }

	}
}


int main()
{ 	int z,k,c;	
	printf("------------------LINKED LIST OPERATIONS------------------\n");
	while(1)   
    {  
        
        printf("\n1.Insert at front\n2.Insert at end\n3.Insert after position\n4.Delete at front\n5.Delete at end\n6.Delete node at any position\n7.Display Elements\n8.Search position of Element\n9.Exit");  
        printf("\nSelect the options\n");         
        scanf("%d",&c);  
        switch(c)  
        {  
            case 1:  
                    printf("\nenter the data to insert at front \n");
                    scanf("%d",&z);
                    insfrnt(z);
                    break;
            case 2:  
                    printf("\nenter the data to insert at end \n");
                    scanf("%d",&z);
                    insend(z);
                    break;
            case 3:  
                    disp();
                    printf("\n---select the position---\n");
                    scanf("%d",&k);
                    printf("\nenter the data to insert after the position \n");
                    scanf("%d",&z);
                    inspos(z,k);
                    break;
            case 4:  
                    delfrnt();       
                    break;  
            case 5:  
                    delend();        
                    break;  
            case 6:
                    disp();
                    printf("\n---select the position---\n");
                    scanf("%d",&k);  
                    delpos(k);          
                    break;  
            case 7:   
                    disp();        
                    break;  
            case 8: printf("\n---enter the key---\n");
                    scanf("%d",&k);  
                    srch(k);          
                    break;  
                    
	    case 9: printf("\nbye bye..");
                    exit(0);  
                    break;
			 
            default:  
                    printf("wrong input..");  
        }  
    }  
	return 0;

}



