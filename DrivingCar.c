#include <stdio.h>
# include <string.h>

typedef struct CarData {
    int miles;
} Car;

Car startCar(Car testCar){
    
    testCar.miles = 0;
    printf("Car Engine is starting up. Vroom Vroom!\n");
    return testCar;
}

Car driveForwardDistance (int km, Car testCar){
    testCar.miles = testCar.miles + km;
    return testCar;
    }

Car driveReverseDistance (int km, Car testCar) {
    testCar.miles = testCar.miles - km;
    return testCar;
}


void useHonk (){
    printf("Changing Direction\nHonk Honk!\n");
}

void mileageReport(Car testCar){
    printf("Car has driven: %d miles\n", testCar.miles);
}

void finalDisplacement (Car testCar){
    printf("Total displacement %d miles\n", testCar.miles);
}


int main() {
   
    Car myCar;
    int milesForward;
    int milesReverse;
    printf("Please enter miles forward: ");
    scanf(" %d", &milesForward);
    printf("Please enter miles reverse: ");
    scanf(" %d", &milesReverse);
   //need to assign those value to myCar, otherwise myCar will not be initialized
   //only a copy of myCar was sent to function, nothing will change without ("myCar =")
    myCar = startCar(myCar);
    mileageReport(myCar);

    myCar = driveForwardDistance (milesForward, myCar);
    mileageReport(myCar);
    useHonk();
    
    myCar = driveReverseDistance(milesReverse, myCar);
    finalDisplacement(myCar);
   
   
    return 0;
}