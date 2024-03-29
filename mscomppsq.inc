c Common blocks for compps.f

C NG - number of points in Gauss quadrature 
C (used in   POWMATR & MAXGALA, MAXCUT)  
      INTEGER NG
      PARAMETER(NG=15)
c NS - azimuth integration using Gauss quadrature 
      INTEGER NS
      PARAMETER(NS=15)
c NSPH - tau integration in spherical geometry using Gauss quadrature 
      INTEGER NSPH
      PARAMETER(NSPH=7)     
C NC=MAXANG -  number of points in Gauss quadrature (used in 
C          angular integrals) 
C NT=MAXTAU - number of points in trapec formula 
C            (integration over  optical depth)
      INTEGER MAXTAU, MAXFRE, MAXANG, NSP, ND
      INTEGER KK, LL, NEX, NCX, IPC, NMU
      PARAMETER(MAXTAU=25)
c      PARAMETER(MAXFRE=88,MAXANG=5)
      PARAMETER(MAXFRE=100,MAXANG=5) 
      PARAMETER(NSP=2*MAXFRE,ND=1)
      PARAMETER(KK=MAXFRE*MAXANG,LL=ND*KK)
      PARAMETER(NEX=MAXFRE*(MAXFRE+1)/2,NCX=MAXANG*(MAXANG+1)/2)
c NMU - number of points in mu (-1,1) in CSRF 
      PARAMETER(IPC=ND*MAXFRE,NMU=2*MAXANG)

      DOUBLE PRECISION XEN(MAXFRE),XLOG(MAXFRE),XKEV(MAXFRE)
      DOUBLE PRECISION EXXY(NEX),S0(MAXFRE)
      COMMON/MSQQWFRE/XEN, XLOG, XKEV, EXXY, S0
      SAVE /MSQQWFRE/

      INTEGER IGROUND,ICHAND,KEYRAY,IREDF,IDISTF,IGEOM,INPUT
      COMMON/MSQWITCH/IGROUND,ICHAND,KEYRAY,IREDF,IDISTF,IGEOM,INPUT
      SAVE /MSQWITCH/

      DOUBLE PRECISION EPSMIN,XEMAX
      INTEGER NISO,ISOTR,MAXSC
      COMMON/MSSWITC2/EPSMIN,XEMAX,NISO,ISOTR,MAXSC
      SAVE /MSSWITC2/

      DOUBLE PRECISION DINTEN(MAXFRE)
      COMMON/MSQBB/DINTEN
      SAVE /MSQBB/

      DOUBLE PRECISION DINTPL(LL),DINTMI(LL),SUIPL(LL),SUIMI(LL) 
      COMMON/MSQQRES/DINTPL,DINTMI,SUIPL,SUIMI 
      SAVE /MSQQRES/

      DOUBLE PRECISION FRDPP(LL,LL),FRDPM(LL,LL),FRDX(IPC,IPC)
      DOUBLE PRECISION FRDS(IPC,IPC),FRDMU(MAXFRE,MAXFRE,NMU) 
      COMMON/MSQQRST/FRDPP,FRDPM,FRDX,FRDS,FRDMU
      SAVE /MSQQRST/

      DOUBLE PRECISION A(MAXFRE),UANG(MAXANG),AANG(MAXANG),AC(LL)
      DOUBLE PRECISION AINT(LL),CINT(LL)
      COMMON/MSQQCM2/A,UANG,AANG,AC,AINT,CINT
      SAVE /MSQQCM2/

      DOUBLE PRECISION UG(NG),AG(NG)
      COMMON/MSQQWG/UG,AG
      SAVE /MSQQWG/

      DOUBLE PRECISION UGS(NS),AGS(NS)
      COMMON/MSQQWS/UGS,AGS
      SAVE /MSQQWS/

      DOUBLE PRECISION UGSPH(NSPH),AGSPH(NSPH)
      COMMON/MSQQWSPH/UGSPH,AGSPH
      SAVE /MSQQWSPH/

      DOUBLE PRECISION YPH
      COMMON/MSQWPH/YPH
      SAVE /MSQWPH/

      DOUBLE PRECISION YE,Y1,YR1,YR2,DY,YKY,DK02,DK2Y,G0 
      COMMON /MSQQWYY/ YE,Y1,YR1,YR2,DY,YKY,DK02,DK2Y,G0 
      SAVE  /MSQQWYY/

      DOUBLE PRECISION UL(40),AL(40),AU(40),AE(40)
      INTEGER N0  
      COMMON/MSWAGUE/UL,AL,AU,AE,N0        
      SAVE /MSWAGUE/
