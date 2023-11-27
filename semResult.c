#include<stdio.h>

float SGPA,YGPA,YGPA1,YGPA2,YGPA3,YGPA4,YGPA5,DGPA,CGPA;

void sgpa(){
	float credits;
	int creditIndex;
	printf("Enter your total Credits:");
	scanf("%f",&credits);
	printf("Enter your total Credit Index:");
	scanf("%d",&creditIndex);
	
	SGPA=(creditIndex/credits);
	printf("Your SGPA is: %f\n",SGPA);
}

void ygpa(){
	float creditOdd,creditEven;
	int creditIndexOdd,creditIndexEven;
	printf("Enter your total Credits Odd semester:");
	scanf("%f",&creditOdd);
	printf("Enter your total Credits Even semester:");
	scanf("%f",&creditEven);
	printf("Enter your total Credits Index Odd semester:");
	scanf("%d",&creditIndexOdd);
	printf("Enter your total Credits Index Even semester:");
	scanf("%d",&creditIndexEven);
	
	YGPA=((creditIndexOdd+creditIndexEven)/(creditOdd+creditEven));
	printf("Your YGPA is: %f\n",YGPA);
}

void dgpa(){
	int year;
	float creditOdd1,creditEven1,creditOdd2,creditEven2,creditOdd3,creditEven3,creditOdd4,creditEven4,creditOdd5,creditEven5;
	int creditIndexOdd1,creditIndexEven1,creditIndexOdd2,creditIndexEven2,creditIndexOdd3,creditIndexEven3,creditIndexOdd4,creditIndexEven4,creditIndexOdd5,creditIndexEven5;
	int YGPA1,YGPA2,YGPA3,YGPA4,YGPA5;
	printf("Enter your total year for DGPA:");
	scanf("%d",&year);
	if(year==5){
		
		printf("Enter your total Credits Odd semester of 1st year:");
	    scanf("%f",&creditOdd1);
	    printf("Enter your total Credits Even semester of 1st year :");
	    scanf("%f",&creditEven1);
	    printf("Enter your total Credits Index Odd semester of 1st year:");
	    scanf("%d",&creditIndexOdd1);
	    printf("Enter your total Credits Index Even semester of 1st year:");
	    scanf("%d",&creditIndexEven1);
	    
	    YGPA1=((creditIndexOdd1+creditIndexEven1)/(creditOdd1+creditEven1));
		
		printf("Enter your total Credits Odd semester of 2nd year:");
	    scanf("%d",&creditOdd2);
	    printf("Enter your total Credits Even semester of 2nd year :");
	    scanf("%d",&creditEven2);
	    printf("Enter your total Credits Index Odd semester of 2nd year:");
	    scanf("%d",&creditIndexOdd2);
	    printf("Enter your total Credits Index Even semester of 2nd year:");
	    scanf("%d",&creditIndexEven2);
	    
		YGPA2=((creditIndexOdd2+creditIndexEven2)/(creditOdd2+creditEven2));
		
		printf("Enter your total Credits Odd semester of 3rd year:");
	    scanf("%f",&creditOdd3);
	    printf("Enter your total Credits Even semester of 3rd year :");
	    scanf("%f",&creditEven3);
	    printf("Enter your total Credits Index Odd semester of 3rd year:");
	    scanf("%d",&creditIndexOdd3);
	    printf("Enter your total Credits Index Even semester of 3rd year:");
	    scanf("%d",&creditIndexEven3);
		
		YGPA3=((creditIndexOdd3+creditIndexEven3)/(creditOdd3+creditEven3));
		
		printf("Enter your total Credits Odd semester of 4th year:");
	    scanf("%f",&creditOdd4);
	    printf("Enter your total Credits Even semester of 4th year :");
	    scanf("%f",&creditEven4);
	    printf("Enter your total Credits Index Odd semester of 4th year:");
        scanf("%d",&creditIndexOdd4);
	    printf("Enter your total Credits Index Even semester of 4th year:");
        scanf("%d",&creditIndexEven4);
		
		YGPA4=((creditIndexOdd4+creditIndexEven4)/(creditOdd4+creditEven4));
		
		printf("Enter your total Credits Odd semester of 5th year:");
	    scanf("%f",&creditOdd5);
	    printf("Enter your total Credits Even semester of 5th year :");
	    scanf("%f",&creditEven5);
	    printf("Enter your total Credits Index Odd semester of 5th year:");
	    scanf("%d",&creditIndexOdd5);
	    printf("Enter your total Credits Index Even semester of 5th year:");
	    scanf("%d",&creditIndexEven5);
		
		YGPA5=((creditIndexOdd5+creditIndexEven5)/(creditOdd5+creditEven5));
		
		printf("Your DGPA is:%f\n",(YGPA1+YGPA2+YGPA3+YGPA4+YGPA5)/5);
	}
	else if(year==4){
		char entry;
		int L,N;
		printf("lateral entry(L) or normal entry(N)?enter L or N:");
		scanf("%s",&entry);
		if(entry=='N'){
			printf("Enter your total Credits Odd semester of 1st year:");
	        scanf("%f",&creditOdd1);
	        printf("Enter your total Credits Even semester of 1st year :");
	        scanf("%f",&creditEven1);
	        printf("Enter your total Credits Index Odd semester of 1st year:");
	        scanf("%d",&creditIndexOdd1);
	        printf("Enter your total Credits Index Even semester of 1st year:");
	        scanf("%d",&creditIndexEven1);
	    
	        YGPA1=((creditIndexOdd1+creditIndexEven1)/(creditOdd1+creditEven1));
			
			printf("Enter your total Credits Odd semester of 2nd year:");
	        scanf("%f",&creditOdd2);
	        printf("Enter your total Credits Even semester of 2nd year :");
            scanf("%f",&creditEven2);
	        printf("Enter your total Credits Index Odd semester of 2nd year:");
	        scanf("%d",&creditIndexOdd2);
	        printf("Enter your total Credits Index Even semester of 2nd year:");
	        scanf("%d",&creditIndexEven2);
	    
		    YGPA2=((creditIndexOdd2+creditIndexEven2)/(creditOdd2+creditEven2));
		
		    printf("Enter your total Credits Odd semester of 3rd year:");
	        scanf("%f",&creditOdd3);
	        printf("Enter your total Credits Even semester of 3rd year :");
	        scanf("%f",&creditEven3);
	        printf("Enter your total Credits Index Odd semester of 3rd year:");
	        scanf("%d",&creditIndexOdd3);
	        printf("Enter your total Credits Index Even semester of 3rd year:");
	        scanf("%d",&creditIndexEven3);
		
		    YGPA3=((creditIndexOdd3+creditIndexEven3)/(creditOdd3+creditEven3));
		 
		    printf("Enter your total Credits Odd semester of 4th year:");
	        scanf("%f",&creditOdd4);
	        printf("Enter your total Credits Even semester of 4th year :");
	        scanf("%f",&creditEven4);
	        printf("Enter your total Credits Index Odd semester of 4th year:");
	        scanf("%d",&creditIndexOdd4);
	        printf("Enter your total Credits Index Even semester of 4th year:");
	        scanf("%d",&creditIndexEven4);
		
		    YGPA4=((creditIndexOdd4+creditIndexEven4)/(creditOdd4+creditEven4));
		
			printf("Your DGPA is:%f\n",(YGPA1+(1.5*YGPA2)+(1.5*YGPA3)+(1.5*YGPA4))/5);
		}
		else{
		    printf("Enter your total Credits Odd semester of 2nd year:");
	        scanf("%f",&creditOdd2);
	        printf("Enter your total Credits Even semester of 2nd year :");
            scanf("%f",&creditEven2);
	        printf("Enter your total Credits Index Odd semester of 2nd year:");
	        scanf("%d",&creditIndexOdd2);
	        printf("Enter your total Credits Index Even semester of 2nd year:");
	        scanf("%d",&creditIndexEven2);
	    
		    YGPA2=((creditIndexOdd2+creditIndexEven2)/(creditOdd2+creditEven2));
		
		    printf("Enter your total Credits Odd semester of 3rd year:");
	        scanf("%f",&creditOdd3);
	        printf("Enter your total Credits Even semester of 3rd year :");
	        scanf("%f",&creditEven3);
	        printf("Enter your total Credits Index Odd semester of 3rd year:");
	        scanf("%d",&creditIndexOdd3);
	        printf("Enter your total Credits Index Even semester of 3rd year:");
	        scanf("%d",&creditIndexEven3);
		
		    YGPA3=((creditIndexOdd3+creditIndexEven3)/(creditOdd3+creditEven3));
		 
		    printf("Enter your total Credits Odd semester of 4th year:");
	        scanf("%f",&creditOdd4);
	        printf("Enter your total Credits Even semester of 4th year :");
	        scanf("%f",&creditEven4);
	        printf("Enter your total Credits Index Odd semester of 4th year:");
	        scanf("%d",&creditIndexOdd4);
	        printf("Enter your total Credits Index Even semester of 4th year:");
	        scanf("%d",&creditIndexEven4);
		
		    YGPA4=((creditIndexOdd4+creditIndexEven4)/(creditOdd4+creditEven4));
		
			printf("Your DGPA is:%f\n",(YGPA2+(1.5*YGPA3)+(1.5*YGPA4))/5);
		}
	}
	else if(year==3){
	     printf("Enter your total Credits Odd semester of 1st year:");
	    scanf("%f",&creditOdd1);
	    printf("Enter your total Credits Even semester of 1st year :");
	    scanf("%f",&creditEven1);
	    printf("Enter your total Credits Index Odd semester of 1st year:");
	    scanf("%d",&creditIndexOdd1);
	    printf("Enter your total Credits Index Even semester of 1st year:");
	    scanf("%d",&creditIndexEven1);
	    
	    YGPA1=((creditIndexOdd1+creditIndexEven1)/(creditOdd1+creditEven1));
	    
	    printf("Enter your total Credits Odd semester of 2nd year:");
	    scanf("%f",&creditOdd2);
	    printf("Enter your total Credits Even semester of 2nd year :");
	    scanf("%f",&creditEven2);
	    printf("Enter your total Credits Index Odd semester of 2nd year:");
	    scanf("%d",&creditIndexOdd2);
	    printf("Enter your total Credits Index Even semester of 2nd year:");
	    scanf("%d",&creditIndexEven2);
		
		YGPA2=((creditIndexOdd2+creditIndexEven2)/(creditOdd2+creditEven2));
		
		printf("Enter your total Credits Odd semester of 3rd year:");
	    scanf("%f",&creditOdd3);
	    printf("Enter your total Credits Even semester of 3rd year :");
	    scanf("%f",&creditEven3);
	    printf("Enter your total Credits Index Odd semester of 3rd year:");
	    scanf("%d",&creditIndexOdd3);
	    printf("Enter your total Credits Index Even semester of 3rd year:");
	    scanf("%d",&creditIndexEven3);
		
		YGPA3=((creditIndexOdd3+creditIndexEven3)/(creditOdd3+creditEven3));
		
		printf("Your DGPA is:%d\n",(YGPA1+YGPA2+YGPA3)/3);
	}
	else if(year==2){
	    printf("Enter your total Credits Odd semester of 1st year:");
	    scanf("%f",&creditOdd1);
	    printf("Enter your total Credits Even semester of 1st year :");
	    scanf("%f",&creditEven1);
	    printf("Enter your total Credits Index Odd semester of 1st year:");
	    scanf("%d",&creditIndexOdd1);
	    printf("Enter your total Credits Index Even semester of 1st year:");
	    scanf("%d",&creditIndexEven1);
	    
	    YGPA1=((creditIndexOdd1+creditIndexEven1)/(creditOdd1+creditEven1));
	    
	    printf("Enter your total Credits Odd semester of 2nd year:");
	    scanf("%f",&creditOdd2);
	    printf("Enter your total Credits Even semester of 2nd year :");
	    scanf("%f",&creditEven2);
	    printf("Enter your total Credits Index Odd semester of 2nd year:");
	    scanf("%d",&creditIndexOdd2);
	    printf("Enter your total Credits Index Even semester of 2nd year:");
	    scanf("%d",&creditIndexEven2);
		
		YGPA2=((creditIndexOdd2+creditIndexEven2)/(creditOdd2+creditEven2));
		
		printf("Your DGPA is:%f",(YGPA1+YGPA2)/2);
	}
	else{
		printf("Enter your total Credits Odd semester of 1st year:");
	    scanf("%f",&creditOdd1);
	    printf("Enter your total Credits Even semester of 1st year :");
	    scanf("%f",&creditEven1);
	    printf("Enter your total Credits Index Odd semester of 1st year:");
	    scanf("%d",&creditIndexOdd1);
	    printf("Enter your total Credits Index Even semester of 1st year:");
	    scanf("%d",&creditIndexEven1);
		
		YGPA1=((creditIndexOdd1+creditIndexEven1)/(creditOdd1+creditEven1));
		printf("Your DGPA is:%f\n",YGPA1);
	}
}

