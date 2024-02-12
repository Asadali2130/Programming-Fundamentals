#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function declarations

void details();
void package();
void address();
void payment();
void schedule();
void displaySenderDetails();
void displayPackageDetails();
void displayReceiverDetails();


// File pointers
FILE* senderfile;
FILE* packagefile;
FILE* receiverfile;

int main()
{
    senderfile = fopen("sender.txt", "w");
    packagefile = fopen("package.txt", "w");
    receiverfile = fopen("receiver.txt", "w");

    printf("Welcome to Courier Service System\n");

    int num;
    do {
        printf("\n1. Sender Details and Information\n");
        printf("2. Package Details\n");
        printf("3. Order Placement\n");
        printf("4. Payment Options\n");
        printf("5. Schedule and Time\n");
  	printf("6. Display sender details\n");
  	printf("7. Display package details\n");
  	printf("8. Display receiver details\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &num);

        switch (num) {
            case 1:
                details();
                break;

            case 2:
                package();
                break;

            case 3:
                address();
                break;

            case 4:
                payment();
                break;

            case 5:
                schedule();
                break;
            case 6:
            displaySenderDetails();
            break;
            case 7:
            displayPackageDetails();
            break;
            case 8:
            displayReceiverDetails();
        }
    } while (num != 9);

    fclose(senderfile);
    fclose(packagefile);
    fclose(receiverfile);

    return 0;
}

void details()
{
    char name[10], address[10];
    int contact[11], id[4];

    printf("-------------------------------------------------\n");
    printf("Please enter your information\n");

    printf("\nSender Details\n");
    printf("--------------------------------------------\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your address: ");
    scanf("%s", address);
    printf("Enter your contact number (11 digits): ");
    for (int i = 0; i < 11; i++) {
        scanf("%1d", &contact[i]);
    }
    printf("Enter your ID (4 digits): ");
    for (int i = 0; i < 4; i++) {
        scanf("%1d", &id[i]);
    }

    fprintf(senderfile, "Name: %s\n", name);
    fprintf(senderfile, "Address: %s\n", address);
    for (int i = 0; i < 11; i++) {
        fprintf(senderfile, "%d", contact[i]);
    }
    for (int i = 0; i < 4; i++) {
        fprintf(senderfile, "    %d", id[i]);
    }

    printf("\nSender details added successfully\n");
}

void package()
{
    int i = 1;
    char n = 'Y';
    float mass = 0, size_parcel = 0;
    float* ptr;
    ptr = &size_parcel;

    while (n == 'Y') {
        float weight, height, width, length;
        printf("Enter the weight of package %d in kg: ", i);
        scanf("%f", &weight);
        printf("Enter the height of package %d in cm: ", i);
        scanf("%f", &height);
        printf("Enter the length and width of package %d (in cm): ", i);
        scanf("%f %f", &length, &width);

        *ptr = *ptr + (height + width + length);
        size_parcel = size_parcel + (height + width + length);

        mass = mass + weight;
        i++;

        printf("Your package added successfully\n");
        printf("Do you want to add another package (Y/N): ");
        scanf(" %c", &n);
    }

    fprintf(packagefile, "Total weight: %.2f\n", mass);
    fprintf(packagefile, "Total size of the packages: %.2f\n", *ptr);

    if (mass <= 1 || size_parcel <= 50) {
        float price1 = 20.0;
        printf("Total bill for your packages: %.2f\n", price1);
        fprintf(packagefile, "Total bill for your packages: %.2f\n", price1);
    }
    else if ((mass > 1.0 && mass <= 5.0) || (size_parcel >= 50 && size_parcel <= 100)) {
        float price2 = 40.0;
        printf("Total bill for your packages: %.2f\n", price2);
        fprintf(packagefile, "Total bill for your packages: %.2f\n", price2);
    }
    else {
        float price3 = 60.0;
        printf("Total bill for your packages: %.2f\n", price3);
        fprintf(packagefile, "Total bill for your packages: %.2f\n", price3);
    }
}

void address()
{
    char receiver_name[10], receiver_address[10];
    int receiver_contact[11];

    printf("\nReceiver Details\n");
    printf("--------------------------------------------\n");
    printf("Enter receiver's name: ");
    scanf("%s", receiver_name);
    printf("Enter receiver's address: ");
    scanf("%s", receiver_address);
    printf("Enter receiver's contact number (11 digits): ");
    for (int i = 0; i < 11; i++) {
        scanf("%1d", &receiver_contact[i]);
    }

    fprintf(receiverfile, "Receiver's name: %s\n", receiver_name);
    fprintf(receiverfile, "Receiver's address: %s\n", receiver_address);
    for (int i = 0; i < 11; i++) {
        fprintf(receiverfile, "%d", receiver_contact[i]);
    }

    printf("\nReceiver details added successfully\n");
}

void payment()
{
    int payment_method;
    printf("\nPayment Options\n");
    printf("--------------------------------------------\n");
    printf("Choose a payment method:\n");
    printf("1. Cash on Delivery\n");
    printf("2. Online Payment\n");
    printf("3. Credit Card\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &payment_method);

    printf("\nPayment method selected: ");
    switch (payment_method) {
        case 1:
            printf("Cash on Delivery\n");
            fprintf(receiverfile, "Payment method: Cash on Delivery\n");
            break;
        case 2:
            printf("Online Payment\n");
            fprintf(receiverfile, "Payment method: Online Payment\n");
            break;
        case 3:
            printf("Credit Card\n");
            fprintf(receiverfile, "Payment method: Credit Card\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

void schedule()
{
    printf("Our office opens from:\n");

	printf("-------------------------------------------------------------------\n");
	printf("Monday to Saturday -- 9.00 AM to 5.00PM\nFriday--9.00AM to 1.00PM\n");


	printf("We send your packages in time and in date\n");
}

void displaySenderDetails()
{
    senderfile = fopen("sender.txt", "r");
    if (senderfile == NULL) {
        printf("Error opening sender file.\n");
    }
    printf("\nSender Details\n");
    printf("--------------------------------------------\n");
    char c;
    while ((c = fgetc(senderfile)) != EOF) {
        printf("%c", c);
    }

    fclose(senderfile);
}

void displayPackageDetails()
{
    FILE* packagefile = fopen("package.txt", "r");
    if (packagefile == NULL) {
        printf("Error opening package file.\n");
        return;
    }

    printf("\nPackage Details\n");
    printf("--------------------------------------------\n");
    int c;  // Changed `char` to `int` to handle EOF properly
    while ((c = fgetc(packagefile)) != EOF) {
        printf("%c", c);
    }

    fclose(packagefile);
}

void displayReceiverDetails()
{
    FILE* receiverfile = fopen("receiver.txt", "r");
    if (receiverfile == NULL) {
        printf("Error opening receiver file.\n");
        return;  // Added a return statement to exit the function if file opening fails
    }

    printf("\nReceiver Details\n");
    printf("--------------------------------------------\n");
    int c;  // Changed `char` to `int` to handle EOF properly
    while ((c = fgetc(receiverfile)) != EOF) {
        printf("%c", c);
    }

    fclose(receiverfile);
}
