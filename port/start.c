#include "FreeRTOS.h"
#include "task.h"

static void vtask1(void *pvParameters) {
    volatile int a = 0;
    while (1) {
        // Task code goes here
        a++;
    }
}

static void vtask2(void *pvParameters) {
    volatile int b = 0;
    while (1) {
        // Task code goes here
        b++;
    }
}

void start() {
    BaseType_t xReturn;

    xReturn = xTaskCreate(vtask1, "T1", configMINIMAL_STACK_SIZE, NULL, 1, NULL);
    xReturn = xTaskCreate(vtask2, "T2", configMINIMAL_STACK_SIZE, NULL, 1, NULL);

    vTaskStartScheduler();
    return;
}