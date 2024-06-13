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

/* ../gcc-14.1.0/gcc/config/i386/i386.md:1932 */
rtx
gen_x86_sahf_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	26));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:2029 */
rtx
gen_x86_stc (void)
{
  return gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (1,
		const0_rtx),
	42));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:2224 */
rtx
gen_pushflsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	43));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:2224 */
rtx
gen_pushfldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	43));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:2233 */
rtx
gen_popflsi1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand1),
	44));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:2233 */
rtx
gen_popfldi1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand1),
	44));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3239 */
rtx
gen_swapsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	copy_rtx (operand0))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3504 */
rtx
gen_insvhi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_ZERO_EXTRACT (HImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3504 */
rtx
gen_insvsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3783 */
rtx
gen_push2_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (2,
		operand1,
		operand2),
	103));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3794 */
rtx
gen_pop2_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	104)),
		gen_rtx_SET (operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	105))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3813 */
rtx
gen_popp_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	106)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3821 */
rtx
gen_push2p_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	106)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:3833 */
rtx
gen_pop2p_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	104)),
		gen_rtx_SET (operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	105)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	106)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:4733 */
rtx
gen_zero_extendqisi2_and (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:4733 */
rtx
gen_zero_extendhisi2_and (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:4788 */
rtx
gen_zero_extendqihi2_and (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:4879 */
rtx
gen_extendsidi2_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5015 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5073 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5090 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5346 */
rtx
gen_extendbfsf2_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	59));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5406 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5534 */
rtx
gen_truncxfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5534 */
rtx
gen_truncxfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5585 */
rtx
gen_truncsfbf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (BFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5634 */
rtx
gen_fix_trunchfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5634 */
rtx
gen_fixuns_trunchfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5741 */
rtx
gen_fixuns_truncsfsi2_avx512f (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5741 */
rtx
gen_fixuns_truncdfsi2_avx512f (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5811 */
rtx
gen_fix_truncsfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5811 */
rtx
gen_fix_truncdfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5840 */
rtx
gen_fix_trunchi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5840 */
rtx
gen_fix_truncsi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5840 */
rtx
gen_fix_truncdi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5884 */
rtx
gen_fix_truncdi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5898 */
rtx
gen_fix_trunchi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5898 */
rtx
gen_fix_truncsi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5911 */
rtx
gen_x86_fnstcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		const0_rtx),
	29));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5928 */
rtx
gen_floathisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5928 */
rtx
gen_floathidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5928 */
rtx
gen_floathixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5940 */
rtx
gen_floatsixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:5940 */
rtx
gen_floatdixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6001 */
rtx
gen_floatsihf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (HFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6001 */
rtx
gen_floatunssihf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (HFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6068 */
rtx
gen_floatdisf2_i387_with_xmm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6068 */
rtx
gen_floatdidf2_i387_with_xmm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6068 */
rtx
gen_floatdixf2_i387_with_xmm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_FLOAT (XFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6160 */
rtx
gen_floatunssisf2_i387_with_xmm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6160 */
rtx
gen_floatunssidf2_i387_with_xmm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:6160 */
rtx
gen_floatunssixf2_i387_with_xmm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (XFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:7399 */
rtx
gen_addvqi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_PLUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:7399 */
rtx
gen_addvhi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_PLUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_PLUS (HImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (HImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:7399 */
rtx
gen_addvsi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_PLUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:7399 */
rtx
gen_addvdi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_PLUS (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (TImode,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8144 */
rtx
gen_subvqi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_MINUS (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (HImode,
	gen_rtx_MINUS (QImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (QImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8144 */
rtx
gen_subvhi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_MINUS (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_MINUS (HImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (HImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8144 */
rtx
gen_subvsi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_MINUS (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8144 */
rtx
gen_subvdi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCOmode,
	17),
	gen_rtx_EQ (CCOmode,
	gen_rtx_MINUS (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	operand3),
	gen_rtx_SIGN_EXTEND (TImode,
	gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8475 */
rtx
gen_addqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (QImode,
	gen_rtx_PLUS (QImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), QImode,
		operand3,
		const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8475 */
rtx
gen_addhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), HImode,
		operand3,
		const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8475 */
rtx
gen_addsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), SImode,
		operand3,
		const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8475 */
rtx
gen_adddi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), DImode,
		operand3,
		const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8634 */
rtx
gen_addcarrysi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		operand3,
		const0_rtx),
	operand1),
	operand2)),
	gen_rtx_PLUS (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	copy_rtx (operand2)),
	gen_rtx_fmt_ee (GET_CODE (operand4), DImode,
		copy_rtx (operand3),
		const0_rtx)))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), GET_MODE (operand5),
		copy_rtx (operand3),
		const0_rtx),
	copy_rtx (operand1)),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8634 */
rtx
gen_addcarrydi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_ZERO_EXTEND (TImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), DImode,
		operand3,
		const0_rtx),
	operand1),
	operand2)),
	gen_rtx_PLUS (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	copy_rtx (operand2)),
	gen_rtx_fmt_ee (GET_CODE (operand4), TImode,
		copy_rtx (operand3),
		const0_rtx)))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_fmt_ee (GET_CODE (operand5), GET_MODE (operand5),
		copy_rtx (operand3),
		const0_rtx),
	copy_rtx (operand1)),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8865 */
