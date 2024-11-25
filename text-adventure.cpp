if (choice == 'A') {
    // Do something
} else if (choice == 'B') {
    // Do something else
} else {
    // Default action
}


for (int i = 0; i < 3; i++) {
    // Repeat action
}


char choice;
std::cin >> choice;


if (choice == 'A') {
    // Path A
} else if (choice == 'B') {
    // Path B
}


char choice;
for (int i = 0; i < 3; i++) {
    std::cout << "Enter A or B: ";
    std::cin >> choice;
    if (choice == 'A' || choice == 'B') {
        break; // Exit loop if valid
    }
    std::cout << "Invalid choice. Try again.\n";
}

char choice;
std::cin >> choice;

switch (choice) {
    case 'A':
        // Handle choice A
        break;
    case 'B':
        // Handle choice B
        break;
    default:
        // Handle invalid choice
        break;
}

