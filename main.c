#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int ORDEM;
int TOTAL_MATRIZ = 0;
int LINHA = 0;
int **MATRIZ;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *soma_fila(void *args);

int main() {
    scanf("%d",&ORDEM);

    pthread_t threads[ORDEM];

    MATRIZ = (int **)malloc(ORDEM * sizeof(int *));

    for (int in = 0; in < ORDEM; in++){
        MATRIZ[in] = (int *)malloc(ORDEM * sizeof(int));
    }

    for (int l = 0; l < ORDEM; l++){
        for (int c = 0;c < ORDEM;c++){
            scanf(" %d",&MATRIZ[l][c]);
        }
    }

    for (int i = 0;i < ORDEM;i++){
        if (pthread_create(&(threads[i]), NULL, soma_fila, NULL)){
        printf("Erro ao criar uma threads, tente novamente.\n");
        } else {
        //printf("Sucesso ao criar a thread %d\n",i + 1);
        }
    }

    for (int i = 0;i < ORDEM;i++){
        pthread_join(threads[i], NULL);
    }

    printf("%d\n",TOTAL_MATRIZ);
}

void *soma_fila(void *args) {
    pthread_mutex_lock(&mutex);
    for (int i = 0;i < ORDEM;i++){
        TOTAL_MATRIZ += MATRIZ[LINHA][i];
    }
    LINHA++;
    pthread_mutex_unlock(&mutex);
    return args;
}