rtx
gen_subqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (QImode,
	gen_rtx_MINUS (QImode,
	operand1,
	gen_rtx_fmt_ee (GET_CODE (operand4), QImode,
		operand3,
		const0_rtx)),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8865 */
rtx
gen_subhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (HImode,
	gen_rtx_MINUS (HImode,
	operand1,
	gen_rtx_fmt_ee (GET_CODE (operand4), HImode,
		operand3,
		const0_rtx)),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8865 */
rtx
gen_subsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_fmt_ee (GET_CODE (operand4), SImode,
		operand3,
		const0_rtx)),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:8865 */
rtx
gen_subdi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_fmt_ee (GET_CODE (operand4), DImode,
		operand3,
		const0_rtx)),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9019 */
rtx
gen_subsi3_carry_ccc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9053 */
rtx
gen_subsi3_carry_ccgz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGZmode,
	17),
	gen_rtx_UNSPEC (CCGZmode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)),
	40)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9065 */
rtx
gen_subborrowsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_PLUS (DImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), DImode,
		operand3,
		const0_rtx),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	gen_rtx_fmt_ee (GET_CODE (operand5), SImode,
		copy_rtx (operand3),
		const0_rtx)),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9065 */
rtx
gen_subborrowdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_PLUS (TImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), TImode,
		operand3,
		const0_rtx),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)))),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	gen_rtx_fmt_ee (GET_CODE (operand5), DImode,
		copy_rtx (operand3),
		const0_rtx)),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9384 */
rtx
gen_addqi3_cc_overflow_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9384 */
rtx
gen_addhi3_cc_overflow_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (HImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9384 */
rtx
gen_addsi3_cc_overflow_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:9384 */
rtx
gen_adddi3_cc_overflow_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:10351 */
rtx
gen_smulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_SMUL_HIGHPART (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:10351 */
rtx
gen_umulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UMUL_HIGHPART (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:10647 */
rtx
gen_divmodsi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand2,
	operand3)),
		gen_rtx_SET (operand1,
	gen_rtx_MOD (SImode,
	copy_rtx (operand2),
	copy_rtx (operand3))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	33),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:10682 */
rtx
gen_udivmodsi4_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand2,
	operand3)),
		gen_rtx_SET (operand1,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand2),
	copy_rtx (operand3))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	33),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:11218 */
rtx
gen_divmodhiqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (HImode,
	gen_rtx_ASHIFT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_MOD (HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (HImode,
	operand2)))),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_DIV (HImode,
	copy_rtx (operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	copy_rtx (operand2))))))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:11218 */
