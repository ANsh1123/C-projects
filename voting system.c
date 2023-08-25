#include<stdio.h>
#define candidate1 "Ansh Mishra"
#define candidate2 "Rahul Gandhi"
#define candidate3 "Priya"
#define candidate4 "Hari"
#define candidate5 "Shyam"

int vote1=0, vote2=0, vote3=0, vote4=0,vote5=0,wastevotes=0;

void castVote()
{
    int a;
    printf("\n\n ### Please choose your Candidate ####\n\n");
    printf("\n 1. %s", candidate1);
    printf("\n 2. %s", candidate2);
    printf("\n 3. %s", candidate3);
    printf("\n 4. %s", candidate4);
    printf("\n5. %s",candidate5);
    printf("\n 6. %s", "None of These");
    printf("Enter your choice :");
    scanf("%d",&a);
    switch(a)
    {
     case 1: vote1++; break;
    case 2: vote2++; break;
    case 3: vote3++; break;
    case 4: vote4++; break;
    case 5: vote5++; break;
    case 6: wastevotes++;break;
    default: printf("\n Error: Wrong Choice !! Please make sure to vote appropriate candidate");
    }
    printf("Thank you for voting!");
}
void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", candidate1, vote1);
printf("\n %s - %d ", candidate2, vote2);
printf("\n %s - %d ", candidate3, vote3);
printf("\n %s - %d ", candidate4, vote4);
printf("\n %s - %d",candidate5,vote5);
printf("\n There are total of %d waste votes.", wastevotes); 
}
void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(vote1>vote2 && vote1>vote3 && vote1 >vote4 && vote1>vote5)
    printf("[%s] is leading.",candidate1);
    else if (vote2>vote3 && vote2>vote4 && vote2>vote5 && vote2>vote1)
    printf("[%s]is leading.",candidate2);
    else if(vote3>vote4 && vote3>vote5 && vote3>vote2 && vote3 >vote1)
    printf("[%s] is leading.",candidate3);
    else if(vote4>vote1 && vote4>vote2 && vote4 >vote3 && vote4>vote5)
    printf("[%s]is leading.",candidate4);
    else if(vote5>vote1 && vote5>vote2 && vote5>vote3 && vote5>vote4)
    printf("[%s] is leading.",candidate5);
    else
    printf("----- Draw situation----");  
}
int main()
{
    int choice;
    do{
        printf("\n##Welcome to the Voting System##\n");
        printf("\n1) Cast the Vote to candidate.");
        printf("\n2) Find about the vote count.");
        printf("\nFind about the leading candidate.");
        printf("\nEnter 0 to exit.");
        printf("Enter the choice you want :\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: castVote();break;
        case 2: votesCount();break;
        case 3: getLeadingCandidate();break;
        default: printf("\n Error: Invalid Choice");
            
        }
    }while (choice!=0);
    return 0;  
}