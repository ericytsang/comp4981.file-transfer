#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <fcntl.h>
#include "messagequeuehelper.h"

#define MIN_PROC_PRIO 0
#define MAX_PROC_PRIO 20

int serve_client(pid_t clientPid, int priority, char* filePath);