rtx
gen_udivmodhiqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (HImode,
	gen_rtx_ASHIFT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_MOD (HImode,
	operand1,
	gen_rtx_ZERO_EXTEND (HImode,
	operand2)))),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ZERO_EXTEND (HImode,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_DIV (HImode,
	copy_rtx (operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	copy_rtx (operand2))))))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14416 */
rtx
gen_ashldi3_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14519 */
rtx
gen_x86_64_shld_ndd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	gen_rtx_AND (QImode,
	operand3,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])),
	gen_rtx_SUBREG (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand2),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)],
	gen_rtx_AND (QImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14557 */
rtx
gen_x86_64_shld_ndd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand3),
	gen_rtx_SUBREG (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand2),
	operand4),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14676 */
rtx
gen_x86_shld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
	gen_rtx_SUBREG (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	gen_rtx_AND (QImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14698 */
rtx
gen_x86_shld_ndd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	gen_rtx_AND (QImode,
	operand3,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
	gen_rtx_SUBREG (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand2),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	gen_rtx_AND (QImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14716 */
rtx
gen_x86_shld_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2),
	gen_rtx_SUBREG (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand3),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:14737 */
rtx
gen_x86_shld_ndd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand3),
	gen_rtx_SUBREG (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand2),
	operand4),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15720 */
rtx
gen_lshrdi3_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15720 */
rtx
gen_ashrdi3_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15764 */
rtx
gen_lshrdi3_doubleword_lowpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2),
	0)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15764 */
rtx
gen_ashrdi3_doubleword_lowpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2),
	0)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15808 */
rtx
gen_x86_64_shrd_ndd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	gen_rtx_AND (QImode,
	operand3,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])),
	gen_rtx_SUBREG (DImode,
	gen_rtx_ASHIFT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand2),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)],
	gen_rtx_AND (QImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15847 */
rtx
gen_x86_64_shrd_ndd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand3),
	gen_rtx_SUBREG (DImode,
	gen_rtx_ASHIFT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand2),
	operand4),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15966 */
rtx
gen_x86_shrd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
	gen_rtx_SUBREG (SImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	gen_rtx_AND (QImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:15988 */
rtx
gen_x86_shrd_ndd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	gen_rtx_AND (QImode,
	operand3,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
	gen_rtx_SUBREG (SImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand2),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	gen_rtx_AND (QImode,
	copy_rtx (operand3),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16005 */
rtx
gen_x86_shrd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2),
	gen_rtx_SUBREG (SImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	operand3),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16026 */
rtx
gen_x86_shrd_ndd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand3),
	gen_rtx_SUBREG (SImode,
	gen_rtx_ASHIFT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand2),
	operand4),
	0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16148 */
rtx
gen_ashrsi3_cvt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16148 */
rtx
gen_ashrdi3_cvt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16878 */
rtx
gen_ix86_rotldi3_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16915 */
rtx
gen_ix86_rotrdi3_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16952 */
rtx
gen_rotl32di2_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:16952 */
rtx
gen_rotr32di2_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:17218 */
rtx
gen_rcrsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	const1_rtx),
	gen_rtx_ASHIFT (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCCmode,
	17),
	const0_rtx),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:17254 */
rtx
gen_lshrsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	operand1,
	const1_rtx),
		const0_rtx),
	41)),
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand1),
	const1_rtx))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:17254 */
rtx
gen_ashrsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC (CCCmode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	operand1,
	const1_rtx),
		const0_rtx),
	41)),
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand1),
	const1_rtx))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:18132 */
rtx
gen_setcc_sf_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), SFmode,
		operand1,
		operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:18132 */
rtx
gen_setcc_df_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), DFmode,
		operand1,
		operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:18148 */
