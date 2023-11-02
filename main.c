#include <stdio.h>
#include <string.h>


const char* generateResponse(const char* userInput) {
    if (strstr(userInput, "oi") || strstr(userInput, "olá") || strstr(userInput, "ola")) {
        return "Olá! Como posso ajudar você hoje?";
    } else if (strstr(userInput, "tchau")) {
        return "Até logo! Tenha um ótimo dia.";
    } else {
        return "Desculpe, não entendi. Pode repetir?";
    }
}

int main() {
    printf("Bem-vindo ao Chatbot Console\n");
    printf("Digite 'tchau' para sair.\n");

    while (1) {
        char userInput[100];
        printf("Você: ");
        fgets(userInput, sizeof(userInput), stdin);

        if (userInput[strlen(userInput) - 1] == '\n') {
            userInput[strlen(userInput) - 1] = '\0';
        }

        if (strcmp(userInput, "tchau") == 0) {
            printf("Chatbot: Até logo! Encerrando o chat.\n");
            break;
        }

        const char* response = generateResponse(userInput);
        printf("Chatbot: %s\n", response);
    }

    return 0;
}
