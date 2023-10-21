#include<stdio.h>

//Making function for color
void yellow(){
  printf("\033[1;33m");
}
void red (){
  printf("\033[1;31m");
}
void white(){
    printf("\033[0;37m");
}
void cyan(){
    printf("\033[0;36m");
}
void green(){
    printf("\e[0;32m");
}
void reset(){
    printf("\e[0m");
}

//Declaring User Defined Functions
void clientdetails();
void billcreate();
int clientdetailcheck();

//Defining Datatypes globally
int op;
int search,binn;
int age[10],phnum[10],id[10],i,j,l,b,size,costpl,costph,costpf,disc,L=6000,F=5000,H=9000;
int *a=age,*p=phnum,*o=id;
char name[10],prop;
char *y=name;
float discount;
int search,*ser,low,high,mid;


int main(){

	//Printing Real Estate 
	printf("\n");
    red();
	printf("        *************                *****  *****   ***   **        *****  ****  *****   ***   *****  *****                *************\n");
    yellow();
	printf("        *  **   **  *                *   *  *      *   *  **        *      *       *    *   *    *    *                    *  **   **  *\n");
    red();
    printf("        *  **   **  *********        *****  *****  *****  **        *****  ****    *    *****    *    *****       *********   **   **  *\n");
    yellow();
    printf("        *  **   **  * ***** *        * *    *      *   *  **        *         *    *    *   *    *    *           * ***** *   **   **  *\n");
    red();
    printf("        ***************   ***        *  *   *****  *   *  *****     *****  ****    *    *   *    *    *****       ***   ****************\n\n");
    white();
    printf("\n\n");

    cyan();
    printf("\t\t\t\t    __________________________Welcome to Real Estate____________________________\n\n");

    

    do{
    reset();
    green();
    printf("                                            1: Client Details\n");
    printf("                                            2: Property Estimation\n");
    printf("                                            3: Client Details Location\n");
    printf("                                            4: Exit\n\n");
    reset();
    printf("                                            Enter Choice: ");
    scanf("%d",&op);
    printf("\n");


	switch(op){
        case 1:
            //Printing and Entering the data for Client
            clientdetails();
            break;
        case 2:
            //Printing and Entering the Details for the Real Estate Buyer Requirements
            billcreate(); 
            break;     
        case 3:
            clientdetailcheck();
			break;
    }
    }while(op!=4);
    return 0;
}


//Defining user defined functions
void clientdetails(){
    
    cyan();
    printf("\t\t\t\t    ------------------------------CLient Details------------------------------\n\n");
    printf("\t\t\t\t                            Enter the Number of Clients: \n");
    scanf("%d",&j);
    for(i=0;i<j;i++){
        reset();
        printf("                                                   Enter Client ID: ");
        scanf("%d",o+i);
        printf("                                                   Enter Client Name: ");
        scanf(" %s",y+i);
        printf("                                                   Enter Client Age: ");
        scanf("%d",a+i);
        printf("                                                   Enter CLient Ph.Num:  ");
        scanf("%d",p+i);
    }
}
void billcreate(){
    
    cyan();
    printf("\t\t\t\t    ------------------------Real Estate Cost Calculator-----------------------\n\n");
    white();
    printf("                                  Enter Property Type Land(L) , Flat(F) , House(H) :");
    scanf(" %c",&prop);
    printf("                                  Enter The Dimensions {Length and Breath} :         ");
    scanf("%d %d", &l,&b);
    printf("\n\n");

    //Algorithm for Calculating the Cost of Property
    if(prop=='L'){
        size = l * b;
        costpl = L * size;
    }
    else if(prop=='F'){
        size = l * b;
        costpf = F * size;
    }
    else if(prop=='H'){
        size = l * b;
        costph = H * size;
    }      
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t|          Estimation of Property Cost         |\n");
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t|    1: Property Type: %c                       |\n",prop);
    printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t|    2: Dimensions :   %d %d                     |\n",l,b);
    printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t|       Estimate Property Cost Calcualted      |\n");
    printf("\t\t\t\t\t------------------------------------------------\n");
    if(*a>=50 && prop=='L'){
        disc = (costpl/100)*2;
        discount = disc+costpl;
        printf("\t\t\t\t\t|         %.2f                            |\n",discount);
    }
    else if(*a<50 && prop=='L'){
        disc = ((costpl/100)*12);
        discount = disc+costpf;
        printf("\t\t\t\t\t|         %.2f                             |\n",discount);
    }
    else if(*a>=50 && prop=='F'){
        printf("\t\t\t\t\t|         %d                              |\n",costpf);
    }
    else if(*a<50 && prop=='F' ){
        disc = (costpf/100)*10;
        discount = disc+costph;
        printf("\t\t\t\t\t|         %.2f                            |\n",discount);
    }
    else if(*a>=50 && prop=='H'){
        printf("\t\t\t\t\t|         %d                              |\n",costph);
    }
    else if(*a<50 && prop=='H'){
        disc = ((costph/100)*10);
        discount = disc+costph;
        printf("\t\t\t\t\t|         %.2f                            |\n",discount);
    }
    printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
    if(prop=='L'){
        printf("\t\t\t\t\t|              Government Approved             |\n");
    }
    else{
        printf("\t\t\t\t\t|           Government Not Approved            |\n");
    }
    printf("\t\t\t\t\t------------------------------------------------\n");
    printf("\n");  
}
int clientdetailcheck(){
    
    printf("\t\t\t\t    Client Location Finder\n\n");
    printf("\t\t\t\t  Enter the Client ID to be searched: ");
	scanf(" %d",&search);
    ser=&search;
    low = 0;
	high = 0;
    while (low <= high){
        mid = (low + high)/2;
		if (id[mid] == *ser){
			printf("                          Cliend ID %d found at location: %d\n", search, mid);
			break;
		}
        else if(id[mid] < *ser){
            low = mid + 1;
        } 	
		else{
            high = mid - 1;
        }
    }
	if(low > high){
        printf("                            Cliend ID Not found! %d isn't present in the list\n", search);
    }
    return 0;
}    
   
