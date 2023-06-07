#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int counter;

pthread_mutex_t mutex;
pthread_cond_t cond;

#if 1
void* producer(void* data) {
    int i = 0;
    for (i = 0; i < 2; i++) {
        pthread_mutex_lock(&mutex);
        while (counter > 0) {
            printf("waiting\n");
            pthread_cond_wait(&cond, &mutex);
        }
        counter += 6;
        printf("Boss makes 6 bento. Left %d bento\n", counter);
        pthread_mutex_unlock(&mutex);
    }
}

void* consumer(void* data) {
    int i = 0;
    for (i = 0; i < 6; i++) {
        // Note: if there is no sleep, then the mutex will have chance to be gained by
        // consumer again
        sleep(2);
        pthread_mutex_lock(&mutex);
        if (counter == 2 || counter == 0) {
            counter -= 2;
            printf("Consumer buys 2 bento. Left %d bento.\n", counter);
            printf("Call boss to make bento\n");
            pthread_cond_signal(&cond);
        } else {
            counter -= 2;
            printf("Consumer buys 2 bento. Left %d bento.\n", counter);
        }
        printf("Consumer left.\n");
        pthread_mutex_unlock(&mutex);
    }
}
#endif

int main() {
    pthread_t t1, t2;

    counter = 2;
    pthread_mutex_init(&mutex, 0);
    pthread_create(&t1, NULL, producer, NULL);
    pthread_create(&t2, NULL, consumer, NULL);

    sleep(30);

#if 0
waiting
Consumer buys 2 bento. Left 0 bento.
Call boss to make bento
Consumer left.
Boss makes 6 bento. Left 6 bento
waiting
Consumer buys 2 bento. Left 4 bento.
Consumer left.
Consumer buys 2 bento. Left 2 bento.
Consumer left.
Consumer buys 2 bento. Left 0 bento.
Call boss to make bento
Consumer left.
Boss makes 6 bento. Left 6 bento
Consumer buys 2 bento. Left 4 bento.
Consumer left.
Consumer buys 2 bento. Left 2 bento.
Consumer left.
#endif
    return 0;
}
