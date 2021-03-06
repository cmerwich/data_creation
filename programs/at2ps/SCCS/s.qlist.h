h14450
s 00032/00000/00000
d D 1.1 00/09/19 12:20:37 const 1 0
c Version of Oct 7 1996
e
u
U
f e 0
f m q2pro/at2ps/qlist.h
t
T
I 1
#ifndef QLIST_H
#define	QLIST_H

#pragma ident "%Z%%M% %I% %G%"

#include	"quad.h"


#if __STDC__
extern void       qlist_asm(qlist_t *qlist, exec_t *exec);
extern quad_t    *qlist_byaddr(qlist_t *qlist, int address);
extern qlist_t   *qlist_create(void);
extern void       qlist_delete(qlist_t *qlist);
extern void       qlist_dump(qlist_t *qlist);
extern void       qlist_emit(qlist_t *qlist, int operator, symbol_t *sym1, symbol_t *sym2);
extern quad_t    *qlist_next(qlist_t *qlist);
extern size_t     qlist_size(qlist_t *qlist);

#else				/* __STDC__ */

extern void       qlist_asm();
extern quad_t    *qlist_byaddr();
extern qlist_t   *qlist_create();
extern void       qlist_delete();
extern void       qlist_dump();
extern void       qlist_emit();
extern quad_t    *qlist_next();
extern size_t     qlist_size();

#endif				/* __STDC__ */

#endif				/* QLIST_H */
E 1
