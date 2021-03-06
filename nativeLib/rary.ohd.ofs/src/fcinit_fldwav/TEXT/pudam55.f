C  THIS PROGRAM DOES PRINT FUNCTION FOR NWSRFS

      SUBROUTINE PUDAM55(K,J,KRA,HDD,CLL,HSPD,SPL,CRESL,HCRESL,CSD,
     1 HGTD,CGD,CDOD,QTD,HFDD,TFH,BBD,ZBCH,YBMIN,RHI,RQI,TCG,QGH,CGCG,
     2 QHT,NG,LAD,ICG,DTHDB,BREXP,CPIP,TIBQH,NUMLAD,GSIL,GWID,
     3 TGHT,GHT,ICHAN,PTAR,CHTW,GZPL,SAR,HSAR,TS1,IRES,NODESC,
     4 K1,K16,K19,K20,K21)

      COMMON/M3255/IOBS,KTERM,KPL,JNK,TEH
      COMMON/GT55/KCG,NCG
      COMMON/TKEP55/DTHII,MDT,NDT,DTHS,TFH1
      COMMON/IONUM/IN,IPR,IPU

      DIMENSION HDD(K16,K1),CLL(K16,K1),HSPD(K16,K1),SPL(K16,K1)
      DIMENSION CRESL(8,K16,K1),HCRESL(8,K16,K1),CSD(K16,K1)
      DIMENSION HGTD(K16,K1),CGD(K16,K1),CDOD(K16,K1),QTD(K16,K1)
      DIMENSION HFDD(K16,K1),TFH(K16,K1),BBD(K16,K1),ZBCH(K16,K1)
      DIMENSION YBMIN(K16,K1),RHI(112,K16,K1),RQI(112,K16,K1)
      DIMENSION TCG(K21,K16,K1),QGH(K21,K16,K1),CGCG(K21,K16,K1)
      DIMENSION QHT(8,8,K16,K1),NG(K20,K1),LAD(K16,K1),ICG(K16,K1)
      DIMENSION DTHDB(K16,K1),BREXP(K16,K1),CPIP(K16,K1)
      DIMENSION TIBQH(K16,K1),NUMLAD(K1)
      DIMENSION GSIL(K19,K20,K1),GWID(K19,K20,K1)
      DIMENSION TGHT(K21,K19,K20,K1),GHT(K21,K19,K20,K1),GZPL(K16,K1)
      DIMENSION ICHAN(K16,K1),PTAR(K16,K1)
      DIMENSION CHTW(K16,K1),TS1(1),SAR(8,K16,K1),HSAR(8,K16,K1)
      CHARACTER*8 SNAME
C
C    ================================= RCS keyword statements ==========
      CHARACTER*68     RCSKW1,RCSKW2
      DATA             RCSKW1,RCSKW2 /                                 '
     .$Source: /fs/hseb/ob72/rfc/ofs/src/fcinit_fldwav/RCS/pudam55.f,v $
     . $',                                                             '
     .$Id: pudam55.f,v 1.2 2004/02/02 20:39:48 jgofus Exp $
     . $' /
C    ===================================================================
C
      DATA SNAME/'PUDAM55 '/
C

      CALL FPRBUG(SNAME,1,55,IBUG)


      TOL=0.000001
      NUM=NUMLAD(J)
      IF(IRES.EQ.0) GO TO 100
      WRITE(IPU,2015) K,J,(SAR(L,K,J),L=1,8)
      WRITE(IPU,2020) K,J,(HSAR(L,K,J),L=1,8)

 100  HD=HDD(K,J)
      IF(HD.GT.9999.) HD=0.
      HSP=HSPD(K,J)
      IF(HSP.GT.9999.) HSP=0.
      HGT=HGTD(K,J)
      IF(HGT.GT.9999.) HGT=0.
      HF=HFDD(K,J)
      IF(HF.GT.9999.) HF=0.
      DTDB=DTHDB(K,J)
      IF(TFH(K,J).LT.0.0001) DTDB=0.

      WRITE(IPU,2070) LAD(K,J),HD,CLL(K,J),CDOD(K,J),QTD(K,J),ICHAN(K,J)
      WRITE(IPU,2075) ICG(K,J),HSP,SPL(K,J),CSD(K,J),HGT,CGD(K,J)
      IF(CLL(K,J).GT.0.1.OR.HDD(K,J).GT.9999.) GO TO 210
      WRITE(IPU,2080) K,J,(HCRESL(L,K,J),L=1,8)
      WRITE(IPU,2085) K,J,(CRESL(L,K,J),L=1,8)
  210 IF(KRA.EQ.28) WRITE(IPU,2090) PTAR(K,J),CHTW(K,J), GZPL(K,J)
      WRITE(IPU,2105) TFH(K,J),DTDB,HFD,BBD(K,J),
     .          ZBCH(K,J),YBMIN(K,J),BREXP(K,J),CPIP(K,J)
C---------------------------------------------------------------------------

 2015 FORMAT(3X,'SAR(L,',I2,',',I2,') L=1,8'/8F10.2)
 2020 FORMAT(3X,'HSAR(L,',I2,',',I2,') L=1,8'/8F10.2)
 2070 FORMAT(7X,3HLAD,7X,3HHDD,7X,3HCLL,6X,4HCDOD,7X,3HQTD,
     . 5X,5HICHAN/I10,4F10.2,I10)
 2075 FORMAT(7X,3HICG,6X,4HHSPD,7X,3HSPL,7X,3HCSD,6X,4HHGTD,7X,3HCGD,
     & /I10,8F10.2)
 2080 FORMAT(5X,'HCRESL(L,',I2,',',I2,'), L=1,8'/8F10.2)
 2085 FORMAT(5X,'CRESL(L,',I2,',',I2,'), L=1,8'/8F10.2)
 2090 FORMAT(6X,4HPTAR,6X,4HCHTW,6X,4HGZPL/3F10.2)
 2105 FORMAT(7X,3HTFH,5X,5HDTHDB,6X,4HHFDD,7X,3HBBD,6X,4HZBCH,
     & 5X,5HYBMIN,5X,5HBREXP,6X,4HCPIP/F10.3,F10.5,6F10.2)

      RETURN
      END