void cgpa(){
	int y;
	printf("Enter your total year for CGPA:");
	scanf("%d",&y);
	if(y==5){
		float credit1,credit2,credit3,credit4,credit5,credit6,credit7,credit8,credit9,credit10;
		int creditIndex1,creditIndex2,creditIndex3,creditIndex4,creditIndex5,creditIndex6,creditIndex7,creditIndex8,creditIndex9,creditIndex10;
		printf("Total sem:10\n");
		printf("enter your credits of all sem:\n");
		scanf("%f%f%f%f%f%f%f%f%f%f",&credit1,&credit2,&credit3,&credit4,&credit5,&credit6,&credit7,&credit8,&credit9,&credit10);
	    printf("enter your credit index of all sem:\n");
	    scanf("%d%d%d%d%d%d%d%d%d%d",&creditIndex1,&creditIndex2,&creditIndex3,&creditIndex4,&creditIndex5,&creditIndex6,&creditIndex7,&creditIndex8,&creditIndex9,&creditIndex10);
        CGPA=((creditIndex1+creditIndex2+creditIndex3+creditIndex4+creditIndex5+creditIndex6+creditIndex7+creditIndex8+creditIndex9+creditIndex10)/(credit1+credit2+credit3+credit4+credit5+credit6+credit7+credit8+credit9+credit10));
        printf("your CGPA:%f\n",CGPA);
	}
	else if(y==4){
		float credit1,credit2,credit3,credit4,credit5,credit6,credit7,credit8;
		int creditIndex1,creditIndex2,creditIndex3,creditIndex4,creditIndex5,creditIndex6,creditIndex7,creditIndex8;
		printf("Total sem:8\n");
		printf("enter your credits of all sem:\n");
		scanf("%f%f%f%f%f%f%f%f",&credit1,&credit2,&credit3,&credit4,&credit5,&credit6,&credit7,&credit8);
	    printf("enter your credit index of all sem:\n");
	    scanf("%d%d%d%d%d%d%d%d",&creditIndex1,&creditIndex2,&creditIndex3,&creditIndex4,&creditIndex5,&creditIndex6,&creditIndex7,&creditIndex8);
        CGPA=((creditIndex1+creditIndex2+creditIndex3+creditIndex4+creditIndex5+creditIndex6+creditIndex7+creditIndex8)/(credit1+credit2+credit3+credit4+credit5+credit6+credit7+credit8));
        printf("your CGPA:%f\n",CGPA);
	}
	else if(y==3){
		float credit1,credit2,credit3,credit4,credit5,credit6;
		int creditIndex1,creditIndex2,creditIndex3,creditIndex4,creditIndex5,creditIndex6;
		printf("Total sem:6\n");
		printf("enter your credits of all sem:\n");
		scanf("%f%f%f%f%f%f",&credit1,&credit2,&credit3,&credit4,&credit5,&credit6);
	    printf("enter your credit index of all sem:\n");
	    scanf("%d%d%d%d%d%d",&creditIndex1,&creditIndex2,&creditIndex3,&creditIndex4,&creditIndex5,&creditIndex6);
        CGPA=((creditIndex1+creditIndex2+creditIndex3+creditIndex4+creditIndex5+creditIndex6)/(credit1+credit2+credit3+credit4+credit5+credit6));
        printf("your CGPA:%f\n",CGPA);
	}
	else if(y==2){
		float credit1,credit2,credit3,credit4;
		int creditIndex1,creditIndex2,creditIndex3,creditIndex4;
		printf("Total sem:4\n");
		printf("enter your credits of all sem:\n");
		scanf("%f%f%f%f",&credit1,&credit2,&credit3,&credit4);
	    printf("enter your credit index of all sem:\n");
	    scanf("%d%d%d%d",&creditIndex1,&creditIndex2,&creditIndex3,&creditIndex4);
        CGPA=((creditIndex1+creditIndex2+creditIndex3+creditIndex4)/(credit1+credit2+credit3+credit4));
        printf("your CGPA:%f\n",CGPA);
	}
	else if(y==1){
		float credit1,credit2;
		int creditIndex1,creditIndex2;
		printf("Total sem:2\n");
		printf("enter your credits of all sem:\n");
		scanf("%f%f",&credit1,&credit2);
	    printf("enter your credit index of all sem:\n");
	    scanf("%d%d",&creditIndex1,&creditIndex2);
        CGPA=((creditIndex1+creditIndex2)/(credit1+credit2));
        printf("your CGPA:%f\n",CGPA);
	}
	else{
		printf("wrong choice\n");
	}
}

void all(){
	sgpa();
	ygpa();
	dgpa();
	cgpa();
}

void BTech_std(){
	int choice;
	printf("1.SGPA, 2.YGPA, 3.DGPA, 4.CGPA, 5.ALL\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1: sgpa();
		        break;
		case 2: ygpa();
		        break;
		case 3: dgpa();
		        break;
		case 4: cgpa();
		        break;
		case 5: all();
		        break;
		default: printf("wrong choice\n");
	}
}

int main(){
	BTech_std();
	return 0;
}