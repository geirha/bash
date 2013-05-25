/* getcppsyms.c - Find unique compiler symbols. */

/* Copyright (C) 1993 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it under
   the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2, or (at your option) any later
   version.

   Bash is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.

   You should have received a copy of the GNU General Public License along
   with Bash; see the file COPYING.  If not, write to the Free Software
   Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */

/* Some cpp's do not define any symbols, but instead let /bin/cc do it
   for them.  For such machines, running this file may prove useful.  It
   outputs the list of symbols which /bin/cc or /lib/cpp define and which
   we had the foresight to guess at. */

#include <stdio.h>
main ()
{
#if defined (__BSD_4_4__)
  printf ("-D__BSD_4_4__");
#endif /* __BSD_4_4__ */
#if defined (CMU)
  printf (" -DCMU");
#endif /* CMU */
#if defined (_COFF)
  printf (" -D_COFF");
#endif /* _COFF */
#if defined (DGUX)
  printf (" -DDGUX");
#endif /* DGUX */
#if defined (GOULD_PN)
  printf (" -DGOULD_PN");
#endif /* GOULD_PN */
#if defined (MACH)
  printf (" -DMACH");
#endif /* MACH */
#if defined (MIPSEB)
  printf (" -DMIPSEB");
#endif /* MIPSEB */
#if defined (MIPSEL)
  printf (" -DMIPSEL");
#endif /* MIPSEL */
#if defined (MULTIMAX)
  printf (" -DMULTIMAX");
#endif /* MULTIMAX */
#if defined (M_UNIX)
  printf (" -DM_UNIX");
#endif /* M_UNIX */
#if defined (M_XENIX)
  printf (" -DM_XENIX");
#endif /* M_XENIX */
#if defined (_M_XENIX)
  printf (" -D_M_XENIX");
#endif /* _M_XENIX */
#if defined (NeXT)
  printf (" -DNeXT");
#endif /* NeXT */
#if defined (__PARAGON__)
  printf (" -D__PARAGON__");
#endif /* __PARAGON__ */
#if defined (_PGC_)
  printf (" -D_PGC_");
#endif /* _PGC_ */
#if defined (__PGC__)
  printf (" -D__PGC__");
#endif /* __PGC__ */
#if defined (RES)
  printf (" -DRES");
#endif /* RES */
#if defined (RISC6000)
  printf (" -DRISC6000");
#endif /* RISC6000 */
#if defined (RT)
  printf (" -DRT");
#endif /* RT */
#if defined (SYSTYPE_BSD)
  printf (" -DSYSTYPE_BSD");
#endif /* SYSTYPE_BSD */
#if defined (SYSTYPE_SYSV)
  printf (" -DSYSTYPE_SYSV");
#endif /* SYSTYPE_SYSV */
#if defined (Sun386i)
  printf (" -DSun386i");
#endif /* Sun386i */
#if defined (Tek4132)
  printf (" -DTek4132");
#endif /* Tek4132 */
#if defined (Tek4300)
  printf (" -DTek4300");
#endif /* Tek4300 */
#if defined (UMAXV)
  printf (" -DUMAXV");
#endif /* UMAXV */
#if defined (USGr4)
  printf (" -DUSGr4");
#endif /* USGr4 */
#if defined (USGr4_2)
  printf (" -DUSGr4_2");
#endif /* USGr4_2 */
#if defined (__SVR4_2__)
  printf (" -D__SVR4_2__");
#endif /* __SVR4_2__ */
#if defined (Xenix286)
  printf (" -DXenix286");
#endif /* Xenix286 */
#if defined (_AIX)
  printf (" -D_AIX");
#endif /* _AIX */
#if defined (_AIX370)
  printf (" -D_AIX370");
#endif /* _AIX370 */
#if defined (_IBMESA)
  printf (" -D_IBMESA");
#endif /* _IBMESA */
#if defined (__ibmesa)
  printf (" -D__ibmesa");
#endif /* __ibmesa */
#if defined (_U370)
  printf (" -D_U370");
#endif /* _U370 */
#if defined (_NLS)
  printf (" -D_NLS");
#endif /* _NLS */
#if defined (_CX_UX)
  printf (" -D_CX_UX");
#endif /* _CX_UX */
#if defined (_IBMR2)
  printf (" -D_IBMR2");
#endif /* _IBMR2 */
#if defined (_M88K)
  printf (" -D_M88K");
#endif /* _M88K */
#if defined (_M88KBCS_TARGET)
  printf (" -D_M88KBCS_TARGET");
#endif /* _M88KBCS_TARGET */
#if defined (__DGUX__)
  printf (" -D__DGUX__");
#endif /* __DGUX__ */
#if defined (__UMAXV__)
  printf (" -D__UMAXV__");
#endif /* __UMAXV__ */
#if defined (__m88k)
  printf (" -D__m88k");
#endif /* __m88k */
#if defined (__uxpm__)
  printf (" -DUSGr4 -Du370 -D__uxpm__");
#endif /* __uxpm__ */
#if defined (__uxps__)
  printf (" -D__svr4__ -D__uxps__");
#endif /* __uxps__ */
#if defined (alliant)
  printf (" -Dalliant");
#endif /* alliant */
#if defined (alpha)
  printf (" -Dalpha");
#endif /* alpha */
#if defined (__alpha)
  printf (" -D__alpha");
#endif /* __alpha */
#if defined (aix)
  printf (" -Daix");
#endif /* aix */
#if defined (aixpc)
  printf (" -Daixpc");
#endif /* aixpc */
#if defined (apollo)
  printf (" -Dapollo");
#endif /* apollo */
#if defined (ardent)
  printf (" -Dardent");
#endif /* ardent */
#if defined (att386)
  printf (" -Datt386");
#endif /* att386 */
#if defined (att3b)
  printf (" -Datt3b");
#endif /* att3b */
#if defined (bsd4_2)
  printf (" -Dbsd4_2");
#endif /* bsd4_2 */
#if defined (bsd4_3)
  printf (" -Dbsd4_3");
#endif /* bsd4_3 */
#if defined (__bsdi__)
  printf (" -D__bsdi__");
#endif /* __bsdi__ */
#if defined (bsdi)
  printf (" -Dbsdi");
#endif /* bsdi */
#if defined (__386BSD__)
  printf (" -D__386BSD__");
#endif /* __386BSD__ */
#if defined (cadmus)
  printf (" -Dcadmus");
#endif /* cadmus */
#if defined (clipper)
  printf (" -Dclipper");
#endif /* clipper */
#if defined (concurrent)
  printf (" -Dconcurrent");
#endif /* concurrent */
#if defined (convex) || defined (__convex__) || defined (__convexc__)
#  if !defined (__GNUC__)
  printf (" -pcc");
#  endif /* !__GNUC__ */
  printf (" -Dconvex");
#endif /* convex */
#if defined (dmert)
  printf (" -Ddmert");
#endif /* dmert */
#if defined (gcos)
  printf (" -Dgcos");
#endif /* gcos */
#if defined (gcx)
  printf (" -Dgcx");
#endif /* gcx */
#if defined (gould)
  printf (" -Dgould");
#endif /* gould */
#if defined (hbullx20)
  printf (" -Dhbullx20");
#endif /* hbullx20 */
#if defined (hcx)
  printf (" -Dhcx");
#endif /* hcx */
#if defined (host_mips)
  printf (" -Dhost_mips");
#endif /* host_mips */
#if defined (hp9000) || defined (__hp9000)
  printf (" -Dhp9000");
#endif /* hp9000 || __hp9000 */
#if defined (hp9000s200) || defined (__hp9000s200)
  printf (" -Dhp9000s200");
#endif /* hp9000s200 || __hp9000s200 */
#if defined (hp9000s300) || defined (__hp9000s300)
  printf (" -Dhp9000s300");
#endif /* hp9000s300 || __hp9000s300 */
#if defined (hp9000s500) || defined (__hp9000s500)
  printf (" -Dhp9000s500");
#endif /* hp9000s500 || __hp9000s500 */
#if defined (hp9000s700) || defined (__hp9000s700)
  printf (" -Dhp9000s700");
#endif /* hp9000s700 || __hp9000s700 */
#if defined (hp9000s800) || defined (__hp9000s800)
  printf (" -Dhp9000s800");
#endif /* hp9000s800 || __hp9000s800 */
#if defined (hppa) || defined (__hppa)
  printf (" -Dhppa");
#endif /* hppa || __hppa */
#if defined (hpux) || defined (__hpux)
  printf (" -Dhpux");
#endif /* hpux */
#if defined (__hp_osf)
  printf (" -D__hp_osf");
#endif /* __hp_osf */
#if defined (i386)
  printf (" -Di386");
#endif /* i386 */
#if defined (__i386__)
  printf (" -D__i386__");
#endif
#if defined (__i860)
  printf(" -D__i860");
#endif /* __i860 */
#if defined (__i860__)
  printf(" -D__i860__");
#endif /* __i860__ */
#if defined (ibm)
  printf (" -Dibm");
#endif /* ibm */
#if defined (ibm032)
  printf (" -Dibm032");
#endif /* ibm032 */
#if defined (ibmrt)
  printf (" -Dibmrt");
#endif /* ibmrt */
#if defined (interdata)
  printf (" -Dinterdata");
#endif /* interdata */
#if defined (is68k)
  printf (" -Dis68k");
#endif /* is68k */
#if defined (ksr1)
  printf (" -Dksr1");
#endif /* ksr1 */
#if defined (__ksr1__)
  printf (" -D__ksr1__");
#endif /* __ksr1__ */
#if defined (linux)
  printf (" -Dlinux");
#endif /* linux */
#if defined (__linux__)
  printf (" -D__linux__");
#endif /* __linux__ */
#if defined (luna88k)
  printf (" -Dluna88k");
#endif /* luna88k */
#if defined (m68k)
  printf (" -Dm68k");
#endif /* m68k */
#if defined (m88k)
  printf (" -Dm88k");
#endif /* m88k */
#if defined (mc68010)
  printf (" -Dmc68010");
#endif /* mc68010 */
#if defined (mc68020)
  printf (" -Dmc68020");
#endif /* mc68020 */
#if defined (mc68030)
  printf (" -Dmc68030");
#endif /* mc68030 */
#if defined (mc68040)
  printf (" -Dmc68040");
#endif /* mc68040 */
#if defined (mc68k32)
  printf (" -Dmc68k32");
#endif /* mc68k32 */
#if defined (mips)
  printf (" -Dmips");
#endif /* mips */
#if defined (n16)
  printf (" -Dn16");
#endif /* n16 */
#if defined __nonstopux
  printf (" -D__nonstopux");
#endif
#if defined (ns32000)
  printf (" -Dns32000");
#endif /* ns32000 */
#if defined (os)
  printf (" -Dos");
#endif /* os */
#if defined (osf)
  printf (" -Dosf");
#endif /* osf */
#if defined (__osf__)
  printf (" -D__osf__");
#endif /* __osf__ */
#if defined (__OSF1__)
  printf(" -D__OSF1__");
#endif /* __OSF1__ */
#if defined (pdp11)
  printf (" -Dpdp11");
#endif /* pdp11 */
#if defined (plexus)
  printf (" -Dplexus")
#endif /* plexus */
#if defined (pyr)
  printf (" -Dpyr");
#endif /* pyr */
#if defined (scs)
  printf (" -Dscs");
#endif /* scs */
#if defined (sequent)
  printf (" -Dsequent");
#endif /* sequent */
#if defined (sgi)
  printf (" -Dsgi");
#endif /* sgi */
#if defined (sony)
  printf (" -Dsony");
#endif /* sony */
#if defined (sparc)
  printf (" -Dsparc");
#endif /* sparc */
#if defined (stardent)
  printf (" -Dstardent");
#endif /* stardent */
#if defined (sun)
  printf (" -Dsun");
#endif /* sun */
#if defined (sun2)
  printf (" -Dsun2");
#endif /* sun2 */
#if defined (sun3)
  printf (" -Dsun3");
#endif /* sun3 */
#if defined (sun4)
  printf (" -Dsun4");
#endif /* sun4 */
#if defined (__svr4__)
  printf (" -D__svr4__");
#endif /* __svr4__ */
#if defined (tower32)
  printf (" -Dtower32");
#endif /* tower32 */
#if defined (tss)
  printf (" -Dtss");
#endif /* tss */
#if defined (u370)
  printf (" -Du370");
#endif /* u370 */
#if defined (u3b)
  printf (" -Du3b");
#endif /* u3b */
#if defined (u3b2)
  printf (" -Du3b2");
#endif /* u3b2 */
#if defined (u3b20d)
  printf (" -Du3b20d");
#endif /* u3b20d */
#if defined (u3b5)
  printf (" -Du3b5");
#endif /* u3b5 */
#if defined (ultrix)
  printf (" -Dultrix");
#endif /* ultrix */
#if defined (unix)
  printf (" -Dunix");
#endif /* unix */
#if defined (vax)
  printf (" -Dvax");
#endif /* vax */
#if defined (__x86_64)
  printf (" -D__x86_64");
#endif /* __x86_64 */
#if defined (__x86_64__)
  printf (" -D__x86_64__");
#endif /* __x86_64__ */

  printf ("\n");
  exit (0);
}
