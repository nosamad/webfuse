#ifndef _WSFS_OPERATIONS
#define _WSFS_OPERATIONS

#include "wsfs/fuse_wrapper.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void wsfs_operations_init(
	struct fuse_operations * operations);

extern int wsfs_operation_readdir(
	char const * path,
	void * buffer,
	fuse_fill_dir_t filler,
	off_t offset,
	struct fuse_file_info * file_info,
	enum fuse_readdir_flags flags);

extern int wsfs_operation_getattr(
	char const * path,
	struct stat * buffer,
	struct fuse_file_info * file_info);

extern int wsfs_operation_open(
	char const *path,
	struct fuse_file_info * file_info);

extern int wsfs_operation_close(
	char const *path,
	struct fuse_file_info * file_info);

extern int wsfs_operation_read(
	const char * path,
 	char * buffer,
	size_t buffer_size,
	off_t  offset,
	struct fuse_file_info * file_info);
	
#ifdef __cplusplus
}
#endif

#endif

