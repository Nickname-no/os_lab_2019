#include <pthread.h>
#include <stdio.h>

pthread_mutex_t P1_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t P2_mutex = PTHREAD_MUTEX_INITIALIZER;

static int P1 = 1;
static int P2 = 1;

void *deadlock(void *args) {
  pthread_mutex_lock(&P1_mutex);
  P1++;
  P2++;
}

int main() {

  pthread_t threads[2];

  pthread_create(&threads[0], NULL, deadlock, NULL);
  pthread_create(&threads[1], NULL, deadlock, NULL);

  pthread_join(threads[0], NULL);
  pthread_join(threads[1], NULL);
  
  
  printf("P1 - %i\nP2 - %i\n", P1, P2);
  return 0;
}
