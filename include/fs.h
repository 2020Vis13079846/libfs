#ifndef _FS_H_
#define _FS_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

int mkdir(char *name);
int mkfile(char *name);

int rmdir(char *name);
int rmfile(char *name);

#ifdef __cplusplus
}
#endif

#endif
