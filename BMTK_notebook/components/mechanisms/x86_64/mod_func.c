#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _CaDynamics_reg(void);
extern void _Ca_HVA_reg(void);
extern void _Ca_LVA_reg(void);
extern void _capool_reg(void);
extern void _h_reg(void);
extern void _Ih_reg(void);
extern void _im_reg(void);
extern void _Im_reg(void);
extern void _Im_v2_reg(void);
extern void _kaprox_reg(void);
extern void _Kd_reg(void);
extern void _kdrca1_reg(void);
extern void _K_P_reg(void);
extern void _K_T_reg(void);
extern void _Kv2like_reg(void);
extern void _Kv3_1_reg(void);
extern void _kv_reg(void);
extern void _leak_reg(void);
extern void _na12_reg(void);
extern void _na16_reg(void);
extern void _na3_reg(void);
extern void _nap_reg(void);
extern void _Nap_reg(void);
extern void _NaTa_reg(void);
extern void _NaTs_reg(void);
extern void _NaV_reg(void);
extern void _sahp_reg(void);
extern void _SK_reg(void);
extern void _vecevent_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," modfiles//CaDynamics.mod");
    fprintf(stderr," modfiles//Ca_HVA.mod");
    fprintf(stderr," modfiles//Ca_LVA.mod");
    fprintf(stderr," modfiles//capool.mod");
    fprintf(stderr," modfiles//h.mod");
    fprintf(stderr," modfiles//Ih.mod");
    fprintf(stderr," modfiles//im.mod");
    fprintf(stderr," modfiles//Im.mod");
    fprintf(stderr," modfiles//Im_v2.mod");
    fprintf(stderr," modfiles//kaprox.mod");
    fprintf(stderr," modfiles//Kd.mod");
    fprintf(stderr," modfiles//kdrca1.mod");
    fprintf(stderr," modfiles//K_P.mod");
    fprintf(stderr," modfiles//K_T.mod");
    fprintf(stderr," modfiles//Kv2like.mod");
    fprintf(stderr," modfiles//Kv3_1.mod");
    fprintf(stderr," modfiles//kv.mod");
    fprintf(stderr," modfiles//leak.mod");
    fprintf(stderr," modfiles//na12.mod");
    fprintf(stderr," modfiles//na16.mod");
    fprintf(stderr," modfiles//na3.mod");
    fprintf(stderr," modfiles//nap.mod");
    fprintf(stderr," modfiles//Nap.mod");
    fprintf(stderr," modfiles//NaTa.mod");
    fprintf(stderr," modfiles//NaTs.mod");
    fprintf(stderr," modfiles//NaV.mod");
    fprintf(stderr," modfiles//sahp.mod");
    fprintf(stderr," modfiles//SK.mod");
    fprintf(stderr," modfiles//vecevent.mod");
    fprintf(stderr, "\n");
  }
  _CaDynamics_reg();
  _Ca_HVA_reg();
  _Ca_LVA_reg();
  _capool_reg();
  _h_reg();
  _Ih_reg();
  _im_reg();
  _Im_reg();
  _Im_v2_reg();
  _kaprox_reg();
  _Kd_reg();
  _kdrca1_reg();
  _K_P_reg();
  _K_T_reg();
  _Kv2like_reg();
  _Kv3_1_reg();
  _kv_reg();
  _leak_reg();
  _na12_reg();
  _na16_reg();
  _na3_reg();
  _nap_reg();
  _Nap_reg();
  _NaTa_reg();
  _NaTs_reg();
  _NaV_reg();
  _sahp_reg();
  _SK_reg();
  _vecevent_reg();
}
