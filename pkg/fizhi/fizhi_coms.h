C $Header: /u/gcmpack/MITgcm/pkg/fizhi/fizhi_coms.h,v 1.4 2004/06/16 19:22:18 molod Exp $
C $Name:  $


C The physics state uses the dynamics dimensions in the horizontal
C     and the land dimensions in the horizontal for turbulence variables
c
c Physics State Common - State variables on physics grid
c ----------------------------------------------------------------------
      common /physics_state/ uphy,vphy,thphy,sphy,
     .   ctmt,xxmt,yymt,zetamt,xlmt,khmt,tke

      _RL uphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL vphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL thphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL sphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL ctmt(nchp,Nsx,Nsy), xxmt(nchp,Nsx,Nsy), yymt(nchp,Nsx,Nsy)
      _RL zetamt(nchp,Nsx,Nsy)
      _RL xlmt(nchp,Nrphys,Nsx,Nsy), khmt(nchp,Nrphys,Nsx,Nsy) 
      _RL tke(nchp,Nrphys,Nsx,Nsy)

c Physics Tendency Common - Changes in state variables due to physics
c ----------------------------------------------------------------------
      common /physics_tendency/ duphy,dvphy,dthphy,dsphy

      _RL duphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL dvphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL dthphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)
      _RL dsphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nrphys,Nsx,Nsy)

c Physics Exports Common - Physics variables on other grids for export
c ----------------------------------------------------------------------
      common /physics_exports/ guphy,gvphy,gthphy,gsphy

      _RL guphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,Nsx,Nsy)
      _RL gvphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,Nsx,Nsy)
      _RL gthphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,Nsx,Nsy)
      _RL gsphy(1-OLx:sNx+OLx,1-OLy:sNy+OLy,Nr,Nsx,Nsy)
