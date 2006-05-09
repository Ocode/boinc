#ifndef _DC_API_CONDOR_SERVER_H_
#define _DC_API_CONDOR_SERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "dc.h"


  extern DC_PhysicalFile *_DC_createPhysicalFile(const char *label,
						 const char *path);
  extern void _DC_destroyPhysicalFile(DC_PhysicalFile *file);


#ifdef __cplusplus
}
#endif

#endif
