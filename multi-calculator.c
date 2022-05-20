#include<stdio.h>
void BMI(){
  int feet,inches,weight;
  float height,bmi;
  printf("Enter your height in feet: ");
  scanf("%d",&feet);
  printf("Enter your height in inches: ");
  scanf("%d",&inches);
  printf("Enter your weight in kg: ");
  scanf("%d",&weight);
  inches=inches+(feet*12);
  height=inches*0.0254;
  bmi=height*height;
  bmi=weight/bmi;
  printf("Your BMI is: %.2f\n",bmi);
  if(bmi<16)
  {
      printf("You are Severely Underweight\n");
  }
  else if(bmi<18.4 && bmi>15)
  {
      printf("You are Underweight\n");
  }
  else if(bmi<24.9 && bmi>18.4)
  {
      printf("You are perfect\n");
  }
  else if(bmi>24.9)
  {
      printf("You are Overweight\n");
  }
  printf("\n\n\n\n");
}
void calAge(){
  int year,recentyear=2022,age;
  printf("Enter your Birth year:");
  scanf("%d",&year);
  age=recentyear-year;
  printf("Your Age is: %d\n",age);
  printf("\n\n\n\n");
}
void calculateNumber(){
   float sum=0,sub,mul=1,div;
int n,choice;
  printf("1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\nEnter Your Choice: ");
  scanf("%d",&choice);
if(choice==1){
    printf("How many digits you want addition: ");
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
    printf("Enter number: ");
    scanf("%f",&arr[i]);
    sum=sum+arr[i];
}
 printf("Your result is: %.2f\n",sum);
}

if(choice==2){
    printf("How many digits you want to subtraction: ");
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
    printf("Enter number: ");
    scanf("%f",&arr[i]);
}
sub=arr[0];
for(int j=0;j<n-1;j++){

     sub=sub-arr[j+1];
}

 printf("Your result is: %.2f\n",sub);
}

if(choice==3){
    printf("How many digits you want to multiplication: ");
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
    printf("Enter number: ");
    scanf("%f",&arr[i]);
    mul=mul*arr[i];
}
 printf("Your result is: %.2f\n",mul);
}
if(choice==4){
    float arr[1];
    printf("Enter 1st number: ");
    scanf("%f",&arr[0]);
    printf("Enter 2nd number: ");
    scanf("%f",&arr[1]);
    div=arr[0]/arr[1];

 printf("Your result is: %.2f\n",div);
}
printf("\n\n\n\n");
}

int main(){

  int choice,done=0;


  while(done==0){
    printf("        ///////////////////////////////////////Welcome to Multi-calculator///////////////////////////////// \n\n\n");
  printf("1.calculate Numbers.\n2.calculate your Age.\n3.Calculate BMI\n4.Exit.\nEnter Your Choice: ");
  scanf("%d",&choice);

    switch(choice)
  {
  case 1:
        calculateNumber();
    break;
  case 2:
        calAge();
    break;
  case 3:
      BMI();
    break;
  case 4:
    done=1;
    break;
  default:
      printf("Invalid Choice");
  }
  }


return 0;
}
