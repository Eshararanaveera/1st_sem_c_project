#include <stdio.h>
#include <assert.h>

float calcpayment(int age, float size) {
    float ureaPrice = 68.0;
    float tspPrice = 60.0;
    float mopPrice = 75.0;
    float urea = 0, tsp = 0, mop = 0;

    if (age >= 0 && age < 2) {
        tsp = 35;
    } else if (age >= 2 && age < 4) {
        urea = 30;
    } else if (age >= 4 && age < 6) {
        urea = 65;
        mop = 25;
    } else if (age >= 6 && age < 7) {
        urea = 50;
        mop = 25;
    } else if (age >= 7) {
        tsp = 30;
    }

    float totalPayment = (urea * ureaPrice + tsp * tspPrice + mop * mopPrice) * size;
    return totalPayment;
}

float calcsubsidy(float payment) {
    float subsidy = 0.15 * payment; // 15% subsidy
    return subsidy;
}

void displayDetails(float payment, float subsidy) {
    printf("Payable amount = %.2f\n", payment - subsidy);
    printf("Subsidy amount = %.2f\n", subsidy);
}

int main() {
    int age;
    float size;

    for (int i = 0; i < 3; i++) {
        printf("Enter the age of the paddy crops in weeks: ");
        scanf("%d", &age);
        printf("Enter the paddy field size in Hectare: ");
        scanf("%f", &size);

        float payment = calcpayment(age, size);
        float subsidy = calcsubsidy(payment);

        printf("\nThe details for farmer %d:\n", i + 1);
        printf("The age of the paddy crops in weeks: %d\n", age);
        printf("The paddy field size in Hectare: %.2f\n", size);
        displayDetails(payment, subsidy);
        printf("------------------------------\n");
    }

    return 0;
}
