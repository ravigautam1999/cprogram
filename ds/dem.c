#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Refugee {
    int age;
    int userId;
    char name[120];
    char occupation[120];
    struct Refugee* next;
};

void InsertData (struct Refugee** currentNode, int age, int userId, char name[], char occupation[]){
    struct Refugee* temp = (struct Refugee*) malloc (sizeof(struct Refugee));
    temp->age = age;
    temp->userId= userId;
    strcpy(temp->name , name);
    strcpy(temp->occupation, occupation);
    temp->next = NULL;
     if((*currentNode) == NULL){
        (*currentNode) = temp;
    }
    else{
        temp-> next = (*currentNode);
        (*currentNode) =temp;
    }
    
}

void DeleteAPerticularUser(struct Refugee** CurrentNode, int user) {
    struct Refugee* ptr;
    struct Refugee* temp;
    ptr = (*CurrentNode);
    if(ptr == NULL){
       printf("List Empty\n");
    }
    else{
        while(ptr != NULL && ptr->userId != user){
            temp=ptr;
            ptr=ptr->next;
        }
        if(ptr != NULL){
            //cout <<"temp:"<< temp->data <<endl;
            //cout <<"ptr: "<<ptr->data <<endl;
            temp->next = temp->next->next;
            printf("%d Deleted Successfully\n", ptr->userId);
            free(ptr);
        }
        else{printf("Node Not Found");}
    }

}


void sortData(struct Refugee** CurrentNode) {
         
            struct Refugee *current , *index = NULL;
            current = (*CurrentNode);
            int temp;
            int temp1;
            char temp2[200], temp3[300];
            
            if(current == NULL) {
                return;
            }
            else {
                while(current != NULL) {
                    index = current->next;
                    while(index != NULL) {
                        if(current->age > index->age) {
                            temp = current->age;
                            temp1 = current->userId;
                            strcpy(temp2 , current->name);
                            strcpy(temp3 , current->occupation);
                            
                            current->age = index->age;
                            current->userId = index->userId;
                            strcpy(current->name , index->name);
                            strcpy(current->occupation, index->occupation);
                            
                            index->age = temp;
                            index->userId= temp1;
                            strcpy(index->name, temp2);
                            strcpy(index->occupation, temp3);
                            
                        }
                        index = index->next;
                    }
                    current = current->next;
                }    
            }
        }
        
        

void print(struct Refugee** currentNode) {
    struct Refugee* temp= (*currentNode);
    
    if(temp == NULL){printf("List NULL\n");}
    else{
        printf("Data : \n");
        while( temp != NULL){
            printf("User Id: %d\n", temp->userId);
            printf("name: %s\n", temp->name);
            printf("Occupation: %s\n", temp->occupation);
            printf("Age: %d\n", temp->age);
        
        temp = temp-> next;
        
    }
    printf("\n");
    }
    
}

void DisplayY(struct Refugee** currentNode) {
    struct Refugee* temp= (*currentNode);
    sortData(&(*currentNode));

    printf("Data : \n");
            printf("User Id: %d\n", temp->userId);
            printf("name: %s\n", temp->name);
            printf("Occupation: %s\n", temp->occupation);
            printf("Age: %d\n", temp->age);
    printf("\n");
    
    
}

void DisplayP(struct Refugee** currentNode, int userId) {
    struct Refugee* temp= (*currentNode);
    
    if(temp == NULL){printf("List NULL\n");}
    else{
        
        while( temp != NULL && temp->userId != userId){
        temp = temp-> next;
        }
    }
    if(temp == NULL){printf("User Not found\n");}
    else{
            printf("Data : \n");
            printf("User Id: %d\n", temp->userId);
            printf("name: %s\n", temp->name);
            printf("Occupation: %s\n", temp->occupation);
            printf("Age: %d\n", temp->age);
    printf("\n");
    }
    
}



int main()
{
    struct Refugee* Root = NULL;
    
    
    int age, userId, n,r=1;
    char name[100], occupation[100];
    

    while(r != 0){
    int v; 

    printf("\nWhat would you like to do:-\n1.Enter Information\n2.Display Information\n3.Display Information of Individual\n4.Show Youngest person\n5.Remove a User\n6.Sort Data\n7.Quit\n\n");
    printf("Enter a choice? ");
    scanf("%d", &v);
    


    switch(v){
        case 1: {
            printf("\nEnter name? ");
            scanf("%s", name);
            printf("\nEnter user Id? ");
            scanf("%d", &userId);
            printf("\nEnter Age? ");
            scanf("%d", &age);
            printf("\nEnter occupation? ");
            scanf("%s", occupation);
            
            InsertData(&Root, age, userId, name, occupation);
            break;}

        case 2:
            {print(&Root);
            break;}
        case 3:
            {printf("Enetr UserId? ");
            scanf("%d", &n);
            DisplayP(&Root, n);
            break;
            }
        case 4:
            {DisplayY(&Root);
            break;
            }
        case 5:
            {printf("Enetr UserId? ");
            scanf("%d", &n);
            DeleteAPerticularUser(&Root, n);
            break;}
        case 6: 
            {sortData(&Root);
            break;}
        case 7:
            {r=0;
            break;}
        default:
            {printf("Wrong Selection\n");
            break;}
            
    }
   
    
    };

    return 0;
}
