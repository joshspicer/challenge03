#ifndef NUFS_STORAGE_H
#define NUFS_STORAGE_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <bsd/string.h>
#include <stdlib.h>

#include "superblock.h"

void storage_init(const char *path);

int get_stat(const char *path, struct stat *st);

const char *get_data(const char *path);

pnode *get_file_data(const char *path);

#endif
