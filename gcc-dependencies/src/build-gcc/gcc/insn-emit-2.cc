/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"
#include "dfp.h"
#include "output.h"
#include "recog.h"
#include "df.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "target.h"

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27967 */
rtx
gen_testui (void)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (1,
		const0_rtx),
	74));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27975 */
rtx
gen_senduipi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	75);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27986 */
rtx
gen_umwait (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	69));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27995 */
rtx
gen_umwait_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	69));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28005 */
rtx
gen_umonitor_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	70);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28005 */
rtx
gen_umonitor_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	70);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28013 */
rtx
gen_tpause (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	71));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28022 */
rtx
gen_tpause_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	71));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28032 */
rtx
gen_cldemote (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	76);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28040 */
rtx
gen_speculation_barrier (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	77);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28047 */
rtx
gen_serialize (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	81);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28054 */
rtx
gen_patchable_area (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	82);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28068 */
rtx
gen_hreset (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	83);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28150 */
rtx
gen_urdmsr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	85));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28160 */
rtx
gen_uwrmsr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	86);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28170 */
rtx
gen_ldtilecfg (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	87);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:28180 */
rtx
gen_sttilecfg (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (XImode,
	gen_rtvec (1,
		const0_rtx),
	88));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:607 */
rtx
gen_sse_movntq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	107));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_ieee_maxv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_ieee_minv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:858 */
rtx
gen_mmx_rcpv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	108));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:868 */
rtx
gen_mmx_rcpit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	109));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:879 */
rtx
gen_mmx_rcpit2v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	110));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:906 */
rtx
gen_mmx_rsqrtv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	111));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:916 */
rtx
gen_mmx_rsqit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	112));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:992 */
rtx
gen_mmx_hsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1120 */
rtx
gen_mmx_gtv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1130 */
rtx
gen_mmx_gev2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GE (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1196 */
rtx
gen_sse4_1_insertps_v2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	49));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1196 */
rtx
gen_sse4_1_insertps_v2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	49));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1252 */
rtx
gen_mmx_blendvps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1294 */
rtx
gen_andv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V2SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1294 */
rtx
gen_iorv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (V2SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1294 */
rtx
gen_xorv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (V2SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1496 */
rtx
gen_mmx_fix_truncv2sfv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1537 */
rtx
gen_mmx_floatv2siv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V2SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1546 */
rtx
gen_mmx_pf2iw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	gen_rtx_FIX (V2SImode,
	operand1))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1558 */
rtx
gen_mmx_pi2fw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V2SFmode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:1576 */
rtx
gen_mmx_pswapdv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2440 */
rtx
gen_andv2hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V2HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2440 */
rtx
gen_iorv2hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (V2HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2440 */
rtx
gen_xorv2hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (V2HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2440 */
rtx
gen_andv4hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V4HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2440 */
rtx
gen_iorv4hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (V4HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2440 */
rtx
gen_xorv4hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (V4HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2872 */
rtx
gen_negv2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NEG (V2QImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2965 */
rtx
gen_addv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2965 */
rtx
gen_subv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V4QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2965 */
rtx
gen_addv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2965 */
rtx
gen_subv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2978 */
rtx
gen_addv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:2978 */
rtx
gen_subv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3083 */
rtx
gen_mulv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3128 */
rtx
gen_mulv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3242 */
rtx
gen_smulv2hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_LSHIFTRT (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V2SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3242 */
rtx
gen_umulv2hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_LSHIFTRT (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3390 */
rtx
gen_smaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V8QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3390 */
rtx
gen_sminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V8QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3390 */
rtx
gen_smaxv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3390 */
rtx
gen_sminv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3439 */
rtx
gen_smaxv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V4QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3439 */
rtx
gen_sminv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V4QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3439 */
rtx
gen_smaxv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V2QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3439 */
rtx
gen_sminv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V2QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3455 */
rtx
gen_smaxv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3455 */
rtx
gen_sminv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3468 */
rtx
gen_umaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V4HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3468 */
rtx
gen_uminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V4HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3468 */
rtx
gen_umaxv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3468 */
rtx
gen_uminv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3517 */
rtx
gen_umaxv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V4QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3517 */
rtx
gen_uminv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V4QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3517 */
rtx
gen_umaxv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V2QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3517 */
rtx
gen_uminv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V2QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3530 */
rtx
gen_umaxv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3530 */
rtx
gen_uminv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3546 */
rtx
gen_ssse3_absv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (V8QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3546 */
rtx
gen_ssse3_absv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (V4HImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3546 */
rtx
gen_ssse3_absv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (V2SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3567 */
rtx
gen_absv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (V4QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3567 */
rtx
gen_absv2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (V2QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3567 */
rtx
gen_absv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ABS (V2HImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3585 */
rtx
gen_mmx_ashrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3585 */
rtx
gen_mmx_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3611 */
rtx
gen_mmx_ashlv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3611 */
rtx
gen_mmx_lshrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3611 */
rtx
gen_mmx_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3611 */
rtx
gen_mmx_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3611 */
rtx
gen_mmx_ashlv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V1DImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3611 */
rtx
gen_mmx_lshrv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V1DImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3637 */
rtx
gen_mmx_ashlv1si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V1SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3637 */
rtx
gen_mmx_lshrv1si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V1SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3654 */
rtx
gen_ashlv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3654 */
rtx
gen_lshrv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3654 */
rtx
gen_ashrv2hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V2HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3693 */
rtx
gen_ashlv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3693 */
rtx
gen_lshrv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3693 */
rtx
gen_ashrv2qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V2QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3857 */
rtx
gen_mmx_gtv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V8QImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3857 */
rtx
gen_mmx_gtv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V4HImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:3857 */
rtx
gen_mmx_gtv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4063 */
rtx
gen_mmx_pblendvb_v8qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4139 */
rtx
gen_mmx_pblendvb_v4qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4139 */
rtx
gen_mmx_pblendvb_v2qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4139 */
rtx
gen_mmx_pblendvb_v2hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4261 */
rtx
gen_mmx_ppermv64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	52));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4273 */
rtx
gen_mmx_ppermv32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	52));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4299 */
rtx
gen_one_cmplv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NOT (V4QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4299 */
rtx
gen_one_cmplv2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NOT (V2QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4299 */
rtx
gen_one_cmplv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_NOT (V2HImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4336 */
rtx
gen_mmx_andnotv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V8QImode,
	gen_rtx_NOT (V8QImode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4336 */
rtx
gen_mmx_andnotv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V4HImode,
	gen_rtx_NOT (V4HImode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4336 */
rtx
gen_mmx_andnotv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V2SImode,
	gen_rtx_NOT (V2SImode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4513 */
rtx
gen_mmx_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4535 */
rtx
gen_mmx_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4554 */
rtx
gen_mmx_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4574 */
rtx
gen_mmx_packusdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4589 */
rtx
gen_mmx_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4612 */
rtx
gen_mmx_punpckhbw_low (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_VEC_CONCAT (V8QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4629 */
rtx
gen_mmx_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4652 */
rtx
gen_mmx_punpcklbw_low (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_VEC_CONCAT (V8QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4669 */
rtx
gen_mmx_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4690 */
rtx
gen_mmx_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4711 */
rtx
gen_mmx_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4732 */
rtx
gen_mmx_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4753 */
rtx
gen_sse4_1_sign_extendv4qiv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4753 */
rtx
gen_sse4_1_zero_extendv4qiv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4786 */
rtx
gen_sse4_1_sign_extendv2hiv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4786 */
rtx
gen_sse4_1_zero_extendv2hiv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4818 */
rtx
gen_sse4_1_sign_extendv2qiv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4818 */
rtx
gen_sse4_1_zero_extendv2qiv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4844 */
rtx
gen_sse4_1_sign_extendv2qiv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2HImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4844 */
rtx
gen_sse4_1_zero_extendv2qiv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V2HImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4876 */
rtx
gen_truncv2hiv2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4887 */
rtx
gen_truncv2siv2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2QImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:4887 */
rtx
gen_truncv2siv2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:5204 */
rtx
gen_mmx_pshufbv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:5222 */
rtx
gen_mmx_pshufbv4qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:5256 */
rtx
gen_mmx_pshufwv4hf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:5256 */
rtx
gen_mmx_pshufwv4bf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:5256 */
rtx
gen_mmx_pshufwv4hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:5359 */
rtx
gen_mmx_pswapdv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:6124 */
rtx
gen_uavgv4qi3_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V4QImode,
	gen_rtx_LSHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:6145 */
rtx
gen_uavgv2qi3_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2QImode,
	gen_rtx_LSHIFTRT (V2HImode,
	gen_rtx_PLUS (V2HImode,
	gen_rtx_PLUS (V2HImode,
	gen_rtx_ZERO_EXTEND (V2HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V2HImode,
	gen_rtvec (2,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:6165 */
rtx
gen_uavgv2hi3_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V2HImode,
	gen_rtx_LSHIFTRT (V2SImode,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V2SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../gcc-14.1.0/gcc/config/i386/mmx.md:6345 */
rtx
gen_mmx_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv64qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv32qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv16qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv32hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv16hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv16si_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8si_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv4si_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8di_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv4di_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv2di_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv4ti_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv2ti_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv1ti_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv32hf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv16hf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8hf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv32bf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv16bf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8bf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv16sf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8sf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv4sf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv8df_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv4df_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1401 */
rtx
gen_movv2df_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1581 */
rtx
gen_avx512f_movhf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	operand2,
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1581 */
rtx
gen_avx512f_movsf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1581 */
rtx
gen_avx512f_movdf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1626 */
rtx
gen_avx512f_storehf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (HFmode,
	gen_rtx_AND (QImode,
	operand2,
	const1_rtx),
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand0));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1626 */
rtx
gen_avx512f_storesf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_AND (QImode,
	operand2,
	const1_rtx),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand0));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1626 */
rtx
gen_avx512f_storedf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_AND (QImode,
	operand2,
	const1_rtx),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand0));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512f_blendmv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512f_blendmv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512f_blendmv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512f_blendmv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1642 */
rtx
gen_avx512vl_blendmv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512bw_blendmv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512bw_blendmv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512bw_blendmv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512fp16_blendmv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512bw_blendmv32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1673 */
rtx
gen_avx512vl_blendmv8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	operand2,
	operand1,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1771 */
rtx
gen_movdi_to_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	114)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1880 */
rtx
gen_avx_lddqu256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (1,
		operand1),
	115));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1880 */
rtx
gen_sse3_lddqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	115));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1903 */
rtx
gen_sse2_movntisi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1903 */
rtx
gen_sse2_movntidi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1913 */
rtx
gen_avx512f_movntv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1913 */
rtx
gen_avx_movntv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1913 */
rtx
gen_sse_movntv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1913 */
rtx
gen_avx512f_movntv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1913 */
rtx
gen_avx_movntv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1913 */
rtx
gen_sse2_movntv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1924 */
rtx
gen_avx512f_movntv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1924 */
rtx
gen_avx_movntv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1924 */
rtx
gen_sse2_movntv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kandqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kiorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kxorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kandhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kiorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kxorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kandsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kiorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kxorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kanddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kiordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:1986 */
rtx
gen_kxordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2020 */
rtx
gen_kandnqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	operand1),
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2020 */
rtx
gen_kandnhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_NOT (HImode,
	operand1),
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2020 */
rtx
gen_kandnsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2020 */
rtx
gen_kandndi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2058 */
rtx
gen_kxnorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (QImode,
	gen_rtx_XOR (QImode,
	operand1,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2058 */
rtx
gen_kxnorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (HImode,
	gen_rtx_XOR (HImode,
	operand1,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2058 */
rtx
gen_kxnorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (SImode,
	gen_rtx_XOR (SImode,
	operand1,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2058 */
rtx
gen_kxnordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (DImode,
	gen_rtx_XOR (DImode,
	operand1,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2081 */
rtx
gen_knotqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (QImode,
	operand1)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2081 */
rtx
gen_knothi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (HImode,
	operand1)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2081 */
rtx
gen_knotsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (SImode,
	operand1)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2081 */
rtx
gen_knotdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (DImode,
	operand1)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2134 */
rtx
gen_kaddqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2134 */
rtx
gen_kaddhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2134 */
rtx
gen_kaddsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2134 */
rtx
gen_kadddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_kashiftqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_klshiftrtqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_kashifthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_klshiftrthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_kashiftsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_klshiftrtsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_kashiftdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2149 */
rtx
gen_klshiftrtdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2175 */
rtx
gen_ktestqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	170));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2175 */
rtx
gen_ktesthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	170));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2175 */
rtx
gen_ktestsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	170));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2175 */
rtx
gen_ktestdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	170));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2199 */
rtx
gen_kortestqi_ccc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2199 */
rtx
gen_kortesthi_ccc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2199 */
rtx
gen_kortestsi_ccc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2199 */
rtx
gen_kortestdi_ccc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2207 */
rtx
gen_kortestqi_ccz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2207 */
rtx
gen_kortesthi_ccz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2207 */
rtx
gen_kortestsi_ccz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2207 */
rtx
gen_kortestdi_ccz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	169));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2223 */
rtx
gen_kunpckhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (HImode,
	gen_rtx_ASHIFT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2237 */
rtx
gen_kunpcksi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]),
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2249 */
rtx
gen_kunpckdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmaddv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_PLUS (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmaddv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_PLUS (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmaddv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_PLUS (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmaddv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_PLUS (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmsubv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MINUS (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmsubv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MINUS (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmsubv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MINUS (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_avx512fp16_vmsubv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MINUS (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmaddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmaddv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmaddv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmaddv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmsubv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmsubv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse_vmsubv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmaddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmaddv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmaddv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmaddv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmsubv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmsubv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2396 */
rtx
gen_sse2_vmsubv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmmulv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MULT (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmmulv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MULT (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmmulv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MULT (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmmulv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_MULT (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmdivv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_DIV (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmdivv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_DIV (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmdivv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_DIV (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_avx512fp16_vmdivv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_DIV (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmmulv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmmulv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmmulv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmmulv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmdivv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmdivv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmdivv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse_vmdivv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmmulv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmmulv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmmulv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmmulv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmdivv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmdivv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmdivv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2487 */
rtx
gen_sse2_vmdivv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv32hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V32HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv32hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_DIV (V32HFmode,
	operand1,
	operand2),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv32hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_DIV (V32HFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv32hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_DIV (V32HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv16hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V16HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv16hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_DIV (V16HFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V8HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512fp16_divv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_DIV (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V16SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv16sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_DIV (V16SFmode,
	operand1,
	operand2),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_DIV (V16SFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv16sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_DIV (V16SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx_divv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V8SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx_divv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_DIV (V8SFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_sse_divv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_sse_divv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V8DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv8df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_DIV (V8DFmode,
	operand1,
	operand2),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_DIV (V8DFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx512f_divv8df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_DIV (V8DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx_divv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V4DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_avx_divv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_DIV (V4DFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_sse2_divv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2568 */
rtx
gen_sse2_divv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2582 */
rtx
gen_avx_rcpv8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2582 */
rtx
gen_sse_rcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2596 */
rtx
gen_sse_vmrcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	53),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2635 */
rtx
gen_avx512fp16_rcpv32hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2635 */
rtx
gen_avx512fp16_rcpv32hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	53),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2635 */
rtx
gen_avx512fp16_rcpv16hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2635 */
rtx
gen_avx512fp16_rcpv16hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	53),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2635 */
rtx
gen_avx512fp16_rcpv8hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2635 */
rtx
gen_avx512fp16_rcpv8hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	53),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2646 */
rtx
gen_avx512fp16_vmrcpv8hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	53),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2646 */
rtx
gen_avx512fp16_vmrcpv8hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	53),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2673 */
rtx
gen_rcp14v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2673 */
rtx
gen_rcp14v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2673 */
rtx
gen_rcp14v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2673 */
rtx
gen_rcp14v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2673 */
rtx
gen_rcp14v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2673 */
rtx
gen_rcp14v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2684 */
rtx
gen_srcp14v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2684 */
rtx
gen_srcp14v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2698 */
rtx
gen_srcp14v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2698 */
rtx
gen_srcp14v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	157),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv32hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V32HFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv32hf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_SQRT (V32HFmode,
	operand1),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv32hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_SQRT (V32HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv32hf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_SQRT (V32HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv16hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V16HFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv16hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_SQRT (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv8hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V8HFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512fp16_sqrtv8hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SQRT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv16sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V16SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv16sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_SQRT (V16SFmode,
	operand1),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv16sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_SQRT (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv16sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_SQRT (V16SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx_sqrtv8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V8SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx_sqrtv8sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_SQRT (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_sse_sqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V4SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_sse_sqrtv4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv8df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V8DFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv8df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_SQRT (V8DFmode,
	operand1),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv8df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_SQRT (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx512f_sqrtv8df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_SQRT (V8DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx_sqrtv4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V4DFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_avx_sqrtv4df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_SQRT (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_sse2_sqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (V2DFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2736 */
rtx
gen_sse2_sqrtv2df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_avx512fp16_vmsqrtv8hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SQRT (V8HFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_avx512fp16_vmsqrtv8hf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SQRT (V8HFmode,
	operand1),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_avx512fp16_vmsqrtv8hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SQRT (V8HFmode,
	operand1),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_avx512fp16_vmsqrtv8hf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SQRT (V8HFmode,
	operand1),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse_vmsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse_vmsqrtv4sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse_vmsqrtv4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse_vmsqrtv4sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse2_vmsqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse2_vmsqrtv2df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse2_vmsqrtv2df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2750 */
rtx
gen_sse2_vmsqrtv2df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2805 */
rtx
gen_avx_rsqrtv8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	54));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2805 */
rtx
gen_sse_rsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	54));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2817 */
rtx
gen_avx512fp16_rsqrtv32hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	54));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2817 */
rtx
gen_avx512fp16_rsqrtv32hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	54),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2817 */
rtx
gen_avx512fp16_rsqrtv16hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	54));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2817 */
rtx
gen_avx512fp16_rsqrtv16hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	54),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2817 */
rtx
gen_avx512fp16_rsqrtv8hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	54));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2817 */
rtx
gen_avx512fp16_rsqrtv8hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	54),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2827 */
rtx
gen_rsqrt14v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2827 */
rtx
gen_rsqrt14v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2827 */
rtx
gen_rsqrt14v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2827 */
rtx
gen_rsqrt14v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2827 */
rtx
gen_rsqrt14v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2827 */
rtx
gen_rsqrt14v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	operand3));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2838 */
rtx
gen_rsqrt14v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2838 */
rtx
gen_rsqrt14v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2852 */
rtx
gen_rsqrt14_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2852 */
rtx
gen_rsqrt14_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	158),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2869 */
rtx
gen_sse_vmrsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	54),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2904 */
rtx
gen_avx512fp16_vmrsqrtv8hf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	54),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2904 */
rtx
gen_avx512fp16_vmrsqrtv8hf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	54),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv32hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv32hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv32hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv32hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv32hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv32hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv32hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv32hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv16hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv16hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv16hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv16hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv16sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv16sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv16sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv16sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv8df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv8df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_maxv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	61),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:2999 */
rtx
gen_ieee_minv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	60),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsmaxv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMAX (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsmaxv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMAX (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsmaxv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMAX (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsmaxv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMAX (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsminv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMIN (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsminv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMIN (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsminv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMIN (V8HFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_avx512fp16_vmsminv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_SMIN (V8HFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsmaxv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsmaxv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsmaxv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsmaxv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsminv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsminv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsminv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse_vmsminv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsmaxv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsmaxv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsmaxv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsmaxv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsminv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsminv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsminv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3050 */
rtx
gen_sse2_vmsminv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3071 */
rtx
gen_vec_addsubv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_MINUS (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PLUS (V8SFmode,
	operand1,
	operand2),
	GEN_INT (85L)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3071 */
rtx
gen_vec_addsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3071 */
rtx
gen_vec_addsubv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_MINUS (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PLUS (V4DFmode,
	operand1,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3071 */
rtx
gen_vec_addsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3218 */
rtx
gen_avx_haddv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3218 */
rtx
gen_avx_hsubv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))),
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3290 */
rtx
gen_sse3_hsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3350 */
rtx
gen_avx_haddv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))),
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3350 */
rtx
gen_avx_hsubv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))),
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3394 */
rtx
gen_sse3_haddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3394 */
rtx
gen_sse3_hsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3591 */
rtx
gen_reducepv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	191),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3603 */
rtx
gen_reducesv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	191),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3662 */
rtx
gen_avx_cmpv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3662 */
rtx
gen_avx_cmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3662 */
rtx
gen_avx_cmpv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3662 */
rtx
gen_avx_cmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3873 */
rtx
gen_avx_vmcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3873 */
rtx
gen_avx_vmcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3908 */
rtx
gen_avx_maskcmpv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V8SFmode,
		operand1,
		operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3908 */
rtx
gen_sse_maskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3908 */
rtx
gen_avx_maskcmpv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4DFmode,
		operand1,
		operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3908 */
rtx
gen_sse2_maskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3924 */
rtx
gen_sse_vmmaskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3924 */
rtx
gen_sse2_vmmaskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16si3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16si3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8di3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8di3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512bw_cmpv32hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512bw_cmpv32hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512bw_cmpv32hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512bw_cmpv32hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv16hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv16hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512fp16_cmpv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512fp16_cmpv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv16sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512f_cmpv8df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:3954 */
rtx
gen_avx512vl_cmpv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512bw_cmpv64qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512bw_cmpv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512bw_cmpv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512bw_cmpv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4058 */
rtx
gen_avx512vl_cmpv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512bw_ucmpv64qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512bw_ucmpv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512bw_ucmpv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512bw_ucmpv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4176 */
rtx
gen_avx512vl_ucmpv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512f_ucmpv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512f_ucmpv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512f_ucmpv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512f_ucmpv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4273 */
rtx
gen_avx512vl_ucmpv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	153),
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4412 */
rtx
gen_avx512f_vmcmpv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4412 */
rtx
gen_avx512f_vmcmpv8hf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	const1_rtx),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4412 */
rtx
gen_avx512f_vmcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4412 */
rtx
gen_avx512f_vmcmpv4sf3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	const1_rtx),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4412 */
rtx
gen_avx512f_vmcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	const1_rtx));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4412 */
rtx
gen_avx512f_vmcmpv2df3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	const1_rtx),
		operand4),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4428 */
rtx
gen_avx512f_vmcmpv8hf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	gen_rtx_AND (QImode,
	operand4,
	const1_rtx)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4428 */
rtx
gen_avx512f_vmcmpv8hf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	gen_rtx_AND (QImode,
	operand4,
	const1_rtx)),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4428 */
rtx
gen_avx512f_vmcmpv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	gen_rtx_AND (QImode,
	operand4,
	const1_rtx)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4428 */
rtx
gen_avx512f_vmcmpv4sf3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	gen_rtx_AND (QImode,
	operand4,
	const1_rtx)),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4428 */
rtx
gen_avx512f_vmcmpv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	gen_rtx_AND (QImode,
	operand4,
	const1_rtx)));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4428 */
rtx
gen_avx512f_vmcmpv2df3_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	58),
	gen_rtx_AND (QImode,
	operand4,
	const1_rtx)),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse_comi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (2,
		gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	27));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse_ucomi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	27),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse2_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse2_comi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (2,
		gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse2_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	27));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4446 */
rtx
gen_sse2_ucomi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	27),
		operand2),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_avx512fp16_andnotv16hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V16HFmode,
	gen_rtx_NOT (V16HFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_avx512fp16_andnotv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V8HFmode,
	gen_rtx_NOT (V8HFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_avx_andnotv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V8SFmode,
	gen_rtx_NOT (V8SFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_avx_andnotv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_AND (V8SFmode,
	gen_rtx_NOT (V8SFmode,
	operand1),
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_sse_andnotv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V4SFmode,
	gen_rtx_NOT (V4SFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_sse_andnotv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_AND (V4SFmode,
	gen_rtx_NOT (V4SFmode,
	operand1),
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_avx_andnotv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V4DFmode,
	gen_rtx_NOT (V4DFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_avx_andnotv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_AND (V4DFmode,
	gen_rtx_NOT (V4DFmode,
	operand1),
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_sse2_andnotv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V2DFmode,
	gen_rtx_NOT (V2DFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4835 */
rtx
gen_sse2_andnotv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_AND (V2DFmode,
	gen_rtx_NOT (V2DFmode,
	operand1),
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4908 */
rtx
gen_avx512fp16_andnotv32hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V32HFmode,
	gen_rtx_NOT (V32HFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4908 */
rtx
gen_avx512f_andnotv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V16SFmode,
	gen_rtx_NOT (V16SFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4908 */
rtx
gen_avx512f_andnotv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_AND (V16SFmode,
	gen_rtx_NOT (V16SFmode,
	operand1),
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4908 */
rtx
gen_avx512f_andnotv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V8DFmode,
	gen_rtx_NOT (V8DFmode,
	operand1),
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:4908 */
rtx
gen_avx512f_andnotv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_AND (V8DFmode,
	gen_rtx_NOT (V8DFmode,
	operand1),
	operand2),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_andbf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (BFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_iorbf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (BFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_xorbf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (BFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_andhf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_iorhf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_xorhf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_andsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_iorsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_xorsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_anddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_iordf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5259 */
rtx
gen_xordf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v32hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v32hf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v16hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v8hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v4df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5535 */
rtx
gen_fma_fmadd_v2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512bw_fmadd_v32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512bw_fmadd_v32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512vl_fmadd_v16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512fp16_fmadd_v8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512f_fmadd_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512f_fmadd_v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512vl_fmadd_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512vl_fmadd_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512f_fmadd_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512f_fmadd_v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512vl_fmadd_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5573 */
rtx
gen_avx512vl_fmadd_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512bw_fmadd_v32hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512bw_fmadd_v32hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v16hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v16hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512fp16_fmadd_v8hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512fp16_fmadd_v8hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512f_fmadd_v16sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512f_fmadd_v16sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v8sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v8sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v4sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v4sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512f_fmadd_v8df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512f_fmadd_v8df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v4df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v4df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v2df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5590 */
rtx
gen_avx512vl_fmadd_v2df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v32hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v32hf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v16hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v8hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v4df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5637 */
rtx
gen_fma_fmsub_v2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512bw_fmsub_v32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512bw_fmsub_v32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512fp16_fmsub_v8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512fp16_fmsub_v8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512f_fmsub_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512f_fmsub_v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512f_fmsub_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512f_fmsub_v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5677 */
rtx
gen_avx512vl_fmsub_v2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512bw_fmsub_v32hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512bw_fmsub_v32hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512vl_fmsub_v16hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512fp16_fmsub_v8hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512f_fmsub_v16sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512f_fmsub_v16sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512vl_fmsub_v8sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512vl_fmsub_v4sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512f_fmsub_v8df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512f_fmsub_v8df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512vl_fmsub_v4df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5695 */
rtx
gen_avx512vl_fmsub_v2df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	operand1,
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v32hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v32hf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v16hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v8hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v4df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5743 */
rtx
gen_fma_fnmadd_v2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	operand3),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512bw_fnmadd_v32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512bw_fnmadd_v32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512vl_fnmadd_v16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512fp16_fnmadd_v8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512f_fnmadd_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512f_fnmadd_v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512vl_fnmadd_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512vl_fnmadd_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512f_fnmadd_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512f_fnmadd_v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512vl_fnmadd_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5783 */
rtx
gen_avx512vl_fnmadd_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	operand3),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512bw_fnmadd_v32hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512bw_fnmadd_v32hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512vl_fnmadd_v16hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512fp16_fnmadd_v8hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512f_fnmadd_v16sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512f_fnmadd_v16sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512vl_fnmadd_v8sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512vl_fnmadd_v4sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512f_fnmadd_v8df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512f_fnmadd_v8df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512vl_fnmadd_v4df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5801 */
rtx
gen_avx512vl_fnmadd_v2df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	operand3),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v32hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v32hf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v16hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v8hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v4df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5850 */
rtx
gen_fma_fnmsub_v2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512bw_fnmsub_v32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512bw_fnmsub_v32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512vl_fnmsub_v16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512fp16_fnmsub_v8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512f_fnmsub_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512f_fnmsub_v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512vl_fnmsub_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512vl_fnmsub_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512f_fnmsub_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512f_fnmsub_v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512vl_fnmsub_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5892 */
rtx
gen_avx512vl_fnmsub_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512bw_fnmsub_v32hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512bw_fnmsub_v32hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FMA (V32HFmode,
	gen_rtx_NEG (V32HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V32HFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v16hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v16hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FMA (V16HFmode,
	gen_rtx_NEG (V16HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16HFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512fp16_fnmsub_v8hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512fp16_fnmsub_v8hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FMA (V8HFmode,
	gen_rtx_NEG (V8HFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8HFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512f_fnmsub_v16sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512f_fnmsub_v16sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FMA (V16SFmode,
	gen_rtx_NEG (V16SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V16SFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v8sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v8sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FMA (V8SFmode,
	gen_rtx_NEG (V8SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8SFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v4sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v4sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FMA (V4SFmode,
	gen_rtx_NEG (V4SFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4SFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512f_fnmsub_v8df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512f_fnmsub_v8df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FMA (V8DFmode,
	gen_rtx_NEG (V8DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V8DFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v4df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v4df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FMA (V4DFmode,
	gen_rtx_NEG (V4DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V4DFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v2df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:5911 */
rtx
gen_avx512vl_fnmsub_v2df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FMA (V2DFmode,
	gen_rtx_NEG (V2DFmode,
	operand1),
	operand2,
	gen_rtx_NEG (V2DFmode,
	operand3)),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v32hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v32hf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v16hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v8hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v4df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6013 */
rtx
gen_fma_fmaddsub_v2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512bw_fmaddsub_v32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512bw_fmaddsub_v32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512fp16_fmaddsub_v8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512fp16_fmaddsub_v8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512f_fmaddsub_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512f_fmaddsub_v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512f_fmaddsub_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512f_fmaddsub_v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6029 */
rtx
gen_avx512vl_fmaddsub_v2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand1,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512bw_fmaddsub_v32hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512bw_fmaddsub_v32hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v16hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v16hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512fp16_fmaddsub_v8hf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512fp16_fmaddsub_v8hf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512f_fmaddsub_v16sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512f_fmaddsub_v16sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v8sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v8sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v4sf_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v4sf_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512f_fmaddsub_v8df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512f_fmaddsub_v8df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v4df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v4df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v2df_mask3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6047 */
rtx
gen_avx512vl_fmaddsub_v2df_mask3_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	129),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v32hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V32HFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v32hf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V32HFmode,
	operand3)),
	129),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v16hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V16HFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v8hf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V8HFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V16SFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V16SFmode,
	operand3)),
	129),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V8SFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V4SFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V8DFmode,
	operand3)),
	129),
	operand4,
	operand5));
}

/* ../gcc-14.1.0/gcc/config/i386/sse.md:6082 */
rtx
gen_fma_fmsubadd_v8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_NEG (V8DFmode,
	operand3)),
	129),
	operand4,
	operand5),
		operand6),
	172));
}

