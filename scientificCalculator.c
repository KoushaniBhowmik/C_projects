#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int a,b,i,l,m,choice;
    float k,e;
    
	while(1){
		
		printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4,Division\n5.Remainder\n6.Square root\n7.Power\n8.Percentage\n9.Logarithimic value\n10.Facorial\n11.exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
		
			case 1:
			printf("Enter the first number:");
		    scanf("%d",&a);
		    printf("Enter the second number:");
		    scanf("%d",&b);
		    printf("sum is %d\n",a+b);
		    break;
		
		    case 2: 
		    printf("Enter the first number:");
		    scanf("%d",&a);
		    printf("Enter the second number:");
		    scanf("%d",&b);
		    printf("Ans is :%d\n",a-b);
		    break;
		
		    case 3: 
		    printf("Enter the first number:");
		    scanf("%d",&a);
		    printf("Enter the second number:");
		    scanf("%d",&b);
		    printf("Ans is :%d\n",a*b);
		    break;
		
		    case 4: 
		    printf("Enter the first number:");
		    scanf("%d",&a);
		    printf("Enter the second number:");
		    scanf("%d",&b);
		    printf("Ans is :%d\n",a/b);
		    break;
		
		    case 5: 
		    printf("Enter the first number:");
		    scanf("%d",&a);
		    printf("Enter the second number:");
		    scanf("%d",&b);
		    printf("Ans is :%d\n",a%b);
		    break;
		
		    case 6: 
		    printf("Enter the number:");
		    scanf("%d",&a);
		    int g;
		    for(i=0;i<=a/2;i++){
			    if(i*i==a){
				   printf("Ans is :%d\n",i); 
				   g=1;
				   break;
			   }
		    }
		       if(g!=1){
			      printf("Invalid number\n");
		       }
		    break;
		
		    case 7: 
		    printf("Enter the first number:");
		    scanf("%d",&a);
		    printf("Enter the second number:");
		    scanf("%d",&b);
		    int c=pow(a,b);
		    printf("Ans is :%d\n",c);
		    break;
		
		    case 8:
		    printf("Enter the first number:");
		    scanf("%f",&k);
		    printf("Ans is :%.2f\n",k/100);
		    break;
		
		    case 9:
		    printf("Enter the number:");
		    scanf("%d",&l);
		    printf("Enter the base:");
		    scanf("%d",&m);
			e=log2(l)/log2(m);
			printf("Ans is :%f\n",e);
		    break;
		
		    case 10:
		    printf("Enter the number:");
		    scanf("%d",&a);
		    int f=1;
		    for(i=a;i>=1;i--){
			    f=f*i;
		    }
		    printf("Ans is :%d\n",f);
		    break;
		
		    case 11: exit(0);
		    break;
		    
		    default:printf("wrong choice\n");
	    }
	}
}