rtx
gen_setcc_hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../gcc-14.1.0/gcc/config/i386/i386.md:18288 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:18994 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	1);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19020 */
rtx
gen_prologue_use (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	5);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19065 */
rtx
gen_simple_return_internal (void)
{
  return simple_return_rtx;
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19074 */
rtx
gen_interrupt_return (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		simple_return_rtx,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	99)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19085 */
rtx
gen_simple_return_internal_long (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		simple_return_rtx,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	30)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19096 */
rtx
gen_simple_return_pop_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		simple_return_rtx,
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19126 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19135 */
rtx
gen_nops (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	8);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19157 */
rtx
gen_pad (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	4);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19238 */
rtx
gen_set_got_offset_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_LABEL_REF (VOIDmode,
	operand1)),
	16));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19282 */
rtx
gen_eh_return_internal (void)
{
  return gen_rtx_EH_RETURN (VOIDmode);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19326 */
rtx
gen_split_stack_return (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	6);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19400 */
rtx
gen_ffssi2_no_cmove (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19485 */
rtx
gen_ctzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CTZ (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19693 */
rtx
gen_bsr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)],
	gen_rtx_CLZ (SImode,
	copy_rtx (operand1))))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19707 */
rtx
gen_bsr_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)],
	gen_rtx_CLZ (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:19917 */
rtx
gen_clzsi2_lzcnt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CLZ (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20046 */
rtx
gen_tzcnt_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	95)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20046 */
rtx
gen_lzcnt_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	94)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20084 */
rtx
gen_tzcnt_hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	95)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20084 */
rtx
gen_lzcnt_hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	94)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20098 */
rtx
gen_bmi_bextr_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	96)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20348 */
rtx
gen_bmi2_pdep_si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	97));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20359 */
rtx
gen_bmi2_pext_si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	98));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20371 */
rtx
gen_tbm_bextri_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20508 */
rtx
gen_popcountsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20694 */
rtx
gen_popcounthi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20798 */
rtx
gen_bswaphi_lowpart (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_BSWAP (HImode,
	copy_rtx (operand0))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20920 */
rtx
gen_parityhi2_cmp (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	28)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:20930 */
rtx
gen_parityqi2_cmp (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	28));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:21625 */
rtx
gen_rcphf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HFmode,
	gen_rtvec (1,
		operand1),
	53));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:21842 */
rtx
gen_truncxfsf2_i387_noop_unspec (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	32));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:21842 */
rtx
gen_truncxfdf2_i387_noop_unspec (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	32));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:21851 */
rtx
gen_sqrtxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (XFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:21898 */
rtx
gen_rsqrthf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HFmode,
	gen_rtvec (1,
		operand1),
	54));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:21911 */
rtx
gen_sqrthf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SQRT (HFmode,
	operand1));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22003 */
rtx
gen_x86_fnstsw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (CCFPmode,
	18)),
	25));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22012 */
rtx
gen_fpremxf4_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	84)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		copy_rtx (operand2),
		copy_rtx (operand3)),
	85)),
		gen_rtx_SET (gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (2,
		copy_rtx (operand2),
		copy_rtx (operand3)),
	88))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22084 */
rtx
gen_fprem1xf4_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	86)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		copy_rtx (operand2),
		copy_rtx (operand3)),
	87)),
		gen_rtx_SET (gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (2,
		copy_rtx (operand2),
		copy_rtx (operand3)),
	88))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22165 */
rtx
gen_sinxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	62));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22165 */
rtx
gen_cosxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	63));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22194 */
rtx
gen_sincosxf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	78)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	79))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22227 */
rtx
gen_fptanxf4_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand3),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	70))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22269 */
rtx
gen_atan2xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	64)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22572 */
rtx
gen_fyl2xxf3_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	65)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22669 */
rtx
gen_fyl2xp1xf3_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22709 */
rtx
gen_fxtractxf3_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	81))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22802 */
rtx
gen_fscalexf4_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	82)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		copy_rtx (operand2),
		copy_rtx (operand3)),
	83))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22978 */
