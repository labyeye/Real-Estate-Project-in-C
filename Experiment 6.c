#include<stdio.h>

//Making function for background
void backcyan(){
    printf("\e[46m");
}

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

void realestate(){
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
}
void clientdetails();
int clientbill();
int clientfind();

int search,low,high,mid,n,op;
int age[10],phnum[10],id[10],i;
char name[10];
int l[10],b[10],size[10],costpl[10],costph[10],costpf[10],disc[10],L=6000,F=5000,H=9000,age[10];
char prop[10];
float discount[10];

int main(){
    realestate();
    cyan();
    printf("\t\t\t\t__________________________Welcome to Real Estate____________________________\n\n");

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


	switch(op){
        case 1:
            clientdetails();
            break;
        case 2:
            //Printing and Entering the Details for the Real Estate Buyer Requirements
            clientbill();
            break;     
        case 3:
            clientfind();
			break;
    }
    }while(op!=4);
    return 0;
}

void clientdetails(){
    
//Priinting and Entering the data for Client
    cyan();
    printf("                       ------------------------------CLient Details------------------------------\n\n");
    printf("                              Enter the Number of Clients: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        white();
        printf("                                                   Enter Client ID: ");
        scanf("%d",&id[i]);
        printf("                                                   Enter Client Name: ");
        scanf(" %s",&name[i]);
        printf("                                                   Enter Client Age: ");
        scanf("%d",&age[i]);
        printf("                                                   Enter CLient Ph.Num:  ");
        scanf("%d",&phnum[i]);
    }
}
int clientbill(){
    for(i=0;i<n;i++){
        cyan();
        printf("                       ------------------------Real Estate Cost Calculator-----------------------\n\n");
        white();
        printf("                                  Enter Property Type Land(L) , Flat(F) , House(H) :");
        scanf(" %c",&prop[i]);
        printf("                                  Enter The Dimensions {Length and Breath} :         ");
        scanf("%d %d", &l[i],&b[i]);
        printf("\n\n");

        //Algorithm for Calculating the Cost of Property
        if(prop[i]=='L'){
            size[i]= l[i] * b[i];
            costpl[i] = L * size[i];
        }
        else if(prop[i]=='F'){
            size[i] = l[i] * b[i];
            costpf[i] = F * size[i];
        }
        else if(prop[i]=='H'){
            size[i]= l[i] * b[i];
            costph[i] = H * size[i];
        }

        //Printng all the Details given in above Code
        printf("\t\t\t\t\t------------------------------------------------\n");
        printf("\t\t\t\t\t|          Estimation of Property Cost         |\n");
        printf("\t\t\t\t\t------------------------------------------------\n");
        printf("\t\t\t\t\t|    1: Property Type: %c                       |\n",prop[i]);
        printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
        printf("\t\t\t\t\t|    2: Dimensions :   %d %d                     |\n",l[i],b[i]);
        printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
        printf("\t\t\t\t\t------------------------------------------------\n");
        printf("\t\t\t\t\t|       Estimate Property Cost Calcualted      |\n");
        printf("\t\t\t\t\t------------------------------------------------\n");
        if(age[i]>=50 && prop[i]=='L'){
            disc[i] = (costpl[i]/100)*2;
            discount[i] = disc[i]+costpl[i];
            printf("\t\t\t\t\t|         %.2f                               |",discount[i]);
        }
        else if(age[i]<50 && prop[i]=='L'){
            disc[i] = ((costpl[i]/100)*12);
            discount[i] = disc[i]+costpf[i];
            printf("\t\t\t\t\t|         %.2f                               |",discount[i]);
        }
        else if(age[i]>=50 && prop[i]=='F'){
            printf("\t\t\t\t\t|         %d                                 |",costpf[i]);
        }
        else if(age[i]<50 && prop[i]=='F' ){
            disc[i] = (costpf[i]/100)*10;
            discount[i] = disc[i]+costph[i];
            printf("\t\t\t\t\t|         %.2f                               |",discount[i]);
        }
        else if(age[i]>=50 && prop[i]=='H'){
            printf("\t\t\t\t\t|         %d                                 |",costph[i]);
        }
        else if(age[i]<50 && prop[i]=='H'){
            disc[i] = ((costph[i]/100)*10);
            discount[i] = disc[i]+costph[i];
            printf("\t\t\t\t\t|         %.2f                               |",discount[i]);
        }
        printf("\t\t\t\t\t|\t\t\t\t\t       |\n");
        if(prop[i]=='L'){
            printf("\t\t\t\t\t|              Government Approved             |\n");
        }
        else{
            printf("\t\t\t\t\t|           Government Not Approved            |\n");
        }
        printf("\t\t\t\t\t------------------------------------------------\n");   
    }
    return 0;
}
int clientfind(){
    
    printf("                                     Enter the Client ID you want to search: ");
    scanf("%d",&search);
    low = 0;
	high = n-1;
    while (low <= high){
        mid = (low + high)/2;
		if (id[mid] == search){
			printf("                          Cliend ID %d found at location: %d\n", search, mid);
			break;
		}
        else if(id[mid] < search){
            low = mid + 1;
        } 	
		else{
            high = mid - 1;
        }
    }
	if(low > high){
        printf("                            Not found! %d isn't present in the list\n", search);
    }
    return 0;
}