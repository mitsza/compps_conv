      DOUBLE PRECISION PLIND,GMIN,GMAX,DNORPOW,DNORMAX,RATIO 
      COMMON /MSJPPOW/PLIND,GMIN,GMAX,DNORPOW,DNORMAX,RATIO 
      SAVE  /MSJPPOW/

      DOUBLE PRECISION Z, Z2, G, G2, GT, G1
      COMMON /MSJPWZ/ Z,Z2,G,G2,GT,G1
      SAVE  /MSJPWZ/

      DOUBLE PRECISION GST,GST1,QO,QR,QOT,Q2,Q,QT,QMT,PM,RS,QS
      COMMON /MSJPWXM/ GST,GST1,QO,QR,QOT,Q2,Q,QT,QMT,PM,RS,QS
      SAVE  /MSJPWXM/

      DOUBLE PRECISION XX,XX1,SX,DX,T,TR,XM2,DX2,GM1,GA1,RB,RWB,NR
      COMMON /MSJPWX/XX,XX1,SX,DX,T,TR,XM2,DX2,GM1,GA1,RB,RWB,NR
      SAVE  /MSJPWX/

      DOUBLE PRECISION TRT,TRF,TRR,TRS,TR2,XS,XS1,XA,XA1,XXA,XXA1
      COMMON /MSJPWFT/TRT,TRF,TRR,TRS,TR2,XS,XS1,XA,XA1,XXA,XXA1
      SAVE  /MSJPWFT/

      DOUBLE PRECISION GAMMEAN,ZMEAN,GAMSQUA,DK12 
      COMMON /MSJPWYAV/ GAMMEAN,ZMEAN,GAMSQUA,DK12 
      SAVE  /MSJPWYAV/