rtx
gen_avx512f_scalefsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:22978 */
rtx
gen_avx512f_scalefdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23096 */
rtx
gen_sse4_1_roundhf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23096 */
rtx
gen_sse4_1_roundsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23096 */
rtx
gen_sse4_1_rounddf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23125 */
rtx
gen_rintxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	67));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23256 */
rtx
gen_lrintxfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	68)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23266 */
rtx
gen_lrintxfhi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	68));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23266 */
rtx
gen_lrintxfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	68));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23355 */
rtx
gen_frndintxf2_roundeven (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23355 */
rtx
gen_frndintxf2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23355 */
rtx
gen_frndintxf2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23355 */
rtx
gen_frndintxf2_trunc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23380 */
rtx
gen_frndintxf2_roundeven_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23380 */
rtx
gen_frndintxf2_floor_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23380 */
rtx
gen_frndintxf2_ceil_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23380 */
rtx
gen_frndintxf2_trunc_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23497 */
rtx
gen_fistdi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	76)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23497 */
rtx
gen_fistdi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	77)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23511 */
rtx
gen_fisthi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	76)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23511 */
rtx
gen_fisthi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	77)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23511 */
rtx
gen_fistsi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	76)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23511 */
rtx
gen_fistsi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	77)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23574 */
rtx
gen_fxamsf2_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	71));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23574 */
rtx
gen_fxamdf2_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	71));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23574 */
rtx
gen_fxamxf2_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	71));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23624 */
rtx
gen_movmsk_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:23676 */
rtx
gen_cld (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	7);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24694 */
rtx
gen_movhf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	47));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24866 */
rtx
gen_smaxsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24866 */
rtx
gen_sminsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24866 */
rtx
gen_smaxdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24866 */
rtx
gen_smindf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (DFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24880 */
rtx
gen_smaxhf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:24880 */
rtx
gen_sminhf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (HFmode,
	operand1,
	operand2));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25285 */
rtx
gen_pro_epilogue_adjust_stack_add_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25285 */
rtx
gen_pro_epilogue_adjust_stack_add_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25328 */
rtx
gen_pro_epilogue_adjust_stack_sub_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25328 */
rtx
gen_pro_epilogue_adjust_stack_sub_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25339 */
rtx
gen_allocate_stack_worker_probe_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25339 */
rtx
gen_allocate_stack_worker_probe_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25390 */
rtx
gen_probe_stack_1_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	18)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25390 */
rtx
gen_probe_stack_1_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	18)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25401 */
rtx
gen_adjust_stack_and_probe_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	3)),
		gen_rtx_SET (gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25401 */
rtx
gen_adjust_stack_and_probe_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	3)),
		gen_rtx_SET (gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25413 */
rtx
gen_probe_stack_range_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	3)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25413 */
rtx
gen_probe_stack_range_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	3)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25554 */
rtx
gen_stack_protect_set_1_si_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	90)),
		gen_rtx_SET (operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25554 */
rtx
gen_stack_protect_set_1_di_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	90)),
		gen_rtx_SET (operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25554 */
rtx
gen_stack_protect_set_1_si_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	90)),
		gen_rtx_SET (operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25554 */
rtx
gen_stack_protect_set_1_di_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	90)),
		gen_rtx_SET (operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25777 */
rtx
gen_stack_protect_test_1_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	91)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:25777 */
rtx
gen_stack_protect_test_1_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	91)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27020 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const_int_rtx[MAX_SAVED_CONST_INT + (6)]);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27032 */
rtx
gen_ud2 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27156 */
rtx
gen_sse4_2_crc32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	93));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27156 */
rtx
gen_sse4_2_crc32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	93));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27156 */
rtx
gen_sse4_2_crc32si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	93));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27191 */
rtx
gen_rdpmc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	11));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27211 */
rtx
gen_rdtsc (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	9));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27229 */
rtx
gen_rdtscp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	10)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	10))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27257 */
rtx
gen_fxsave (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		const0_rtx),
	20));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27278 */
rtx
gen_fxrstor (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	21);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27335 */
rtx
gen_xsave (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		operand1),
	24));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27335 */
rtx
gen_xsaveopt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		operand1),
	28));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27335 */
