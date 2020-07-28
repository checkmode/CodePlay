
#ifndef _SORTFUNCTIONS_H
#define _SORTFUNCTIONS_H

#if defined(_WIN32)
#if defined(EXPORT_FUN)
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif
#else
#define DECLSPEC
#endif

void DECLSPEC sort_bubble(int data[], int len);

#endif // _SORTFUNCTIONS_H