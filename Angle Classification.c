int main() {
    int x;
    scanf("%d", &x);
    if(x>=0 && x<90){
        printf("Acute Angle");
    }
    else if(x==90){
        printf("Right Angle");
    }
    else if((x>90) && (x<180)){
        printf("Obtuse Angle");
    }
    else if(x==180){
        printf("Straight Angle");
    }
    else if(x>180 && x<360){
        printf("Reflex Angle");
    }
    else if(x==360 || x%360==0){
        printf("Full Rotation");
    }
    else{
        if(x%360!=0){
            int angle=x%360;
            if(angle>=0 && angle<90){
        printf("Acute Angle");
    }
    else if(angle==90){
        printf("Right Angle");
    }
    else if((angle>90) && (angle<180)){
        printf("Obtuse Angle");
    }
    else if(angle==180){
        printf("Straight Angle");
    }
    else if(angle>180 && angle<360){
        printf("Reflex Angle");
    }
    else if(angle==360 || angle%360==0){
        printf("Full Rotation");
    }
        }
    }
    return 0;
}