rtx
gen_xsavec (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27335 */
rtx
gen_xsaves (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		operand1),
	30));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27375 */
rtx
gen_xrstor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (2,
		operand0,
		operand1),
	25);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27375 */
rtx
gen_xrstors (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (2,
		operand0,
		operand1),
	31);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27415 */
rtx
gen_xsetbv (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	37);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27434 */
rtx
gen_xgetbv (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	36));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27460 */
rtx
gen_fnstenv (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (9,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		const0_rtx),
	40)),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27478 */
rtx
gen_fldenv (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (9,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	41),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15)));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27496 */
rtx
gen_fnstsw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		const0_rtx),
	42));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27506 */
rtx
gen_fnclex (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	43);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27520 */
rtx
gen_lwp_llwpcbsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	12);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27520 */
rtx
gen_lwp_llwpcbdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	12);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27529 */
rtx
gen_lwp_slwpcbsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	13));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27529 */
rtx
gen_lwp_slwpcbdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	13));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27538 */
rtx
gen_lwp_lwpvalsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	14);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27550 */
rtx
gen_lwp_lwpinssi (rtx operand0 ATTRIBUTE_UNUSED,
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
	15));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27595 */
rtx
gen_ptwritesi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	78);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27604 */
rtx
gen_rdrandhi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		const0_rtx),
	44)),
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (1,
		const0_rtx),
	44))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27604 */
rtx
gen_rdrandsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	44)),
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (1,
		const0_rtx),
	44))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27614 */
rtx
gen_rdseedhi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		const0_rtx),
	45)),
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (1,
		const0_rtx),
	45))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27614 */
rtx
gen_rdseedsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	45)),
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCCmode,
	gen_rtvec (1,
		const0_rtx),
	45))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27644 */
rtx
gen_rdsspsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	59));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27653 */
rtx
gen_incsspsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	60);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27661 */
rtx
gen_saveprevssp (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	61);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27668 */
rtx
gen_rstorssp (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	62);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27676 */
rtx
gen_wrsssi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	63);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27685 */
rtx
gen_wrusssi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	64);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27694 */
rtx
gen_setssbsy (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	65);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27701 */
rtx
gen_clrssbsy (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	66);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27709 */
rtx
gen_nop_endbr (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	58);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27742 */
rtx
gen_xbegin_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	36),
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)),
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	46))));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27755 */
rtx
gen_xend (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	47);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27762 */
rtx
gen_xabort (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	48);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27782 */
rtx
gen_xtest_1 (void)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (1,
		const0_rtx),
	49));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27790 */
rtx
gen_clwb (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	51);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27799 */
rtx
gen_clflushopt (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	52);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27809 */
rtx
gen_mwaitx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	54);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27821 */
rtx
gen_monitorx_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	53);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27821 */
rtx
gen_monitorx_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	53);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27835 */
rtx
gen_clzero_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	55);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27835 */
rtx
gen_clzero_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	55);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27885 */
rtx
gen_rdpid (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	57));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27901 */
rtx
gen_wbinvd (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	38);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27907 */
rtx
gen_wbnoinvd (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	39);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27915 */
rtx
gen_movdirisi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	100));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27923 */
rtx
gen_movdir64b_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_MEM (XImode,
	operand0),
	gen_rtx_UNSPEC (XImode,
	gen_rtvec (1,
		operand1),
	101));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27923 */
rtx
gen_movdir64b_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_MEM (XImode,
	operand0),
	gen_rtx_UNSPEC (XImode,
	gen_rtvec (1,
		operand1),
	101));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27935 */
rtx
gen_xsusldtrk (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	67);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27935 */
rtx
gen_xresldtrk (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	68);
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27947 */
rtx
gen_enqcmd_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	79));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27947 */
rtx
gen_enqcmds_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	80));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27947 */
rtx
gen_enqcmd_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	79));
}

/* ../gcc-14.1.0/gcc/config/i386/i386.md:27947 */
rtx
gen_enqcmds_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		operand0,
		operand1),
	80));
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

