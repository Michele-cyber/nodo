int main(int argc, char *argv[]) {

	Nodo *head=NULL ;

    
	
	
	stampa(head);

    
    Z1;
    Z1.x=5;
    Z1.next=NULL;
    head=&Z1;
   

    
    
	
	
	
	
	stampa(head);

    
    Z2;
    Z2.x=7;
    Z2.next=NULL;
    Z2.next=head;
    head=&n2;
    
    
	
	
	
	
	stampa(head);

    Z3;
    Z3.x=1;
    Z3.next=NULL;
    Z3.next=head;
    head=&Z3;
    
   
   
   
  
    stampa(head);
    
    Z4;
    Z4.x=15;
    Z4.next=NULL;
    Z4.next=head;
    head=&Z4;
    
    stampa(head);
    
    
    return 0 ;
}





void  stampa (Nodo * head)
{
    Nodo *temp;

    tem =head;
    if(temp!=NULL){
	while (temp!= NULL) {
        printf ("\n %d \n" , temp->v);
        temp=temp->next ;
    }
	}else{
		printf("NULL\n");
	}
    printf ("\n");
}
