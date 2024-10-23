#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "result_type.h"
#include "io_functions.h"

#define MAX_EVENTS_PER_EVENTSTORE 100
#define MAX_DESCRIPTION_LENGTH 256
#define ID_LENGTH 4
#define BACKUP_EVENTSORE(name) ("backup_" name "_eventstore.bin")


// Definition of the ID structure
typedef struct {
    const char id[ID_LENGTH + 1]; // +1 for the null character
} ID;

// Definition of the ID of an instance of a reminder or task
// It consists of a random ID of 4 characters and a version number
typedef struct {
    const ID id;
    const int version;
} InstanceID;

// Definition of the types of events that 
// They can happen in a reminder or task
// This maybe gonna change to a more complex structure
typedef enum {
    CREATED,
    MODIFIED,
    DISCARDED,
} EventType;

// Definition of states of a reminder or task
typedef enum {
    EARRING,
    INCOMMING,
    HAPPENING,
    OVERDUE,
    COMPLETED,
    CANCELED
} Status;

// Definition of the reminder structure
typedef struct {
    const InstanceID instance_id;
    const EventType event_type;
    const time_t creation_date;
    const time_t due_date;
    const char description[MAX_DESCRIPTION_LENGTH];
    const Status status; 
} Reminder;

// Definition of the task structure
typedef struct {
    const InstanceID instance_id;
    const EventType event_type;
    const time_t creation_date;
    const char description[MAX_DESCRIPTION_LENGTH];
    const int priority;
    const Status Status; 
} Task;

/*
 TODO: work in progress, this is just a draft,
       many code snippets are missing here but 
       they are in the other files in development
       phase.
*/



int main(int argc, char const *argv[])
{
    srand(time(NULL));

    // Print a message of welcome
    printf("Welcome to Toretto, your personal reminder and task manager\n");

    /*
    TODO: work in progress, this is just a draft,
          many code snippets are missing here but 
          they are in the other files in development
          phase.

    */




    return 0;
}
