#include <stdio.h>

int main() {
    int age, income, risk_tolerance;

    
    
    scanf("%d", &age);

    scanf("%d", &income);
    
    scanf("%d", &risk_tolerance);
    

            if (age > 50) {
                if (income > 75000 && risk_tolerance == 3) {
                    printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
                } else {
                    printf("Low Risk Portfolio: Suitable for conservative investments.\n");
                }
            } else if (age >= 30 && age <= 50){
                if (income<=30000 && (risk_tolerance==1 || risk_tolerance==2))
                         {
                  printf("Low Risk Portfolio: Suitable for conservative investments.\n");
                }
               else if (income <= 75000) {
                    if (risk_tolerance == 2) {
                        printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
                    } else {
                        printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
                    }
                }
                
                else {
                    if (risk_tolerance == 3) {
                        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
                    } else {
                        printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
                    }
                }
                
            } 
    
      else if (age<30) 
    { 
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
            }

    
  
    
  
    
         
    return 0;
}
