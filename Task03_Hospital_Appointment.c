#include <stdio.h>

int main() {
    int appointment, doctorAvailable, registrationCompleted;

    printf("Do you have an appointment? (1 = Yes, 0 = No): ");
    scanf("%d", &appointment);

    printf("Is the doctor available? (1 = Yes, 0 = No): ");
    scanf("%d", &doctorAvailable);

    printf("Is registration completed? (1 = Yes, 0 = No): ");
    scanf("%d", &registrationCompleted);

    if (appointment == 1) {
        if (doctorAvailable == 1) {
            if (registrationCompleted == 1) {
                printf("Patient can meet the doctor.\n");
            } else {
                printf("Registration is not completed.\n");
            }
        } else {
            printf("Doctor is not available.\n");
        }
    } else {
        printf("Patient does not have an appointment.\n");
    }

    return 0;
}
