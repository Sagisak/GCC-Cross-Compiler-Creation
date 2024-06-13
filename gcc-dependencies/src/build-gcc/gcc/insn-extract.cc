/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 9538:  /* cmpccxadd_di */
    case 9537:  /* cmpccxadd_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 9536:  /* atomic_xor_fetch_cmp_0di_1 */
    case 9535:  /* atomic_or_fetch_cmp_0di_1 */
    case 9534:  /* atomic_and_fetch_cmp_0di_1 */
    case 9533:  /* atomic_xor_fetch_cmp_0si_1 */
    case 9532:  /* atomic_or_fetch_cmp_0si_1 */
    case 9531:  /* atomic_and_fetch_cmp_0si_1 */
    case 9530:  /* atomic_xor_fetch_cmp_0hi_1 */
    case 9529:  /* atomic_or_fetch_cmp_0hi_1 */
    case 9528:  /* atomic_and_fetch_cmp_0hi_1 */
    case 9527:  /* atomic_xor_fetch_cmp_0qi_1 */
    case 9526:  /* atomic_or_fetch_cmp_0qi_1 */
    case 9525:  /* atomic_and_fetch_cmp_0qi_1 */
    case 9524:  /* atomic_sub_fetch_cmp_0di_1 */
    case 9523:  /* atomic_sub_fetch_cmp_0si_1 */
    case 9522:  /* atomic_sub_fetch_cmp_0hi_1 */
    case 9521:  /* atomic_sub_fetch_cmp_0qi_1 */
    case 9520:  /* atomic_add_fetch_cmp_0di_1 */
    case 9519:  /* atomic_add_fetch_cmp_0si_1 */
    case 9518:  /* atomic_add_fetch_cmp_0hi_1 */
    case 9517:  /* atomic_add_fetch_cmp_0qi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 9513:  /* atomic_bit_test_and_complementdi_1 */
    case 9512:  /* atomic_bit_test_and_complementsi_1 */
    case 9511:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 9516:  /* atomic_bit_test_and_resetdi_1 */
    case 9515:  /* atomic_bit_test_and_resetsi_1 */
    case 9514:  /* atomic_bit_test_and_resethi_1 */
    case 9510:  /* atomic_bit_test_and_setdi_1 */
    case 9509:  /* atomic_bit_test_and_setsi_1 */
    case 9508:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9507:  /* atomic_xordi */
    case 9506:  /* atomic_ordi */
    case 9505:  /* atomic_anddi */
    case 9504:  /* atomic_xorsi */
    case 9503:  /* atomic_orsi */
    case 9502:  /* atomic_andsi */
    case 9501:  /* atomic_xorhi */
    case 9500:  /* atomic_orhi */
    case 9499:  /* atomic_andhi */
    case 9498:  /* atomic_xorqi */
    case 9497:  /* atomic_orqi */
    case 9496:  /* atomic_andqi */
    case 9495:  /* atomic_subdi */
    case 9494:  /* atomic_subsi */
    case 9493:  /* atomic_subhi */
    case 9492:  /* atomic_subqi */
    case 9491:  /* atomic_adddi */
    case 9490:  /* atomic_addsi */
    case 9489:  /* atomic_addhi */
    case 9488:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9487:  /* rao_aadddi */
    case 9486:  /* rao_axordi */
    case 9485:  /* rao_aordi */
    case 9484:  /* rao_aanddi */
    case 9483:  /* rao_aaddsi */
    case 9482:  /* rao_axorsi */
    case 9481:  /* rao_aorsi */
    case 9480:  /* rao_aandsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9479:  /* atomic_exchangedi */
    case 9478:  /* atomic_exchangesi */
    case 9477:  /* atomic_exchangehi */
    case 9476:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9475:  /* *atomic_fetch_add_cmpdi */
    case 9474:  /* *atomic_fetch_add_cmpsi */
    case 9473:  /* *atomic_fetch_add_cmphi */
    case 9472:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 9471:  /* atomic_fetch_adddi */
    case 9470:  /* atomic_fetch_addsi */
    case 9469:  /* atomic_fetch_addhi */
    case 9468:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 9467:  /* atomic_compare_and_swapdi_1 */
    case 9466:  /* atomic_compare_and_swapsi_1 */
    case 9465:  /* atomic_compare_and_swaphi_1 */
    case 9464:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9463:  /* atomic_compare_and_swapti_doubleword */
    case 9462:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9451:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9411:  /* *aesencwide256klu8 */
    case 9410:  /* *aesencwide128klu8 */
    case 9409:  /* *aesdecwide256klu8 */
    case 9408:  /* *aesdecwide128klu8 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 9407:  /* aesenc256klu8 */
    case 9406:  /* aesenc128klu8 */
    case 9405:  /* aesdec256klu8 */
    case 9404:  /* aesdec128klu8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 9403:  /* *encodekey256u32 */
    case 9402:  /* *encodekey128u32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 9401:  /* loadiwkey */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      break;

    case 9384:  /* avx512f_cvtne2ps2bf16_v8bf_mask */
    case 9382:  /* avx512f_cvtne2ps2bf16_v16bf_mask */
    case 9380:  /* avx512f_cvtne2ps2bf16_v32bf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9383:  /* avx512f_cvtne2ps2bf16_v8bf */
    case 9381:  /* avx512f_cvtne2ps2bf16_v16bf */
    case 9379:  /* avx512f_cvtne2ps2bf16_v32bf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 9193:  /* *restore_multiple_leave_returndi */
    case 9192:  /* *restore_multiple_leave_returnsi */
    case 9191:  /* *restore_multiple_and_returndi */
    case 9190:  /* *restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 9189:  /* *restore_multipledi */
    case 9188:  /* *restore_multiplesi */
    case 9187:  /* *save_multipledi */
    case 9186:  /* *save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 9028:  /* avx512dq_vmfpclassv2df_mask */
    case 9026:  /* avx512dq_vmfpclassv4sf_mask */
    case 9024:  /* avx512dq_vmfpclassv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8908:  /* *avx512f_scatterdiv2df */
    case 8907:  /* *avx512f_scatterdiv2df */
    case 8906:  /* *avx512f_scatterdiv2di */
    case 8905:  /* *avx512f_scatterdiv2di */
    case 8904:  /* *avx512f_scatterdiv4sf */
    case 8903:  /* *avx512f_scatterdiv4sf */
    case 8902:  /* *avx512f_scatterdiv4si */
    case 8901:  /* *avx512f_scatterdiv4si */
    case 8900:  /* *avx512f_scatterdiv4df */
    case 8899:  /* *avx512f_scatterdiv4df */
    case 8898:  /* *avx512f_scatterdiv4di */
    case 8897:  /* *avx512f_scatterdiv4di */
    case 8896:  /* *avx512f_scatterdiv8sf */
    case 8895:  /* *avx512f_scatterdiv8sf */
    case 8894:  /* *avx512f_scatterdiv8si */
    case 8893:  /* *avx512f_scatterdiv8si */
    case 8892:  /* *avx512f_scatterdiv8df */
    case 8891:  /* *avx512f_scatterdiv8df */
    case 8890:  /* *avx512f_scatterdiv8di */
    case 8889:  /* *avx512f_scatterdiv8di */
    case 8888:  /* *avx512f_scatterdiv16sf */
    case 8887:  /* *avx512f_scatterdiv16sf */
    case 8886:  /* *avx512f_scatterdiv16si */
    case 8885:  /* *avx512f_scatterdiv16si */
    case 8884:  /* *avx512f_scattersiv2df */
    case 8883:  /* *avx512f_scattersiv2df */
    case 8882:  /* *avx512f_scattersiv2di */
    case 8881:  /* *avx512f_scattersiv2di */
    case 8880:  /* *avx512f_scattersiv4sf */
    case 8879:  /* *avx512f_scattersiv4sf */
    case 8878:  /* *avx512f_scattersiv4si */
    case 8877:  /* *avx512f_scattersiv4si */
    case 8876:  /* *avx512f_scattersiv4df */
    case 8875:  /* *avx512f_scattersiv4df */
    case 8874:  /* *avx512f_scattersiv4di */
    case 8873:  /* *avx512f_scattersiv4di */
    case 8872:  /* *avx512f_scattersiv8sf */
    case 8871:  /* *avx512f_scattersiv8sf */
    case 8870:  /* *avx512f_scattersiv8si */
    case 8869:  /* *avx512f_scattersiv8si */
    case 8868:  /* *avx512f_scattersiv8df */
    case 8867:  /* *avx512f_scattersiv8df */
    case 8866:  /* *avx512f_scattersiv8di */
    case 8865:  /* *avx512f_scattersiv8di */
    case 8864:  /* *avx512f_scattersiv16sf */
    case 8863:  /* *avx512f_scattersiv16sf */
    case 8862:  /* *avx512f_scattersiv16si */
    case 8861:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 8860:  /* *avx512f_gatherdiv2df_2 */
    case 8859:  /* *avx512f_gatherdiv2df_2 */
    case 8858:  /* *avx512f_gatherdiv2di_2 */
    case 8857:  /* *avx512f_gatherdiv2di_2 */
    case 8856:  /* *avx512f_gatherdiv4sf_2 */
    case 8855:  /* *avx512f_gatherdiv4sf_2 */
    case 8854:  /* *avx512f_gatherdiv4si_2 */
    case 8853:  /* *avx512f_gatherdiv4si_2 */
    case 8852:  /* *avx512f_gatherdiv4df_2 */
    case 8851:  /* *avx512f_gatherdiv4df_2 */
    case 8850:  /* *avx512f_gatherdiv4di_2 */
    case 8849:  /* *avx512f_gatherdiv4di_2 */
    case 8848:  /* *avx512f_gatherdiv8sf_2 */
    case 8847:  /* *avx512f_gatherdiv8sf_2 */
    case 8846:  /* *avx512f_gatherdiv8si_2 */
    case 8845:  /* *avx512f_gatherdiv8si_2 */
    case 8844:  /* *avx512f_gatherdiv8df_2 */
    case 8843:  /* *avx512f_gatherdiv8df_2 */
    case 8842:  /* *avx512f_gatherdiv8di_2 */
    case 8841:  /* *avx512f_gatherdiv8di_2 */
    case 8840:  /* *avx512f_gatherdiv16sf_2 */
    case 8839:  /* *avx512f_gatherdiv16sf_2 */
    case 8838:  /* *avx512f_gatherdiv16si_2 */
    case 8837:  /* *avx512f_gatherdiv16si_2 */
    case 8812:  /* *avx512f_gathersiv2df_2 */
    case 8811:  /* *avx512f_gathersiv2df_2 */
    case 8810:  /* *avx512f_gathersiv2di_2 */
    case 8809:  /* *avx512f_gathersiv2di_2 */
    case 8808:  /* *avx512f_gathersiv4sf_2 */
    case 8807:  /* *avx512f_gathersiv4sf_2 */
    case 8806:  /* *avx512f_gathersiv4si_2 */
    case 8805:  /* *avx512f_gathersiv4si_2 */
    case 8804:  /* *avx512f_gathersiv4df_2 */
    case 8803:  /* *avx512f_gathersiv4df_2 */
    case 8802:  /* *avx512f_gathersiv4di_2 */
    case 8801:  /* *avx512f_gathersiv4di_2 */
    case 8800:  /* *avx512f_gathersiv8sf_2 */
    case 8799:  /* *avx512f_gathersiv8sf_2 */
    case 8798:  /* *avx512f_gathersiv8si_2 */
    case 8797:  /* *avx512f_gathersiv8si_2 */
    case 8796:  /* *avx512f_gathersiv8df_2 */
    case 8795:  /* *avx512f_gathersiv8df_2 */
    case 8794:  /* *avx512f_gathersiv8di_2 */
    case 8793:  /* *avx512f_gathersiv8di_2 */
    case 8792:  /* *avx512f_gathersiv16sf_2 */
    case 8791:  /* *avx512f_gathersiv16sf_2 */
    case 8790:  /* *avx512f_gathersiv16si_2 */
    case 8789:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8836:  /* *avx512f_gatherdiv2df */
    case 8835:  /* *avx512f_gatherdiv2df */
    case 8834:  /* *avx512f_gatherdiv2di */
    case 8833:  /* *avx512f_gatherdiv2di */
    case 8832:  /* *avx512f_gatherdiv4sf */
    case 8831:  /* *avx512f_gatherdiv4sf */
    case 8830:  /* *avx512f_gatherdiv4si */
    case 8829:  /* *avx512f_gatherdiv4si */
    case 8828:  /* *avx512f_gatherdiv4df */
    case 8827:  /* *avx512f_gatherdiv4df */
    case 8826:  /* *avx512f_gatherdiv4di */
    case 8825:  /* *avx512f_gatherdiv4di */
    case 8824:  /* *avx512f_gatherdiv8sf */
    case 8823:  /* *avx512f_gatherdiv8sf */
    case 8822:  /* *avx512f_gatherdiv8si */
    case 8821:  /* *avx512f_gatherdiv8si */
    case 8820:  /* *avx512f_gatherdiv8df */
    case 8819:  /* *avx512f_gatherdiv8df */
    case 8818:  /* *avx512f_gatherdiv8di */
    case 8817:  /* *avx512f_gatherdiv8di */
    case 8816:  /* *avx512f_gatherdiv16sf */
    case 8815:  /* *avx512f_gatherdiv16sf */
    case 8814:  /* *avx512f_gatherdiv16si */
    case 8813:  /* *avx512f_gatherdiv16si */
    case 8788:  /* *avx512f_gathersiv2df */
    case 8787:  /* *avx512f_gathersiv2df */
    case 8786:  /* *avx512f_gathersiv2di */
    case 8785:  /* *avx512f_gathersiv2di */
    case 8784:  /* *avx512f_gathersiv4sf */
    case 8783:  /* *avx512f_gathersiv4sf */
    case 8782:  /* *avx512f_gathersiv4si */
    case 8781:  /* *avx512f_gathersiv4si */
    case 8780:  /* *avx512f_gathersiv4df */
    case 8779:  /* *avx512f_gathersiv4df */
    case 8778:  /* *avx512f_gathersiv4di */
    case 8777:  /* *avx512f_gathersiv4di */
    case 8776:  /* *avx512f_gathersiv8sf */
    case 8775:  /* *avx512f_gathersiv8sf */
    case 8774:  /* *avx512f_gathersiv8si */
    case 8773:  /* *avx512f_gathersiv8si */
    case 8772:  /* *avx512f_gathersiv8df */
    case 8771:  /* *avx512f_gathersiv8df */
    case 8770:  /* *avx512f_gathersiv8di */
    case 8769:  /* *avx512f_gathersiv8di */
    case 8768:  /* *avx512f_gathersiv16sf */
    case 8767:  /* *avx512f_gathersiv16sf */
    case 8766:  /* *avx512f_gathersiv16si */
    case 8765:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8764:  /* *avx2_gatherdiv8sf_4 */
    case 8763:  /* *avx2_gatherdiv8sf_4 */
    case 8762:  /* *avx2_gatherdiv8si_4 */
    case 8761:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8760:  /* *avx2_gatherdiv8sf_3 */
    case 8759:  /* *avx2_gatherdiv8sf_3 */
    case 8758:  /* *avx2_gatherdiv8si_3 */
    case 8757:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8756:  /* *avx2_gatherdiv8sf_2 */
    case 8755:  /* *avx2_gatherdiv8si_2 */
    case 8754:  /* *avx2_gatherdiv4sf_2 */
    case 8753:  /* *avx2_gatherdiv4si_2 */
    case 8752:  /* *avx2_gatherdiv4df_2 */
    case 8751:  /* *avx2_gatherdiv4di_2 */
    case 8750:  /* *avx2_gatherdiv2df_2 */
    case 8749:  /* *avx2_gatherdiv2di_2 */
    case 8748:  /* *avx2_gatherdiv8sf_2 */
    case 8747:  /* *avx2_gatherdiv8si_2 */
    case 8746:  /* *avx2_gatherdiv4sf_2 */
    case 8745:  /* *avx2_gatherdiv4si_2 */
    case 8744:  /* *avx2_gatherdiv4df_2 */
    case 8743:  /* *avx2_gatherdiv4di_2 */
    case 8742:  /* *avx2_gatherdiv2df_2 */
    case 8741:  /* *avx2_gatherdiv2di_2 */
    case 8724:  /* *avx2_gathersiv8sf_2 */
    case 8723:  /* *avx2_gathersiv8si_2 */
    case 8722:  /* *avx2_gathersiv4sf_2 */
    case 8721:  /* *avx2_gathersiv4si_2 */
    case 8720:  /* *avx2_gathersiv4df_2 */
    case 8719:  /* *avx2_gathersiv4di_2 */
    case 8718:  /* *avx2_gathersiv2df_2 */
    case 8717:  /* *avx2_gathersiv2di_2 */
    case 8716:  /* *avx2_gathersiv8sf_2 */
    case 8715:  /* *avx2_gathersiv8si_2 */
    case 8714:  /* *avx2_gathersiv4sf_2 */
    case 8713:  /* *avx2_gathersiv4si_2 */
    case 8712:  /* *avx2_gathersiv4df_2 */
    case 8711:  /* *avx2_gathersiv4di_2 */
    case 8710:  /* *avx2_gathersiv2df_2 */
    case 8709:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8740:  /* *avx2_gatherdiv8sf */
    case 8739:  /* *avx2_gatherdiv8si */
    case 8738:  /* *avx2_gatherdiv4sf */
    case 8737:  /* *avx2_gatherdiv4si */
    case 8736:  /* *avx2_gatherdiv4df */
    case 8735:  /* *avx2_gatherdiv4di */
    case 8734:  /* *avx2_gatherdiv2df */
    case 8733:  /* *avx2_gatherdiv2di */
    case 8732:  /* *avx2_gatherdiv8sf */
    case 8731:  /* *avx2_gatherdiv8si */
    case 8730:  /* *avx2_gatherdiv4sf */
    case 8729:  /* *avx2_gatherdiv4si */
    case 8728:  /* *avx2_gatherdiv4df */
    case 8727:  /* *avx2_gatherdiv4di */
    case 8726:  /* *avx2_gatherdiv2df */
    case 8725:  /* *avx2_gatherdiv2di */
    case 8708:  /* *avx2_gathersiv8sf */
    case 8707:  /* *avx2_gathersiv8si */
    case 8706:  /* *avx2_gathersiv4sf */
    case 8705:  /* *avx2_gathersiv4si */
    case 8704:  /* *avx2_gathersiv4df */
    case 8703:  /* *avx2_gathersiv4di */
    case 8702:  /* *avx2_gathersiv2df */
    case 8701:  /* *avx2_gathersiv2di */
    case 8700:  /* *avx2_gathersiv8sf */
    case 8699:  /* *avx2_gathersiv8si */
    case 8698:  /* *avx2_gathersiv4sf */
    case 8697:  /* *avx2_gathersiv4si */
    case 8696:  /* *avx2_gathersiv4df */
    case 8695:  /* *avx2_gathersiv4di */
    case 8694:  /* *avx2_gathersiv2df */
    case 8693:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8692:  /* *avx512f_vcvtps2ph512_merge_mask */
    case 8686:  /* *vcvtps2ph256_merge_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8681:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8671:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8944:  /* compressstorev8hi_mask */
    case 8943:  /* compressstorev16hi_mask */
    case 8942:  /* compressstorev32hi_mask */
    case 8941:  /* compressstorev32qi_mask */
    case 8940:  /* compressstorev16qi_mask */
    case 8939:  /* compressstorev64qi_mask */
    case 8938:  /* avx512vl_compressstorev2df_mask */
    case 8937:  /* avx512vl_compressstorev2di_mask */
    case 8936:  /* avx512vl_compressstorev4sf_mask */
    case 8935:  /* avx512vl_compressstorev4si_mask */
    case 8934:  /* avx512vl_compressstorev4df_mask */
    case 8933:  /* avx512vl_compressstorev4di_mask */
    case 8932:  /* avx512vl_compressstorev8sf_mask */
    case 8931:  /* avx512vl_compressstorev8si_mask */
    case 8930:  /* avx512f_compressstorev8df_mask */
    case 8929:  /* avx512f_compressstorev8di_mask */
    case 8928:  /* avx512f_compressstorev16sf_mask */
    case 8927:  /* avx512f_compressstorev16si_mask */
    case 8575:  /* avx512vl_storev8bf_mask */
    case 8574:  /* avx512vl_storev16bf_mask */
    case 8573:  /* avx512bw_storev32bf_mask */
    case 8572:  /* avx512fp16_storev8hf_mask */
    case 8571:  /* avx512vl_storev16hf_mask */
    case 8570:  /* avx512bw_storev32hf_mask */
    case 8569:  /* avx512vl_storev8hi_mask */
    case 8568:  /* avx512vl_storev16hi_mask */
    case 8567:  /* avx512bw_storev32hi_mask */
    case 8566:  /* avx512vl_storev32qi_mask */
    case 8565:  /* avx512vl_storev16qi_mask */
    case 8564:  /* avx512bw_storev64qi_mask */
    case 8563:  /* avx512vl_storev2df_mask */
    case 8562:  /* avx512vl_storev4df_mask */
    case 8561:  /* avx512f_storev8df_mask */
    case 8560:  /* avx512vl_storev4sf_mask */
    case 8559:  /* avx512vl_storev8sf_mask */
    case 8558:  /* avx512f_storev16sf_mask */
    case 8557:  /* avx512vl_storev2di_mask */
    case 8556:  /* avx512vl_storev4di_mask */
    case 8555:  /* avx512f_storev8di_mask */
    case 8554:  /* avx512vl_storev4si_mask */
    case 8553:  /* avx512vl_storev8si_mask */
    case 8552:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8551:  /* avx2_maskstored */
    case 8550:  /* avx2_maskstored256 */
    case 8549:  /* avx_maskstorepd256 */
    case 8548:  /* avx_maskstoreps256 */
    case 8547:  /* avx2_maskstoreq */
    case 8546:  /* avx2_maskstoreq256 */
    case 8545:  /* avx_maskstorepd */
    case 8544:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 8543:  /* avx2_maskloadd */
    case 8542:  /* avx2_maskloadd256 */
    case 8541:  /* avx_maskloadpd256 */
    case 8540:  /* avx_maskloadps256 */
    case 8539:  /* avx2_maskloadq */
    case 8538:  /* avx2_maskloadq256 */
    case 8537:  /* avx_maskloadpd */
    case 8536:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 8497:  /* avx512vl_vpermt2varv16qi3_mask */
    case 8496:  /* avx512vl_vpermt2varv32qi3_mask */
    case 8495:  /* avx512bw_vpermt2varv64qi3_mask */
    case 8494:  /* avx512vl_vpermt2varv8hi3_mask */
    case 8493:  /* avx512vl_vpermt2varv16hi3_mask */
    case 8492:  /* avx512bw_vpermt2varv32hi3_mask */
    case 8491:  /* avx512vl_vpermt2varv2df3_mask */
    case 8490:  /* avx512vl_vpermt2varv2di3_mask */
    case 8489:  /* avx512vl_vpermt2varv4sf3_mask */
    case 8488:  /* avx512vl_vpermt2varv4si3_mask */
    case 8487:  /* avx512vl_vpermt2varv4df3_mask */
    case 8486:  /* avx512vl_vpermt2varv4di3_mask */
    case 8485:  /* avx512vl_vpermt2varv8sf3_mask */
    case 8484:  /* avx512vl_vpermt2varv8si3_mask */
    case 8483:  /* avx512f_vpermt2varv8df3_mask */
    case 8482:  /* avx512f_vpermt2varv8di3_mask */
    case 8481:  /* avx512f_vpermt2varv16sf3_mask */
    case 8480:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 8431:  /* *avx512vl_vpermi2varv2df3_mask */
    case 8430:  /* *avx512vl_vpermi2varv4df3_mask */
    case 8429:  /* *avx512f_vpermi2varv8df3_mask */
    case 8428:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 8427:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 8426:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 8425:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 8424:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 8423:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 8422:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 8421:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 8420:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 8419:  /* *avx512vl_vpermi2varv2di3_mask */
    case 8418:  /* *avx512vl_vpermi2varv4di3_mask */
    case 8417:  /* *avx512vl_vpermi2varv4si3_mask */
    case 8416:  /* *avx512vl_vpermi2varv8si3_mask */
    case 8415:  /* *avx512f_vpermi2varv8di3_mask */
    case 8414:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 8347:  /* avx2_lddqu_inserti_to_bcasti */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8369:  /* avx_vbroadcastf128_v16bf */
    case 8368:  /* avx_vbroadcastf128_v16hf */
    case 8367:  /* avx_vbroadcastf128_v4df */
    case 8366:  /* avx_vbroadcastf128_v8sf */
    case 8365:  /* avx_vbroadcastf128_v4di */
    case 8364:  /* avx_vbroadcastf128_v8si */
    case 8363:  /* avx_vbroadcastf128_v16hi */
    case 8362:  /* avx_vbroadcastf128_v32qi */
    case 8346:  /* avx2_vbroadcasti128_v4di */
    case 8345:  /* avx2_vbroadcasti128_v8si */
    case 8344:  /* avx2_vbroadcasti128_v16hi */
    case 8343:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8219:  /* *avx_vpermilpv2df_mask */
    case 8217:  /* *avx_vpermilpv4df_mask */
    case 8215:  /* *avx512f_vpermilpv8df_mask */
    case 8213:  /* *avx_vpermilpv4sf_mask */
    case 8211:  /* *avx_vpermilpv8sf_mask */
    case 8209:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8511:  /* *ssse3_palignrv2df_perm */
    case 8510:  /* *ssse3_palignrv4sf_perm */
    case 8509:  /* *ssse3_palignrv2di_perm */
    case 8508:  /* *ssse3_palignrv4si_perm */
    case 8507:  /* *ssse3_palignrv8bf_perm */
    case 8506:  /* *ssse3_palignrv8hf_perm */
    case 8505:  /* *ssse3_palignrv8hi_perm */
    case 8504:  /* *ssse3_palignrv16qi_perm */
    case 8218:  /* *avx_vpermilpv2df */
    case 8216:  /* *avx_vpermilpv4df */
    case 8214:  /* *avx512f_vpermilpv8df */
    case 8212:  /* *avx_vpermilpv4sf */
    case 8210:  /* *avx_vpermilpv8sf */
    case 8208:  /* *avx512f_vpermilpv16sf */
    case 8207:  /* *avx_vperm_broadcast_v4df */
    case 8206:  /* *avx_vperm_broadcast_v8sf */
    case 8205:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8139:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 8123:  /* xop_maskcmp_uns2v2di3 */
    case 8122:  /* xop_maskcmp_uns2v4si3 */
    case 8121:  /* xop_maskcmp_uns2v8hi3 */
    case 8120:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 8103:  /* xop_shlv2di3 */
    case 8102:  /* xop_shlv4si3 */
    case 8101:  /* xop_shlv8hi3 */
    case 8100:  /* xop_shlv16qi3 */
    case 8099:  /* xop_shav2di3 */
    case 8098:  /* xop_shav4si3 */
    case 8097:  /* xop_shav8hi3 */
    case 8096:  /* xop_shav16qi3 */
    case 8095:  /* xop_vrotlv2di3 */
    case 8094:  /* xop_vrotlv4si3 */
    case 8093:  /* xop_vrotlv8hi3 */
    case 8092:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 8083:  /* xop_pperm_pack_v8hi_v16qi */
    case 8082:  /* xop_pperm_pack_v4si_v8hi */
    case 8081:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8070:  /* xop_phaddubq */
    case 8069:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 8074:  /* xop_phadduwq */
    case 8073:  /* xop_phaddwq */
    case 8068:  /* xop_phaddubd */
    case 8067:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 8079:  /* xop_phsubdq */
    case 8078:  /* xop_phsubwd */
    case 8077:  /* xop_phsubbw */
    case 8076:  /* xop_phaddudq */
    case 8075:  /* xop_phadddq */
    case 8072:  /* xop_phadduwd */
    case 8071:  /* xop_phaddwd */
    case 8066:  /* xop_phaddubw */
    case 8065:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8048:  /* xop_pmadcsswd */
    case 8047:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 8046:  /* xop_pmacsswd */
    case 8045:  /* xop_pmacswd */
    case 8044:  /* xop_pmacssdqh */
    case 8043:  /* xop_pmacsdqh */
    case 8042:  /* xop_pmacssdql */
    case 8041:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8036:  /* avx512er_vmrsqrt28v2df_mask_round */
    case 8032:  /* avx512er_vmrsqrt28v4sf_mask_round */
    case 8020:  /* avx512er_vmrcp28v2df_mask_round */
    case 8016:  /* avx512er_vmrcp28v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8035:  /* avx512er_vmrsqrt28v2df_mask */
    case 8031:  /* avx512er_vmrsqrt28v4sf_mask */
    case 8019:  /* avx512er_vmrcp28v2df_mask */
    case 8015:  /* avx512er_vmrcp28v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8034:  /* avx512er_vmrsqrt28v2df_round */
    case 8030:  /* avx512er_vmrsqrt28v4sf_round */
    case 8018:  /* avx512er_vmrcp28v2df_round */
    case 8014:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7996:  /* *avx512pf_scatterpfv8didf_mask */
    case 7995:  /* *avx512pf_scatterpfv8didf_mask */
    case 7994:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7993:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7992:  /* *avx512pf_scatterpfv8disf_mask */
    case 7991:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7990:  /* *avx512pf_scatterpfv8disf_mask */
    case 7989:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7988:  /* *avx512pf_gatherpfv8didf_mask */
    case 7987:  /* *avx512pf_gatherpfv8didf_mask */
    case 7986:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7985:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7984:  /* *avx512pf_gatherpfv8disf_mask */
    case 7983:  /* *avx512pf_gatherpfv16sisf_mask */
    case 7982:  /* *avx512pf_gatherpfv8disf_mask */
    case 7981:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 7980:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7979:  /* sse4_2_pcmpistrm */
    case 7978:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7977:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 7976:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 7975:  /* sse4_2_pcmpestrm */
    case 7974:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 7973:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 7962:  /* *ptestv4df_and */
    case 7961:  /* *ptestv8sf_and */
    case 7960:  /* *ptestv2ti_and */
    case 7959:  /* *ptestv4di_and */
    case 7958:  /* *ptestv8si_and */
    case 7957:  /* *ptestv16hi_and */
    case 7956:  /* *ptestv32qi_and */
    case 7955:  /* *ptestv2df_and */
    case 7954:  /* *ptestv4sf_and */
    case 7953:  /* *ptestv1ti_and */
    case 7952:  /* *ptestv2di_and */
    case 7951:  /* *ptestv4si_and */
    case 7950:  /* *ptestv8hi_and */
    case 7949:  /* *ptestv16qi_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 7929:  /* *sse4_1_zero_extendv2siv2di2_4 */
    case 7915:  /* *avx2_zero_extendv4siv4di2_2 */
    case 7909:  /* *avx512f_zero_extendv8siv8di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7875:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7874:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7873:  /* *sse4_1_zero_extendv2qiv2di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7903:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 7901:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 7864:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 7862:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 7808:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 7806:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7902:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 7900:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 7863:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 7861:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 7807:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 7805:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 7927:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 7925:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 7891:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 7889:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 7852:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 7850:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 7836:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 7834:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 7796:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 7794:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 7776:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 7774:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7926:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 7924:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 7890:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 7888:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 7851:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 7849:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 7835:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 7833:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 7795:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 7793:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 7775:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 7773:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 7840:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7839:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7838:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7824:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7823:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7822:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7816:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7815:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7814:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7780:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7779:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7778:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7764:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7763:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7762:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7756:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7755:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7754:  /* *avx2_zero_extendv16qiv16hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8669:  /* *vec_concatv2df_0_1 */
    case 8668:  /* *vec_concatv4df_0_1 */
    case 8667:  /* *vec_concatv8df_0_1 */
    case 8666:  /* *vec_concatv4sf_0_1 */
    case 8665:  /* *vec_concatv8sf_0_1 */
    case 8664:  /* *vec_concatv16sf_0_1 */
    case 8663:  /* *vec_concatv8hf_0_1 */
    case 8662:  /* *vec_concatv16hf_0_1 */
    case 8661:  /* *vec_concatv32hf_0_1 */
    case 8660:  /* *vec_concatv2di_0_1 */
    case 8659:  /* *vec_concatv4di_0_1 */
    case 8658:  /* *vec_concatv8di_0_1 */
    case 8657:  /* *vec_concatv4si_0_1 */
    case 8656:  /* *vec_concatv8si_0_1 */
    case 8655:  /* *vec_concatv16si_0_1 */
    case 8654:  /* *vec_concatv8hi_0_1 */
    case 8653:  /* *vec_concatv16hi_0_1 */
    case 8652:  /* *vec_concatv32hi_0_1 */
    case 8651:  /* *vec_concatv16qi_0_1 */
    case 8650:  /* *vec_concatv32qi_0_1 */
    case 8649:  /* *vec_concatv64qi_0_1 */
    case 8503:  /* *avx_vperm2f128v4df_nozero */
    case 8502:  /* *avx_vperm2f128v8sf_nozero */
    case 8501:  /* *avx_vperm2f128v8si_nozero */
    case 7928:  /* *sse4_1_zero_extendv2siv2di2_3 */
    case 7914:  /* *avx2_zero_extendv4siv4di2_1 */
    case 7908:  /* *avx512f_zero_extendv8siv8di2_1 */
    case 7837:  /* *sse4_1_zero_extendv4hiv4si2_3 */
    case 7821:  /* avx2_zero_extendv8hiv8si2_1 */
    case 7813:  /* avx512f_zero_extendv16hiv16si2_1 */
    case 7777:  /* *sse4_1_zero_extendv8qiv8hi2_3 */
    case 7761:  /* *avx512bw_zero_extendv32qiv32hi2_1 */
    case 7753:  /* *avx2_zero_extendv16qiv16hi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7739:  /* *sse4_1_pblendvb_lt_subreg_not */
    case 7738:  /* *avx2_pblendvb_lt_subreg_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7718:  /* *avx_blendvpd256_not_ltint */
    case 7717:  /* *avx_blendvps256_not_ltint */
    case 7716:  /* *sse4_1_blendvpd_not_ltint */
    case 7715:  /* *sse4_1_blendvps_not_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7714:  /* *avx_blendvpd256_ltint */
    case 7713:  /* *avx_blendvps256_ltint */
    case 7712:  /* *sse4_1_blendvpd_ltint */
    case 7711:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7648:  /* *ssse3_pshufbv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7639:  /* *ssse3_pmulhrswv8hi3_mask */
    case 7637:  /* *avx2_pmulhrswv16hi3_mask */
    case 7635:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7641:  /* *smulhrsv2hi3 */
    case 7640:  /* *ssse3_pmulhrswv4hi3 */
    case 7638:  /* *ssse3_pmulhrswv8hi3 */
    case 7636:  /* *avx2_pmulhrswv16hi3 */
    case 7634:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7631:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7630:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 7622:  /* ssse3_phsubdv2si3 */
    case 7621:  /* ssse3_phadddv2si3 */
    case 7620:  /* ssse3_phsubdv4si3 */
    case 7619:  /* ssse3_phadddv4si3 */
    case 7618:  /* avx2_phsubdv8si3 */
    case 7617:  /* avx2_phadddv8si3 */
    case 7616:  /* ssse3_phsubswv4hi3 */
    case 7615:  /* ssse3_phsubwv4hi3 */
    case 7614:  /* ssse3_phaddswv4hi3 */
    case 7613:  /* ssse3_phaddwv4hi3 */
    case 7612:  /* ssse3_phsubswv8hi3 */
    case 7611:  /* ssse3_phsubwv8hi3 */
    case 7610:  /* ssse3_phaddswv8hi3 */
    case 7609:  /* ssse3_phaddwv8hi3 */
    case 7608:  /* avx2_phsubswv16hi3 */
    case 7607:  /* avx2_phsubwv16hi3 */
    case 7606:  /* avx2_phaddswv16hi3 */
    case 7605:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 7591:  /* *sse2_pmovskb_zexthisi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 7585:  /* *sse2_movmskpd_uext_shift */
    case 7584:  /* *sse2_movmskpd_ext_shift */
    case 7583:  /* *avx_movmskpd256_uext_shift */
    case 7582:  /* *avx_movmskpd256_ext_shift */
    case 7581:  /* *sse_movmskps_uext_shift */
    case 7580:  /* *sse_movmskps_ext_shift */
    case 7579:  /* *avx_movmskps256_uext_shift */
    case 7578:  /* *avx_movmskps256_ext_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 7577:  /* *sse2_movmskpd_shift */
    case 7576:  /* *avx_movmskpd256_shift */
    case 7575:  /* *sse_movmskps_shift */
    case 7574:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 7596:  /* *sse2_pmovmskb_ext_lt */
    case 7595:  /* *sse2_pmovmskb_zext_lt */
    case 7594:  /* *avx2_pmovmskb_zext_lt */
    case 7573:  /* *sse2_movmskpd_uext_lt */
    case 7572:  /* *sse2_movmskpd_ext_lt */
    case 7571:  /* *avx_movmskpd256_uext_lt */
    case 7570:  /* *avx_movmskpd256_ext_lt */
    case 7569:  /* *sse_movmskps_uext_lt */
    case 7568:  /* *sse_movmskps_ext_lt */
    case 7567:  /* *avx_movmskps256_uext_lt */
    case 7566:  /* *avx_movmskps256_ext_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 7546:  /* *sse2_uavgv8hi3_mask */
    case 7544:  /* *avx2_uavgv16hi3_mask */
    case 7542:  /* *avx512bw_uavgv32hi3_mask */
    case 7540:  /* *sse2_uavgv16qi3_mask */
    case 7538:  /* *avx2_uavgv32qi3_mask */
    case 7536:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7545:  /* *sse2_uavgv8hi3 */
    case 7543:  /* *avx2_uavgv16hi3 */
    case 7541:  /* *avx512bw_uavgv32hi3 */
    case 7539:  /* *sse2_uavgv16qi3 */
    case 7537:  /* *avx2_uavgv32qi3 */
    case 7535:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7527:  /* *vec_concatv8hi_permt2 */
    case 7526:  /* *vec_concatv16qi_permt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7496:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7495:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 7494:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7493:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 7488:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7487:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 7480:  /* avx512f_pshufd_1_mask */
    case 7478:  /* *avx512f_shuf_i32x4_1_mask_1 */
    case 7476:  /* *avx512f_shuf_f32x4_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7479:  /* avx512f_pshufd_1 */
    case 7477:  /* *avx512f_shuf_i32x4_1_1 */
    case 7475:  /* *avx512f_shuf_f32x4_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 8227:  /* avx512f_permv8di_1_mask */
    case 8225:  /* avx512f_permv8df_1_mask */
    case 7482:  /* avx2_pshufd_1_mask */
    case 7466:  /* *avx512f_shuf_i64x2_1_mask_1 */
    case 7464:  /* *avx512f_shuf_f64x2_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8226:  /* avx512f_permv8di_1 */
    case 8224:  /* avx512f_permv8df_1 */
    case 7481:  /* avx2_pshufd_1 */
    case 7465:  /* *avx512f_shuf_i64x2_1_1 */
    case 7463:  /* *avx512f_shuf_f64x2_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 8523:  /* vec_set_lo_v8sf_mask */
    case 8521:  /* vec_set_lo_v8si_mask */
    case 8515:  /* vec_set_lo_v4df_mask */
    case 8513:  /* vec_set_lo_v4di_mask */
    case 7450:  /* vec_set_lo_v8di_mask */
    case 7448:  /* vec_set_lo_v8df_mask */
    case 7442:  /* vec_set_lo_v16si_mask */
    case 7440:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7438:  /* avx512f_vinserti32x4_1_mask */
    case 7436:  /* avx512f_vinsertf32x4_1_mask */
    case 7434:  /* avx512dq_vinserti64x2_1_mask */
    case 7432:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7437:  /* *avx512f_vinserti32x4_1 */
    case 7435:  /* *avx512f_vinsertf32x4_1 */
    case 7433:  /* *avx512dq_vinserti64x2_1 */
    case 7431:  /* *avx512dq_vinsertf64x2_1 */
    case 7430:  /* *avx512f_vinserti32x4_0 */
    case 7429:  /* *avx512f_vinsertf32x4_0 */
    case 7428:  /* *avx512dq_vinserti64x2_0 */
    case 7427:  /* *avx512dq_vinsertf64x2_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7354:  /* avx512bw_packssdw_mask */
    case 7352:  /* avx2_packssdw_mask */
    case 7348:  /* avx512bw_packsswb_mask */
    case 7346:  /* avx2_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7353:  /* avx512bw_packssdw */
    case 7351:  /* avx2_packssdw */
    case 7347:  /* avx512bw_packsswb */
    case 7345:  /* avx2_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 7350:  /* sse2_packssdw_mask */
    case 7344:  /* sse2_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7342:  /* *avx512vl_testnmv2di3_zext_mask */
    case 7341:  /* *avx512vl_testnmv2di3_zext_mask */
    case 7340:  /* *avx512vl_testnmv2di3_zext_mask */
    case 7339:  /* *avx512vl_testnmv4di3_zext_mask */
    case 7338:  /* *avx512vl_testnmv4di3_zext_mask */
    case 7337:  /* *avx512vl_testnmv4di3_zext_mask */
    case 7336:  /* *avx512f_testnmv8di3_zext_mask */
    case 7335:  /* *avx512f_testnmv8di3_zext_mask */
    case 7334:  /* *avx512f_testnmv8di3_zext_mask */
    case 7333:  /* *avx512vl_testnmv4si3_zext_mask */
    case 7332:  /* *avx512vl_testnmv4si3_zext_mask */
    case 7331:  /* *avx512vl_testnmv4si3_zext_mask */
    case 7330:  /* *avx512vl_testnmv8si3_zext_mask */
    case 7329:  /* *avx512vl_testnmv8si3_zext_mask */
    case 7328:  /* *avx512vl_testnmv8si3_zext_mask */
    case 7327:  /* *avx512f_testnmv16si3_zext_mask */
    case 7326:  /* *avx512f_testnmv16si3_zext_mask */
    case 7325:  /* *avx512f_testnmv16si3_zext_mask */
    case 7324:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 7323:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 7322:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 7321:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 7320:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 7319:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 7318:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 7317:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 7316:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 7315:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 7314:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 7313:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 7312:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 7311:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 7310:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 7309:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 7308:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 7307:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 7270:  /* *avx512vl_testmv2di3_zext_mask */
    case 7269:  /* *avx512vl_testmv2di3_zext_mask */
    case 7268:  /* *avx512vl_testmv2di3_zext_mask */
    case 7267:  /* *avx512vl_testmv4di3_zext_mask */
    case 7266:  /* *avx512vl_testmv4di3_zext_mask */
    case 7265:  /* *avx512vl_testmv4di3_zext_mask */
    case 7264:  /* *avx512f_testmv8di3_zext_mask */
    case 7263:  /* *avx512f_testmv8di3_zext_mask */
    case 7262:  /* *avx512f_testmv8di3_zext_mask */
    case 7261:  /* *avx512vl_testmv4si3_zext_mask */
    case 7260:  /* *avx512vl_testmv4si3_zext_mask */
    case 7259:  /* *avx512vl_testmv4si3_zext_mask */
    case 7258:  /* *avx512vl_testmv8si3_zext_mask */
    case 7257:  /* *avx512vl_testmv8si3_zext_mask */
    case 7256:  /* *avx512vl_testmv8si3_zext_mask */
    case 7255:  /* *avx512f_testmv16si3_zext_mask */
    case 7254:  /* *avx512f_testmv16si3_zext_mask */
    case 7253:  /* *avx512f_testmv16si3_zext_mask */
    case 7252:  /* *avx512vl_testmv8hi3_zext_mask */
    case 7251:  /* *avx512vl_testmv8hi3_zext_mask */
    case 7250:  /* *avx512vl_testmv8hi3_zext_mask */
    case 7249:  /* *avx512vl_testmv16hi3_zext_mask */
    case 7248:  /* *avx512vl_testmv16hi3_zext_mask */
    case 7247:  /* *avx512vl_testmv16hi3_zext_mask */
    case 7246:  /* *avx512bw_testmv32hi3_zext_mask */
    case 7245:  /* *avx512bw_testmv32hi3_zext_mask */
    case 7244:  /* *avx512bw_testmv32hi3_zext_mask */
    case 7243:  /* *avx512vl_testmv16qi3_zext_mask */
    case 7242:  /* *avx512vl_testmv16qi3_zext_mask */
    case 7241:  /* *avx512vl_testmv16qi3_zext_mask */
    case 7240:  /* *avx512vl_testmv32qi3_zext_mask */
    case 7239:  /* *avx512vl_testmv32qi3_zext_mask */
    case 7238:  /* *avx512vl_testmv32qi3_zext_mask */
    case 7237:  /* *avx512bw_testmv64qi3_zext_mask */
    case 7236:  /* *avx512bw_testmv64qi3_zext_mask */
    case 7235:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 7027:  /* *one_cmplv2di2_pternlog_false_dep */
    case 7026:  /* *one_cmplv4di2_pternlog_false_dep */
    case 7025:  /* *one_cmplv4si2_pternlog_false_dep */
    case 7024:  /* *one_cmplv8si2_pternlog_false_dep */
    case 7023:  /* *one_cmplv8hi2_pternlog_false_dep */
    case 7022:  /* *one_cmplv16hi2_pternlog_false_dep */
    case 7021:  /* *one_cmplv32hi2_pternlog_false_dep */
    case 7020:  /* *one_cmplv16qi2_pternlog_false_dep */
    case 7019:  /* *one_cmplv32qi2_pternlog_false_dep */
    case 7018:  /* *one_cmplv64qi2_pternlog_false_dep */
    case 7017:  /* *one_cmplv8di2_pternlog_false_dep */
    case 7016:  /* *one_cmplv16si2_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 6985:  /* *avx2_pcmpv16qi3_5 */
    case 6984:  /* *avx2_pcmpv32qi3_5 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6678:  /* *sse4_1_mulv2siv2di3_mask */
    case 6676:  /* *vec_widen_smult_even_v8si_mask */
    case 6674:  /* *vec_widen_smult_even_v16si_mask */
    case 6672:  /* *vec_widen_umult_even_v4si_mask */
    case 6670:  /* *vec_widen_umult_even_v8si_mask */
    case 6668:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6666:  /* *umulv8hi3_highpart_mask */
    case 6664:  /* *smulv8hi3_highpart_mask */
    case 6662:  /* *umulv16hi3_highpart_mask */
    case 6660:  /* *smulv16hi3_highpart_mask */
    case 6658:  /* *umulv32hi3_highpart_mask */
    case 6656:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6552:  /* avx512f_us_truncatev8div16qi2_mask_store_2 */
    case 6551:  /* avx512f_truncatev8div16qi2_mask_store_2 */
    case 6550:  /* avx512f_ss_truncatev8div16qi2_mask_store_2 */
    case 6531:  /* avx512vl_us_truncatev2div2si2_mask_store_2 */
    case 6530:  /* avx512vl_truncatev2div2si2_mask_store_2 */
    case 6529:  /* avx512vl_ss_truncatev2div2si2_mask_store_2 */
    case 6509:  /* avx512vl_us_truncatev2div2hi2_mask_store_2 */
    case 6508:  /* avx512vl_truncatev2div2hi2_mask_store_2 */
    case 6507:  /* avx512vl_ss_truncatev2div2hi2_mask_store_2 */
    case 6491:  /* avx512vl_us_truncatev4div4hi2_mask_store_2 */
    case 6490:  /* avx512vl_truncatev4div4hi2_mask_store_2 */
    case 6489:  /* avx512vl_ss_truncatev4div4hi2_mask_store_2 */
    case 6488:  /* avx512vl_us_truncatev4siv4hi2_mask_store_2 */
    case 6487:  /* avx512vl_truncatev4siv4hi2_mask_store_2 */
    case 6486:  /* avx512vl_ss_truncatev4siv4hi2_mask_store_2 */
    case 6445:  /* avx512vl_us_truncatev8siv8qi2_mask_store_2 */
    case 6444:  /* avx512vl_truncatev8siv8qi2_mask_store_2 */
    case 6443:  /* avx512vl_ss_truncatev8siv8qi2_mask_store_2 */
    case 6442:  /* avx512vl_us_truncatev8hiv8qi2_mask_store_2 */
    case 6441:  /* avx512vl_truncatev8hiv8qi2_mask_store_2 */
    case 6440:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store_2 */
    case 6409:  /* avx512vl_us_truncatev4div4qi2_mask_store_2 */
    case 6408:  /* avx512vl_truncatev4div4qi2_mask_store_2 */
    case 6407:  /* avx512vl_ss_truncatev4div4qi2_mask_store_2 */
    case 6406:  /* avx512vl_us_truncatev4siv4qi2_mask_store_2 */
    case 6405:  /* avx512vl_truncatev4siv4qi2_mask_store_2 */
    case 6404:  /* avx512vl_ss_truncatev4siv4qi2_mask_store_2 */
    case 6373:  /* avx512vl_us_truncatev2div2qi2_mask_store_2 */
    case 6372:  /* avx512vl_truncatev2div2qi2_mask_store_2 */
    case 6371:  /* avx512vl_ss_truncatev2div2qi2_mask_store_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6549:  /* *avx512f_us_truncatev8div16qi2_mask_store_1 */
    case 6548:  /* *avx512f_truncatev8div16qi2_mask_store_1 */
    case 6547:  /* *avx512f_ss_truncatev8div16qi2_mask_store_1 */
    case 6528:  /* *avx512vl_us_truncatev2div2si2_mask_store_1 */
    case 6527:  /* *avx512vl_truncatev2div2si2_mask_store_1 */
    case 6526:  /* *avx512vl_ss_truncatev2div2si2_mask_store_1 */
    case 6506:  /* *avx512vl_us_truncatev2div2hi2_mask_store_1 */
    case 6505:  /* *avx512vl_truncatev2div2hi2_mask_store_1 */
    case 6504:  /* *avx512vl_ss_truncatev2div2hi2_mask_store_1 */
    case 6485:  /* *avx512vl_us_truncatev4div4hi2_mask_store_1 */
    case 6484:  /* *avx512vl_truncatev4div4hi2_mask_store_1 */
    case 6483:  /* *avx512vl_ss_truncatev4div4hi2_mask_store_1 */
    case 6482:  /* *avx512vl_us_truncatev4siv4hi2_mask_store_1 */
    case 6481:  /* *avx512vl_truncatev4siv4hi2_mask_store_1 */
    case 6480:  /* *avx512vl_ss_truncatev4siv4hi2_mask_store_1 */
    case 6439:  /* *avx512vl_us_truncatev8siv8qi2_mask_store_1 */
    case 6438:  /* *avx512vl_truncatev8siv8qi2_mask_store_1 */
    case 6437:  /* *avx512vl_ss_truncatev8siv8qi2_mask_store_1 */
    case 6436:  /* *avx512vl_us_truncatev8hiv8qi2_mask_store_1 */
    case 6435:  /* *avx512vl_truncatev8hiv8qi2_mask_store_1 */
    case 6434:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */
    case 6403:  /* *avx512vl_us_truncatev4div4qi2_mask_store_1 */
    case 6402:  /* *avx512vl_truncatev4div4qi2_mask_store_1 */
    case 6401:  /* *avx512vl_ss_truncatev4div4qi2_mask_store_1 */
    case 6400:  /* *avx512vl_us_truncatev4siv4qi2_mask_store_1 */
    case 6399:  /* *avx512vl_truncatev4siv4qi2_mask_store_1 */
    case 6398:  /* *avx512vl_ss_truncatev4siv4qi2_mask_store_1 */
    case 6370:  /* *avx512vl_us_truncatev2div2qi2_mask_store_1 */
    case 6369:  /* *avx512vl_truncatev2div2qi2_mask_store_1 */
    case 6368:  /* *avx512vl_ss_truncatev2div2qi2_mask_store_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 6455:  /* *avx512f_pshufb_truncv4siv4hi_1 */
    case 6355:  /* *avx512f_pshufb_truncv8hiv8qi_1 */
    case 6299:  /* *avx512f_permvar_truncv8siv8hi_1_hf */
    case 6297:  /* *avx512bw_permvar_truncv16siv16hi_1_hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 6256:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7474:  /* avx512f_shuf_i32x4_1_mask */
    case 7472:  /* avx512f_shuf_f32x4_1_mask */
    case 6251:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7473:  /* avx512f_shuf_i32x4_1 */
    case 7471:  /* avx512f_shuf_f32x4_1 */
    case 6250:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 6249:  /* *avx512f_rndscalev2df_round */
    case 6247:  /* *avx512f_rndscalev4sf_round */
    case 6245:  /* *avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7972:  /* *sse4_1_roundsd */
    case 7971:  /* *sse4_1_roundss */
    case 7970:  /* *sse4_1_roundsh */
    case 6248:  /* *avx512f_rndscalev2df */
    case 6246:  /* *avx512f_rndscalev4sf */
    case 6244:  /* *avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 6243:  /* avx512f_rndscalev2df_mask_round */
    case 6239:  /* avx512f_rndscalev4sf_mask_round */
    case 6235:  /* avx512f_rndscalev8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 6242:  /* avx512f_rndscalev2df_round */
    case 6238:  /* avx512f_rndscalev4sf_round */
    case 6234:  /* avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 6241:  /* avx512f_rndscalev2df_mask */
    case 6237:  /* avx512f_rndscalev4sf_mask */
    case 6233:  /* avx512f_rndscalev8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 7969:  /* sse4_1_roundsd */
    case 7968:  /* sse4_1_roundss */
    case 7967:  /* sse4_1_roundsh */
    case 6240:  /* avx512f_rndscalev2df */
    case 6236:  /* avx512f_rndscalev4sf */
    case 6232:  /* avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 6195:  /* avx512f_sfixupimmv2df_mask_round */
    case 6193:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 6194:  /* avx512f_sfixupimmv2df_mask */
    case 6192:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 6191:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 6187:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 6190:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 6186:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 6189:  /* avx512f_sfixupimmv2df_round */
    case 6185:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 6188:  /* avx512f_sfixupimmv2df */
    case 6184:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 6183:  /* avx512vl_fixupimmv2df_mask_round */
    case 6181:  /* avx512vl_fixupimmv4df_mask_round */
    case 6179:  /* avx512f_fixupimmv8df_mask_round */
    case 6177:  /* avx512vl_fixupimmv4sf_mask_round */
    case 6175:  /* avx512vl_fixupimmv8sf_mask_round */
    case 6173:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6171:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 6167:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 6163:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 6159:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 6155:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 6151:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 6169:  /* avx512vl_fixupimmv2df_round */
    case 6165:  /* avx512vl_fixupimmv4df_round */
    case 6161:  /* avx512f_fixupimmv8df_round */
    case 6157:  /* avx512vl_fixupimmv4sf_round */
    case 6153:  /* avx512vl_fixupimmv8sf_round */
    case 6149:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 6182:  /* avx512vl_fixupimmv2df_mask */
    case 6180:  /* avx512vl_fixupimmv4df_mask */
    case 6178:  /* avx512f_fixupimmv8df_mask */
    case 6176:  /* avx512vl_fixupimmv4sf_mask */
    case 6174:  /* avx512vl_fixupimmv8sf_mask */
    case 6172:  /* avx512f_fixupimmv16sf_mask */
    case 6079:  /* avx512vl_vternlogv2di_mask */
    case 6078:  /* avx512vl_vternlogv4di_mask */
    case 6077:  /* avx512f_vternlogv8di_mask */
    case 6076:  /* avx512vl_vternlogv4si_mask */
    case 6075:  /* avx512vl_vternlogv8si_mask */
    case 6074:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5317:  /* *avx512vl_vpternlogv2df_1 */
    case 5316:  /* *avx512vl_vpternlogv2df_1 */
    case 5315:  /* *avx512vl_vpternlogv2df_1 */
    case 5314:  /* *avx512vl_vpternlogv2df_1 */
    case 5313:  /* *avx512vl_vpternlogv2df_1 */
    case 5312:  /* *avx512vl_vpternlogv2df_1 */
    case 5311:  /* *avx512vl_vpternlogv2df_1 */
    case 5310:  /* *avx512vl_vpternlogv2df_1 */
    case 5309:  /* *avx512vl_vpternlogv2df_1 */
    case 5308:  /* *avx512vl_vpternlogv2df_1 */
    case 5307:  /* *avx512vl_vpternlogv2df_1 */
    case 5306:  /* *avx512vl_vpternlogv2df_1 */
    case 5305:  /* *avx512vl_vpternlogv2df_1 */
    case 5304:  /* *avx512vl_vpternlogv2df_1 */
    case 5303:  /* *avx512vl_vpternlogv2df_1 */
    case 5302:  /* *avx512vl_vpternlogv2df_1 */
    case 5301:  /* *avx512vl_vpternlogv2df_1 */
    case 5300:  /* *avx512vl_vpternlogv2df_1 */
    case 5299:  /* *avx512vl_vpternlogv2df_1 */
    case 5298:  /* *avx512vl_vpternlogv2df_1 */
    case 5297:  /* *avx512vl_vpternlogv2df_1 */
    case 5296:  /* *avx512vl_vpternlogv2df_1 */
    case 5295:  /* *avx512vl_vpternlogv2df_1 */
    case 5294:  /* *avx512vl_vpternlogv2df_1 */
    case 5293:  /* *avx512vl_vpternlogv2df_1 */
    case 5292:  /* *avx512vl_vpternlogv2df_1 */
    case 5291:  /* *avx512vl_vpternlogv2df_1 */
    case 5290:  /* *avx512vl_vpternlogv4df_1 */
    case 5289:  /* *avx512vl_vpternlogv4df_1 */
    case 5288:  /* *avx512vl_vpternlogv4df_1 */
    case 5287:  /* *avx512vl_vpternlogv4df_1 */
    case 5286:  /* *avx512vl_vpternlogv4df_1 */
    case 5285:  /* *avx512vl_vpternlogv4df_1 */
    case 5284:  /* *avx512vl_vpternlogv4df_1 */
    case 5283:  /* *avx512vl_vpternlogv4df_1 */
    case 5282:  /* *avx512vl_vpternlogv4df_1 */
    case 5281:  /* *avx512vl_vpternlogv4df_1 */
    case 5280:  /* *avx512vl_vpternlogv4df_1 */
    case 5279:  /* *avx512vl_vpternlogv4df_1 */
    case 5278:  /* *avx512vl_vpternlogv4df_1 */
    case 5277:  /* *avx512vl_vpternlogv4df_1 */
    case 5276:  /* *avx512vl_vpternlogv4df_1 */
    case 5275:  /* *avx512vl_vpternlogv4df_1 */
    case 5274:  /* *avx512vl_vpternlogv4df_1 */
    case 5273:  /* *avx512vl_vpternlogv4df_1 */
    case 5272:  /* *avx512vl_vpternlogv4df_1 */
    case 5271:  /* *avx512vl_vpternlogv4df_1 */
    case 5270:  /* *avx512vl_vpternlogv4df_1 */
    case 5269:  /* *avx512vl_vpternlogv4df_1 */
    case 5268:  /* *avx512vl_vpternlogv4df_1 */
    case 5267:  /* *avx512vl_vpternlogv4df_1 */
    case 5266:  /* *avx512vl_vpternlogv4df_1 */
    case 5265:  /* *avx512vl_vpternlogv4df_1 */
    case 5264:  /* *avx512vl_vpternlogv4df_1 */
    case 5263:  /* *avx512f_vpternlogv8df_1 */
    case 5262:  /* *avx512f_vpternlogv8df_1 */
    case 5261:  /* *avx512f_vpternlogv8df_1 */
    case 5260:  /* *avx512f_vpternlogv8df_1 */
    case 5259:  /* *avx512f_vpternlogv8df_1 */
    case 5258:  /* *avx512f_vpternlogv8df_1 */
    case 5257:  /* *avx512f_vpternlogv8df_1 */
    case 5256:  /* *avx512f_vpternlogv8df_1 */
    case 5255:  /* *avx512f_vpternlogv8df_1 */
    case 5254:  /* *avx512f_vpternlogv8df_1 */
    case 5253:  /* *avx512f_vpternlogv8df_1 */
    case 5252:  /* *avx512f_vpternlogv8df_1 */
    case 5251:  /* *avx512f_vpternlogv8df_1 */
    case 5250:  /* *avx512f_vpternlogv8df_1 */
    case 5249:  /* *avx512f_vpternlogv8df_1 */
    case 5248:  /* *avx512f_vpternlogv8df_1 */
    case 5247:  /* *avx512f_vpternlogv8df_1 */
    case 5246:  /* *avx512f_vpternlogv8df_1 */
    case 5245:  /* *avx512f_vpternlogv8df_1 */
    case 5244:  /* *avx512f_vpternlogv8df_1 */
    case 5243:  /* *avx512f_vpternlogv8df_1 */
    case 5242:  /* *avx512f_vpternlogv8df_1 */
    case 5241:  /* *avx512f_vpternlogv8df_1 */
    case 5240:  /* *avx512f_vpternlogv8df_1 */
    case 5239:  /* *avx512f_vpternlogv8df_1 */
    case 5238:  /* *avx512f_vpternlogv8df_1 */
    case 5237:  /* *avx512f_vpternlogv8df_1 */
    case 5236:  /* *avx512vl_vpternlogv4sf_1 */
    case 5235:  /* *avx512vl_vpternlogv4sf_1 */
    case 5234:  /* *avx512vl_vpternlogv4sf_1 */
    case 5233:  /* *avx512vl_vpternlogv4sf_1 */
    case 5232:  /* *avx512vl_vpternlogv4sf_1 */
    case 5231:  /* *avx512vl_vpternlogv4sf_1 */
    case 5230:  /* *avx512vl_vpternlogv4sf_1 */
    case 5229:  /* *avx512vl_vpternlogv4sf_1 */
    case 5228:  /* *avx512vl_vpternlogv4sf_1 */
    case 5227:  /* *avx512vl_vpternlogv4sf_1 */
    case 5226:  /* *avx512vl_vpternlogv4sf_1 */
    case 5225:  /* *avx512vl_vpternlogv4sf_1 */
    case 5224:  /* *avx512vl_vpternlogv4sf_1 */
    case 5223:  /* *avx512vl_vpternlogv4sf_1 */
    case 5222:  /* *avx512vl_vpternlogv4sf_1 */
    case 5221:  /* *avx512vl_vpternlogv4sf_1 */
    case 5220:  /* *avx512vl_vpternlogv4sf_1 */
    case 5219:  /* *avx512vl_vpternlogv4sf_1 */
    case 5218:  /* *avx512vl_vpternlogv4sf_1 */
    case 5217:  /* *avx512vl_vpternlogv4sf_1 */
    case 5216:  /* *avx512vl_vpternlogv4sf_1 */
    case 5215:  /* *avx512vl_vpternlogv4sf_1 */
    case 5214:  /* *avx512vl_vpternlogv4sf_1 */
    case 5213:  /* *avx512vl_vpternlogv4sf_1 */
    case 5212:  /* *avx512vl_vpternlogv4sf_1 */
    case 5211:  /* *avx512vl_vpternlogv4sf_1 */
    case 5210:  /* *avx512vl_vpternlogv4sf_1 */
    case 5209:  /* *avx512vl_vpternlogv8sf_1 */
    case 5208:  /* *avx512vl_vpternlogv8sf_1 */
    case 5207:  /* *avx512vl_vpternlogv8sf_1 */
    case 5206:  /* *avx512vl_vpternlogv8sf_1 */
    case 5205:  /* *avx512vl_vpternlogv8sf_1 */
    case 5204:  /* *avx512vl_vpternlogv8sf_1 */
    case 5203:  /* *avx512vl_vpternlogv8sf_1 */
    case 5202:  /* *avx512vl_vpternlogv8sf_1 */
    case 5201:  /* *avx512vl_vpternlogv8sf_1 */
    case 5200:  /* *avx512vl_vpternlogv8sf_1 */
    case 5199:  /* *avx512vl_vpternlogv8sf_1 */
    case 5198:  /* *avx512vl_vpternlogv8sf_1 */
    case 5197:  /* *avx512vl_vpternlogv8sf_1 */
    case 5196:  /* *avx512vl_vpternlogv8sf_1 */
    case 5195:  /* *avx512vl_vpternlogv8sf_1 */
    case 5194:  /* *avx512vl_vpternlogv8sf_1 */
    case 5193:  /* *avx512vl_vpternlogv8sf_1 */
    case 5192:  /* *avx512vl_vpternlogv8sf_1 */
    case 5191:  /* *avx512vl_vpternlogv8sf_1 */
    case 5190:  /* *avx512vl_vpternlogv8sf_1 */
    case 5189:  /* *avx512vl_vpternlogv8sf_1 */
    case 5188:  /* *avx512vl_vpternlogv8sf_1 */
    case 5187:  /* *avx512vl_vpternlogv8sf_1 */
    case 5186:  /* *avx512vl_vpternlogv8sf_1 */
    case 5185:  /* *avx512vl_vpternlogv8sf_1 */
    case 5184:  /* *avx512vl_vpternlogv8sf_1 */
    case 5183:  /* *avx512vl_vpternlogv8sf_1 */
    case 5182:  /* *avx512f_vpternlogv16sf_1 */
    case 5181:  /* *avx512f_vpternlogv16sf_1 */
    case 5180:  /* *avx512f_vpternlogv16sf_1 */
    case 5179:  /* *avx512f_vpternlogv16sf_1 */
    case 5178:  /* *avx512f_vpternlogv16sf_1 */
    case 5177:  /* *avx512f_vpternlogv16sf_1 */
    case 5176:  /* *avx512f_vpternlogv16sf_1 */
    case 5175:  /* *avx512f_vpternlogv16sf_1 */
    case 5174:  /* *avx512f_vpternlogv16sf_1 */
    case 5173:  /* *avx512f_vpternlogv16sf_1 */
    case 5172:  /* *avx512f_vpternlogv16sf_1 */
    case 5171:  /* *avx512f_vpternlogv16sf_1 */
    case 5170:  /* *avx512f_vpternlogv16sf_1 */
    case 5169:  /* *avx512f_vpternlogv16sf_1 */
    case 5168:  /* *avx512f_vpternlogv16sf_1 */
    case 5167:  /* *avx512f_vpternlogv16sf_1 */
    case 5166:  /* *avx512f_vpternlogv16sf_1 */
    case 5165:  /* *avx512f_vpternlogv16sf_1 */
    case 5164:  /* *avx512f_vpternlogv16sf_1 */
    case 5163:  /* *avx512f_vpternlogv16sf_1 */
    case 5162:  /* *avx512f_vpternlogv16sf_1 */
    case 5161:  /* *avx512f_vpternlogv16sf_1 */
    case 5160:  /* *avx512f_vpternlogv16sf_1 */
    case 5159:  /* *avx512f_vpternlogv16sf_1 */
    case 5158:  /* *avx512f_vpternlogv16sf_1 */
    case 5157:  /* *avx512f_vpternlogv16sf_1 */
    case 5156:  /* *avx512f_vpternlogv16sf_1 */
    case 5155:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5154:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5153:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5152:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5151:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5150:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5149:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5148:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5147:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5146:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5145:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5144:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5143:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5142:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5141:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5140:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5139:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5138:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5137:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5136:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5135:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5134:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5133:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5132:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5131:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5130:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5129:  /* *avx512fp16_vpternlogv8hf_1 */
    case 5128:  /* *avx512vl_vpternlogv16hf_1 */
    case 5127:  /* *avx512vl_vpternlogv16hf_1 */
    case 5126:  /* *avx512vl_vpternlogv16hf_1 */
    case 5125:  /* *avx512vl_vpternlogv16hf_1 */
    case 5124:  /* *avx512vl_vpternlogv16hf_1 */
    case 5123:  /* *avx512vl_vpternlogv16hf_1 */
    case 5122:  /* *avx512vl_vpternlogv16hf_1 */
    case 5121:  /* *avx512vl_vpternlogv16hf_1 */
    case 5120:  /* *avx512vl_vpternlogv16hf_1 */
    case 5119:  /* *avx512vl_vpternlogv16hf_1 */
    case 5118:  /* *avx512vl_vpternlogv16hf_1 */
    case 5117:  /* *avx512vl_vpternlogv16hf_1 */
    case 5116:  /* *avx512vl_vpternlogv16hf_1 */
    case 5115:  /* *avx512vl_vpternlogv16hf_1 */
    case 5114:  /* *avx512vl_vpternlogv16hf_1 */
    case 5113:  /* *avx512vl_vpternlogv16hf_1 */
    case 5112:  /* *avx512vl_vpternlogv16hf_1 */
    case 5111:  /* *avx512vl_vpternlogv16hf_1 */
    case 5110:  /* *avx512vl_vpternlogv16hf_1 */
    case 5109:  /* *avx512vl_vpternlogv16hf_1 */
    case 5108:  /* *avx512vl_vpternlogv16hf_1 */
    case 5107:  /* *avx512vl_vpternlogv16hf_1 */
    case 5106:  /* *avx512vl_vpternlogv16hf_1 */
    case 5105:  /* *avx512vl_vpternlogv16hf_1 */
    case 5104:  /* *avx512vl_vpternlogv16hf_1 */
    case 5103:  /* *avx512vl_vpternlogv16hf_1 */
    case 5102:  /* *avx512vl_vpternlogv16hf_1 */
    case 5101:  /* *avx512bw_vpternlogv32hf_1 */
    case 5100:  /* *avx512bw_vpternlogv32hf_1 */
    case 5099:  /* *avx512bw_vpternlogv32hf_1 */
    case 5098:  /* *avx512bw_vpternlogv32hf_1 */
    case 5097:  /* *avx512bw_vpternlogv32hf_1 */
    case 5096:  /* *avx512bw_vpternlogv32hf_1 */
    case 5095:  /* *avx512bw_vpternlogv32hf_1 */
    case 5094:  /* *avx512bw_vpternlogv32hf_1 */
    case 5093:  /* *avx512bw_vpternlogv32hf_1 */
    case 5092:  /* *avx512bw_vpternlogv32hf_1 */
    case 5091:  /* *avx512bw_vpternlogv32hf_1 */
    case 5090:  /* *avx512bw_vpternlogv32hf_1 */
    case 5089:  /* *avx512bw_vpternlogv32hf_1 */
    case 5088:  /* *avx512bw_vpternlogv32hf_1 */
    case 5087:  /* *avx512bw_vpternlogv32hf_1 */
    case 5086:  /* *avx512bw_vpternlogv32hf_1 */
    case 5085:  /* *avx512bw_vpternlogv32hf_1 */
    case 5084:  /* *avx512bw_vpternlogv32hf_1 */
    case 5083:  /* *avx512bw_vpternlogv32hf_1 */
    case 5082:  /* *avx512bw_vpternlogv32hf_1 */
    case 5081:  /* *avx512bw_vpternlogv32hf_1 */
    case 5080:  /* *avx512bw_vpternlogv32hf_1 */
    case 5079:  /* *avx512bw_vpternlogv32hf_1 */
    case 5078:  /* *avx512bw_vpternlogv32hf_1 */
    case 5077:  /* *avx512bw_vpternlogv32hf_1 */
    case 5076:  /* *avx512bw_vpternlogv32hf_1 */
    case 5075:  /* *avx512bw_vpternlogv32hf_1 */
    case 5074:  /* *avx512vl_vpternlogv2di_1 */
    case 5073:  /* *avx512vl_vpternlogv2di_1 */
    case 5072:  /* *avx512vl_vpternlogv2di_1 */
    case 5071:  /* *avx512vl_vpternlogv2di_1 */
    case 5070:  /* *avx512vl_vpternlogv2di_1 */
    case 5069:  /* *avx512vl_vpternlogv2di_1 */
    case 5068:  /* *avx512vl_vpternlogv2di_1 */
    case 5067:  /* *avx512vl_vpternlogv2di_1 */
    case 5066:  /* *avx512vl_vpternlogv2di_1 */
    case 5065:  /* *avx512vl_vpternlogv2di_1 */
    case 5064:  /* *avx512vl_vpternlogv2di_1 */
    case 5063:  /* *avx512vl_vpternlogv2di_1 */
    case 5062:  /* *avx512vl_vpternlogv2di_1 */
    case 5061:  /* *avx512vl_vpternlogv2di_1 */
    case 5060:  /* *avx512vl_vpternlogv2di_1 */
    case 5059:  /* *avx512vl_vpternlogv2di_1 */
    case 5058:  /* *avx512vl_vpternlogv2di_1 */
    case 5057:  /* *avx512vl_vpternlogv2di_1 */
    case 5056:  /* *avx512vl_vpternlogv2di_1 */
    case 5055:  /* *avx512vl_vpternlogv2di_1 */
    case 5054:  /* *avx512vl_vpternlogv2di_1 */
    case 5053:  /* *avx512vl_vpternlogv2di_1 */
    case 5052:  /* *avx512vl_vpternlogv2di_1 */
    case 5051:  /* *avx512vl_vpternlogv2di_1 */
    case 5050:  /* *avx512vl_vpternlogv2di_1 */
    case 5049:  /* *avx512vl_vpternlogv2di_1 */
    case 5048:  /* *avx512vl_vpternlogv2di_1 */
    case 5047:  /* *avx512vl_vpternlogv4di_1 */
    case 5046:  /* *avx512vl_vpternlogv4di_1 */
    case 5045:  /* *avx512vl_vpternlogv4di_1 */
    case 5044:  /* *avx512vl_vpternlogv4di_1 */
    case 5043:  /* *avx512vl_vpternlogv4di_1 */
    case 5042:  /* *avx512vl_vpternlogv4di_1 */
    case 5041:  /* *avx512vl_vpternlogv4di_1 */
    case 5040:  /* *avx512vl_vpternlogv4di_1 */
    case 5039:  /* *avx512vl_vpternlogv4di_1 */
    case 5038:  /* *avx512vl_vpternlogv4di_1 */
    case 5037:  /* *avx512vl_vpternlogv4di_1 */
    case 5036:  /* *avx512vl_vpternlogv4di_1 */
    case 5035:  /* *avx512vl_vpternlogv4di_1 */
    case 5034:  /* *avx512vl_vpternlogv4di_1 */
    case 5033:  /* *avx512vl_vpternlogv4di_1 */
    case 5032:  /* *avx512vl_vpternlogv4di_1 */
    case 5031:  /* *avx512vl_vpternlogv4di_1 */
    case 5030:  /* *avx512vl_vpternlogv4di_1 */
    case 5029:  /* *avx512vl_vpternlogv4di_1 */
    case 5028:  /* *avx512vl_vpternlogv4di_1 */
    case 5027:  /* *avx512vl_vpternlogv4di_1 */
    case 5026:  /* *avx512vl_vpternlogv4di_1 */
    case 5025:  /* *avx512vl_vpternlogv4di_1 */
    case 5024:  /* *avx512vl_vpternlogv4di_1 */
    case 5023:  /* *avx512vl_vpternlogv4di_1 */
    case 5022:  /* *avx512vl_vpternlogv4di_1 */
    case 5021:  /* *avx512vl_vpternlogv4di_1 */
    case 5020:  /* *avx512f_vpternlogv8di_1 */
    case 5019:  /* *avx512f_vpternlogv8di_1 */
    case 5018:  /* *avx512f_vpternlogv8di_1 */
    case 5017:  /* *avx512f_vpternlogv8di_1 */
    case 5016:  /* *avx512f_vpternlogv8di_1 */
    case 5015:  /* *avx512f_vpternlogv8di_1 */
    case 5014:  /* *avx512f_vpternlogv8di_1 */
    case 5013:  /* *avx512f_vpternlogv8di_1 */
    case 5012:  /* *avx512f_vpternlogv8di_1 */
    case 5011:  /* *avx512f_vpternlogv8di_1 */
    case 5010:  /* *avx512f_vpternlogv8di_1 */
    case 5009:  /* *avx512f_vpternlogv8di_1 */
    case 5008:  /* *avx512f_vpternlogv8di_1 */
    case 5007:  /* *avx512f_vpternlogv8di_1 */
    case 5006:  /* *avx512f_vpternlogv8di_1 */
    case 5005:  /* *avx512f_vpternlogv8di_1 */
    case 5004:  /* *avx512f_vpternlogv8di_1 */
    case 5003:  /* *avx512f_vpternlogv8di_1 */
    case 5002:  /* *avx512f_vpternlogv8di_1 */
    case 5001:  /* *avx512f_vpternlogv8di_1 */
    case 5000:  /* *avx512f_vpternlogv8di_1 */
    case 4999:  /* *avx512f_vpternlogv8di_1 */
    case 4998:  /* *avx512f_vpternlogv8di_1 */
    case 4997:  /* *avx512f_vpternlogv8di_1 */
    case 4996:  /* *avx512f_vpternlogv8di_1 */
    case 4995:  /* *avx512f_vpternlogv8di_1 */
    case 4994:  /* *avx512f_vpternlogv8di_1 */
    case 4993:  /* *avx512vl_vpternlogv4si_1 */
    case 4992:  /* *avx512vl_vpternlogv4si_1 */
    case 4991:  /* *avx512vl_vpternlogv4si_1 */
    case 4990:  /* *avx512vl_vpternlogv4si_1 */
    case 4989:  /* *avx512vl_vpternlogv4si_1 */
    case 4988:  /* *avx512vl_vpternlogv4si_1 */
    case 4987:  /* *avx512vl_vpternlogv4si_1 */
    case 4986:  /* *avx512vl_vpternlogv4si_1 */
    case 4985:  /* *avx512vl_vpternlogv4si_1 */
    case 4984:  /* *avx512vl_vpternlogv4si_1 */
    case 4983:  /* *avx512vl_vpternlogv4si_1 */
    case 4982:  /* *avx512vl_vpternlogv4si_1 */
    case 4981:  /* *avx512vl_vpternlogv4si_1 */
    case 4980:  /* *avx512vl_vpternlogv4si_1 */
    case 4979:  /* *avx512vl_vpternlogv4si_1 */
    case 4978:  /* *avx512vl_vpternlogv4si_1 */
    case 4977:  /* *avx512vl_vpternlogv4si_1 */
    case 4976:  /* *avx512vl_vpternlogv4si_1 */
    case 4975:  /* *avx512vl_vpternlogv4si_1 */
    case 4974:  /* *avx512vl_vpternlogv4si_1 */
    case 4973:  /* *avx512vl_vpternlogv4si_1 */
    case 4972:  /* *avx512vl_vpternlogv4si_1 */
    case 4971:  /* *avx512vl_vpternlogv4si_1 */
    case 4970:  /* *avx512vl_vpternlogv4si_1 */
    case 4969:  /* *avx512vl_vpternlogv4si_1 */
    case 4968:  /* *avx512vl_vpternlogv4si_1 */
    case 4967:  /* *avx512vl_vpternlogv4si_1 */
    case 4966:  /* *avx512vl_vpternlogv8si_1 */
    case 4965:  /* *avx512vl_vpternlogv8si_1 */
    case 4964:  /* *avx512vl_vpternlogv8si_1 */
    case 4963:  /* *avx512vl_vpternlogv8si_1 */
    case 4962:  /* *avx512vl_vpternlogv8si_1 */
    case 4961:  /* *avx512vl_vpternlogv8si_1 */
    case 4960:  /* *avx512vl_vpternlogv8si_1 */
    case 4959:  /* *avx512vl_vpternlogv8si_1 */
    case 4958:  /* *avx512vl_vpternlogv8si_1 */
    case 4957:  /* *avx512vl_vpternlogv8si_1 */
    case 4956:  /* *avx512vl_vpternlogv8si_1 */
    case 4955:  /* *avx512vl_vpternlogv8si_1 */
    case 4954:  /* *avx512vl_vpternlogv8si_1 */
    case 4953:  /* *avx512vl_vpternlogv8si_1 */
    case 4952:  /* *avx512vl_vpternlogv8si_1 */
    case 4951:  /* *avx512vl_vpternlogv8si_1 */
    case 4950:  /* *avx512vl_vpternlogv8si_1 */
    case 4949:  /* *avx512vl_vpternlogv8si_1 */
    case 4948:  /* *avx512vl_vpternlogv8si_1 */
    case 4947:  /* *avx512vl_vpternlogv8si_1 */
    case 4946:  /* *avx512vl_vpternlogv8si_1 */
    case 4945:  /* *avx512vl_vpternlogv8si_1 */
    case 4944:  /* *avx512vl_vpternlogv8si_1 */
    case 4943:  /* *avx512vl_vpternlogv8si_1 */
    case 4942:  /* *avx512vl_vpternlogv8si_1 */
    case 4941:  /* *avx512vl_vpternlogv8si_1 */
    case 4940:  /* *avx512vl_vpternlogv8si_1 */
    case 4939:  /* *avx512f_vpternlogv16si_1 */
    case 4938:  /* *avx512f_vpternlogv16si_1 */
    case 4937:  /* *avx512f_vpternlogv16si_1 */
    case 4936:  /* *avx512f_vpternlogv16si_1 */
    case 4935:  /* *avx512f_vpternlogv16si_1 */
    case 4934:  /* *avx512f_vpternlogv16si_1 */
    case 4933:  /* *avx512f_vpternlogv16si_1 */
    case 4932:  /* *avx512f_vpternlogv16si_1 */
    case 4931:  /* *avx512f_vpternlogv16si_1 */
    case 4930:  /* *avx512f_vpternlogv16si_1 */
    case 4929:  /* *avx512f_vpternlogv16si_1 */
    case 4928:  /* *avx512f_vpternlogv16si_1 */
    case 4927:  /* *avx512f_vpternlogv16si_1 */
    case 4926:  /* *avx512f_vpternlogv16si_1 */
    case 4925:  /* *avx512f_vpternlogv16si_1 */
    case 4924:  /* *avx512f_vpternlogv16si_1 */
    case 4923:  /* *avx512f_vpternlogv16si_1 */
    case 4922:  /* *avx512f_vpternlogv16si_1 */
    case 4921:  /* *avx512f_vpternlogv16si_1 */
    case 4920:  /* *avx512f_vpternlogv16si_1 */
    case 4919:  /* *avx512f_vpternlogv16si_1 */
    case 4918:  /* *avx512f_vpternlogv16si_1 */
    case 4917:  /* *avx512f_vpternlogv16si_1 */
    case 4916:  /* *avx512f_vpternlogv16si_1 */
    case 4915:  /* *avx512f_vpternlogv16si_1 */
    case 4914:  /* *avx512f_vpternlogv16si_1 */
    case 4913:  /* *avx512f_vpternlogv16si_1 */
    case 4912:  /* *avx512vl_vpternlogv8hi_1 */
    case 4911:  /* *avx512vl_vpternlogv8hi_1 */
    case 4910:  /* *avx512vl_vpternlogv8hi_1 */
    case 4909:  /* *avx512vl_vpternlogv8hi_1 */
    case 4908:  /* *avx512vl_vpternlogv8hi_1 */
    case 4907:  /* *avx512vl_vpternlogv8hi_1 */
    case 4906:  /* *avx512vl_vpternlogv8hi_1 */
    case 4905:  /* *avx512vl_vpternlogv8hi_1 */
    case 4904:  /* *avx512vl_vpternlogv8hi_1 */
    case 4903:  /* *avx512vl_vpternlogv8hi_1 */
    case 4902:  /* *avx512vl_vpternlogv8hi_1 */
    case 4901:  /* *avx512vl_vpternlogv8hi_1 */
    case 4900:  /* *avx512vl_vpternlogv8hi_1 */
    case 4899:  /* *avx512vl_vpternlogv8hi_1 */
    case 4898:  /* *avx512vl_vpternlogv8hi_1 */
    case 4897:  /* *avx512vl_vpternlogv8hi_1 */
    case 4896:  /* *avx512vl_vpternlogv8hi_1 */
    case 4895:  /* *avx512vl_vpternlogv8hi_1 */
    case 4894:  /* *avx512vl_vpternlogv8hi_1 */
    case 4893:  /* *avx512vl_vpternlogv8hi_1 */
    case 4892:  /* *avx512vl_vpternlogv8hi_1 */
    case 4891:  /* *avx512vl_vpternlogv8hi_1 */
    case 4890:  /* *avx512vl_vpternlogv8hi_1 */
    case 4889:  /* *avx512vl_vpternlogv8hi_1 */
    case 4888:  /* *avx512vl_vpternlogv8hi_1 */
    case 4887:  /* *avx512vl_vpternlogv8hi_1 */
    case 4886:  /* *avx512vl_vpternlogv8hi_1 */
    case 4885:  /* *avx512vl_vpternlogv16hi_1 */
    case 4884:  /* *avx512vl_vpternlogv16hi_1 */
    case 4883:  /* *avx512vl_vpternlogv16hi_1 */
    case 4882:  /* *avx512vl_vpternlogv16hi_1 */
    case 4881:  /* *avx512vl_vpternlogv16hi_1 */
    case 4880:  /* *avx512vl_vpternlogv16hi_1 */
    case 4879:  /* *avx512vl_vpternlogv16hi_1 */
    case 4878:  /* *avx512vl_vpternlogv16hi_1 */
    case 4877:  /* *avx512vl_vpternlogv16hi_1 */
    case 4876:  /* *avx512vl_vpternlogv16hi_1 */
    case 4875:  /* *avx512vl_vpternlogv16hi_1 */
    case 4874:  /* *avx512vl_vpternlogv16hi_1 */
    case 4873:  /* *avx512vl_vpternlogv16hi_1 */
    case 4872:  /* *avx512vl_vpternlogv16hi_1 */
    case 4871:  /* *avx512vl_vpternlogv16hi_1 */
    case 4870:  /* *avx512vl_vpternlogv16hi_1 */
    case 4869:  /* *avx512vl_vpternlogv16hi_1 */
    case 4868:  /* *avx512vl_vpternlogv16hi_1 */
    case 4867:  /* *avx512vl_vpternlogv16hi_1 */
    case 4866:  /* *avx512vl_vpternlogv16hi_1 */
    case 4865:  /* *avx512vl_vpternlogv16hi_1 */
    case 4864:  /* *avx512vl_vpternlogv16hi_1 */
    case 4863:  /* *avx512vl_vpternlogv16hi_1 */
    case 4862:  /* *avx512vl_vpternlogv16hi_1 */
    case 4861:  /* *avx512vl_vpternlogv16hi_1 */
    case 4860:  /* *avx512vl_vpternlogv16hi_1 */
    case 4859:  /* *avx512vl_vpternlogv16hi_1 */
    case 4858:  /* *avx512bw_vpternlogv32hi_1 */
    case 4857:  /* *avx512bw_vpternlogv32hi_1 */
    case 4856:  /* *avx512bw_vpternlogv32hi_1 */
    case 4855:  /* *avx512bw_vpternlogv32hi_1 */
    case 4854:  /* *avx512bw_vpternlogv32hi_1 */
    case 4853:  /* *avx512bw_vpternlogv32hi_1 */
    case 4852:  /* *avx512bw_vpternlogv32hi_1 */
    case 4851:  /* *avx512bw_vpternlogv32hi_1 */
    case 4850:  /* *avx512bw_vpternlogv32hi_1 */
    case 4849:  /* *avx512bw_vpternlogv32hi_1 */
    case 4848:  /* *avx512bw_vpternlogv32hi_1 */
    case 4847:  /* *avx512bw_vpternlogv32hi_1 */
    case 4846:  /* *avx512bw_vpternlogv32hi_1 */
    case 4845:  /* *avx512bw_vpternlogv32hi_1 */
    case 4844:  /* *avx512bw_vpternlogv32hi_1 */
    case 4843:  /* *avx512bw_vpternlogv32hi_1 */
    case 4842:  /* *avx512bw_vpternlogv32hi_1 */
    case 4841:  /* *avx512bw_vpternlogv32hi_1 */
    case 4840:  /* *avx512bw_vpternlogv32hi_1 */
    case 4839:  /* *avx512bw_vpternlogv32hi_1 */
    case 4838:  /* *avx512bw_vpternlogv32hi_1 */
    case 4837:  /* *avx512bw_vpternlogv32hi_1 */
    case 4836:  /* *avx512bw_vpternlogv32hi_1 */
    case 4835:  /* *avx512bw_vpternlogv32hi_1 */
    case 4834:  /* *avx512bw_vpternlogv32hi_1 */
    case 4833:  /* *avx512bw_vpternlogv32hi_1 */
    case 4832:  /* *avx512bw_vpternlogv32hi_1 */
    case 4831:  /* *avx512vl_vpternlogv16qi_1 */
    case 4830:  /* *avx512vl_vpternlogv16qi_1 */
    case 4829:  /* *avx512vl_vpternlogv16qi_1 */
    case 4828:  /* *avx512vl_vpternlogv16qi_1 */
    case 4827:  /* *avx512vl_vpternlogv16qi_1 */
    case 4826:  /* *avx512vl_vpternlogv16qi_1 */
    case 4825:  /* *avx512vl_vpternlogv16qi_1 */
    case 4824:  /* *avx512vl_vpternlogv16qi_1 */
    case 4823:  /* *avx512vl_vpternlogv16qi_1 */
    case 4822:  /* *avx512vl_vpternlogv16qi_1 */
    case 4821:  /* *avx512vl_vpternlogv16qi_1 */
    case 4820:  /* *avx512vl_vpternlogv16qi_1 */
    case 4819:  /* *avx512vl_vpternlogv16qi_1 */
    case 4818:  /* *avx512vl_vpternlogv16qi_1 */
    case 4817:  /* *avx512vl_vpternlogv16qi_1 */
    case 4816:  /* *avx512vl_vpternlogv16qi_1 */
    case 4815:  /* *avx512vl_vpternlogv16qi_1 */
    case 4814:  /* *avx512vl_vpternlogv16qi_1 */
    case 4813:  /* *avx512vl_vpternlogv16qi_1 */
    case 4812:  /* *avx512vl_vpternlogv16qi_1 */
    case 4811:  /* *avx512vl_vpternlogv16qi_1 */
    case 4810:  /* *avx512vl_vpternlogv16qi_1 */
    case 4809:  /* *avx512vl_vpternlogv16qi_1 */
    case 4808:  /* *avx512vl_vpternlogv16qi_1 */
    case 4807:  /* *avx512vl_vpternlogv16qi_1 */
    case 4806:  /* *avx512vl_vpternlogv16qi_1 */
    case 4805:  /* *avx512vl_vpternlogv16qi_1 */
    case 4804:  /* *avx512vl_vpternlogv32qi_1 */
    case 4803:  /* *avx512vl_vpternlogv32qi_1 */
    case 4802:  /* *avx512vl_vpternlogv32qi_1 */
    case 4801:  /* *avx512vl_vpternlogv32qi_1 */
    case 4800:  /* *avx512vl_vpternlogv32qi_1 */
    case 4799:  /* *avx512vl_vpternlogv32qi_1 */
    case 4798:  /* *avx512vl_vpternlogv32qi_1 */
    case 4797:  /* *avx512vl_vpternlogv32qi_1 */
    case 4796:  /* *avx512vl_vpternlogv32qi_1 */
    case 4795:  /* *avx512vl_vpternlogv32qi_1 */
    case 4794:  /* *avx512vl_vpternlogv32qi_1 */
    case 4793:  /* *avx512vl_vpternlogv32qi_1 */
    case 4792:  /* *avx512vl_vpternlogv32qi_1 */
    case 4791:  /* *avx512vl_vpternlogv32qi_1 */
    case 4790:  /* *avx512vl_vpternlogv32qi_1 */
    case 4789:  /* *avx512vl_vpternlogv32qi_1 */
    case 4788:  /* *avx512vl_vpternlogv32qi_1 */
    case 4787:  /* *avx512vl_vpternlogv32qi_1 */
    case 4786:  /* *avx512vl_vpternlogv32qi_1 */
    case 4785:  /* *avx512vl_vpternlogv32qi_1 */
    case 4784:  /* *avx512vl_vpternlogv32qi_1 */
    case 4783:  /* *avx512vl_vpternlogv32qi_1 */
    case 4782:  /* *avx512vl_vpternlogv32qi_1 */
    case 4781:  /* *avx512vl_vpternlogv32qi_1 */
    case 4780:  /* *avx512vl_vpternlogv32qi_1 */
    case 4779:  /* *avx512vl_vpternlogv32qi_1 */
    case 4778:  /* *avx512vl_vpternlogv32qi_1 */
    case 4777:  /* *avx512bw_vpternlogv64qi_1 */
    case 4776:  /* *avx512bw_vpternlogv64qi_1 */
    case 4775:  /* *avx512bw_vpternlogv64qi_1 */
    case 4774:  /* *avx512bw_vpternlogv64qi_1 */
    case 4773:  /* *avx512bw_vpternlogv64qi_1 */
    case 4772:  /* *avx512bw_vpternlogv64qi_1 */
    case 4771:  /* *avx512bw_vpternlogv64qi_1 */
    case 4770:  /* *avx512bw_vpternlogv64qi_1 */
    case 4769:  /* *avx512bw_vpternlogv64qi_1 */
    case 4768:  /* *avx512bw_vpternlogv64qi_1 */
    case 4767:  /* *avx512bw_vpternlogv64qi_1 */
    case 4766:  /* *avx512bw_vpternlogv64qi_1 */
    case 4765:  /* *avx512bw_vpternlogv64qi_1 */
    case 4764:  /* *avx512bw_vpternlogv64qi_1 */
    case 4763:  /* *avx512bw_vpternlogv64qi_1 */
    case 4762:  /* *avx512bw_vpternlogv64qi_1 */
    case 4761:  /* *avx512bw_vpternlogv64qi_1 */
    case 4760:  /* *avx512bw_vpternlogv64qi_1 */
    case 4759:  /* *avx512bw_vpternlogv64qi_1 */
    case 4758:  /* *avx512bw_vpternlogv64qi_1 */
    case 4757:  /* *avx512bw_vpternlogv64qi_1 */
    case 4756:  /* *avx512bw_vpternlogv64qi_1 */
    case 4755:  /* *avx512bw_vpternlogv64qi_1 */
    case 4754:  /* *avx512bw_vpternlogv64qi_1 */
    case 4753:  /* *avx512bw_vpternlogv64qi_1 */
    case 4752:  /* *avx512bw_vpternlogv64qi_1 */
    case 4751:  /* *avx512bw_vpternlogv64qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 6170:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 6166:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 6162:  /* avx512f_fixupimmv8df_maskz_1 */
    case 6158:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 6154:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 6150:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 4729:  /* avx512vl_vternlogv2di_maskz_1 */
    case 4727:  /* avx512vl_vternlogv4di_maskz_1 */
    case 4725:  /* avx512f_vternlogv8di_maskz_1 */
    case 4723:  /* avx512vl_vternlogv4si_maskz_1 */
    case 4721:  /* avx512vl_vternlogv8si_maskz_1 */
    case 4719:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9116:  /* vsm3rnds2 */
    case 8131:  /* xop_vpermil2v2df3 */
    case 8130:  /* xop_vpermil2v4df3 */
    case 8129:  /* xop_vpermil2v4sf3 */
    case 8128:  /* xop_vpermil2v8sf3 */
    case 7695:  /* sse4a_insertqi */
    case 6168:  /* avx512vl_fixupimmv2df */
    case 6164:  /* avx512vl_fixupimmv4df */
    case 6160:  /* avx512f_fixupimmv8df */
    case 6156:  /* avx512vl_fixupimmv4sf */
    case 6152:  /* avx512vl_fixupimmv8sf */
    case 6148:  /* avx512f_fixupimmv16sf */
    case 4750:  /* *avx512vl_vternlogv2df_all */
    case 4749:  /* *avx512vl_vternlogv4df_all */
    case 4748:  /* *avx512f_vternlogv8df_all */
    case 4747:  /* *avx512vl_vternlogv4sf_all */
    case 4746:  /* *avx512vl_vternlogv8sf_all */
    case 4745:  /* *avx512f_vternlogv16sf_all */
    case 4744:  /* *avx512fp16_vternlogv8hf_all */
    case 4743:  /* *avx512vl_vternlogv16hf_all */
    case 4742:  /* *avx512bw_vternlogv32hf_all */
    case 4741:  /* *avx512vl_vternlogv2di_all */
    case 4740:  /* *avx512vl_vternlogv4di_all */
    case 4739:  /* *avx512f_vternlogv8di_all */
    case 4738:  /* *avx512vl_vternlogv4si_all */
    case 4737:  /* *avx512vl_vternlogv8si_all */
    case 4736:  /* *avx512f_vternlogv16si_all */
    case 4735:  /* *avx512vl_vternlogv8hi_all */
    case 4734:  /* *avx512vl_vternlogv16hi_all */
    case 4733:  /* *avx512bw_vternlogv32hi_all */
    case 4732:  /* *avx512vl_vternlogv16qi_all */
    case 4731:  /* *avx512vl_vternlogv32qi_all */
    case 4730:  /* *avx512bw_vternlogv64qi_all */
    case 4728:  /* avx512vl_vternlogv2di */
    case 4726:  /* avx512vl_vternlogv4di */
    case 4724:  /* avx512f_vternlogv8di */
    case 4722:  /* avx512vl_vternlogv4si */
    case 4720:  /* avx512vl_vternlogv8si */
    case 4718:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 6127:  /* avx512f_sgetexpv2df_mask_round */
    case 6123:  /* avx512f_sgetexpv4sf_mask_round */
    case 6119:  /* avx512f_sgetexpv8hf_mask_round */
    case 4681:  /* avx512f_vmscalefv2df_mask_round */
    case 4677:  /* avx512f_vmscalefv4sf_mask_round */
    case 4673:  /* avx512f_vmscalefv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6125:  /* avx512f_sgetexpv2df_mask */
    case 6121:  /* avx512f_sgetexpv4sf_mask */
    case 6117:  /* avx512f_sgetexpv8hf_mask */
    case 4680:  /* avx512f_vmscalefv2df_mask */
    case 4676:  /* avx512f_vmscalefv4sf_mask */
    case 4672:  /* avx512f_vmscalefv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8223:  /* avx2_permv4df_1_mask */
    case 8221:  /* avx2_permv4di_1_mask */
    case 7490:  /* sse2_pshuflw_1_mask */
    case 7484:  /* sse2_pshufd_1_mask */
    case 4595:  /* avx512f_vextracti32x4_1_mask */
    case 4594:  /* avx512f_vextractf32x4_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4591:  /* avx512dq_vextracti64x2_1_mask */
    case 4590:  /* avx512dq_vextractf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7534:  /* vec_setv4di_0 */
    case 7533:  /* vec_setv8di_0 */
    case 7497:  /* sse2_loadld */
    case 6283:  /* vec_setv4df_0 */
    case 6282:  /* vec_setv8df_0 */
    case 4586:  /* vec_setv2df_0 */
    case 4579:  /* vec_setv16sf_0 */
    case 4578:  /* vec_setv16si_0 */
    case 4577:  /* vec_setv8sf_0 */
    case 4576:  /* vec_setv8si_0 */
    case 4564:  /* vec_setv32bf_0 */
    case 4563:  /* vec_setv16bf_0 */
    case 4562:  /* vec_setv32hf_0 */
    case 4561:  /* vec_setv16hf_0 */
    case 4560:  /* vec_setv32hi_0 */
    case 4559:  /* vec_setv16hi_0 */
    case 4558:  /* vec_setv8bf_0 */
    case 4557:  /* vec_setv8hf_0 */
    case 4556:  /* vec_setv8hi_0 */
    case 4555:  /* vec_setv4sf_0 */
    case 4554:  /* vec_setv4si_0 */
    case 4553:  /* *vec_concatv8hi_movss */
    case 4552:  /* *vec_concatv8bf_movss */
    case 4551:  /* *vec_concatv8hf_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 8534:  /* vec_set_lo_v32qi */
    case 8530:  /* vec_set_lo_v16bf */
    case 8529:  /* vec_set_lo_v16hf */
    case 8528:  /* vec_set_lo_v16hi */
    case 8522:  /* vec_set_lo_v8sf */
    case 8520:  /* vec_set_lo_v8si */
    case 8514:  /* vec_set_lo_v4df */
    case 8512:  /* vec_set_lo_v4di */
    case 7449:  /* vec_set_lo_v8di */
    case 7447:  /* vec_set_lo_v8df */
    case 7441:  /* vec_set_lo_v16si */
    case 7439:  /* vec_set_lo_v16sf */
    case 6276:  /* sse2_loadlpd */
    case 4537:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7457:  /* *avx512dq_shuf_f64x2_1 */
    case 7455:  /* *avx512dq_shuf_i64x2_1 */
    case 6254:  /* avx_shufpd256_1 */
    case 4533:  /* sse_shufps_v4sf */
    case 4532:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 7458:  /* avx512dq_shuf_f64x2_1_mask */
    case 7456:  /* avx512dq_shuf_i64x2_1_mask */
    case 6255:  /* avx_shufpd256_1_mask */
    case 4531:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7470:  /* avx512vl_shuf_f32x4_1_mask */
    case 7468:  /* avx512vl_shuf_i32x4_1_mask */
    case 7462:  /* avx512f_shuf_i64x2_1_mask */
    case 7460:  /* avx512f_shuf_f64x2_1_mask */
    case 6253:  /* avx512f_shufpd512_1_mask */
    case 4530:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7469:  /* avx512vl_shuf_f32x4_1 */
    case 7467:  /* avx512vl_shuf_i32x4_1 */
    case 7461:  /* avx512f_shuf_i64x2_1 */
    case 7459:  /* avx512f_shuf_f64x2_1 */
    case 6252:  /* avx512f_shufpd512_1 */
    case 4529:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4665:  /* avx_movddup256_mask */
    case 4661:  /* avx512f_movddup512_mask */
    case 4528:  /* avx512f_movsldup512_mask */
    case 4526:  /* sse3_movsldup_mask */
    case 4524:  /* avx_movsldup256_mask */
    case 4522:  /* avx512f_movshdup512_mask */
    case 4520:  /* sse3_movshdup_mask */
    case 4518:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4664:  /* avx_movddup256 */
    case 4660:  /* avx512f_movddup512 */
    case 4527:  /* *avx512f_movsldup512 */
    case 4525:  /* sse3_movsldup */
    case 4523:  /* avx_movsldup256 */
    case 4521:  /* *avx512f_movshdup512 */
    case 4519:  /* sse3_movshdup */
    case 4517:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7420:  /* vec_interleave_lowv4si_mask */
    case 7418:  /* avx512f_interleave_lowv16si_mask */
    case 7416:  /* avx2_interleave_lowv8si_mask */
    case 7414:  /* vec_interleave_highv4si_mask */
    case 7412:  /* avx512f_interleave_highv16si_mask */
    case 7410:  /* avx2_interleave_highv8si_mask */
    case 7408:  /* vec_interleave_lowv8bf_mask */
    case 7406:  /* vec_interleave_lowv8hf_mask */
    case 7404:  /* vec_interleave_lowv8hi_mask */
    case 7402:  /* avx2_interleave_lowv16bf_mask */
    case 7400:  /* avx2_interleave_lowv16hf_mask */
    case 7398:  /* avx2_interleave_lowv16hi_mask */
    case 7396:  /* avx512bw_interleave_lowv32bf_mask */
    case 7394:  /* avx512bw_interleave_lowv32hf_mask */
    case 7392:  /* avx512bw_interleave_lowv32hi_mask */
    case 7390:  /* vec_interleave_highv8bf_mask */
    case 7388:  /* vec_interleave_highv8hf_mask */
    case 7386:  /* vec_interleave_highv8hi_mask */
    case 7384:  /* avx2_interleave_highv16bf_mask */
    case 7382:  /* avx2_interleave_highv16hf_mask */
    case 7380:  /* avx2_interleave_highv16hi_mask */
    case 7378:  /* avx512bw_interleave_highv32bf_mask */
    case 7376:  /* avx512bw_interleave_highv32hf_mask */
    case 7374:  /* avx512bw_interleave_highv32hi_mask */
    case 7372:  /* vec_interleave_lowv16qi_mask */
    case 7370:  /* avx2_interleave_lowv32qi_mask */
    case 7368:  /* avx512bw_interleave_lowv64qi_mask */
    case 7366:  /* vec_interleave_highv16qi_mask */
    case 7364:  /* avx2_interleave_highv32qi_mask */
    case 7362:  /* avx512bw_interleave_highv64qi_mask */
    case 6268:  /* vec_interleave_lowv2di_mask */
    case 6266:  /* avx512f_interleave_lowv8di_mask */
    case 6264:  /* avx2_interleave_lowv4di_mask */
    case 6262:  /* vec_interleave_highv2di_mask */
    case 6260:  /* avx512f_interleave_highv8di_mask */
    case 6258:  /* avx2_interleave_highv4di_mask */
    case 4668:  /* avx512vl_unpcklpd128_mask */
    case 4667:  /* avx_unpcklpd256_mask */
    case 4663:  /* avx512f_unpcklpd512_mask */
    case 4658:  /* avx512vl_unpckhpd128_mask */
    case 4657:  /* avx_unpckhpd256_mask */
    case 4655:  /* avx512f_unpckhpd512_mask */
    case 4515:  /* unpcklps128_mask */
    case 4514:  /* avx_unpcklps256_mask */
    case 4512:  /* avx512f_unpcklps512_mask */
    case 4510:  /* vec_interleave_highv4sf_mask */
    case 4508:  /* avx_unpckhps256_mask */
    case 4506:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4495:  /* *avx512vl_cvtmask2qv2di_pternlog_false_dep */
    case 4494:  /* *avx512vl_cvtmask2qv4di_pternlog_false_dep */
    case 4493:  /* *avx512f_cvtmask2qv8di_pternlog_false_dep */
    case 4492:  /* *avx512vl_cvtmask2dv4si_pternlog_false_dep */
    case 4491:  /* *avx512vl_cvtmask2dv8si_pternlog_false_dep */
    case 4490:  /* *avx512f_cvtmask2dv16si_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4489:  /* *avx512vl_cvtmask2qv2di */
    case 4488:  /* *avx512vl_cvtmask2qv4di */
    case 4487:  /* *avx512f_cvtmask2qv8di */
    case 4486:  /* *avx512vl_cvtmask2dv4si */
    case 4485:  /* *avx512vl_cvtmask2dv8si */
    case 4484:  /* *avx512f_cvtmask2dv16si */
    case 4483:  /* *avx512vl_cvtmask2wv8hi */
    case 4482:  /* *avx512vl_cvtmask2wv16hi */
    case 4481:  /* *avx512bw_cvtmask2wv32hi */
    case 4480:  /* *avx512vl_cvtmask2bv32qi */
    case 4479:  /* *avx512vl_cvtmask2bv16qi */
    case 4478:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4446:  /* sse2_cvtss2sd_mask_round */
    case 4441:  /* sse2_cvtsd2ss_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4445:  /* sse2_cvtss2sd_mask */
    case 4440:  /* sse2_cvtsd2ss_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6546:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 6545:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 6544:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 6525:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 6524:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 6523:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 6503:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 6502:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 6501:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 6479:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 6478:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 6477:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 6476:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 6475:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 6474:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 6433:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 6432:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 6431:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 6430:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 6429:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 6428:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 6397:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 6396:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 6395:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 6394:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 6393:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 6392:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 6367:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 6366:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 6365:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 4437:  /* *sse2_cvttpd2dq_mask_1 */
    case 4378:  /* *fixuns_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 6543:  /* avx512f_us_truncatev8div16qi2_mask */
    case 6542:  /* avx512f_truncatev8div16qi2_mask */
    case 6541:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 6522:  /* avx512vl_us_truncatev2div2si2_mask */
    case 6521:  /* avx512vl_truncatev2div2si2_mask */
    case 6520:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 6500:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 6499:  /* avx512vl_truncatev2div2hi2_mask */
    case 6498:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 6473:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 6472:  /* avx512vl_truncatev4div4hi2_mask */
    case 6471:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 6470:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 6469:  /* avx512vl_truncatev4siv4hi2_mask */
    case 6468:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 6427:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 6426:  /* avx512vl_truncatev8siv8qi2_mask */
    case 6425:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 6424:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 6423:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 6422:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 6391:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 6390:  /* avx512vl_truncatev4div4qi2_mask */
    case 6389:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 6388:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 6387:  /* avx512vl_truncatev4siv4qi2_mask */
    case 6386:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 6364:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 6363:  /* avx512vl_truncatev2div2qi2_mask */
    case 6362:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 4436:  /* sse2_cvttpd2dq_mask */
    case 4377:  /* fixuns_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4367:  /* *fixuns_notruncv2dfv2si2_mask_1 */
    case 4356:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4366:  /* fixuns_notruncv2dfv2si2_mask */
    case 4355:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4244:  /* avx512dq_cvtps2uqqv2di_mask */
    case 4236:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8670:  /* vcvtph2ps */
    case 7590:  /* *sse2_pmovmskb_ext */
    case 7589:  /* *sse2_pmovmskb_zext */
    case 7588:  /* *avx2_pmovmskb_zext */
    case 7561:  /* *sse2_movmskpd_uext */
    case 7560:  /* *sse2_movmskpd_ext */
    case 7559:  /* *avx_movmskpd256_uext */
    case 7558:  /* *avx_movmskpd256_ext */
    case 7557:  /* *sse_movmskps_uext */
    case 7556:  /* *sse_movmskps_ext */
    case 7555:  /* *avx_movmskps256_uext */
    case 7554:  /* *avx_movmskps256_ext */
    case 4365:  /* fixuns_notruncv2dfv2si2 */
    case 4354:  /* sse2_cvtpd2dq */
    case 4166:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 4165:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4160:  /* avx512fp16_vcvtss2sh_mask_round */
    case 4156:  /* avx512fp16_vcvtsd2sh_mask_round */
    case 4148:  /* avx512fp16_vcvtsh2ss_mask_round */
    case 4144:  /* avx512fp16_vcvtsh2sd_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4158:  /* avx512fp16_vcvtss2sh_round */
    case 4154:  /* avx512fp16_vcvtsd2sh_round */
    case 4147:  /* avx512fp16_vcvtsh2ss_round */
    case 4143:  /* avx512fp16_vcvtsh2sd_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4159:  /* avx512fp16_vcvtss2sh_mask */
    case 4155:  /* avx512fp16_vcvtsd2sh_mask */
    case 4146:  /* avx512fp16_vcvtsh2ss_mask */
    case 4142:  /* avx512fp16_vcvtsh2sd_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4157:  /* avx512fp16_vcvtss2sh */
    case 4153:  /* avx512fp16_vcvtsd2sh */
    case 4145:  /* avx512fp16_vcvtsh2ss */
    case 4141:  /* avx512fp16_vcvtsh2sd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4290:  /* sse2_cvttsd2siq_round */
    case 4288:  /* sse2_cvttsd2si_round */
    case 4280:  /* avx512f_vcvttsd2usiq_round */
    case 4278:  /* avx512f_vcvttsd2usi_round */
    case 4272:  /* avx512f_vcvttss2usiq_round */
    case 4270:  /* avx512f_vcvttss2usi_round */
    case 4181:  /* sse_cvttss2siq_round */
    case 4179:  /* sse_cvttss2si_round */
    case 4091:  /* avx512fp16_fixuns_truncdi2_round */
    case 4089:  /* avx512fp16_fix_truncdi2_round */
    case 4087:  /* avx512fp16_fixuns_truncsi2_round */
    case 4085:  /* avx512fp16_fix_truncsi2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8379:  /* avx512dq_broadcastv8sf_mask */
    case 8377:  /* avx512dq_broadcastv16sf_mask */
    case 8375:  /* avx512dq_broadcastv4si_mask */
    case 8373:  /* avx512dq_broadcastv8si_mask */
    case 8371:  /* avx512dq_broadcastv16si_mask */
    case 8283:  /* avx512vl_vec_dupv8bf_mask */
    case 8281:  /* avx512vl_vec_dupv16bf_mask */
    case 8279:  /* avx512bw_vec_dupv32bf_mask */
    case 8277:  /* avx512fp16_vec_dupv8hf_mask */
    case 8275:  /* avx512vl_vec_dupv16hf_mask */
    case 8273:  /* avx512bw_vec_dupv32hf_mask */
    case 8271:  /* avx512vl_vec_dupv8hi_mask */
    case 8269:  /* avx512vl_vec_dupv16hi_mask */
    case 8267:  /* avx512bw_vec_dupv32hi_mask */
    case 8265:  /* avx512vl_vec_dupv32qi_mask */
    case 8263:  /* avx512vl_vec_dupv16qi_mask */
    case 8261:  /* avx512bw_vec_dupv64qi_mask */
    case 8259:  /* avx512vl_vec_dupv2df_mask */
    case 8257:  /* avx512vl_vec_dupv4df_mask */
    case 8255:  /* avx512f_vec_dupv8df_mask */
    case 8253:  /* avx512vl_vec_dupv4sf_mask */
    case 8251:  /* avx512vl_vec_dupv8sf_mask */
    case 8249:  /* avx512f_vec_dupv16sf_mask */
    case 8247:  /* avx512vl_vec_dupv2di_mask */
    case 8245:  /* avx512vl_vec_dupv4di_mask */
    case 8243:  /* avx512f_vec_dupv8di_mask */
    case 8241:  /* avx512vl_vec_dupv4si_mask */
    case 8239:  /* avx512vl_vec_dupv8si_mask */
    case 8237:  /* avx512f_vec_dupv16si_mask */
    case 7919:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 7917:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 7895:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 7893:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 7883:  /* avx2_zero_extendv4hiv4di2_mask */
    case 7881:  /* avx2_sign_extendv4hiv4di2_mask */
    case 7868:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 7866:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 7856:  /* avx2_zero_extendv4qiv4di2_mask */
    case 7854:  /* avx2_sign_extendv4qiv4di2_mask */
    case 7844:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 7842:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 7828:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 7826:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 7800:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 7798:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 7788:  /* avx2_zero_extendv8qiv8si2_mask */
    case 7786:  /* avx2_sign_extendv8qiv8si2_mask */
    case 7768:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 7766:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 4497:  /* sse2_cvtps2pd_mask */
    case 4430:  /* avx512dq_fixuns_truncv2sfv2di2_mask */
    case 4428:  /* avx512dq_fix_truncv2sfv2di2_mask */
    case 4346:  /* sse2_cvtdq2pd_mask */
    case 4342:  /* floatunsv2siv2df2_mask */
    case 4117:  /* avx512fp16_float_extend_phv2df2_mask */
    case 4111:  /* avx512fp16_float_extend_phv4sf2_mask */
    case 4109:  /* avx512fp16_float_extend_phv4df2_mask */
    case 4079:  /* avx512fp16_fixuns_truncv2di2_mask */
    case 4077:  /* avx512fp16_fix_truncv2di2_mask */
    case 4067:  /* avx512fp16_fixuns_truncv4di2_mask */
    case 4065:  /* avx512fp16_fix_truncv4di2_mask */
    case 4063:  /* avx512fp16_fixuns_truncv4si2_mask */
    case 4061:  /* avx512fp16_fix_truncv4si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4444:  /* sse2_cvtss2sd_round */
    case 4439:  /* sse2_cvtsd2ss_round */
    case 4264:  /* sse2_cvtsi2sdq_round */
    case 4188:  /* cvtusi2sd64_round */
    case 4186:  /* cvtusi2ss64_round */
    case 4183:  /* cvtusi2ss32_round */
    case 4171:  /* sse_cvtsi2ssq_round */
    case 4169:  /* sse_cvtsi2ss_round */
    case 4011:  /* avx512fp16_vcvtusi2shq_round */
    case 4009:  /* avx512fp16_vcvtsi2shq_round */
    case 4007:  /* avx512fp16_vcvtusi2sh_round */
    case 4005:  /* avx512fp16_vcvtsi2sh_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4447:  /* *sse2_vd_cvtss2sd */
    case 4443:  /* sse2_cvtss2sd */
    case 4442:  /* *sse2_vd_cvtsd2ss */
    case 4438:  /* sse2_cvtsd2ss */
    case 4263:  /* sse2_cvtsi2sdq */
    case 4262:  /* sse2_cvtsi2sd */
    case 4187:  /* cvtusi2sd64 */
    case 4185:  /* cvtusi2ss64 */
    case 4184:  /* cvtusi2sd32 */
    case 4182:  /* cvtusi2ss32 */
    case 4170:  /* sse_cvtsi2ssq */
    case 4168:  /* sse_cvtsi2ss */
    case 4010:  /* avx512fp16_vcvtusi2shq */
    case 4008:  /* avx512fp16_vcvtsi2shq */
    case 4006:  /* avx512fp16_vcvtusi2sh */
    case 4004:  /* avx512fp16_vcvtsi2sh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 4284:  /* sse2_cvtsd2siq_round */
    case 4282:  /* sse2_cvtsd2si_round */
    case 4276:  /* avx512f_vcvtsd2usiq_round */
    case 4274:  /* avx512f_vcvtsd2usi_round */
    case 4268:  /* avx512f_vcvtss2usiq_round */
    case 4266:  /* avx512f_vcvtss2usi_round */
    case 4175:  /* sse_cvtss2siq_round */
    case 4173:  /* sse_cvtss2si_round */
    case 3999:  /* avx512fp16_vcvtsh2siq_round */
    case 3997:  /* avx512fp16_vcvtsh2usiq_round */
    case 3995:  /* avx512fp16_vcvtsh2si_round */
    case 3993:  /* avx512fp16_vcvtsh2usi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4457:  /* *sse2_cvtpd2ps_mask_1 */
    case 4336:  /* *floatunsv2div2sf2_mask_1 */
    case 4335:  /* *floatv2div2sf2_mask_1 */
    case 4140:  /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */
    case 4137:  /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */
    case 4136:  /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */
    case 3991:  /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */
    case 3990:  /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */
    case 3985:  /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */
    case 3984:  /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */
    case 3983:  /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */
    case 3982:  /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9386:  /* avx512f_cvtneps2bf16_v4sf_mask_1 */
    case 4456:  /* *sse2_cvtpd2ps_mask */
    case 4334:  /* *floatunsv2div2sf2_mask */
    case 4333:  /* *floatv2div2sf2_mask */
    case 4139:  /* *avx512fp16_vcvtpd2ph_v2df_mask */
    case 4135:  /* *avx512fp16_vcvtps2ph_v4sf_mask */
    case 4134:  /* *avx512fp16_vcvtpd2ph_v4df_mask */
    case 3989:  /* *avx512fp16_vcvtuqq2ph_v2di_mask */
    case 3988:  /* *avx512fp16_vcvtqq2ph_v2di_mask */
    case 3981:  /* *avx512fp16_vcvtuqq2ph_v4di_mask */
    case 3980:  /* *avx512fp16_vcvtqq2ph_v4di_mask */
    case 3979:  /* *avx512fp16_vcvtudq2ph_v4si_mask */
    case 3978:  /* *avx512fp16_vcvtdq2ph_v4si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8679:  /* avx512f_vcvtph2ps512_mask_round */
    case 8028:  /* avx512er_rsqrt28v8df_mask_round */
    case 8024:  /* avx512er_rsqrt28v16sf_mask_round */
    case 8012:  /* avx512er_rcp28v8df_mask_round */
    case 8008:  /* avx512er_rcp28v16sf_mask_round */
    case 8004:  /* avx512er_exp2v8df_mask_round */
    case 8000:  /* avx512er_exp2v16sf_mask_round */
    case 6115:  /* avx512vl_getexpv2df_mask_round */
    case 6111:  /* avx512vl_getexpv4df_mask_round */
    case 6107:  /* avx512f_getexpv8df_mask_round */
    case 6103:  /* avx512vl_getexpv4sf_mask_round */
    case 6099:  /* avx512vl_getexpv8sf_mask_round */
    case 6095:  /* avx512f_getexpv16sf_mask_round */
    case 6091:  /* avx512fp16_getexpv8hf_mask_round */
    case 6087:  /* avx512vl_getexpv16hf_mask_round */
    case 6083:  /* avx512bw_getexpv32hf_mask_round */
    case 4410:  /* fixuns_notruncv8dfv8di2_mask_round */
    case 4402:  /* fix_notruncv8dfv8di2_mask_round */
    case 4364:  /* fixuns_notruncv4dfv4si2_mask_round */
    case 4360:  /* fixuns_notruncv8dfv8si2_mask_round */
    case 4350:  /* avx512f_cvtpd2dq512_mask_round */
    case 4240:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 4232:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 4228:  /* avx512vl_fixuns_notruncv4sfv4si_mask_round */
    case 4224:  /* avx512vl_fixuns_notruncv8sfv8si_mask_round */
    case 4220:  /* avx512f_fixuns_notruncv16sfv16si_mask_round */
    case 4216:  /* avx512f_fix_notruncv16sfv16si_mask_round */
    case 3925:  /* avx512fp16_vcvtph2qq_v2di_mask_round */
    case 3921:  /* avx512fp16_vcvtph2uqq_v2di_mask_round */
    case 3917:  /* avx512fp16_vcvtph2dq_v4si_mask_round */
    case 3913:  /* avx512fp16_vcvtph2udq_v4si_mask_round */
    case 3909:  /* avx512fp16_vcvtph2w_v8hi_mask_round */
    case 3905:  /* avx512fp16_vcvtph2uw_v8hi_mask_round */
    case 3901:  /* avx512fp16_vcvtph2qq_v4di_mask_round */
    case 3897:  /* avx512fp16_vcvtph2uqq_v4di_mask_round */
    case 3893:  /* avx512fp16_vcvtph2dq_v8si_mask_round */
    case 3889:  /* avx512fp16_vcvtph2udq_v8si_mask_round */
    case 3885:  /* avx512fp16_vcvtph2w_v16hi_mask_round */
    case 3881:  /* avx512fp16_vcvtph2uw_v16hi_mask_round */
    case 3877:  /* avx512fp16_vcvtph2qq_v8di_mask_round */
    case 3873:  /* avx512fp16_vcvtph2uqq_v8di_mask_round */
    case 3869:  /* avx512fp16_vcvtph2dq_v16si_mask_round */
    case 3865:  /* avx512fp16_vcvtph2udq_v16si_mask_round */
    case 3861:  /* avx512fp16_vcvtph2w_v32hi_mask_round */
    case 3857:  /* avx512fp16_vcvtph2uw_v32hi_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8677:  /* *avx512f_vcvtph2ps512_round */
    case 8026:  /* *avx512er_rsqrt28v8df_round */
    case 8022:  /* *avx512er_rsqrt28v16sf_round */
    case 8010:  /* *avx512er_rcp28v8df_round */
    case 8006:  /* *avx512er_rcp28v16sf_round */
    case 8002:  /* avx512er_exp2v8df_round */
    case 7998:  /* avx512er_exp2v16sf_round */
    case 6113:  /* avx512vl_getexpv2df_round */
    case 6109:  /* avx512vl_getexpv4df_round */
    case 6105:  /* avx512f_getexpv8df_round */
    case 6101:  /* avx512vl_getexpv4sf_round */
    case 6097:  /* avx512vl_getexpv8sf_round */
    case 6093:  /* avx512f_getexpv16sf_round */
    case 6089:  /* avx512fp16_getexpv8hf_round */
    case 6085:  /* avx512vl_getexpv16hf_round */
    case 6081:  /* avx512bw_getexpv32hf_round */
    case 4408:  /* fixuns_notruncv8dfv8di2_round */
    case 4400:  /* fix_notruncv8dfv8di2_round */
    case 4362:  /* fixuns_notruncv4dfv4si2_round */
    case 4358:  /* fixuns_notruncv8dfv8si2_round */
    case 4348:  /* avx512f_cvtpd2dq512_round */
    case 4238:  /* *avx512dq_cvtps2uqqv8di_round */
    case 4230:  /* *avx512dq_cvtps2qqv8di_round */
    case 4226:  /* *avx512vl_fixuns_notruncv4sfv4si_round */
    case 4222:  /* *avx512vl_fixuns_notruncv8sfv8si_round */
    case 4218:  /* *avx512f_fixuns_notruncv16sfv16si_round */
    case 4214:  /* avx512f_fix_notruncv16sfv16si_round */
    case 3923:  /* avx512fp16_vcvtph2qq_v2di_round */
    case 3919:  /* avx512fp16_vcvtph2uqq_v2di_round */
    case 3915:  /* avx512fp16_vcvtph2dq_v4si_round */
    case 3911:  /* avx512fp16_vcvtph2udq_v4si_round */
    case 3907:  /* avx512fp16_vcvtph2w_v8hi_round */
    case 3903:  /* avx512fp16_vcvtph2uw_v8hi_round */
    case 3899:  /* avx512fp16_vcvtph2qq_v4di_round */
    case 3895:  /* avx512fp16_vcvtph2uqq_v4di_round */
    case 3891:  /* avx512fp16_vcvtph2dq_v8si_round */
    case 3887:  /* avx512fp16_vcvtph2udq_v8si_round */
    case 3883:  /* avx512fp16_vcvtph2w_v16hi_round */
    case 3879:  /* avx512fp16_vcvtph2uw_v16hi_round */
    case 3875:  /* avx512fp16_vcvtph2qq_v8di_round */
    case 3871:  /* avx512fp16_vcvtph2uqq_v8di_round */
    case 3867:  /* avx512fp16_vcvtph2dq_v16si_round */
    case 3863:  /* avx512fp16_vcvtph2udq_v16si_round */
    case 3859:  /* avx512fp16_vcvtph2w_v32hi_round */
    case 3855:  /* avx512fp16_vcvtph2uw_v32hi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3853:  /* avx512fp16_fcmulcsh_v8hf_mask_round */
    case 3849:  /* avx512fp16_fmulcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3852:  /* avx512fp16_fcmulcsh_v8hf_mask */
    case 3848:  /* avx512fp16_fmulcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6126:  /* avx512f_sgetexpv2df_round */
    case 6122:  /* avx512f_sgetexpv4sf_round */
    case 6118:  /* avx512f_sgetexpv8hf_round */
    case 4679:  /* avx512f_vmscalefv2df_round */
    case 4675:  /* avx512f_vmscalefv4sf_round */
    case 4671:  /* avx512f_vmscalefv8hf_round */
    case 3851:  /* avx512fp16_fcmulcsh_v8hf_round */
    case 3847:  /* avx512fp16_fmulcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6124:  /* avx512f_sgetexpv2df */
    case 6120:  /* avx512f_sgetexpv4sf */
    case 6116:  /* avx512f_sgetexpv8hf */
    case 4678:  /* avx512f_vmscalefv2df */
    case 4674:  /* avx512f_vmscalefv4sf */
    case 4670:  /* avx512f_vmscalefv8hf */
    case 3850:  /* avx512fp16_fcmulcsh_v8hf */
    case 3846:  /* avx512fp16_fmulcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3845:  /* avx512fp16_fcmaddcsh_v8hf_mask_round */
    case 3843:  /* avx512fp16_fmaddcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3844:  /* avx512fp16_fcmaddcsh_v8hf_mask */
    case 3842:  /* avx512fp16_fmaddcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3841:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */
    case 3837:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3840:  /* avx512fp16_fma_fcmaddcsh_v8hf_round */
    case 3836:  /* avx512fp16_fma_fmaddcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3839:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz */
    case 3835:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3838:  /* avx512fp16_fma_fcmaddcsh_v8hf */
    case 3834:  /* avx512fp16_fma_fmaddcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3825:  /* avx512bw_fcmulc_v32hf_mask_round */
    case 3821:  /* avx512bw_fmulc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3833:  /* avx512fp16_fcmulc_v8hf_mask */
    case 3831:  /* avx512fp16_fmulc_v8hf_mask */
    case 3829:  /* avx512vl_fcmulc_v16hf_mask */
    case 3827:  /* avx512vl_fmulc_v16hf_mask */
    case 3823:  /* avx512bw_fcmulc_v32hf_mask */
    case 3819:  /* avx512bw_fmulc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3813:  /* avx512bw_fcmaddc_v32hf_mask_round */
    case 3811:  /* avx512bw_fmaddc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3817:  /* avx512fp16_fcmaddc_v8hf_mask */
    case 3816:  /* avx512fp16_fmaddc_v8hf_mask */
    case 3815:  /* avx512vl_fcmaddc_v16hf_mask */
    case 3814:  /* avx512vl_fmaddc_v16hf_mask */
    case 3812:  /* avx512bw_fcmaddc_v32hf_mask */
    case 3810:  /* avx512bw_fmaddc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3809:  /* fma_v8hf_fcmaddc_bcst */
    case 3808:  /* fma_v16hf_fcmaddc_bcst */
    case 3807:  /* fma_v32hf_fcmaddc_bcst */
    case 3806:  /* fma_v8hf_fmaddc_bcst */
    case 3805:  /* fma_v16hf_fmaddc_bcst */
    case 3804:  /* fma_v32hf_fmaddc_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3777:  /* fma_fcmaddc_v32hf_maskz_1_round */
    case 3773:  /* fma_fmaddc_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3785:  /* fma_fcmaddc_v8hf_maskz_1 */
    case 3783:  /* fma_fmaddc_v8hf_maskz_1 */
    case 3781:  /* fma_fcmaddc_v16hf_maskz_1 */
    case 3779:  /* fma_fmaddc_v16hf_maskz_1 */
    case 3776:  /* fma_fcmaddc_v32hf_maskz_1 */
    case 3772:  /* fma_fmaddc_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3769:  /* *fma4i_vmfnmsub_v2df */
    case 3768:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3765:  /* *fma4i_vmfmsub_v2df */
    case 3764:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3763:  /* *fma4i_vmfmadd_v2df */
    case 3762:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3761:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 3759:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
    case 3757:  /* *avx512f_vmfnmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3760:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 3758:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
    case 3756:  /* *avx512f_vmfnmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3755:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 3753:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
    case 3751:  /* *avx512f_vmfnmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3754:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 3752:  /* *avx512f_vmfnmsub_v4sf_mask3 */
    case 3750:  /* *avx512f_vmfnmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3749:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 3747:  /* *avx512f_vmfnmsub_v4sf_mask_round */
    case 3745:  /* *avx512f_vmfnmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3748:  /* *avx512f_vmfnmsub_v2df_mask */
    case 3746:  /* *avx512f_vmfnmsub_v4sf_mask */
    case 3744:  /* *avx512f_vmfnmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3743:  /* avx512f_vmfnmadd_v2df_maskz_1_round */
    case 3741:  /* avx512f_vmfnmadd_v4sf_maskz_1_round */
    case 3739:  /* avx512f_vmfnmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3742:  /* avx512f_vmfnmadd_v2df_maskz_1 */
    case 3740:  /* avx512f_vmfnmadd_v4sf_maskz_1 */
    case 3738:  /* avx512f_vmfnmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3737:  /* avx512f_vmfnmadd_v2df_mask3_round */
    case 3735:  /* avx512f_vmfnmadd_v4sf_mask3_round */
    case 3733:  /* avx512f_vmfnmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3736:  /* avx512f_vmfnmadd_v2df_mask3 */
    case 3734:  /* avx512f_vmfnmadd_v4sf_mask3 */
    case 3732:  /* avx512f_vmfnmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3731:  /* avx512f_vmfnmadd_v2df_mask_round */
    case 3729:  /* avx512f_vmfnmadd_v4sf_mask_round */
    case 3727:  /* avx512f_vmfnmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3730:  /* avx512f_vmfnmadd_v2df_mask */
    case 3728:  /* avx512f_vmfnmadd_v4sf_mask */
    case 3726:  /* avx512f_vmfnmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3725:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 3723:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
    case 3721:  /* *avx512f_vmfmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3724:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 3722:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
    case 3720:  /* *avx512f_vmfmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3719:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 3717:  /* avx512f_vmfmsub_v4sf_mask3_round */
    case 3715:  /* avx512f_vmfmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3718:  /* avx512f_vmfmsub_v2df_mask3 */
    case 3716:  /* avx512f_vmfmsub_v4sf_mask3 */
    case 3714:  /* avx512f_vmfmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3713:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 3711:  /* *avx512f_vmfmsub_v4sf_mask_round */
    case 3709:  /* *avx512f_vmfmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3712:  /* *avx512f_vmfmsub_v2df_mask */
    case 3710:  /* *avx512f_vmfmsub_v4sf_mask */
    case 3708:  /* *avx512f_vmfmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3707:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 3705:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
    case 3703:  /* avx512f_vmfmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3706:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 3704:  /* avx512f_vmfmadd_v4sf_maskz_1 */
    case 3702:  /* avx512f_vmfmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3701:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 3699:  /* avx512f_vmfmadd_v4sf_mask3_round */
    case 3697:  /* avx512f_vmfmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3700:  /* avx512f_vmfmadd_v2df_mask3 */
    case 3698:  /* avx512f_vmfmadd_v4sf_mask3 */
    case 3696:  /* avx512f_vmfmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3695:  /* avx512f_vmfmadd_v2df_mask_round */
    case 3693:  /* avx512f_vmfmadd_v4sf_mask_round */
    case 3691:  /* avx512f_vmfmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3694:  /* avx512f_vmfmadd_v2df_mask */
    case 3692:  /* avx512f_vmfmadd_v4sf_mask */
    case 3690:  /* avx512f_vmfmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3689:  /* *fmai_fnmsub_v2df_round */
    case 3687:  /* *fmai_fnmsub_v4sf_round */
    case 3685:  /* *fmai_fnmsub_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3688:  /* *fmai_fnmsub_v2df */
    case 3686:  /* *fmai_fnmsub_v4sf */
    case 3684:  /* *fmai_fnmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3683:  /* *fmai_fnmadd_v2df_round */
    case 3681:  /* *fmai_fnmadd_v4sf_round */
    case 3679:  /* *fmai_fnmadd_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3682:  /* *fmai_fnmadd_v2df */
    case 3680:  /* *fmai_fnmadd_v4sf */
    case 3678:  /* *fmai_fnmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3677:  /* *fmai_fmsub_v2df */
    case 3675:  /* *fmai_fmsub_v4sf */
    case 3673:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3676:  /* *fmai_fmsub_v2df */
    case 3674:  /* *fmai_fmsub_v4sf */
    case 3672:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3671:  /* *fmai_fmadd_v2df */
    case 3669:  /* *fmai_fmadd_v4sf */
    case 3667:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3670:  /* *fmai_fmadd_v2df */
    case 3668:  /* *fmai_fmadd_v4sf */
    case 3666:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3665:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 3663:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 3661:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 3659:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 3657:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 3655:  /* avx512f_fmsubadd_v16sf_mask3_round */
    case 3653:  /* avx512fp16_fmsubadd_v8hf_mask3_round */
    case 3651:  /* avx512vl_fmsubadd_v16hf_mask3_round */
    case 3649:  /* avx512bw_fmsubadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3664:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 3662:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 3660:  /* avx512f_fmsubadd_v8df_mask3 */
    case 3658:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 3656:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 3654:  /* avx512f_fmsubadd_v16sf_mask3 */
    case 3652:  /* avx512fp16_fmsubadd_v8hf_mask3 */
    case 3650:  /* avx512vl_fmsubadd_v16hf_mask3 */
    case 3648:  /* avx512bw_fmsubadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3647:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 3645:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 3643:  /* avx512f_fmsubadd_v8df_mask_round */
    case 3641:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 3639:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 3637:  /* avx512f_fmsubadd_v16sf_mask_round */
    case 3635:  /* avx512fp16_fmsubadd_v8hf_mask_round */
    case 3633:  /* avx512vl_fmsubadd_v16hf_mask_round */
    case 3631:  /* avx512bw_fmsubadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3646:  /* avx512vl_fmsubadd_v2df_mask */
    case 3644:  /* avx512vl_fmsubadd_v4df_mask */
    case 3642:  /* avx512f_fmsubadd_v8df_mask */
    case 3640:  /* avx512vl_fmsubadd_v4sf_mask */
    case 3638:  /* avx512vl_fmsubadd_v8sf_mask */
    case 3636:  /* avx512f_fmsubadd_v16sf_mask */
    case 3634:  /* avx512fp16_fmsubadd_v8hf_mask */
    case 3632:  /* avx512vl_fmsubadd_v16hf_mask */
    case 3630:  /* avx512bw_fmsubadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3625:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 3617:  /* fma_fmsubadd_v16sf_maskz_1_round */
    case 3609:  /* fma_fmsubadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3624:  /* *fma_fmsubadd_v8df_round */
    case 3616:  /* *fma_fmsubadd_v16sf_round */
    case 3608:  /* *fma_fmsubadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3629:  /* fma_fmsubadd_v2df_maskz_1 */
    case 3627:  /* fma_fmsubadd_v4df_maskz_1 */
    case 3623:  /* fma_fmsubadd_v8df_maskz_1 */
    case 3621:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 3619:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 3615:  /* fma_fmsubadd_v16sf_maskz_1 */
    case 3613:  /* fma_fmsubadd_v8hf_maskz_1 */
    case 3611:  /* fma_fmsubadd_v16hf_maskz_1 */
    case 3607:  /* fma_fmsubadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3628:  /* *fma_fmsubadd_v2df */
    case 3626:  /* *fma_fmsubadd_v4df */
    case 3622:  /* *fma_fmsubadd_v8df */
    case 3620:  /* *fma_fmsubadd_v4sf */
    case 3618:  /* *fma_fmsubadd_v8sf */
    case 3614:  /* *fma_fmsubadd_v16sf */
    case 3612:  /* *fma_fmsubadd_v8hf */
    case 3610:  /* *fma_fmsubadd_v16hf */
    case 3606:  /* *fma_fmsubadd_v32hf */
    case 3605:  /* *fma_fmsubadd_v2df */
    case 3604:  /* *fma_fmsubadd_v4df */
    case 3603:  /* *fma_fmsubadd_v4sf */
    case 3602:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 3601:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 3599:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 3597:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 3595:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 3593:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 3591:  /* avx512f_fmaddsub_v16sf_mask3_round */
    case 3589:  /* avx512fp16_fmaddsub_v8hf_mask3_round */
    case 3587:  /* avx512vl_fmaddsub_v16hf_mask3_round */
    case 3585:  /* avx512bw_fmaddsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3600:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 3598:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 3596:  /* avx512f_fmaddsub_v8df_mask3 */
    case 3594:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 3592:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 3590:  /* avx512f_fmaddsub_v16sf_mask3 */
    case 3588:  /* avx512fp16_fmaddsub_v8hf_mask3 */
    case 3586:  /* avx512vl_fmaddsub_v16hf_mask3 */
    case 3584:  /* avx512bw_fmaddsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3583:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 3581:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 3579:  /* avx512f_fmaddsub_v8df_mask_round */
    case 3577:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 3575:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 3573:  /* avx512f_fmaddsub_v16sf_mask_round */
    case 3571:  /* avx512fp16_fmaddsub_v8hf_mask_round */
    case 3569:  /* avx512vl_fmaddsub_v16hf_mask_round */
    case 3567:  /* avx512bw_fmaddsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9400:  /* avx512f_dpbf16ps_v4sf_mask */
    case 9399:  /* avx512f_dpbf16ps_v8sf_mask */
    case 9398:  /* avx512f_dpbf16ps_v16sf_mask */
    case 9346:  /* vpdpwssds_v4si_mask */
    case 9345:  /* vpdpwssds_v8si_mask */
    case 9344:  /* vpdpwssds_v16si_mask */
    case 9337:  /* vpdpwssd_v4si_mask */
    case 9336:  /* vpdpwssd_v8si_mask */
    case 9335:  /* vpdpwssd_v16si_mask */
    case 9328:  /* vpdpbusds_v4si_mask */
    case 9327:  /* vpdpbusds_v8si_mask */
    case 9326:  /* vpdpbusds_v16si_mask */
    case 9319:  /* vpdpbusd_v4si_mask */
    case 9318:  /* vpdpbusd_v8si_mask */
    case 9317:  /* vpdpbusd_v16si_mask */
    case 9304:  /* vpshldv_v2di_mask */
    case 9303:  /* vpshldv_v4si_mask */
    case 9302:  /* vpshldv_v8hi_mask */
    case 9301:  /* vpshldv_v4di_mask */
    case 9300:  /* vpshldv_v8si_mask */
    case 9299:  /* vpshldv_v16hi_mask */
    case 9298:  /* vpshldv_v8di_mask */
    case 9297:  /* vpshldv_v16si_mask */
    case 9296:  /* vpshldv_v32hi_mask */
    case 9277:  /* vpshrdv_v2di_mask */
    case 9276:  /* vpshrdv_v4si_mask */
    case 9275:  /* vpshrdv_v8hi_mask */
    case 9274:  /* vpshrdv_v4di_mask */
    case 9273:  /* vpshrdv_v8si_mask */
    case 9272:  /* vpshrdv_v16hi_mask */
    case 9271:  /* vpshrdv_v8di_mask */
    case 9270:  /* vpshrdv_v16si_mask */
    case 9269:  /* vpshrdv_v32hi_mask */
    case 9147:  /* vpmadd52huqv2di_mask */
    case 9146:  /* vpmadd52luqv2di_mask */
    case 9145:  /* vpmadd52huqv4di_mask */
    case 9144:  /* vpmadd52luqv4di_mask */
    case 9143:  /* vpmadd52huqv8di_mask */
    case 9142:  /* vpmadd52luqv8di_mask */
    case 3582:  /* avx512vl_fmaddsub_v2df_mask */
    case 3580:  /* avx512vl_fmaddsub_v4df_mask */
    case 3578:  /* avx512f_fmaddsub_v8df_mask */
    case 3576:  /* avx512vl_fmaddsub_v4sf_mask */
    case 3574:  /* avx512vl_fmaddsub_v8sf_mask */
    case 3572:  /* avx512f_fmaddsub_v16sf_mask */
    case 3570:  /* avx512fp16_fmaddsub_v8hf_mask */
    case 3568:  /* avx512vl_fmaddsub_v16hf_mask */
    case 3566:  /* avx512bw_fmaddsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8992:  /* avx512dq_rangepv8df_mask_round */
    case 8984:  /* avx512dq_rangepv16sf_mask_round */
    case 3561:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 3553:  /* fma_fmaddsub_v16sf_maskz_1_round */
    case 3545:  /* fma_fmaddsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 9397:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 9395:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 9393:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 9349:  /* vpdpwssds_v4si_maskz_1 */
    case 9348:  /* vpdpwssds_v8si_maskz_1 */
    case 9347:  /* vpdpwssds_v16si_maskz_1 */
    case 9340:  /* vpdpwssd_v4si_maskz_1 */
    case 9339:  /* vpdpwssd_v8si_maskz_1 */
    case 9338:  /* vpdpwssd_v16si_maskz_1 */
    case 9331:  /* vpdpbusds_v4si_maskz_1 */
    case 9330:  /* vpdpbusds_v8si_maskz_1 */
    case 9329:  /* vpdpbusds_v16si_maskz_1 */
    case 9322:  /* vpdpbusd_v4si_maskz_1 */
    case 9321:  /* vpdpbusd_v8si_maskz_1 */
    case 9320:  /* vpdpbusd_v16si_maskz_1 */
    case 9313:  /* vpshldv_v2di_maskz_1 */
    case 9312:  /* vpshldv_v4si_maskz_1 */
    case 9311:  /* vpshldv_v8hi_maskz_1 */
    case 9310:  /* vpshldv_v4di_maskz_1 */
    case 9309:  /* vpshldv_v8si_maskz_1 */
    case 9308:  /* vpshldv_v16hi_maskz_1 */
    case 9307:  /* vpshldv_v8di_maskz_1 */
    case 9306:  /* vpshldv_v16si_maskz_1 */
    case 9305:  /* vpshldv_v32hi_maskz_1 */
    case 9286:  /* vpshrdv_v2di_maskz_1 */
    case 9285:  /* vpshrdv_v4si_maskz_1 */
    case 9284:  /* vpshrdv_v8hi_maskz_1 */
    case 9283:  /* vpshrdv_v4di_maskz_1 */
    case 9282:  /* vpshrdv_v8si_maskz_1 */
    case 9281:  /* vpshrdv_v16hi_maskz_1 */
    case 9280:  /* vpshrdv_v8di_maskz_1 */
    case 9279:  /* vpshrdv_v16si_maskz_1 */
    case 9278:  /* vpshrdv_v32hi_maskz_1 */
    case 9259:  /* vpshld_v2di_mask */
    case 9257:  /* vpshld_v4si_mask */
    case 9255:  /* vpshld_v8hi_mask */
    case 9253:  /* vpshld_v4di_mask */
    case 9251:  /* vpshld_v8si_mask */
    case 9249:  /* vpshld_v16hi_mask */
    case 9247:  /* vpshld_v8di_mask */
    case 9245:  /* vpshld_v16si_mask */
    case 9243:  /* vpshld_v32hi_mask */
    case 9241:  /* vpshrd_v2di_mask */
    case 9239:  /* vpshrd_v4si_mask */
    case 9237:  /* vpshrd_v8hi_mask */
    case 9235:  /* vpshrd_v4di_mask */
    case 9233:  /* vpshrd_v8si_mask */
    case 9231:  /* vpshrd_v16hi_mask */
    case 9229:  /* vpshrd_v8di_mask */
    case 9227:  /* vpshrd_v16si_mask */
    case 9225:  /* vpshrd_v32hi_mask */
    case 9217:  /* vgf2p8affineqb_v16qi_mask */
    case 9215:  /* vgf2p8affineqb_v32qi_mask */
    case 9213:  /* vgf2p8affineqb_v64qi_mask */
    case 9211:  /* vgf2p8affineinvqb_v16qi_mask */
    case 9209:  /* vgf2p8affineinvqb_v32qi_mask */
    case 9207:  /* vgf2p8affineinvqb_v64qi_mask */
    case 9173:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 9170:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 9167:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 9164:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 9161:  /* avx5124fmaddps_4fmaddss_maskz */
    case 9158:  /* avx5124fmaddps_4fmaddps_maskz */
    case 9141:  /* vpmadd52huqv2di_maskz_1 */
    case 9140:  /* vpmadd52luqv2di_maskz_1 */
    case 9139:  /* vpmadd52huqv4di_maskz_1 */
    case 9138:  /* vpmadd52luqv4di_maskz_1 */
    case 9137:  /* vpmadd52huqv8di_maskz_1 */
    case 9136:  /* vpmadd52luqv8di_maskz_1 */
    case 9082:  /* avx512bw_dbpsadbwv32hi_mask */
    case 9080:  /* avx512bw_dbpsadbwv16hi_mask */
    case 9078:  /* avx512bw_dbpsadbwv8hi_mask */
    case 8996:  /* avx512dq_rangepv2df_mask */
    case 8994:  /* avx512dq_rangepv4df_mask */
    case 8991:  /* avx512dq_rangepv8df_mask */
    case 8988:  /* avx512dq_rangepv4sf_mask */
    case 8986:  /* avx512dq_rangepv8sf_mask */
    case 8983:  /* avx512dq_rangepv16sf_mask */
    case 8479:  /* avx512vl_vpermt2varv8bf3_maskz_1 */
    case 8477:  /* avx512vl_vpermt2varv16bf3_maskz_1 */
    case 8475:  /* avx512bw_vpermt2varv32bf3_maskz_1 */
    case 8473:  /* avx512fp16_vpermt2varv8hf3_maskz_1 */
    case 8471:  /* avx512vl_vpermt2varv16hf3_maskz_1 */
    case 8469:  /* avx512bw_vpermt2varv32hf3_maskz_1 */
    case 8467:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 8465:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 8463:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 8461:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 8459:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 8457:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 8455:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 8453:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 8451:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 8449:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 8447:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 8445:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 8443:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 8441:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 8439:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 8437:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 8435:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 8433:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 7660:  /* ssse3_palignrv16qi_mask */
    case 7659:  /* avx2_palignrv32qi_mask */
    case 7658:  /* avx512bw_palignrv64qi_mask */
    case 6139:  /* avx512vl_alignv2di_mask */
    case 6137:  /* avx512vl_alignv4di_mask */
    case 6135:  /* avx512f_alignv8di_mask */
    case 6133:  /* avx512vl_alignv4si_mask */
    case 6131:  /* avx512vl_alignv8si_mask */
    case 6129:  /* avx512f_alignv16si_mask */
    case 3565:  /* fma_fmaddsub_v2df_maskz_1 */
    case 3563:  /* fma_fmaddsub_v4df_maskz_1 */
    case 3559:  /* fma_fmaddsub_v8df_maskz_1 */
    case 3557:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 3555:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 3551:  /* fma_fmaddsub_v16sf_maskz_1 */
    case 3549:  /* fma_fmaddsub_v8hf_maskz_1 */
    case 3547:  /* fma_fmaddsub_v16hf_maskz_1 */
    case 3543:  /* fma_fmaddsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3537:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 3535:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 3533:  /* avx512f_fnmsub_v8df_mask3_round */
    case 3531:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 3529:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 3527:  /* avx512f_fnmsub_v16sf_mask3_round */
    case 3525:  /* avx512fp16_fnmsub_v8hf_mask3_round */
    case 3523:  /* avx512vl_fnmsub_v16hf_mask3_round */
    case 3521:  /* avx512bw_fnmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3536:  /* avx512vl_fnmsub_v2df_mask3 */
    case 3534:  /* avx512vl_fnmsub_v4df_mask3 */
    case 3532:  /* avx512f_fnmsub_v8df_mask3 */
    case 3530:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 3528:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 3526:  /* avx512f_fnmsub_v16sf_mask3 */
    case 3524:  /* avx512fp16_fnmsub_v8hf_mask3 */
    case 3522:  /* avx512vl_fnmsub_v16hf_mask3 */
    case 3520:  /* avx512bw_fnmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3517:  /* avx512f_fnmsub_v8df_mask_round */
    case 3513:  /* avx512f_fnmsub_v16sf_mask_round */
    case 3509:  /* avx512bw_fnmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3519:  /* avx512vl_fnmsub_v2df_mask */
    case 3518:  /* avx512vl_fnmsub_v4df_mask */
    case 3516:  /* avx512f_fnmsub_v8df_mask */
    case 3515:  /* avx512vl_fnmsub_v4sf_mask */
    case 3514:  /* avx512vl_fnmsub_v8sf_mask */
    case 3512:  /* avx512f_fnmsub_v16sf_mask */
    case 3511:  /* avx512fp16_fnmsub_v8hf_mask */
    case 3510:  /* avx512vl_fnmsub_v16hf_mask */
    case 3508:  /* avx512bw_fnmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3503:  /* fma_fnmsub_v8df_maskz_1_round */
    case 3494:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 3484:  /* fma_fnmsub_v32hf_maskz_1_round */
    case 3480:  /* *fma_fnmsub_v4df */
    case 3476:  /* *fma_fnmsub_v8sf */
    case 3472:  /* *fma_fnmsub_v2df */
    case 3468:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3507:  /* fma_fnmsub_v2df_maskz_1 */
    case 3505:  /* fma_fnmsub_v4df_maskz_1 */
    case 3501:  /* fma_fnmsub_v8df_maskz_1 */
    case 3498:  /* fma_fnmsub_v4sf_maskz_1 */
    case 3496:  /* fma_fnmsub_v8sf_maskz_1 */
    case 3492:  /* fma_fnmsub_v16sf_maskz_1 */
    case 3488:  /* fma_fnmsub_v8hf_maskz_1 */
    case 3486:  /* fma_fnmsub_v16hf_maskz_1 */
    case 3482:  /* fma_fnmsub_v32hf_maskz_1 */
    case 3478:  /* *fma_fnmsub_v4df */
    case 3474:  /* *fma_fnmsub_v8sf */
    case 3470:  /* *fma_fnmsub_v2df */
    case 3466:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3502:  /* *fma_fnmsub_v8df_round */
    case 3493:  /* *fma_fnmsub_v16sf_round */
    case 3483:  /* *fma_fnmsub_v32hf_round */
    case 3479:  /* *fma_fnmsub_v4df */
    case 3475:  /* *fma_fnmsub_v8sf */
    case 3471:  /* *fma_fnmsub_v2df */
    case 3467:  /* *fma_fnmsub_v4sf */
    case 3464:  /* *fma_fnmsub_df */
    case 3462:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3506:  /* *fma_fnmsub_v2df */
    case 3504:  /* *fma_fnmsub_v4df */
    case 3500:  /* *fma_fnmsub_v8df */
    case 3499:  /* *fma_fnmsub_df */
    case 3497:  /* *fma_fnmsub_v4sf */
    case 3495:  /* *fma_fnmsub_v8sf */
    case 3491:  /* *fma_fnmsub_v16sf */
    case 3490:  /* *fma_fnmsub_sf */
    case 3489:  /* *fma_fnmsub_hf */
    case 3487:  /* *fma_fnmsub_v8hf */
    case 3485:  /* *fma_fnmsub_v16hf */
    case 3481:  /* *fma_fnmsub_v32hf */
    case 3477:  /* *fma_fnmsub_v4df */
    case 3473:  /* *fma_fnmsub_v8sf */
    case 3469:  /* *fma_fnmsub_v2df */
    case 3465:  /* *fma_fnmsub_v4sf */
    case 3463:  /* *fma_fnmsub_df */
    case 3461:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 3458:  /* avx512f_fnmadd_v8df_mask3_round */
    case 3454:  /* avx512f_fnmadd_v16sf_mask3_round */
    case 3450:  /* avx512bw_fnmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3460:  /* avx512vl_fnmadd_v2df_mask3 */
    case 3459:  /* avx512vl_fnmadd_v4df_mask3 */
    case 3457:  /* avx512f_fnmadd_v8df_mask3 */
    case 3456:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 3455:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 3453:  /* avx512f_fnmadd_v16sf_mask3 */
    case 3452:  /* avx512fp16_fnmadd_v8hf_mask3 */
    case 3451:  /* avx512vl_fnmadd_v16hf_mask3 */
    case 3449:  /* avx512bw_fnmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3446:  /* avx512f_fnmadd_v8df_mask_round */
    case 3442:  /* avx512f_fnmadd_v16sf_mask_round */
    case 3438:  /* avx512bw_fnmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3448:  /* avx512vl_fnmadd_v2df_mask */
    case 3447:  /* avx512vl_fnmadd_v4df_mask */
    case 3445:  /* avx512f_fnmadd_v8df_mask */
    case 3444:  /* avx512vl_fnmadd_v4sf_mask */
    case 3443:  /* avx512vl_fnmadd_v8sf_mask */
    case 3441:  /* avx512f_fnmadd_v16sf_mask */
    case 3440:  /* avx512fp16_fnmadd_v8hf_mask */
    case 3439:  /* avx512vl_fnmadd_v16hf_mask */
    case 3437:  /* avx512bw_fnmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3432:  /* fma_fnmadd_v8df_maskz_1_round */
    case 3423:  /* fma_fnmadd_v16sf_maskz_1_round */
    case 3413:  /* fma_fnmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3436:  /* fma_fnmadd_v2df_maskz_1 */
    case 3434:  /* fma_fnmadd_v4df_maskz_1 */
    case 3430:  /* fma_fnmadd_v8df_maskz_1 */
    case 3427:  /* fma_fnmadd_v4sf_maskz_1 */
    case 3425:  /* fma_fnmadd_v8sf_maskz_1 */
    case 3421:  /* fma_fnmadd_v16sf_maskz_1 */
    case 3417:  /* fma_fnmadd_v8hf_maskz_1 */
    case 3415:  /* fma_fnmadd_v16hf_maskz_1 */
    case 3411:  /* fma_fnmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3401:  /* avx512f_fmsub_v8df_mask3_round */
    case 3397:  /* avx512f_fmsub_v16sf_mask3_round */
    case 3393:  /* avx512bw_fmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3403:  /* avx512vl_fmsub_v2df_mask3 */
    case 3402:  /* avx512vl_fmsub_v4df_mask3 */
    case 3400:  /* avx512f_fmsub_v8df_mask3 */
    case 3399:  /* avx512vl_fmsub_v4sf_mask3 */
    case 3398:  /* avx512vl_fmsub_v8sf_mask3 */
    case 3396:  /* avx512f_fmsub_v16sf_mask3 */
    case 3395:  /* avx512fp16_fmsub_v8hf_mask3 */
    case 3394:  /* avx512vl_fmsub_v16hf_mask3 */
    case 3392:  /* avx512bw_fmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3391:  /* avx512vl_fmsub_v2df_mask_round */
    case 3389:  /* avx512vl_fmsub_v4df_mask_round */
    case 3387:  /* avx512f_fmsub_v8df_mask_round */
    case 3385:  /* avx512vl_fmsub_v4sf_mask_round */
    case 3383:  /* avx512vl_fmsub_v8sf_mask_round */
    case 3381:  /* avx512f_fmsub_v16sf_mask_round */
    case 3379:  /* avx512fp16_fmsub_v8hf_mask_round */
    case 3377:  /* avx512vl_fmsub_v16hf_mask_round */
    case 3375:  /* avx512bw_fmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3390:  /* avx512vl_fmsub_v2df_mask */
    case 3388:  /* avx512vl_fmsub_v4df_mask */
    case 3386:  /* avx512f_fmsub_v8df_mask */
    case 3384:  /* avx512vl_fmsub_v4sf_mask */
    case 3382:  /* avx512vl_fmsub_v8sf_mask */
    case 3380:  /* avx512f_fmsub_v16sf_mask */
    case 3378:  /* avx512fp16_fmsub_v8hf_mask */
    case 3376:  /* avx512vl_fmsub_v16hf_mask */
    case 3374:  /* avx512bw_fmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3369:  /* fma_fmsub_v8df_maskz_1_round */
    case 3360:  /* fma_fmsub_v16sf_maskz_1_round */
    case 3350:  /* fma_fmsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3368:  /* *fma_fmsub_v8df_round */
    case 3359:  /* *fma_fmsub_v16sf_round */
    case 3349:  /* *fma_fmsub_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3373:  /* fma_fmsub_v2df_maskz_1 */
    case 3371:  /* fma_fmsub_v4df_maskz_1 */
    case 3367:  /* fma_fmsub_v8df_maskz_1 */
    case 3364:  /* fma_fmsub_v4sf_maskz_1 */
    case 3362:  /* fma_fmsub_v8sf_maskz_1 */
    case 3358:  /* fma_fmsub_v16sf_maskz_1 */
    case 3354:  /* fma_fmsub_v8hf_maskz_1 */
    case 3352:  /* fma_fmsub_v16hf_maskz_1 */
    case 3348:  /* fma_fmsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3372:  /* *fma_fmsub_v2df */
    case 3370:  /* *fma_fmsub_v4df */
    case 3366:  /* *fma_fmsub_v8df */
    case 3365:  /* *fma_fmsub_df */
    case 3363:  /* *fma_fmsub_v4sf */
    case 3361:  /* *fma_fmsub_v8sf */
    case 3357:  /* *fma_fmsub_v16sf */
    case 3356:  /* *fma_fmsub_sf */
    case 3355:  /* *fma_fmsub_hf */
    case 3353:  /* *fma_fmsub_v8hf */
    case 3351:  /* *fma_fmsub_v16hf */
    case 3347:  /* *fma_fmsub_v32hf */
    case 3346:  /* *fma_fmsub_v4df */
    case 3345:  /* *fma_fmsub_v8sf */
    case 3344:  /* *fma_fmsub_v2df */
    case 3343:  /* *fma_fmsub_v4sf */
    case 3342:  /* *fma_fmsub_df */
    case 3341:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 3340:  /* avx512vl_fmadd_v2df_mask3_round */
    case 3338:  /* avx512vl_fmadd_v4df_mask3_round */
    case 3336:  /* avx512f_fmadd_v8df_mask3_round */
    case 3334:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 3332:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 3330:  /* avx512f_fmadd_v16sf_mask3_round */
    case 3328:  /* avx512fp16_fmadd_v8hf_mask3_round */
    case 3326:  /* avx512vl_fmadd_v16hf_mask3_round */
    case 3324:  /* avx512bw_fmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3339:  /* avx512vl_fmadd_v2df_mask3 */
    case 3337:  /* avx512vl_fmadd_v4df_mask3 */
    case 3335:  /* avx512f_fmadd_v8df_mask3 */
    case 3333:  /* avx512vl_fmadd_v4sf_mask3 */
    case 3331:  /* avx512vl_fmadd_v8sf_mask3 */
    case 3329:  /* avx512f_fmadd_v16sf_mask3 */
    case 3327:  /* avx512fp16_fmadd_v8hf_mask3 */
    case 3325:  /* avx512vl_fmadd_v16hf_mask3 */
    case 3323:  /* avx512bw_fmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3320:  /* avx512f_fmadd_v8df_mask_round */
    case 3316:  /* avx512f_fmadd_v16sf_mask_round */
    case 3312:  /* avx512bw_fmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3322:  /* avx512vl_fmadd_v2df_mask */
    case 3321:  /* avx512vl_fmadd_v4df_mask */
    case 3319:  /* avx512f_fmadd_v8df_mask */
    case 3318:  /* avx512vl_fmadd_v4sf_mask */
    case 3317:  /* avx512vl_fmadd_v8sf_mask */
    case 3315:  /* avx512f_fmadd_v16sf_mask */
    case 3314:  /* avx512fp16_fmadd_v8hf_mask */
    case 3313:  /* avx512vl_fmadd_v16hf_mask */
    case 3311:  /* avx512bw_fmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3306:  /* fma_fmadd_v8df_maskz_1_round */
    case 3297:  /* fma_fmadd_v16sf_maskz_1_round */
    case 3287:  /* fma_fmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3305:  /* *fma_fmadd_v8df_round */
    case 3296:  /* *fma_fmadd_v16sf_round */
    case 3286:  /* *fma_fmadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3310:  /* fma_fmadd_v2df_maskz_1 */
    case 3308:  /* fma_fmadd_v4df_maskz_1 */
    case 3304:  /* fma_fmadd_v8df_maskz_1 */
    case 3301:  /* fma_fmadd_v4sf_maskz_1 */
    case 3299:  /* fma_fmadd_v8sf_maskz_1 */
    case 3295:  /* fma_fmadd_v16sf_maskz_1 */
    case 3291:  /* fma_fmadd_v8hf_maskz_1 */
    case 3289:  /* fma_fmadd_v16hf_maskz_1 */
    case 3285:  /* fma_fmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8527:  /* vec_set_hi_v8sf_mask */
    case 8525:  /* vec_set_hi_v8si_mask */
    case 8519:  /* vec_set_hi_v4df_mask */
    case 8517:  /* vec_set_hi_v4di_mask */
    case 7454:  /* vec_set_hi_v8di_mask */
    case 7452:  /* vec_set_hi_v8df_mask */
    case 7446:  /* vec_set_hi_v16si_mask */
    case 7444:  /* vec_set_hi_v16sf_mask */
    case 7045:  /* *andnotv2di3_mask */
    case 7044:  /* *andnotv4di3_mask */
    case 7043:  /* *andnotv8di3_mask */
    case 7042:  /* *andnotv4si3_mask */
    case 7041:  /* *andnotv8si3_mask */
    case 7040:  /* *andnotv16si3_mask */
    case 3202:  /* avx512f_andnotv8df3_mask */
    case 3200:  /* avx512f_andnotv16sf3_mask */
    case 3197:  /* sse2_andnotv2df3_mask */
    case 3195:  /* avx_andnotv4df3_mask */
    case 3193:  /* sse_andnotv4sf3_mask */
    case 3191:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3187:  /* sse2_ucomi_round */
    case 3183:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3186:  /* sse2_ucomi */
    case 3182:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 3185:  /* sse2_comi_round */
    case 3181:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3184:  /* sse2_comi */
    case 3180:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3179:  /* avx512f_vmcmpv2df3_mask_round */
    case 3177:  /* avx512f_vmcmpv4sf3_mask_round */
    case 3175:  /* avx512f_vmcmpv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3178:  /* avx512f_vmcmpv2df3_mask */
    case 3176:  /* avx512f_vmcmpv4sf3_mask */
    case 3174:  /* avx512f_vmcmpv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3173:  /* avx512f_vmcmpv2df3_round */
    case 3171:  /* avx512f_vmcmpv4sf3_round */
    case 3169:  /* avx512f_vmcmpv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3167:  /* *avx512vl_ucmpv8hi3_1 */
    case 3166:  /* *avx512vl_ucmpv8hi3_1 */
    case 3165:  /* *avx512vl_ucmpv16hi3_1 */
    case 3164:  /* *avx512vl_ucmpv16hi3_1 */
    case 3163:  /* *avx512bw_ucmpv32hi3_1 */
    case 3162:  /* *avx512bw_ucmpv32hi3_1 */
    case 3161:  /* *avx512vl_ucmpv32qi3_1 */
    case 3160:  /* *avx512vl_ucmpv32qi3_1 */
    case 3159:  /* *avx512vl_ucmpv16qi3_1 */
    case 3158:  /* *avx512vl_ucmpv16qi3_1 */
    case 3157:  /* *avx512bw_ucmpv64qi3_1 */
    case 3156:  /* *avx512bw_ucmpv64qi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 9370:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 9368:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 9366:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 9022:  /* avx512dq_fpclassv2df_mask */
    case 9020:  /* avx512dq_fpclassv4df_mask */
    case 9018:  /* avx512dq_fpclassv8df_mask */
    case 9016:  /* avx512dq_fpclassv4sf_mask */
    case 9014:  /* avx512dq_fpclassv8sf_mask */
    case 9012:  /* avx512dq_fpclassv16sf_mask */
    case 9010:  /* avx512dq_fpclassv8hf_mask */
    case 9008:  /* avx512dq_fpclassv16hf_mask */
    case 9006:  /* avx512dq_fpclassv32hf_mask */
    case 8680:  /* *vcvtps2ph */
    case 7198:  /* avx512vl_testnmv2di3_mask */
    case 7196:  /* avx512vl_testnmv4di3_mask */
    case 7194:  /* avx512f_testnmv8di3_mask */
    case 7192:  /* avx512vl_testnmv4si3_mask */
    case 7190:  /* avx512vl_testnmv8si3_mask */
    case 7188:  /* avx512f_testnmv16si3_mask */
    case 7186:  /* avx512vl_testnmv8hi3_mask */
    case 7184:  /* avx512vl_testnmv16hi3_mask */
    case 7182:  /* avx512bw_testnmv32hi3_mask */
    case 7180:  /* avx512vl_testnmv16qi3_mask */
    case 7178:  /* avx512vl_testnmv32qi3_mask */
    case 7176:  /* avx512bw_testnmv64qi3_mask */
    case 7174:  /* avx512vl_testmv2di3_mask */
    case 7172:  /* avx512vl_testmv4di3_mask */
    case 7170:  /* avx512f_testmv8di3_mask */
    case 7168:  /* avx512vl_testmv4si3_mask */
    case 7166:  /* avx512vl_testmv8si3_mask */
    case 7164:  /* avx512f_testmv16si3_mask */
    case 7162:  /* avx512vl_testmv8hi3_mask */
    case 7160:  /* avx512vl_testmv16hi3_mask */
    case 7158:  /* avx512bw_testmv32hi3_mask */
    case 7156:  /* avx512vl_testmv16qi3_mask */
    case 7154:  /* avx512vl_testmv32qi3_mask */
    case 7152:  /* avx512bw_testmv64qi3_mask */
    case 3791:  /* fma_v8hf_fadd_fcmul */
    case 3790:  /* fma_v16hf_fadd_fcmul */
    case 3789:  /* fma_v32hf_fadd_fcmul */
    case 3788:  /* fma_v8hf_fadd_fmul */
    case 3787:  /* fma_v16hf_fadd_fmul */
    case 3786:  /* fma_v32hf_fadd_fmul */
    case 3101:  /* *avx512vl_eqv2di3_mask_1 */
    case 3099:  /* *avx512vl_eqv2di3_mask_1 */
    case 3097:  /* *avx512vl_eqv4di3_mask_1 */
    case 3095:  /* *avx512vl_eqv4di3_mask_1 */
    case 3093:  /* *avx512f_eqv8di3_mask_1 */
    case 3091:  /* *avx512f_eqv8di3_mask_1 */
    case 3089:  /* *avx512vl_eqv4si3_mask_1 */
    case 3087:  /* *avx512vl_eqv4si3_mask_1 */
    case 3085:  /* *avx512vl_eqv8si3_mask_1 */
    case 3083:  /* *avx512vl_eqv8si3_mask_1 */
    case 3081:  /* *avx512f_eqv16si3_mask_1 */
    case 3079:  /* *avx512f_eqv16si3_mask_1 */
    case 3029:  /* *avx512vl_eqv8hi3_mask_1 */
    case 3027:  /* *avx512vl_eqv8hi3_mask_1 */
    case 3025:  /* *avx512vl_eqv16hi3_mask_1 */
    case 3023:  /* *avx512vl_eqv16hi3_mask_1 */
    case 3021:  /* *avx512bw_eqv32hi3_mask_1 */
    case 3019:  /* *avx512bw_eqv32hi3_mask_1 */
    case 3017:  /* *avx512vl_eqv32qi3_mask_1 */
    case 3015:  /* *avx512vl_eqv32qi3_mask_1 */
    case 3013:  /* *avx512vl_eqv16qi3_mask_1 */
    case 3011:  /* *avx512vl_eqv16qi3_mask_1 */
    case 3009:  /* *avx512bw_eqv64qi3_mask_1 */
    case 3007:  /* *avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3149:  /* *avx512vl_ucmpv2di3_zero_extenddi_2 */
    case 3148:  /* *avx512vl_ucmpv2di3_zero_extendsi_2 */
    case 3147:  /* *avx512vl_ucmpv2di3_zero_extendhi_2 */
    case 3146:  /* *avx512vl_ucmpv4di3_zero_extenddi_2 */
    case 3145:  /* *avx512vl_ucmpv4di3_zero_extendsi_2 */
    case 3144:  /* *avx512vl_ucmpv4di3_zero_extendhi_2 */
    case 3143:  /* *avx512f_ucmpv8di3_zero_extenddi_2 */
    case 3142:  /* *avx512f_ucmpv8di3_zero_extendsi_2 */
    case 3141:  /* *avx512f_ucmpv8di3_zero_extendhi_2 */
    case 3140:  /* *avx512vl_ucmpv4si3_zero_extenddi_2 */
    case 3139:  /* *avx512vl_ucmpv4si3_zero_extendsi_2 */
    case 3138:  /* *avx512vl_ucmpv4si3_zero_extendhi_2 */
    case 3137:  /* *avx512vl_ucmpv8si3_zero_extenddi_2 */
    case 3136:  /* *avx512vl_ucmpv8si3_zero_extendsi_2 */
    case 3135:  /* *avx512vl_ucmpv8si3_zero_extendhi_2 */
    case 3134:  /* *avx512f_ucmpv16si3_zero_extenddi_2 */
    case 3133:  /* *avx512f_ucmpv16si3_zero_extendsi_2 */
    case 3132:  /* *avx512f_ucmpv16si3_zero_extendhi_2 */
    case 3077:  /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */
    case 3076:  /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */
    case 3075:  /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */
    case 3074:  /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */
    case 3073:  /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */
    case 3072:  /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */
    case 3071:  /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */
    case 3070:  /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */
    case 3069:  /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */
    case 3068:  /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */
    case 3067:  /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */
    case 3066:  /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */
    case 3065:  /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */
    case 3064:  /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */
    case 3063:  /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */
    case 3062:  /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */
    case 3061:  /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */
    case 3060:  /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */
    case 2993:  /* *avx512vl_cmpv8hi3_zero_extenddi_2 */
    case 2992:  /* *avx512vl_cmpv8hi3_zero_extendsi_2 */
    case 2991:  /* *avx512vl_cmpv8hi3_zero_extendhi_2 */
    case 2990:  /* *avx512vl_cmpv16hi3_zero_extenddi_2 */
    case 2989:  /* *avx512vl_cmpv16hi3_zero_extendsi_2 */
    case 2988:  /* *avx512vl_cmpv16hi3_zero_extendhi_2 */
    case 2987:  /* *avx512bw_cmpv32hi3_zero_extenddi_2 */
    case 2986:  /* *avx512bw_cmpv32hi3_zero_extendsi_2 */
    case 2985:  /* *avx512bw_cmpv32hi3_zero_extendhi_2 */
    case 2984:  /* *avx512vl_cmpv32qi3_zero_extenddi_2 */
    case 2983:  /* *avx512vl_cmpv32qi3_zero_extendsi_2 */
    case 2982:  /* *avx512vl_cmpv32qi3_zero_extendhi_2 */
    case 2981:  /* *avx512vl_cmpv16qi3_zero_extenddi_2 */
    case 2980:  /* *avx512vl_cmpv16qi3_zero_extendsi_2 */
    case 2979:  /* *avx512vl_cmpv16qi3_zero_extendhi_2 */
    case 2978:  /* *avx512bw_cmpv64qi3_zero_extenddi_2 */
    case 2977:  /* *avx512bw_cmpv64qi3_zero_extendsi_2 */
    case 2976:  /* *avx512bw_cmpv64qi3_zero_extendhi_2 */
    case 2930:  /* *avx512vl_cmpv2df3_zero_extenddi_2 */
    case 2929:  /* *avx512vl_cmpv2df3_zero_extendsi_2 */
    case 2928:  /* *avx512vl_cmpv2df3_zero_extendhi_2 */
    case 2927:  /* *avx512vl_cmpv4df3_zero_extenddi_2 */
    case 2926:  /* *avx512vl_cmpv4df3_zero_extendsi_2 */
    case 2925:  /* *avx512vl_cmpv4df3_zero_extendhi_2 */
    case 2924:  /* *avx512f_cmpv8df3_zero_extenddi_2 */
    case 2923:  /* *avx512f_cmpv8df3_zero_extendsi_2 */
    case 2922:  /* *avx512f_cmpv8df3_zero_extendhi_2 */
    case 2921:  /* *avx512vl_cmpv4sf3_zero_extenddi_2 */
    case 2920:  /* *avx512vl_cmpv4sf3_zero_extendsi_2 */
    case 2919:  /* *avx512vl_cmpv4sf3_zero_extendhi_2 */
    case 2918:  /* *avx512vl_cmpv8sf3_zero_extenddi_2 */
    case 2917:  /* *avx512vl_cmpv8sf3_zero_extendsi_2 */
    case 2916:  /* *avx512vl_cmpv8sf3_zero_extendhi_2 */
    case 2915:  /* *avx512f_cmpv16sf3_zero_extenddi_2 */
    case 2914:  /* *avx512f_cmpv16sf3_zero_extendsi_2 */
    case 2913:  /* *avx512f_cmpv16sf3_zero_extendhi_2 */
    case 2912:  /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */
    case 2911:  /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */
    case 2910:  /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */
    case 2909:  /* *avx512vl_cmpv16hf3_zero_extenddi_2 */
    case 2908:  /* *avx512vl_cmpv16hf3_zero_extendsi_2 */
    case 2907:  /* *avx512vl_cmpv16hf3_zero_extendhi_2 */
    case 2906:  /* *avx512bw_cmpv32hf3_zero_extenddi_2 */
    case 2905:  /* *avx512bw_cmpv32hf3_zero_extendsi_2 */
    case 2904:  /* *avx512bw_cmpv32hf3_zero_extendhi_2 */
    case 2903:  /* *avx512vl_cmpv2di3_zero_extenddi_2 */
    case 2902:  /* *avx512vl_cmpv2di3_zero_extendsi_2 */
    case 2901:  /* *avx512vl_cmpv2di3_zero_extendhi_2 */
    case 2900:  /* *avx512vl_cmpv4di3_zero_extenddi_2 */
    case 2899:  /* *avx512vl_cmpv4di3_zero_extendsi_2 */
    case 2898:  /* *avx512vl_cmpv4di3_zero_extendhi_2 */
    case 2897:  /* *avx512f_cmpv8di3_zero_extenddi_2 */
    case 2896:  /* *avx512f_cmpv8di3_zero_extendsi_2 */
    case 2895:  /* *avx512f_cmpv8di3_zero_extendhi_2 */
    case 2894:  /* *avx512vl_cmpv4si3_zero_extenddi_2 */
    case 2893:  /* *avx512vl_cmpv4si3_zero_extendsi_2 */
    case 2892:  /* *avx512vl_cmpv4si3_zero_extendhi_2 */
    case 2891:  /* *avx512vl_cmpv8si3_zero_extenddi_2 */
    case 2890:  /* *avx512vl_cmpv8si3_zero_extendsi_2 */
    case 2889:  /* *avx512vl_cmpv8si3_zero_extendhi_2 */
    case 2888:  /* *avx512f_cmpv16si3_zero_extenddi_2 */
    case 2887:  /* *avx512f_cmpv16si3_zero_extendsi_2 */
    case 2886:  /* *avx512f_cmpv16si3_zero_extendhi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3172:  /* avx512f_vmcmpv2df3 */
    case 3170:  /* avx512f_vmcmpv4sf3 */
    case 3168:  /* avx512f_vmcmpv8hf3 */
    case 3155:  /* *avx512vl_ucmpv2di3 */
    case 3154:  /* *avx512vl_ucmpv4di3 */
    case 3153:  /* *avx512f_ucmpv8di3 */
    case 3152:  /* *avx512vl_ucmpv4si3 */
    case 3151:  /* *avx512vl_ucmpv8si3 */
    case 3150:  /* *avx512f_ucmpv16si3 */
    case 3131:  /* *avx512vl_ucmpv2di3_zero_extenddi */
    case 3130:  /* *avx512vl_ucmpv2di3_zero_extendsi */
    case 3129:  /* *avx512vl_ucmpv2di3_zero_extendhi */
    case 3128:  /* *avx512vl_ucmpv4di3_zero_extenddi */
    case 3127:  /* *avx512vl_ucmpv4di3_zero_extendsi */
    case 3126:  /* *avx512vl_ucmpv4di3_zero_extendhi */
    case 3125:  /* *avx512f_ucmpv8di3_zero_extenddi */
    case 3124:  /* *avx512f_ucmpv8di3_zero_extendsi */
    case 3123:  /* *avx512f_ucmpv8di3_zero_extendhi */
    case 3122:  /* *avx512vl_ucmpv4si3_zero_extenddi */
    case 3121:  /* *avx512vl_ucmpv4si3_zero_extendsi */
    case 3120:  /* *avx512vl_ucmpv4si3_zero_extendhi */
    case 3119:  /* *avx512vl_ucmpv8si3_zero_extenddi */
    case 3118:  /* *avx512vl_ucmpv8si3_zero_extendsi */
    case 3117:  /* *avx512vl_ucmpv8si3_zero_extendhi */
    case 3116:  /* *avx512f_ucmpv16si3_zero_extenddi */
    case 3115:  /* *avx512f_ucmpv16si3_zero_extendsi */
    case 3114:  /* *avx512f_ucmpv16si3_zero_extendhi */
    case 3059:  /* *avx512vl_ucmpv8hi3_zero_extenddi */
    case 3058:  /* *avx512vl_ucmpv8hi3_zero_extendsi */
    case 3057:  /* *avx512vl_ucmpv8hi3_zero_extendhi */
    case 3056:  /* *avx512vl_ucmpv16hi3_zero_extenddi */
    case 3055:  /* *avx512vl_ucmpv16hi3_zero_extendsi */
    case 3054:  /* *avx512vl_ucmpv16hi3_zero_extendhi */
    case 3053:  /* *avx512bw_ucmpv32hi3_zero_extenddi */
    case 3052:  /* *avx512bw_ucmpv32hi3_zero_extendsi */
    case 3051:  /* *avx512bw_ucmpv32hi3_zero_extendhi */
    case 3050:  /* *avx512vl_ucmpv32qi3_zero_extenddi */
    case 3049:  /* *avx512vl_ucmpv32qi3_zero_extendsi */
    case 3048:  /* *avx512vl_ucmpv32qi3_zero_extendhi */
    case 3047:  /* *avx512vl_ucmpv16qi3_zero_extenddi */
    case 3046:  /* *avx512vl_ucmpv16qi3_zero_extendsi */
    case 3045:  /* *avx512vl_ucmpv16qi3_zero_extendhi */
    case 3044:  /* *avx512bw_ucmpv64qi3_zero_extenddi */
    case 3043:  /* *avx512bw_ucmpv64qi3_zero_extendsi */
    case 3042:  /* *avx512bw_ucmpv64qi3_zero_extendhi */
    case 3005:  /* *avx512vl_cmpv8hi3 */
    case 3004:  /* *avx512vl_cmpv8hi3 */
    case 3003:  /* *avx512vl_cmpv16hi3 */
    case 3002:  /* *avx512vl_cmpv16hi3 */
    case 3001:  /* *avx512bw_cmpv32hi3 */
    case 3000:  /* *avx512bw_cmpv32hi3 */
    case 2999:  /* *avx512vl_cmpv32qi3 */
    case 2998:  /* *avx512vl_cmpv32qi3 */
    case 2997:  /* *avx512vl_cmpv16qi3 */
    case 2996:  /* *avx512vl_cmpv16qi3 */
    case 2995:  /* *avx512bw_cmpv64qi3 */
    case 2994:  /* *avx512bw_cmpv64qi3 */
    case 2975:  /* *avx512vl_cmpv8hi3_zero_extenddi */
    case 2974:  /* *avx512vl_cmpv8hi3_zero_extendsi */
    case 2973:  /* *avx512vl_cmpv8hi3_zero_extendhi */
    case 2972:  /* *avx512vl_cmpv16hi3_zero_extenddi */
    case 2971:  /* *avx512vl_cmpv16hi3_zero_extendsi */
    case 2970:  /* *avx512vl_cmpv16hi3_zero_extendhi */
    case 2969:  /* *avx512bw_cmpv32hi3_zero_extenddi */
    case 2968:  /* *avx512bw_cmpv32hi3_zero_extendsi */
    case 2967:  /* *avx512bw_cmpv32hi3_zero_extendhi */
    case 2966:  /* *avx512vl_cmpv32qi3_zero_extenddi */
    case 2965:  /* *avx512vl_cmpv32qi3_zero_extendsi */
    case 2964:  /* *avx512vl_cmpv32qi3_zero_extendhi */
    case 2963:  /* *avx512vl_cmpv16qi3_zero_extenddi */
    case 2962:  /* *avx512vl_cmpv16qi3_zero_extendsi */
    case 2961:  /* *avx512vl_cmpv16qi3_zero_extendhi */
    case 2960:  /* *avx512bw_cmpv64qi3_zero_extenddi */
    case 2959:  /* *avx512bw_cmpv64qi3_zero_extendsi */
    case 2958:  /* *avx512bw_cmpv64qi3_zero_extendhi */
    case 2945:  /* *avx512vl_cmpv2df3 */
    case 2944:  /* *avx512vl_cmpv4df3 */
    case 2943:  /* *avx512f_cmpv8df3 */
    case 2942:  /* *avx512vl_cmpv4sf3 */
    case 2941:  /* *avx512vl_cmpv8sf3 */
    case 2940:  /* *avx512f_cmpv16sf3 */
    case 2939:  /* *avx512fp16_cmpv8hf3 */
    case 2938:  /* *avx512vl_cmpv16hf3 */
    case 2937:  /* *avx512bw_cmpv32hf3 */
    case 2936:  /* *avx512vl_cmpv2di3 */
    case 2935:  /* *avx512vl_cmpv4di3 */
    case 2934:  /* *avx512f_cmpv8di3 */
    case 2933:  /* *avx512vl_cmpv4si3 */
    case 2932:  /* *avx512vl_cmpv8si3 */
    case 2931:  /* *avx512f_cmpv16si3 */
    case 2885:  /* *avx512vl_cmpv2df3_zero_extenddi */
    case 2884:  /* *avx512vl_cmpv2df3_zero_extendsi */
    case 2883:  /* *avx512vl_cmpv2df3_zero_extendhi */
    case 2882:  /* *avx512vl_cmpv4df3_zero_extenddi */
    case 2881:  /* *avx512vl_cmpv4df3_zero_extendsi */
    case 2880:  /* *avx512vl_cmpv4df3_zero_extendhi */
    case 2879:  /* *avx512f_cmpv8df3_zero_extenddi */
    case 2878:  /* *avx512f_cmpv8df3_zero_extendsi */
    case 2877:  /* *avx512f_cmpv8df3_zero_extendhi */
    case 2876:  /* *avx512vl_cmpv4sf3_zero_extenddi */
    case 2875:  /* *avx512vl_cmpv4sf3_zero_extendsi */
    case 2874:  /* *avx512vl_cmpv4sf3_zero_extendhi */
    case 2873:  /* *avx512vl_cmpv8sf3_zero_extenddi */
    case 2872:  /* *avx512vl_cmpv8sf3_zero_extendsi */
    case 2871:  /* *avx512vl_cmpv8sf3_zero_extendhi */
    case 2870:  /* *avx512f_cmpv16sf3_zero_extenddi */
    case 2869:  /* *avx512f_cmpv16sf3_zero_extendsi */
    case 2868:  /* *avx512f_cmpv16sf3_zero_extendhi */
    case 2867:  /* *avx512fp16_cmpv8hf3_zero_extenddi */
    case 2866:  /* *avx512fp16_cmpv8hf3_zero_extendsi */
    case 2865:  /* *avx512fp16_cmpv8hf3_zero_extendhi */
    case 2864:  /* *avx512vl_cmpv16hf3_zero_extenddi */
    case 2863:  /* *avx512vl_cmpv16hf3_zero_extendsi */
    case 2862:  /* *avx512vl_cmpv16hf3_zero_extendhi */
    case 2861:  /* *avx512bw_cmpv32hf3_zero_extenddi */
    case 2860:  /* *avx512bw_cmpv32hf3_zero_extendsi */
    case 2859:  /* *avx512bw_cmpv32hf3_zero_extendhi */
    case 2858:  /* *avx512vl_cmpv2di3_zero_extenddi */
    case 2857:  /* *avx512vl_cmpv2di3_zero_extendsi */
    case 2856:  /* *avx512vl_cmpv2di3_zero_extendhi */
    case 2855:  /* *avx512vl_cmpv4di3_zero_extenddi */
    case 2854:  /* *avx512vl_cmpv4di3_zero_extendsi */
    case 2853:  /* *avx512vl_cmpv4di3_zero_extendhi */
    case 2852:  /* *avx512f_cmpv8di3_zero_extenddi */
    case 2851:  /* *avx512f_cmpv8di3_zero_extendsi */
    case 2850:  /* *avx512f_cmpv8di3_zero_extendhi */
    case 2849:  /* *avx512vl_cmpv4si3_zero_extenddi */
    case 2848:  /* *avx512vl_cmpv4si3_zero_extendsi */
    case 2847:  /* *avx512vl_cmpv4si3_zero_extendhi */
    case 2846:  /* *avx512vl_cmpv8si3_zero_extenddi */
    case 2845:  /* *avx512vl_cmpv8si3_zero_extendsi */
    case 2844:  /* *avx512vl_cmpv8si3_zero_extendhi */
    case 2843:  /* *avx512f_cmpv16si3_zero_extenddi */
    case 2842:  /* *avx512f_cmpv16si3_zero_extendsi */
    case 2841:  /* *avx512f_cmpv16si3_zero_extendhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 2836:  /* avx512f_cmpv8df3_mask_round */
    case 2828:  /* avx512f_cmpv16sf3_mask_round */
    case 2820:  /* avx512bw_cmpv32hf3_mask_round */
    case 2812:  /* avx512f_cmpv8di3_mask_round */
    case 2804:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3797:  /* fma_fcmaddc_v8hf_fma_zero */
    case 3796:  /* fma_fmaddc_v8hf_fma_zero */
    case 3795:  /* fma_fcmaddc_v16hf_fma_zero */
    case 3794:  /* fma_fmaddc_v16hf_fma_zero */
    case 3793:  /* fma_fcmaddc_v32hf_fma_zero */
    case 3792:  /* fma_fmaddc_v32hf_fma_zero */
    case 3113:  /* avx512vl_ucmpv2di3_mask */
    case 3111:  /* avx512vl_ucmpv4di3_mask */
    case 3109:  /* avx512f_ucmpv8di3_mask */
    case 3107:  /* avx512vl_ucmpv4si3_mask */
    case 3105:  /* avx512vl_ucmpv8si3_mask */
    case 3103:  /* avx512f_ucmpv16si3_mask */
    case 3041:  /* avx512vl_ucmpv8hi3_mask */
    case 3039:  /* avx512vl_ucmpv16hi3_mask */
    case 3037:  /* avx512bw_ucmpv32hi3_mask */
    case 3035:  /* avx512vl_ucmpv32qi3_mask */
    case 3033:  /* avx512vl_ucmpv16qi3_mask */
    case 3031:  /* avx512bw_ucmpv64qi3_mask */
    case 2957:  /* avx512vl_cmpv8hi3_mask */
    case 2955:  /* avx512vl_cmpv16hi3_mask */
    case 2953:  /* avx512bw_cmpv32hi3_mask */
    case 2951:  /* avx512vl_cmpv32qi3_mask */
    case 2949:  /* avx512vl_cmpv16qi3_mask */
    case 2947:  /* avx512bw_cmpv64qi3_mask */
    case 2840:  /* avx512vl_cmpv2df3_mask */
    case 2838:  /* avx512vl_cmpv4df3_mask */
    case 2835:  /* avx512f_cmpv8df3_mask */
    case 2832:  /* avx512vl_cmpv4sf3_mask */
    case 2830:  /* avx512vl_cmpv8sf3_mask */
    case 2827:  /* avx512f_cmpv16sf3_mask */
    case 2824:  /* avx512fp16_cmpv8hf3_mask */
    case 2822:  /* avx512vl_cmpv16hf3_mask */
    case 2819:  /* avx512bw_cmpv32hf3_mask */
    case 2816:  /* avx512vl_cmpv2di3_mask */
    case 2814:  /* avx512vl_cmpv4di3_mask */
    case 2811:  /* avx512f_cmpv8di3_mask */
    case 2808:  /* avx512vl_cmpv4si3_mask */
    case 2806:  /* avx512vl_cmpv8si3_mask */
    case 2803:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8990:  /* avx512dq_rangepv8df_round */
    case 8982:  /* avx512dq_rangepv16sf_round */
    case 3775:  /* fma_fcmaddc_v32hf_round */
    case 3771:  /* fma_fmaddc_v32hf_round */
    case 3560:  /* *fma_fmaddsub_v8df_round */
    case 3552:  /* *fma_fmaddsub_v16sf_round */
    case 3544:  /* *fma_fmaddsub_v32hf_round */
    case 2834:  /* avx512f_cmpv8df3_round */
    case 2826:  /* avx512f_cmpv16sf3_round */
    case 2818:  /* avx512bw_cmpv32hf3_round */
    case 2810:  /* avx512f_cmpv8di3_round */
    case 2802:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2800:  /* sse2_vmmaskcmpv2df3 */
    case 2799:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6983:  /* *avx2_pcmpv16qi3_4 */
    case 6982:  /* *avx2_pcmpv32qi3_4 */
    case 2788:  /* *avx_cmpv4di3_ltint_not */
    case 2787:  /* *avx_cmpv8si3_ltint_not */
    case 2786:  /* *avx_cmpv2di3_ltint_not */
    case 2785:  /* *avx_cmpv4si3_ltint_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6979:  /* *avx2_pcmpv4di3_2 */
    case 6978:  /* *avx2_pcmpv8si3_2 */
    case 6977:  /* *avx2_pcmpv16hi3_2 */
    case 6976:  /* *avx2_pcmpv32qi3_2 */
    case 6975:  /* *avx2_pcmpv2di3_2 */
    case 6974:  /* *avx2_pcmpv4si3_2 */
    case 6973:  /* *avx2_pcmpv8hi3_2 */
    case 6972:  /* *avx2_pcmpv16qi3_2 */
    case 2776:  /* *avx_cmpv2df3_4 */
    case 2775:  /* *avx_cmpv4df3_4 */
    case 2774:  /* *avx_cmpv4sf3_4 */
    case 2773:  /* *avx_cmpv8sf3_4 */
    case 2768:  /* *avx_cmpv2df3_2 */
    case 2767:  /* *avx_cmpv4df3_2 */
    case 2766:  /* *avx_cmpv4sf3_2 */
    case 2765:  /* *avx_cmpv8sf3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 2));
      break;

    case 6981:  /* *avx2_pcmpv16qi3_3 */
    case 6980:  /* *avx2_pcmpv32qi3_3 */
    case 6971:  /* *avx2_pcmpv4di3_1 */
    case 6970:  /* *avx2_pcmpv8si3_1 */
    case 6969:  /* *avx2_pcmpv16hi3_1 */
    case 6968:  /* *avx2_pcmpv32qi3_1 */
    case 6967:  /* *avx2_pcmpv2di3_1 */
    case 6966:  /* *avx2_pcmpv4si3_1 */
    case 6965:  /* *avx2_pcmpv8hi3_1 */
    case 6964:  /* *avx2_pcmpv16qi3_1 */
    case 2784:  /* *avx_cmpv4di3_ltint */
    case 2783:  /* *avx_cmpv8si3_ltint */
    case 2782:  /* *avx_cmpv2di3_ltint */
    case 2781:  /* *avx_cmpv4si3_ltint */
    case 2780:  /* *avx_cmpv2df3_lt */
    case 2779:  /* *avx_cmpv4df3_lt */
    case 2778:  /* *avx_cmpv4sf3_lt */
    case 2777:  /* *avx_cmpv8sf3_lt */
    case 2772:  /* *avx_cmpv2df3_3 */
    case 2771:  /* *avx_cmpv4df3_3 */
    case 2770:  /* *avx_cmpv4sf3_3 */
    case 2769:  /* *avx_cmpv8sf3_3 */
    case 2764:  /* *avx_cmpv2df3_1 */
    case 2763:  /* *avx_cmpv4df3_1 */
    case 2762:  /* *avx_cmpv4sf3_1 */
    case 2761:  /* *avx_cmpv8sf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 9076:  /* avx512f_vgetmantv2df_mask_round */
    case 9072:  /* avx512f_vgetmantv4sf_mask_round */
    case 9068:  /* avx512f_vgetmantv8hf_mask_round */
    case 9004:  /* avx512dq_rangesv2df_mask_round */
    case 9000:  /* avx512dq_rangesv4sf_mask_round */
    case 2756:  /* reducesv2df_mask_round */
    case 2752:  /* reducesv4sf_mask_round */
    case 2748:  /* reducesv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9075:  /* avx512f_vgetmantv2df_round */
    case 9071:  /* avx512f_vgetmantv4sf_round */
    case 9067:  /* avx512f_vgetmantv8hf_round */
    case 9003:  /* avx512dq_rangesv2df_round */
    case 8999:  /* avx512dq_rangesv4sf_round */
    case 2755:  /* reducesv2df_round */
    case 2751:  /* reducesv4sf_round */
    case 2747:  /* reducesv8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9074:  /* avx512f_vgetmantv2df_mask */
    case 9070:  /* avx512f_vgetmantv4sf_mask */
    case 9066:  /* avx512f_vgetmantv8hf_mask */
    case 9002:  /* avx512dq_rangesv2df_mask */
    case 8998:  /* avx512dq_rangesv4sf_mask */
    case 2754:  /* reducesv2df_mask */
    case 2750:  /* reducesv4sf_mask */
    case 2746:  /* reducesv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9073:  /* avx512f_vgetmantv2df */
    case 9069:  /* avx512f_vgetmantv4sf */
    case 9065:  /* avx512f_vgetmantv8hf */
    case 9001:  /* avx512dq_rangesv2df */
    case 8997:  /* avx512dq_rangesv4sf */
    case 2790:  /* avx_vmcmpv2df3 */
    case 2789:  /* avx_vmcmpv4sf3 */
    case 2753:  /* reducesv2df */
    case 2749:  /* reducesv4sf */
    case 2745:  /* reducesv8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2708:  /* sse3_hsubv4sf3 */
    case 2707:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2706:  /* avx_hsubv8sf3 */
    case 2705:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 2700:  /* avx_hsubv4df3 */
    case 2699:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2698:  /* vec_addsubv2df3 */
    case 2697:  /* vec_addsubv4df3 */
    case 2696:  /* vec_addsubv4sf3 */
    case 2695:  /* vec_addsubv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 2670:  /* *ieee_minv2df3 */
    case 2669:  /* *ieee_maxv2df3 */
    case 2668:  /* *ieee_minv4sf3 */
    case 2667:  /* *ieee_maxv4sf3 */
    case 2666:  /* *ieee_minv8hf3 */
    case 2665:  /* *ieee_maxv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9064:  /* avx512vl_getmantv2df_mask_round */
    case 9060:  /* avx512vl_getmantv4df_mask_round */
    case 9056:  /* avx512f_getmantv8df_mask_round */
    case 9052:  /* avx512vl_getmantv4sf_mask_round */
    case 9048:  /* avx512vl_getmantv8sf_mask_round */
    case 9044:  /* avx512f_getmantv16sf_mask_round */
    case 9040:  /* avx512fp16_getmantv8hf_mask_round */
    case 9036:  /* avx512vl_getmantv16hf_mask_round */
    case 9032:  /* avx512bw_getmantv32hf_mask_round */
    case 8690:  /* avx512f_vcvtps2ph512_mask_round */
    case 6231:  /* avx512vl_rndscalev2df_mask_round */
    case 6227:  /* avx512vl_rndscalev4df_mask_round */
    case 6223:  /* avx512f_rndscalev8df_mask_round */
    case 6219:  /* avx512vl_rndscalev4sf_mask_round */
    case 6215:  /* avx512vl_rndscalev8sf_mask_round */
    case 6211:  /* avx512f_rndscalev16sf_mask_round */
    case 6207:  /* avx512fp16_rndscalev8hf_mask_round */
    case 6203:  /* avx512vl_rndscalev16hf_mask_round */
    case 6199:  /* avx512bw_rndscalev32hf_mask_round */
    case 4717:  /* avx512vl_scalefv2df_mask_round */
    case 4713:  /* avx512vl_scalefv4df_mask_round */
    case 4709:  /* avx512f_scalefv8df_mask_round */
    case 4705:  /* avx512vl_scalefv4sf_mask_round */
    case 4701:  /* avx512vl_scalefv8sf_mask_round */
    case 4697:  /* avx512f_scalefv16sf_mask_round */
    case 4693:  /* avx512fp16_scalefv8hf_mask_round */
    case 4689:  /* avx512vl_scalefv16hf_mask_round */
    case 4685:  /* avx512bw_scalefv32hf_mask_round */
    case 2744:  /* reducepv2df_mask_round */
    case 2740:  /* reducepv4df_mask_round */
    case 2736:  /* reducepv8df_mask_round */
    case 2732:  /* reducepv4sf_mask_round */
    case 2728:  /* reducepv8sf_mask_round */
    case 2724:  /* reducepv16sf_mask_round */
    case 2720:  /* reducepv8hf_mask_round */
    case 2716:  /* reducepv16hf_mask_round */
    case 2712:  /* reducepv32hf_mask_round */
    case 2656:  /* ieee_minv8df3_mask_round */
    case 2652:  /* ieee_maxv8df3_mask_round */
    case 2640:  /* ieee_minv16sf3_mask_round */
    case 2636:  /* ieee_maxv16sf3_mask_round */
    case 2624:  /* ieee_minv32hf3_mask_round */
    case 2620:  /* ieee_maxv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 9223:  /* vgf2p8mulb_v16qi_mask */
    case 9221:  /* vgf2p8mulb_v32qi_mask */
    case 9219:  /* vgf2p8mulb_v64qi_mask */
    case 9172:  /* avx5124vnniw_vp4dpwssds_mask */
    case 9169:  /* avx5124vnniw_vp4dpwssd_mask */
    case 9166:  /* avx5124fmaddps_4fnmaddss_mask */
    case 9163:  /* avx5124fmaddps_4fnmaddps_mask */
    case 9160:  /* avx5124fmaddps_4fmaddss_mask */
    case 9157:  /* avx5124fmaddps_4fmaddps_mask */
    case 9153:  /* vpmultishiftqbv32qi_mask */
    case 9151:  /* vpmultishiftqbv16qi_mask */
    case 9149:  /* vpmultishiftqbv64qi_mask */
    case 9063:  /* avx512vl_getmantv2df_mask */
    case 9059:  /* avx512vl_getmantv4df_mask */
    case 9055:  /* avx512f_getmantv8df_mask */
    case 9051:  /* avx512vl_getmantv4sf_mask */
    case 9047:  /* avx512vl_getmantv8sf_mask */
    case 9043:  /* avx512f_getmantv16sf_mask */
    case 9039:  /* avx512fp16_getmantv8hf_mask */
    case 9035:  /* avx512vl_getmantv16hf_mask */
    case 9031:  /* avx512bw_getmantv32hf_mask */
    case 8689:  /* avx512f_vcvtps2ph512_mask */
    case 8684:  /* vcvtps2ph256_mask */
    case 8413:  /* avx_vpermilvarv2df3_mask */
    case 8411:  /* avx_vpermilvarv4df3_mask */
    case 8409:  /* avx512f_vpermilvarv8df3_mask */
    case 8407:  /* avx_vpermilvarv4sf3_mask */
    case 8405:  /* avx_vpermilvarv8sf3_mask */
    case 8403:  /* avx512f_vpermilvarv16sf3_mask */
    case 8204:  /* avx512bw_permvarv32bf_mask */
    case 8202:  /* avx512vl_permvarv16bf_mask */
    case 8200:  /* avx512vl_permvarv8bf_mask */
    case 8198:  /* avx512bw_permvarv32hf_mask */
    case 8196:  /* avx512vl_permvarv16hf_mask */
    case 8194:  /* avx512fp16_permvarv8hf_mask */
    case 8192:  /* avx512bw_permvarv32hi_mask */
    case 8190:  /* avx512vl_permvarv16hi_mask */
    case 8188:  /* avx512vl_permvarv8hi_mask */
    case 8186:  /* avx512vl_permvarv32qi_mask */
    case 8184:  /* avx512vl_permvarv16qi_mask */
    case 8182:  /* avx512bw_permvarv64qi_mask */
    case 8180:  /* avx2_permvarv4df_mask */
    case 8178:  /* avx2_permvarv4di_mask */
    case 8176:  /* avx512f_permvarv8df_mask */
    case 8174:  /* avx512f_permvarv8di_mask */
    case 8172:  /* avx512f_permvarv16sf_mask */
    case 8170:  /* avx512f_permvarv16si_mask */
    case 8168:  /* avx2_permvarv8sf_mask */
    case 8166:  /* avx2_permvarv8si_mask */
    case 7733:  /* sse4_1_packusdw_mask */
    case 7731:  /* avx2_packusdw_mask */
    case 7729:  /* avx512bw_packusdw_mask */
    case 7647:  /* ssse3_pshufbv16qi3_mask */
    case 7645:  /* avx2_pshufbv32qi3_mask */
    case 7643:  /* avx512bw_pshufbv64qi3_mask */
    case 7629:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 7627:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 7625:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 7492:  /* avx512bw_pshufhwv32hi_mask */
    case 7486:  /* avx512bw_pshuflwv32hi_mask */
    case 7360:  /* sse2_packuswb_mask */
    case 7358:  /* avx2_packuswb_mask */
    case 7356:  /* avx512bw_packuswb_mask */
    case 6684:  /* avx512bw_pmaddwd512v8hi_mask */
    case 6682:  /* avx512bw_pmaddwd512v16hi_mask */
    case 6680:  /* avx512bw_pmaddwd512v32hi_mask */
    case 6230:  /* avx512vl_rndscalev2df_mask */
    case 6226:  /* avx512vl_rndscalev4df_mask */
    case 6222:  /* avx512f_rndscalev8df_mask */
    case 6218:  /* avx512vl_rndscalev4sf_mask */
    case 6214:  /* avx512vl_rndscalev8sf_mask */
    case 6210:  /* avx512f_rndscalev16sf_mask */
    case 6206:  /* avx512fp16_rndscalev8hf_mask */
    case 6202:  /* avx512vl_rndscalev16hf_mask */
    case 6198:  /* avx512bw_rndscalev32hf_mask */
    case 4716:  /* avx512vl_scalefv2df_mask */
    case 4712:  /* avx512vl_scalefv4df_mask */
    case 4708:  /* avx512f_scalefv8df_mask */
    case 4704:  /* avx512vl_scalefv4sf_mask */
    case 4700:  /* avx512vl_scalefv8sf_mask */
    case 4696:  /* avx512f_scalefv16sf_mask */
    case 4692:  /* avx512fp16_scalefv8hf_mask */
    case 4688:  /* avx512vl_scalefv16hf_mask */
    case 4684:  /* avx512bw_scalefv32hf_mask */
    case 2743:  /* reducepv2df_mask */
    case 2739:  /* reducepv4df_mask */
    case 2735:  /* reducepv8df_mask */
    case 2731:  /* reducepv4sf_mask */
    case 2727:  /* reducepv8sf_mask */
    case 2723:  /* reducepv16sf_mask */
    case 2719:  /* reducepv8hf_mask */
    case 2715:  /* reducepv16hf_mask */
    case 2711:  /* reducepv32hf_mask */
    case 2664:  /* ieee_minv2df3_mask */
    case 2662:  /* ieee_maxv2df3_mask */
    case 2660:  /* ieee_minv4df3_mask */
    case 2658:  /* ieee_maxv4df3_mask */
    case 2655:  /* ieee_minv8df3_mask */
    case 2651:  /* ieee_maxv8df3_mask */
    case 2648:  /* ieee_minv4sf3_mask */
    case 2646:  /* ieee_maxv4sf3_mask */
    case 2644:  /* ieee_minv8sf3_mask */
    case 2642:  /* ieee_maxv8sf3_mask */
    case 2639:  /* ieee_minv16sf3_mask */
    case 2635:  /* ieee_maxv16sf3_mask */
    case 2632:  /* ieee_minv8hf3_mask */
    case 2630:  /* ieee_maxv8hf3_mask */
    case 2628:  /* ieee_minv16hf3_mask */
    case 2626:  /* ieee_maxv16hf3_mask */
    case 2623:  /* ieee_minv32hf3_mask */
    case 2619:  /* ieee_maxv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9062:  /* avx512vl_getmantv2df_round */
    case 9058:  /* avx512vl_getmantv4df_round */
    case 9054:  /* avx512f_getmantv8df_round */
    case 9050:  /* avx512vl_getmantv4sf_round */
    case 9046:  /* avx512vl_getmantv8sf_round */
    case 9042:  /* avx512f_getmantv16sf_round */
    case 9038:  /* avx512fp16_getmantv8hf_round */
    case 9034:  /* avx512vl_getmantv16hf_round */
    case 9030:  /* avx512bw_getmantv32hf_round */
    case 8688:  /* *avx512f_vcvtps2ph512_round */
    case 6229:  /* avx512vl_rndscalev2df_round */
    case 6225:  /* avx512vl_rndscalev4df_round */
    case 6221:  /* avx512f_rndscalev8df_round */
    case 6217:  /* avx512vl_rndscalev4sf_round */
    case 6213:  /* avx512vl_rndscalev8sf_round */
    case 6209:  /* avx512f_rndscalev16sf_round */
    case 6205:  /* avx512fp16_rndscalev8hf_round */
    case 6201:  /* avx512vl_rndscalev16hf_round */
    case 6197:  /* avx512bw_rndscalev32hf_round */
    case 4715:  /* avx512vl_scalefv2df_round */
    case 4711:  /* avx512vl_scalefv4df_round */
    case 4707:  /* avx512f_scalefv8df_round */
    case 4703:  /* avx512vl_scalefv4sf_round */
    case 4699:  /* avx512vl_scalefv8sf_round */
    case 4695:  /* avx512f_scalefv16sf_round */
    case 4691:  /* avx512fp16_scalefv8hf_round */
    case 4687:  /* avx512vl_scalefv16hf_round */
    case 4683:  /* avx512bw_scalefv32hf_round */
    case 3824:  /* avx512bw_fcmulc_v32hf_round */
    case 3820:  /* avx512bw_fmulc_v32hf_round */
    case 2742:  /* *reducepv2df_round */
    case 2738:  /* *reducepv4df_round */
    case 2734:  /* *reducepv8df_round */
    case 2730:  /* *reducepv4sf_round */
    case 2726:  /* *reducepv8sf_round */
    case 2722:  /* *reducepv16sf_round */
    case 2718:  /* *reducepv8hf_round */
    case 2714:  /* *reducepv16hf_round */
    case 2710:  /* *reducepv32hf_round */
    case 2654:  /* ieee_minv8df3_round */
    case 2650:  /* ieee_maxv8df3_round */
    case 2638:  /* ieee_minv16sf3_round */
    case 2634:  /* ieee_maxv16sf3_round */
    case 2622:  /* ieee_minv32hf3_round */
    case 2618:  /* ieee_maxv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2568:  /* *avx512fp16_vmrsqrtv8hf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2538:  /* *sse2_vmsqrtv2df2_mask_round */
    case 2534:  /* *sse_vmsqrtv4sf2_mask_round */
    case 2530:  /* *avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4164:  /* avx512fp16_vcvtsd2sh_mask_mem */
    case 4162:  /* avx512fp16_vcvtss2sh_mask_mem */
    case 4152:  /* avx512fp16_vcvtsh2ss_mask_mem */
    case 4150:  /* avx512fp16_vcvtsh2sd_mask_mem */
    case 2537:  /* *sse2_vmsqrtv2df2_mask */
    case 2533:  /* *sse_vmsqrtv4sf2_mask */
    case 2529:  /* *avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2536:  /* *sse2_vmsqrtv2df2_round */
    case 2532:  /* *sse_vmsqrtv4sf2_round */
    case 2528:  /* *avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2526:  /* sse2_vmsqrtv2df2_mask_round */
    case 2522:  /* sse_vmsqrtv4sf2_mask_round */
    case 2518:  /* avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2525:  /* sse2_vmsqrtv2df2_mask */
    case 2521:  /* sse_vmsqrtv4sf2_mask */
    case 2517:  /* avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2524:  /* sse2_vmsqrtv2df2_round */
    case 2520:  /* sse_vmsqrtv4sf2_round */
    case 2516:  /* avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4461:  /* avx512f_cvtps2pd512_mask_round */
    case 4451:  /* avx512f_cvtpd2ps512_mask_round */
    case 4422:  /* fixuns_truncv8sfv8di2_mask_round */
    case 4418:  /* fix_truncv8sfv8di2_mask_round */
    case 4390:  /* fixuns_truncv8dfv8di2_mask_round */
    case 4386:  /* fix_truncv8dfv8di2_mask_round */
    case 4375:  /* fixuns_truncv8dfv8si2_mask_round */
    case 4371:  /* fix_truncv8dfv8si2_mask_round */
    case 4326:  /* floatunsv8div8sf2_mask_round */
    case 4322:  /* floatv8div8sf2_mask_round */
    case 4318:  /* floatunsv2div2df2_mask_round */
    case 4314:  /* floatv2div2df2_mask_round */
    case 4310:  /* floatunsv4div4df2_mask_round */
    case 4306:  /* floatv4div4df2_mask_round */
    case 4302:  /* floatunsv8div8df2_mask_round */
    case 4298:  /* floatv8div8df2_mask_round */
    case 4252:  /* fixuns_truncv16sfv16si2_mask_round */
    case 4248:  /* fix_truncv16sfv16si2_mask_round */
    case 4208:  /* floatunsv4siv4sf2_mask_round */
    case 4204:  /* floatunsv8siv8sf2_mask_round */
    case 4200:  /* floatunsv16siv16sf2_mask_round */
    case 4192:  /* floatv16siv16sf2_mask_round */
    case 4131:  /* avx512fp16_vcvtps2ph_v8sf_mask_round */
    case 4127:  /* avx512fp16_vcvtps2ph_v16sf_mask_round */
    case 4123:  /* avx512fp16_vcvtpd2ph_v8df_mask_round */
    case 4107:  /* avx512fp16_float_extend_phv8sf2_mask_round */
    case 4103:  /* avx512fp16_float_extend_phv16sf2_mask_round */
    case 4099:  /* avx512fp16_float_extend_phv8df2_mask_round */
    case 4059:  /* avx512fp16_fixuns_truncv8di2_mask_round */
    case 4055:  /* avx512fp16_fix_truncv8di2_mask_round */
    case 4051:  /* avx512fp16_fixuns_truncv16si2_mask_round */
    case 4047:  /* avx512fp16_fix_truncv16si2_mask_round */
    case 4043:  /* avx512fp16_fixuns_truncv8si2_mask_round */
    case 4039:  /* avx512fp16_fix_truncv8si2_mask_round */
    case 4035:  /* avx512fp16_fixuns_truncv32hi2_mask_round */
    case 4031:  /* avx512fp16_fix_truncv32hi2_mask_round */
    case 4027:  /* avx512fp16_fixuns_truncv16hi2_mask_round */
    case 4023:  /* avx512fp16_fix_truncv16hi2_mask_round */
    case 4019:  /* avx512fp16_fixuns_truncv8hi2_mask_round */
    case 4015:  /* avx512fp16_fix_truncv8hi2_mask_round */
    case 3973:  /* avx512fp16_vcvtuqq2ph_v8di_mask_round */
    case 3969:  /* avx512fp16_vcvtqq2ph_v8di_mask_round */
    case 3965:  /* avx512fp16_vcvtudq2ph_v16si_mask_round */
    case 3961:  /* avx512fp16_vcvtdq2ph_v16si_mask_round */
    case 3957:  /* avx512fp16_vcvtudq2ph_v8si_mask_round */
    case 3953:  /* avx512fp16_vcvtdq2ph_v8si_mask_round */
    case 3949:  /* avx512fp16_vcvtuw2ph_v32hi_mask_round */
    case 3945:  /* avx512fp16_vcvtw2ph_v32hi_mask_round */
    case 3941:  /* avx512fp16_vcvtuw2ph_v16hi_mask_round */
    case 3937:  /* avx512fp16_vcvtw2ph_v16hi_mask_round */
    case 3933:  /* avx512fp16_vcvtuw2ph_v8hi_mask_round */
    case 3929:  /* avx512fp16_vcvtw2ph_v8hi_mask_round */
    case 3431:  /* *fma_fnmadd_v8df_round */
    case 3422:  /* *fma_fnmadd_v16sf_round */
    case 3412:  /* *fma_fnmadd_v32hf_round */
    case 2510:  /* avx512f_sqrtv8df2_mask_round */
    case 2502:  /* avx512f_sqrtv16sf2_mask_round */
    case 2494:  /* avx512fp16_sqrtv32hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 9391:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 9389:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 9205:  /* vpopcountv8hi_mask */
    case 9203:  /* vpopcountv16hi_mask */
    case 9201:  /* vpopcountv32hi_mask */
    case 9199:  /* vpopcountv32qi_mask */
    case 9197:  /* vpopcountv16qi_mask */
    case 9195:  /* vpopcountv64qi_mask */
    case 9185:  /* vpopcountv2di_mask */
    case 9183:  /* vpopcountv4di_mask */
    case 9181:  /* vpopcountv8di_mask */
    case 9179:  /* vpopcountv4si_mask */
    case 9177:  /* vpopcountv8si_mask */
    case 9175:  /* vpopcountv16si_mask */
    case 9094:  /* clzv2di2_mask */
    case 9092:  /* clzv4di2_mask */
    case 9090:  /* clzv8di2_mask */
    case 9088:  /* clzv4si2_mask */
    case 9086:  /* clzv8si2_mask */
    case 9084:  /* clzv16si2_mask */
    case 8395:  /* avx512dq_broadcastv4df_mask_1 */
    case 8393:  /* avx512dq_broadcastv4di_mask_1 */
    case 8391:  /* avx512dq_broadcastv8df_mask_1 */
    case 8389:  /* avx512dq_broadcastv8di_mask_1 */
    case 8387:  /* avx512dq_broadcastv16si_mask_1 */
    case 8385:  /* avx512dq_broadcastv16sf_mask_1 */
    case 8383:  /* avx512vl_broadcastv8sf_mask_1 */
    case 8381:  /* avx512vl_broadcastv8si_mask_1 */
    case 8339:  /* avx512vl_vec_dup_gprv2df_mask */
    case 8337:  /* avx512vl_vec_dup_gprv4df_mask */
    case 8335:  /* avx512f_vec_dup_gprv8df_mask */
    case 8333:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 8331:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 8329:  /* avx512f_vec_dup_gprv16sf_mask */
    case 8327:  /* avx512vl_vec_dup_gprv2di_mask */
    case 8325:  /* avx512vl_vec_dup_gprv4di_mask */
    case 8323:  /* avx512f_vec_dup_gprv8di_mask */
    case 8321:  /* avx512vl_vec_dup_gprv4si_mask */
    case 8319:  /* avx512vl_vec_dup_gprv8si_mask */
    case 8317:  /* avx512f_vec_dup_gprv16si_mask */
    case 8315:  /* avx512vl_vec_dup_gprv8bf_mask */
    case 8313:  /* avx512vl_vec_dup_gprv16bf_mask */
    case 8311:  /* avx512bw_vec_dup_gprv32bf_mask */
    case 8309:  /* avx512fp16_vec_dup_gprv8hf_mask */
    case 8307:  /* avx512vl_vec_dup_gprv16hf_mask */
    case 8305:  /* avx512bw_vec_dup_gprv32hf_mask */
    case 8303:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 8301:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 8299:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 8297:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 8295:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 8293:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 8291:  /* avx512f_broadcastv8di_mask */
    case 8289:  /* avx512f_broadcastv8df_mask */
    case 8287:  /* avx512f_broadcastv16si_mask */
    case 8285:  /* avx512f_broadcastv16sf_mask */
    case 7923:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 7921:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 7913:  /* avx2_zero_extendv4siv4di2_mask */
    case 7911:  /* avx2_sign_extendv4siv4di2_mask */
    case 7907:  /* avx512f_zero_extendv8siv8di2_mask */
    case 7905:  /* avx512f_sign_extendv8siv8di2_mask */
    case 7899:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 7897:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 7887:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 7885:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 7879:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 7877:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 7872:  /* *sse4_1_zero_extendv2qiv2di2_mask_1 */
    case 7870:  /* *sse4_1_sign_extendv2qiv2di2_mask_1 */
    case 7860:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 7858:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 7848:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 7846:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 7832:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 7830:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 7820:  /* avx2_zero_extendv8hiv8si2_mask */
    case 7818:  /* avx2_sign_extendv8hiv8si2_mask */
    case 7812:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 7810:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 7804:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 7802:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 7792:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 7790:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 7784:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 7782:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 7772:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 7770:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 7760:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 7758:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 7752:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 7750:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 7688:  /* absv8hi2_mask */
    case 7687:  /* absv16hi2_mask */
    case 7686:  /* absv32hi2_mask */
    case 7685:  /* absv32qi2_mask */
    case 7684:  /* absv16qi2_mask */
    case 7683:  /* absv64qi2_mask */
    case 7682:  /* absv2di2_mask */
    case 7681:  /* absv4di2_mask */
    case 7680:  /* absv8di2_mask */
    case 7679:  /* absv4si2_mask */
    case 7678:  /* absv8si2_mask */
    case 7677:  /* absv16si2_mask */
    case 6339:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 6338:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 6337:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 6336:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 6335:  /* avx512vl_truncatev8siv8hi2_mask */
    case 6334:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 6333:  /* avx512vl_us_truncatev4div4si2_mask */
    case 6332:  /* avx512vl_truncatev4div4si2_mask */
    case 6331:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 6319:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 6318:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 6317:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 6312:  /* avx512f_us_truncatev8div8hi2_mask */
    case 6311:  /* avx512f_truncatev8div8hi2_mask */
    case 6310:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 6309:  /* avx512f_us_truncatev8div8si2_mask */
    case 6308:  /* avx512f_truncatev8div8si2_mask */
    case 6307:  /* avx512f_ss_truncatev8div8si2_mask */
    case 6306:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 6305:  /* avx512f_truncatev16siv16hi2_mask */
    case 6304:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 6303:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 6302:  /* avx512f_truncatev16siv16qi2_mask */
    case 6301:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 6280:  /* vec_dupv2df_mask */
    case 4627:  /* vec_extract_hi_v8sf_mask */
    case 4626:  /* vec_extract_hi_v8si_mask */
    case 4623:  /* vec_extract_lo_v8sf_mask */
    case 4622:  /* vec_extract_lo_v8si_mask */
    case 4619:  /* vec_extract_hi_v4df_mask */
    case 4618:  /* vec_extract_hi_v4di_mask */
    case 4615:  /* vec_extract_lo_v4df_mask */
    case 4614:  /* vec_extract_lo_v4di_mask */
    case 4611:  /* vec_extract_lo_v16si_mask */
    case 4610:  /* vec_extract_lo_v16sf_mask */
    case 4607:  /* vec_extract_hi_v16si_mask */
    case 4606:  /* vec_extract_hi_v16sf_mask */
    case 4603:  /* vec_extract_hi_v8di_mask */
    case 4602:  /* vec_extract_hi_v8df_mask */
    case 4599:  /* vec_extract_lo_v8di_mask */
    case 4598:  /* vec_extract_lo_v8df_mask */
    case 4499:  /* sse2_cvtps2pd_mask_1 */
    case 4463:  /* avx_cvtps2pd256_mask */
    case 4460:  /* avx512f_cvtps2pd512_mask */
    case 4453:  /* avx_cvtpd2ps256_mask */
    case 4450:  /* avx512f_cvtpd2ps512_mask */
    case 4434:  /* fixuns_truncv4sfv4si2_mask */
    case 4432:  /* fixuns_truncv8sfv8si2_mask */
    case 4426:  /* fixuns_truncv4sfv4di2_mask */
    case 4424:  /* fix_truncv4sfv4di2_mask */
    case 4421:  /* fixuns_truncv8sfv8di2_mask */
    case 4417:  /* fix_truncv8sfv8di2_mask */
    case 4398:  /* fixuns_truncv2dfv2di2_mask */
    case 4396:  /* fix_truncv2dfv2di2_mask */
    case 4394:  /* fixuns_truncv4dfv4di2_mask */
    case 4392:  /* fix_truncv4dfv4di2_mask */
    case 4389:  /* fixuns_truncv8dfv8di2_mask */
    case 4385:  /* fix_truncv8dfv8di2_mask */
    case 4382:  /* fixuns_truncv4dfv4si2_mask */
    case 4380:  /* fix_truncv4dfv4si2_mask */
    case 4374:  /* fixuns_truncv8dfv8si2_mask */
    case 4370:  /* fix_truncv8dfv8si2_mask */
    case 4340:  /* floatunsv4siv4df2_mask */
    case 4338:  /* floatunsv8siv8df2_mask */
    case 4330:  /* floatunsv4div4sf2_mask */
    case 4328:  /* floatv4div4sf2_mask */
    case 4325:  /* floatunsv8div8sf2_mask */
    case 4321:  /* floatv8div8sf2_mask */
    case 4317:  /* floatunsv2div2df2_mask */
    case 4313:  /* floatv2div2df2_mask */
    case 4309:  /* floatunsv4div4df2_mask */
    case 4305:  /* floatv4div4df2_mask */
    case 4301:  /* floatunsv8div8df2_mask */
    case 4297:  /* floatv8div8df2_mask */
    case 4294:  /* floatv4siv4df2_mask */
    case 4292:  /* floatv8siv8df2_mask */
    case 4256:  /* fix_truncv4sfv4si2_mask */
    case 4254:  /* fix_truncv8sfv8si2_mask */
    case 4251:  /* fixuns_truncv16sfv16si2_mask */
    case 4247:  /* fix_truncv16sfv16si2_mask */
    case 4207:  /* floatunsv4siv4sf2_mask */
    case 4203:  /* floatunsv8siv8sf2_mask */
    case 4199:  /* floatunsv16siv16sf2_mask */
    case 4196:  /* floatv4siv4sf2_mask */
    case 4194:  /* floatv8siv8sf2_mask */
    case 4191:  /* floatv16siv16sf2_mask */
    case 4130:  /* avx512fp16_vcvtps2ph_v8sf_mask */
    case 4126:  /* avx512fp16_vcvtps2ph_v16sf_mask */
    case 4122:  /* avx512fp16_vcvtpd2ph_v8df_mask */
    case 4119:  /* *avx512fp16_float_extend_phv2df2_load_mask */
    case 4115:  /* *avx512fp16_float_extend_phv4sf2_load_mask */
    case 4113:  /* *avx512fp16_float_extend_phv4df2_load_mask */
    case 4106:  /* avx512fp16_float_extend_phv8sf2_mask */
    case 4102:  /* avx512fp16_float_extend_phv16sf2_mask */
    case 4098:  /* avx512fp16_float_extend_phv8df2_mask */
    case 4083:  /* *avx512fp16_fixuns_truncv2di2_load_mask */
    case 4081:  /* *avx512fp16_fix_truncv2di2_load_mask */
    case 4075:  /* *avx512fp16_fixuns_truncv4di2_load_mask */
    case 4073:  /* *avx512fp16_fix_truncv4di2_load_mask */
    case 4071:  /* *avx512fp16_fixuns_truncv4si2_load_mask */
    case 4069:  /* *avx512fp16_fix_truncv4si2_load_mask */
    case 4058:  /* avx512fp16_fixuns_truncv8di2_mask */
    case 4054:  /* avx512fp16_fix_truncv8di2_mask */
    case 4050:  /* avx512fp16_fixuns_truncv16si2_mask */
    case 4046:  /* avx512fp16_fix_truncv16si2_mask */
    case 4042:  /* avx512fp16_fixuns_truncv8si2_mask */
    case 4038:  /* avx512fp16_fix_truncv8si2_mask */
    case 4034:  /* avx512fp16_fixuns_truncv32hi2_mask */
    case 4030:  /* avx512fp16_fix_truncv32hi2_mask */
    case 4026:  /* avx512fp16_fixuns_truncv16hi2_mask */
    case 4022:  /* avx512fp16_fix_truncv16hi2_mask */
    case 4018:  /* avx512fp16_fixuns_truncv8hi2_mask */
    case 4014:  /* avx512fp16_fix_truncv8hi2_mask */
    case 3972:  /* avx512fp16_vcvtuqq2ph_v8di_mask */
    case 3968:  /* avx512fp16_vcvtqq2ph_v8di_mask */
    case 3964:  /* avx512fp16_vcvtudq2ph_v16si_mask */
    case 3960:  /* avx512fp16_vcvtdq2ph_v16si_mask */
    case 3956:  /* avx512fp16_vcvtudq2ph_v8si_mask */
    case 3952:  /* avx512fp16_vcvtdq2ph_v8si_mask */
    case 3948:  /* avx512fp16_vcvtuw2ph_v32hi_mask */
    case 3944:  /* avx512fp16_vcvtw2ph_v32hi_mask */
    case 3940:  /* avx512fp16_vcvtuw2ph_v16hi_mask */
    case 3936:  /* avx512fp16_vcvtw2ph_v16hi_mask */
    case 3932:  /* avx512fp16_vcvtuw2ph_v8hi_mask */
    case 3928:  /* avx512fp16_vcvtw2ph_v8hi_mask */
    case 3435:  /* *fma_fnmadd_v2df */
    case 3433:  /* *fma_fnmadd_v4df */
    case 3429:  /* *fma_fnmadd_v8df */
    case 3428:  /* *fma_fnmadd_df */
    case 3426:  /* *fma_fnmadd_v4sf */
    case 3424:  /* *fma_fnmadd_v8sf */
    case 3420:  /* *fma_fnmadd_v16sf */
    case 3419:  /* *fma_fnmadd_sf */
    case 3418:  /* *fma_fnmadd_hf */
    case 3416:  /* *fma_fnmadd_v8hf */
    case 3414:  /* *fma_fnmadd_v16hf */
    case 3410:  /* *fma_fnmadd_v32hf */
    case 3409:  /* *fma_fnmadd_v4df */
    case 3408:  /* *fma_fnmadd_v8sf */
    case 3407:  /* *fma_fnmadd_v2df */
    case 3406:  /* *fma_fnmadd_v4sf */
    case 3405:  /* *fma_fnmadd_df */
    case 3404:  /* *fma_fnmadd_sf */
    case 2514:  /* sse2_sqrtv2df2_mask */
    case 2512:  /* avx_sqrtv4df2_mask */
    case 2509:  /* avx512f_sqrtv8df2_mask */
    case 2506:  /* sse_sqrtv4sf2_mask */
    case 2504:  /* avx_sqrtv8sf2_mask */
    case 2501:  /* avx512f_sqrtv16sf2_mask */
    case 2498:  /* avx512fp16_sqrtv8hf2_mask */
    case 2496:  /* avx512fp16_sqrtv16hf2_mask */
    case 2493:  /* avx512fp16_sqrtv32hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4459:  /* avx512f_cvtps2pd512_round */
    case 4449:  /* *avx512f_cvtpd2ps512_round */
    case 4420:  /* fixuns_truncv8sfv8di2_round */
    case 4416:  /* fix_truncv8sfv8di2_round */
    case 4388:  /* fixuns_truncv8dfv8di2_round */
    case 4384:  /* fix_truncv8dfv8di2_round */
    case 4373:  /* fixuns_truncv8dfv8si2_round */
    case 4369:  /* fix_truncv8dfv8si2_round */
    case 4324:  /* floatunsv8div8sf2_round */
    case 4320:  /* floatv8div8sf2_round */
    case 4316:  /* floatunsv2div2df2_round */
    case 4312:  /* floatv2div2df2_round */
    case 4308:  /* floatunsv4div4df2_round */
    case 4304:  /* floatv4div4df2_round */
    case 4300:  /* floatunsv8div8df2_round */
    case 4296:  /* floatv8div8df2_round */
    case 4250:  /* fixuns_truncv16sfv16si2_round */
    case 4246:  /* fix_truncv16sfv16si2_round */
    case 4206:  /* *floatunsv4siv4sf2_round */
    case 4202:  /* *floatunsv8siv8sf2_round */
    case 4198:  /* *floatunsv16siv16sf2_round */
    case 4190:  /* floatv16siv16sf2_round */
    case 4129:  /* avx512fp16_vcvtps2ph_v8sf_round */
    case 4125:  /* avx512fp16_vcvtps2ph_v16sf_round */
    case 4121:  /* avx512fp16_vcvtpd2ph_v8df_round */
    case 4105:  /* avx512fp16_float_extend_phv8sf2_round */
    case 4101:  /* avx512fp16_float_extend_phv16sf2_round */
    case 4097:  /* avx512fp16_float_extend_phv8df2_round */
    case 4057:  /* avx512fp16_fixuns_truncv8di2_round */
    case 4053:  /* avx512fp16_fix_truncv8di2_round */
    case 4049:  /* avx512fp16_fixuns_truncv16si2_round */
    case 4045:  /* avx512fp16_fix_truncv16si2_round */
    case 4041:  /* avx512fp16_fixuns_truncv8si2_round */
    case 4037:  /* avx512fp16_fix_truncv8si2_round */
    case 4033:  /* avx512fp16_fixuns_truncv32hi2_round */
    case 4029:  /* avx512fp16_fix_truncv32hi2_round */
    case 4025:  /* avx512fp16_fixuns_truncv16hi2_round */
    case 4021:  /* avx512fp16_fix_truncv16hi2_round */
    case 4017:  /* avx512fp16_fixuns_truncv8hi2_round */
    case 4013:  /* avx512fp16_fix_truncv8hi2_round */
    case 3971:  /* avx512fp16_vcvtuqq2ph_v8di_round */
    case 3967:  /* avx512fp16_vcvtqq2ph_v8di_round */
    case 3963:  /* avx512fp16_vcvtudq2ph_v16si_round */
    case 3959:  /* avx512fp16_vcvtdq2ph_v16si_round */
    case 3955:  /* avx512fp16_vcvtudq2ph_v8si_round */
    case 3951:  /* avx512fp16_vcvtdq2ph_v8si_round */
    case 3947:  /* avx512fp16_vcvtuw2ph_v32hi_round */
    case 3943:  /* avx512fp16_vcvtw2ph_v32hi_round */
    case 3939:  /* avx512fp16_vcvtuw2ph_v16hi_round */
    case 3935:  /* avx512fp16_vcvtw2ph_v16hi_round */
    case 3931:  /* avx512fp16_vcvtuw2ph_v8hi_round */
    case 3927:  /* avx512fp16_vcvtw2ph_v8hi_round */
    case 2508:  /* avx512f_sqrtv8df2_round */
    case 2500:  /* avx512f_sqrtv16sf2_round */
    case 2492:  /* avx512fp16_sqrtv32hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2566:  /* avx512fp16_vmrsqrtv8hf2_mask */
    case 2562:  /* rsqrt14_v2df_mask */
    case 2561:  /* rsqrt14_v4sf_mask */
    case 2490:  /* srcp14v2df_mask */
    case 2489:  /* srcp14v4sf_mask */
    case 2473:  /* avx512fp16_vmrcpv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2567:  /* *avx512fp16_vmrsqrtv8hf2 */
    case 2564:  /* *sse_vmrsqrtv4sf2 */
    case 2474:  /* *avx512fp16_vmrcpv8hf2 */
    case 2465:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8111:  /* *xop_vmfrczv2df2 */
    case 8110:  /* *xop_vmfrczv4sf2 */
    case 8033:  /* avx512er_vmrsqrt28v2df */
    case 8029:  /* avx512er_vmrsqrt28v4sf */
    case 8017:  /* avx512er_vmrcp28v2df */
    case 8013:  /* avx512er_vmrcp28v4sf */
    case 4353:  /* *avx_cvtpd2dq256_2 */
    case 2565:  /* avx512fp16_vmrsqrtv8hf2 */
    case 2563:  /* sse_vmrsqrtv4sf2 */
    case 2560:  /* rsqrt14v2df */
    case 2559:  /* rsqrt14v4sf */
    case 2488:  /* srcp14v2df */
    case 2487:  /* srcp14v4sf */
    case 2472:  /* avx512fp16_vmrcpv8hf2 */
    case 2464:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2694:  /* sse2_vmsminv2df3_mask_round */
    case 2690:  /* sse2_vmsmaxv2df3_mask_round */
    case 2686:  /* sse_vmsminv4sf3_mask_round */
    case 2682:  /* sse_vmsmaxv4sf3_mask_round */
    case 2678:  /* avx512fp16_vmsminv8hf3_mask_round */
    case 2674:  /* avx512fp16_vmsmaxv8hf3_mask_round */
    case 2437:  /* sse2_vmdivv2df3_mask_round */
    case 2433:  /* sse2_vmmulv2df3_mask_round */
    case 2429:  /* sse_vmdivv4sf3_mask_round */
    case 2425:  /* sse_vmmulv4sf3_mask_round */
    case 2421:  /* avx512fp16_vmdivv8hf3_mask_round */
    case 2417:  /* avx512fp16_vmmulv8hf3_mask_round */
    case 2371:  /* sse2_vmsubv2df3_mask_round */
    case 2367:  /* sse2_vmaddv2df3_mask_round */
    case 2363:  /* sse_vmsubv4sf3_mask_round */
    case 2359:  /* sse_vmaddv4sf3_mask_round */
    case 2355:  /* avx512fp16_vmsubv8hf3_mask_round */
    case 2351:  /* avx512fp16_vmaddv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2692:  /* sse2_vmsminv2df3_mask */
    case 2688:  /* sse2_vmsmaxv2df3_mask */
    case 2684:  /* sse_vmsminv4sf3_mask */
    case 2680:  /* sse_vmsmaxv4sf3_mask */
    case 2676:  /* avx512fp16_vmsminv8hf3_mask */
    case 2672:  /* avx512fp16_vmsmaxv8hf3_mask */
    case 2436:  /* sse2_vmdivv2df3_mask */
    case 2432:  /* sse2_vmmulv2df3_mask */
    case 2428:  /* sse_vmdivv4sf3_mask */
    case 2424:  /* sse_vmmulv4sf3_mask */
    case 2420:  /* avx512fp16_vmdivv8hf3_mask */
    case 2416:  /* avx512fp16_vmmulv8hf3_mask */
    case 2370:  /* sse2_vmsubv2df3_mask */
    case 2366:  /* sse2_vmaddv2df3_mask */
    case 2362:  /* sse_vmsubv4sf3_mask */
    case 2358:  /* sse_vmaddv4sf3_mask */
    case 2354:  /* avx512fp16_vmsubv8hf3_mask */
    case 2350:  /* avx512fp16_vmaddv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2693:  /* sse2_vmsminv2df3_round */
    case 2689:  /* sse2_vmsmaxv2df3_round */
    case 2685:  /* sse_vmsminv4sf3_round */
    case 2681:  /* sse_vmsmaxv4sf3_round */
    case 2677:  /* avx512fp16_vmsminv8hf3_round */
    case 2673:  /* avx512fp16_vmsmaxv8hf3_round */
    case 2435:  /* sse2_vmdivv2df3_round */
    case 2431:  /* sse2_vmmulv2df3_round */
    case 2427:  /* sse_vmdivv4sf3_round */
    case 2423:  /* sse_vmmulv4sf3_round */
    case 2419:  /* avx512fp16_vmdivv8hf3_round */
    case 2415:  /* avx512fp16_vmmulv8hf3_round */
    case 2369:  /* sse2_vmsubv2df3_round */
    case 2365:  /* sse2_vmaddv2df3_round */
    case 2361:  /* sse_vmsubv4sf3_round */
    case 2357:  /* sse_vmaddv4sf3_round */
    case 2353:  /* avx512fp16_vmsubv8hf3_round */
    case 2349:  /* avx512fp16_vmaddv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2691:  /* sse2_vmsminv2df3 */
    case 2687:  /* sse2_vmsmaxv2df3 */
    case 2683:  /* sse_vmsminv4sf3 */
    case 2679:  /* sse_vmsmaxv4sf3 */
    case 2675:  /* avx512fp16_vmsminv8hf3 */
    case 2671:  /* avx512fp16_vmsmaxv8hf3 */
    case 2434:  /* sse2_vmdivv2df3 */
    case 2430:  /* sse2_vmmulv2df3 */
    case 2426:  /* sse_vmdivv4sf3 */
    case 2422:  /* sse_vmmulv4sf3 */
    case 2418:  /* avx512fp16_vmdivv8hf3 */
    case 2414:  /* avx512fp16_vmmulv8hf3 */
    case 2368:  /* sse2_vmsubv2df3 */
    case 2364:  /* sse2_vmaddv2df3 */
    case 2360:  /* sse_vmsubv4sf3 */
    case 2356:  /* sse_vmaddv4sf3 */
    case 2352:  /* avx512fp16_vmsubv8hf3 */
    case 2348:  /* avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2413:  /* *sse2_vmdivv2df3 */
    case 2412:  /* *sse2_vmmulv2df3 */
    case 2411:  /* *sse_vmdivv4sf3 */
    case 2410:  /* *sse_vmmulv4sf3 */
    case 2409:  /* *avx512fp16_vmdivv8hf3 */
    case 2408:  /* *avx512fp16_vmmulv8hf3 */
    case 2347:  /* *sse2_vmsubv2df3 */
    case 2346:  /* *sse2_vmaddv2df3 */
    case 2345:  /* *sse_vmsubv4sf3 */
    case 2344:  /* *sse_vmaddv4sf3 */
    case 2343:  /* *avx512fp16_vmsubv8hf3 */
    case 2342:  /* *avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2608:  /* *sminv8df3_mask_round */
    case 2604:  /* *smaxv8df3_mask_round */
    case 2592:  /* *sminv16sf3_mask_round */
    case 2588:  /* *smaxv16sf3_mask_round */
    case 2576:  /* *sminv32hf3_mask_round */
    case 2572:  /* *smaxv32hf3_mask_round */
    case 2457:  /* avx512f_divv8df3_mask_round */
    case 2449:  /* avx512f_divv16sf3_mask_round */
    case 2441:  /* avx512fp16_divv32hf3_mask_round */
    case 2407:  /* *mulv2df3_mask_round */
    case 2403:  /* *mulv4df3_mask_round */
    case 2399:  /* *mulv8df3_mask_round */
    case 2395:  /* *mulv4sf3_mask_round */
    case 2391:  /* *mulv8sf3_mask_round */
    case 2387:  /* *mulv16sf3_mask_round */
    case 2383:  /* *mulv8hf3_mask_round */
    case 2379:  /* *mulv16hf3_mask_round */
    case 2375:  /* *mulv32hf3_mask_round */
    case 2341:  /* *subv2df3_mask_round */
    case 2337:  /* *addv2df3_mask_round */
    case 2333:  /* *subv4df3_mask_round */
    case 2329:  /* *addv4df3_mask_round */
    case 2325:  /* *subv8df3_mask_round */
    case 2321:  /* *addv8df3_mask_round */
    case 2317:  /* *subv4sf3_mask_round */
    case 2313:  /* *addv4sf3_mask_round */
    case 2309:  /* *subv8sf3_mask_round */
    case 2305:  /* *addv8sf3_mask_round */
    case 2301:  /* *subv16sf3_mask_round */
    case 2297:  /* *addv16sf3_mask_round */
    case 2293:  /* *subv8hf3_mask_round */
    case 2289:  /* *addv8hf3_mask_round */
    case 2285:  /* *subv16hf3_mask_round */
    case 2281:  /* *addv16hf3_mask_round */
    case 2277:  /* *subv32hf3_mask_round */
    case 2273:  /* *addv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8632:  /* avx512bw_lshrvv32hi_mask */
    case 8630:  /* avx512bw_ashlvv32hi_mask */
    case 8628:  /* avx512vl_lshrvv16hi_mask */
    case 8626:  /* avx512vl_ashlvv16hi_mask */
    case 8624:  /* avx512vl_lshrvv8hi_mask */
    case 8622:  /* avx512vl_ashlvv8hi_mask */
    case 8620:  /* avx2_lshrvv2di_mask */
    case 8618:  /* avx2_ashlvv2di_mask */
    case 8616:  /* avx2_lshrvv4di_mask */
    case 8614:  /* avx2_ashlvv4di_mask */
    case 8612:  /* avx512f_lshrvv8di_mask */
    case 8610:  /* avx512f_ashlvv8di_mask */
    case 8608:  /* avx2_lshrvv4si_mask */
    case 8606:  /* avx2_ashlvv4si_mask */
    case 8604:  /* avx2_lshrvv8si_mask */
    case 8602:  /* avx2_ashlvv8si_mask */
    case 8600:  /* avx512f_lshrvv16si_mask */
    case 8598:  /* avx512f_ashlvv16si_mask */
    case 8596:  /* avx512bw_ashrvv32hi_mask */
    case 8594:  /* avx512vl_ashrvv16hi_mask */
    case 8592:  /* avx512vl_ashrvv8hi_mask */
    case 8590:  /* avx512f_ashrvv8di_mask */
    case 8588:  /* avx2_ashrvv4di_mask */
    case 8586:  /* avx2_ashrvv2di_mask */
    case 8584:  /* avx512f_ashrvv16si_mask */
    case 8582:  /* avx2_ashrvv8si_mask */
    case 8580:  /* avx2_ashrvv4si_mask */
    case 7081:  /* *xorv2di3_mask */
    case 7079:  /* *iorv2di3_mask */
    case 7077:  /* *andv2di3_mask */
    case 7075:  /* *xorv4di3_mask */
    case 7073:  /* *iorv4di3_mask */
    case 7071:  /* *andv4di3_mask */
    case 7069:  /* *xorv8di3_mask */
    case 7067:  /* *iorv8di3_mask */
    case 7065:  /* *andv8di3_mask */
    case 7063:  /* *xorv4si3_mask */
    case 7061:  /* *iorv4si3_mask */
    case 7059:  /* *andv4si3_mask */
    case 7057:  /* *xorv8si3_mask */
    case 7055:  /* *iorv8si3_mask */
    case 7053:  /* *andv8si3_mask */
    case 7051:  /* *xorv16si3_mask */
    case 7049:  /* *iorv16si3_mask */
    case 7047:  /* *andv16si3_mask */
    case 7015:  /* one_cmplv2di2_mask */
    case 7013:  /* one_cmplv4di2_mask */
    case 7011:  /* one_cmplv4si2_mask */
    case 7009:  /* one_cmplv8si2_mask */
    case 7001:  /* one_cmplv8di2_mask */
    case 6999:  /* one_cmplv16si2_mask */
    case 6957:  /* *sse4_1_uminv4si3_mask */
    case 6955:  /* *sse4_1_umaxv4si3_mask */
    case 6953:  /* *sse4_1_uminv8hi3_mask */
    case 6951:  /* *sse4_1_umaxv8hi3_mask */
    case 6947:  /* *sse4_1_sminv4si3_mask */
    case 6945:  /* *sse4_1_smaxv4si3_mask */
    case 6943:  /* *sse4_1_sminv16qi3_mask */
    case 6941:  /* *sse4_1_smaxv16qi3_mask */
    case 6939:  /* uminv8hi3_mask */
    case 6937:  /* umaxv8hi3_mask */
    case 6935:  /* sminv8hi3_mask */
    case 6933:  /* smaxv8hi3_mask */
    case 6931:  /* uminv16hi3_mask */
    case 6929:  /* umaxv16hi3_mask */
    case 6927:  /* sminv16hi3_mask */
    case 6925:  /* smaxv16hi3_mask */
    case 6923:  /* uminv32hi3_mask */
    case 6921:  /* umaxv32hi3_mask */
    case 6919:  /* sminv32hi3_mask */
    case 6917:  /* smaxv32hi3_mask */
    case 6915:  /* uminv32qi3_mask */
    case 6913:  /* umaxv32qi3_mask */
    case 6911:  /* sminv32qi3_mask */
    case 6909:  /* smaxv32qi3_mask */
    case 6907:  /* uminv16qi3_mask */
    case 6905:  /* umaxv16qi3_mask */
    case 6903:  /* sminv16qi3_mask */
    case 6901:  /* smaxv16qi3_mask */
    case 6899:  /* uminv64qi3_mask */
    case 6897:  /* umaxv64qi3_mask */
    case 6895:  /* sminv64qi3_mask */
    case 6893:  /* smaxv64qi3_mask */
    case 6891:  /* *avx512f_uminv2di3_mask */
    case 6889:  /* *avx512f_umaxv2di3_mask */
    case 6887:  /* *avx512f_sminv2di3_mask */
    case 6885:  /* *avx512f_smaxv2di3_mask */
    case 6883:  /* *avx512f_uminv4di3_mask */
    case 6881:  /* *avx512f_umaxv4di3_mask */
    case 6879:  /* *avx512f_sminv4di3_mask */
    case 6877:  /* *avx512f_smaxv4di3_mask */
    case 6875:  /* *avx512f_uminv8di3_mask */
    case 6873:  /* *avx512f_umaxv8di3_mask */
    case 6871:  /* *avx512f_sminv8di3_mask */
    case 6869:  /* *avx512f_smaxv8di3_mask */
    case 6867:  /* *avx512f_uminv4si3_mask */
    case 6865:  /* *avx512f_umaxv4si3_mask */
    case 6863:  /* *avx512f_sminv4si3_mask */
    case 6861:  /* *avx512f_smaxv4si3_mask */
    case 6859:  /* *avx512f_uminv8si3_mask */
    case 6857:  /* *avx512f_umaxv8si3_mask */
    case 6855:  /* *avx512f_sminv8si3_mask */
    case 6853:  /* *avx512f_smaxv8si3_mask */
    case 6851:  /* *avx512f_uminv16si3_mask */
    case 6849:  /* *avx512f_umaxv16si3_mask */
    case 6847:  /* *avx512f_sminv16si3_mask */
    case 6845:  /* *avx512f_smaxv16si3_mask */
    case 6831:  /* avx512vl_rorv2di_mask */
    case 6829:  /* avx512vl_rolv2di_mask */
    case 6827:  /* avx512vl_rorv4di_mask */
    case 6825:  /* avx512vl_rolv4di_mask */
    case 6823:  /* avx512f_rorv8di_mask */
    case 6821:  /* avx512f_rolv8di_mask */
    case 6819:  /* avx512vl_rorv4si_mask */
    case 6817:  /* avx512vl_rolv4si_mask */
    case 6815:  /* avx512vl_rorv8si_mask */
    case 6813:  /* avx512vl_rolv8si_mask */
    case 6811:  /* avx512f_rorv16si_mask */
    case 6809:  /* avx512f_rolv16si_mask */
    case 6807:  /* avx512vl_rorvv2di_mask */
    case 6805:  /* avx512vl_rolvv2di_mask */
    case 6803:  /* avx512vl_rorvv4di_mask */
    case 6801:  /* avx512vl_rolvv4di_mask */
    case 6799:  /* avx512f_rorvv8di_mask */
    case 6797:  /* avx512f_rolvv8di_mask */
    case 6795:  /* avx512vl_rorvv4si_mask */
    case 6793:  /* avx512vl_rolvv4si_mask */
    case 6791:  /* avx512vl_rorvv8si_mask */
    case 6789:  /* avx512vl_rolvv8si_mask */
    case 6787:  /* avx512f_rorvv16si_mask */
    case 6785:  /* avx512f_rolvv16si_mask */
    case 6768:  /* lshrv8di3_mask */
    case 6766:  /* ashlv8di3_mask */
    case 6764:  /* lshrv16si3_mask */
    case 6762:  /* ashlv16si3_mask */
    case 6760:  /* lshrv32hi3_mask */
    case 6758:  /* ashlv32hi3_mask */
    case 6744:  /* lshrv2di3_mask */
    case 6742:  /* ashlv2di3_mask */
    case 6740:  /* lshrv4di3_mask */
    case 6738:  /* ashlv4di3_mask */
    case 6736:  /* lshrv4si3_mask */
    case 6734:  /* ashlv4si3_mask */
    case 6732:  /* lshrv8si3_mask */
    case 6730:  /* ashlv8si3_mask */
    case 6728:  /* lshrv8hi3_mask */
    case 6726:  /* ashlv8hi3_mask */
    case 6724:  /* lshrv16hi3_mask */
    case 6722:  /* ashlv16hi3_mask */
    case 6720:  /* ashrv8di3_mask */
    case 6718:  /* ashrv16si3_mask */
    case 6716:  /* ashrv4di3_mask */
    case 6714:  /* ashrv32hi3_mask */
    case 6708:  /* ashrv2di3_mask */
    case 6706:  /* ashrv4si3_mask */
    case 6704:  /* ashrv8si3_mask */
    case 6702:  /* ashrv8hi3_mask */
    case 6700:  /* ashrv16hi3_mask */
    case 6698:  /* *sse4_1_mulv4si3_mask */
    case 6696:  /* *avx2_mulv8si3_mask */
    case 6694:  /* *avx512f_mulv16si3_mask */
    case 6692:  /* *avx512dq_mulv2di3_mask */
    case 6690:  /* *avx512dq_mulv4di3_mask */
    case 6688:  /* *avx512dq_mulv8di3_mask */
    case 6654:  /* *mulv8hi3_mask */
    case 6652:  /* *mulv16hi3_mask */
    case 6650:  /* *mulv32hi3_mask */
    case 6648:  /* *sse2_ussubv8hi3_mask */
    case 6646:  /* *sse2_sssubv8hi3_mask */
    case 6644:  /* *sse2_usaddv8hi3_mask */
    case 6642:  /* *sse2_ssaddv8hi3_mask */
    case 6640:  /* *avx2_ussubv16hi3_mask */
    case 6638:  /* *avx2_sssubv16hi3_mask */
    case 6636:  /* *avx2_usaddv16hi3_mask */
    case 6634:  /* *avx2_ssaddv16hi3_mask */
    case 6632:  /* *avx512bw_ussubv32hi3_mask */
    case 6630:  /* *avx512bw_sssubv32hi3_mask */
    case 6628:  /* *avx512bw_usaddv32hi3_mask */
    case 6626:  /* *avx512bw_ssaddv32hi3_mask */
    case 6624:  /* *sse2_ussubv16qi3_mask */
    case 6622:  /* *sse2_sssubv16qi3_mask */
    case 6620:  /* *sse2_usaddv16qi3_mask */
    case 6618:  /* *sse2_ssaddv16qi3_mask */
    case 6616:  /* *avx2_ussubv32qi3_mask */
    case 6614:  /* *avx2_sssubv32qi3_mask */
    case 6612:  /* *avx2_usaddv32qi3_mask */
    case 6610:  /* *avx2_ssaddv32qi3_mask */
    case 6608:  /* *avx512bw_ussubv64qi3_mask */
    case 6606:  /* *avx512bw_sssubv64qi3_mask */
    case 6604:  /* *avx512bw_usaddv64qi3_mask */
    case 6602:  /* *avx512bw_ssaddv64qi3_mask */
    case 6600:  /* *subv8hi3_mask */
    case 6599:  /* *addv8hi3_mask */
    case 6598:  /* *subv16hi3_mask */
    case 6597:  /* *addv16hi3_mask */
    case 6596:  /* *subv32hi3_mask */
    case 6595:  /* *addv32hi3_mask */
    case 6594:  /* *subv32qi3_mask */
    case 6593:  /* *addv32qi3_mask */
    case 6592:  /* *subv16qi3_mask */
    case 6591:  /* *addv16qi3_mask */
    case 6590:  /* *subv64qi3_mask */
    case 6589:  /* *addv64qi3_mask */
    case 6588:  /* *subv2di3_mask */
    case 6587:  /* *addv2di3_mask */
    case 6586:  /* *subv4di3_mask */
    case 6585:  /* *addv4di3_mask */
    case 6584:  /* *subv8di3_mask */
    case 6583:  /* *addv8di3_mask */
    case 6582:  /* *subv4si3_mask */
    case 6581:  /* *addv4si3_mask */
    case 6580:  /* *subv8si3_mask */
    case 6579:  /* *addv8si3_mask */
    case 6578:  /* *subv16si3_mask */
    case 6577:  /* *addv16si3_mask */
    case 3247:  /* *xorv8df3_mask */
    case 3245:  /* *iorv8df3_mask */
    case 3243:  /* *andv8df3_mask */
    case 3241:  /* *xorv16sf3_mask */
    case 3239:  /* *iorv16sf3_mask */
    case 3237:  /* *andv16sf3_mask */
    case 3232:  /* *xorv2df3_mask */
    case 3230:  /* *iorv2df3_mask */
    case 3228:  /* *andv2df3_mask */
    case 3226:  /* *xorv4df3_mask */
    case 3224:  /* *iorv4df3_mask */
    case 3222:  /* *andv4df3_mask */
    case 3220:  /* *xorv4sf3_mask */
    case 3218:  /* *iorv4sf3_mask */
    case 3216:  /* *andv4sf3_mask */
    case 3214:  /* *xorv8sf3_mask */
    case 3212:  /* *iorv8sf3_mask */
    case 3210:  /* *andv8sf3_mask */
    case 2616:  /* *sminv2df3_mask */
    case 2614:  /* *smaxv2df3_mask */
    case 2612:  /* *sminv4df3_mask */
    case 2610:  /* *smaxv4df3_mask */
    case 2607:  /* *sminv8df3_mask */
    case 2603:  /* *smaxv8df3_mask */
    case 2600:  /* *sminv4sf3_mask */
    case 2598:  /* *smaxv4sf3_mask */
    case 2596:  /* *sminv8sf3_mask */
    case 2594:  /* *smaxv8sf3_mask */
    case 2591:  /* *sminv16sf3_mask */
    case 2587:  /* *smaxv16sf3_mask */
    case 2584:  /* *sminv8hf3_mask */
    case 2582:  /* *smaxv8hf3_mask */
    case 2580:  /* *sminv16hf3_mask */
    case 2578:  /* *smaxv16hf3_mask */
    case 2575:  /* *sminv32hf3_mask */
    case 2571:  /* *smaxv32hf3_mask */
    case 2461:  /* sse2_divv2df3_mask */
    case 2459:  /* avx_divv4df3_mask */
    case 2456:  /* avx512f_divv8df3_mask */
    case 2453:  /* sse_divv4sf3_mask */
    case 2451:  /* avx_divv8sf3_mask */
    case 2448:  /* avx512f_divv16sf3_mask */
    case 2445:  /* avx512fp16_divv8hf3_mask */
    case 2443:  /* avx512fp16_divv16hf3_mask */
    case 2440:  /* avx512fp16_divv32hf3_mask */
    case 2406:  /* *mulv2df3_mask */
    case 2402:  /* *mulv4df3_mask */
    case 2398:  /* *mulv8df3_mask */
    case 2394:  /* *mulv4sf3_mask */
    case 2390:  /* *mulv8sf3_mask */
    case 2386:  /* *mulv16sf3_mask */
    case 2382:  /* *mulv8hf3_mask */
    case 2378:  /* *mulv16hf3_mask */
    case 2374:  /* *mulv32hf3_mask */
    case 2340:  /* *subv2df3_mask */
    case 2336:  /* *addv2df3_mask */
    case 2332:  /* *subv4df3_mask */
    case 2328:  /* *addv4df3_mask */
    case 2324:  /* *subv8df3_mask */
    case 2320:  /* *addv8df3_mask */
    case 2316:  /* *subv4sf3_mask */
    case 2312:  /* *addv4sf3_mask */
    case 2308:  /* *subv8sf3_mask */
    case 2304:  /* *addv8sf3_mask */
    case 2300:  /* *subv16sf3_mask */
    case 2296:  /* *addv16sf3_mask */
    case 2292:  /* *subv8hf3_mask */
    case 2288:  /* *addv8hf3_mask */
    case 2284:  /* *subv16hf3_mask */
    case 2280:  /* *addv16hf3_mask */
    case 2276:  /* *subv32hf3_mask */
    case 2272:  /* *addv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2606:  /* *sminv8df3_round */
    case 2602:  /* *smaxv8df3_round */
    case 2590:  /* *sminv16sf3_round */
    case 2586:  /* *smaxv16sf3_round */
    case 2574:  /* *sminv32hf3_round */
    case 2570:  /* *smaxv32hf3_round */
    case 2455:  /* avx512f_divv8df3_round */
    case 2447:  /* avx512f_divv16sf3_round */
    case 2439:  /* avx512fp16_divv32hf3_round */
    case 2405:  /* *mulv2df3_round */
    case 2401:  /* *mulv4df3_round */
    case 2397:  /* *mulv8df3_round */
    case 2393:  /* *mulv4sf3_round */
    case 2389:  /* *mulv8sf3_round */
    case 2385:  /* *mulv16sf3_round */
    case 2381:  /* *mulv8hf3_round */
    case 2377:  /* *mulv16hf3_round */
    case 2373:  /* *mulv32hf3_round */
    case 2339:  /* *subv2df3_round */
    case 2335:  /* *addv2df3_round */
    case 2331:  /* *subv4df3_round */
    case 2327:  /* *addv4df3_round */
    case 2323:  /* *subv8df3_round */
    case 2319:  /* *addv8df3_round */
    case 2315:  /* *subv4sf3_round */
    case 2311:  /* *addv4sf3_round */
    case 2307:  /* *subv8sf3_round */
    case 2303:  /* *addv8sf3_round */
    case 2299:  /* *subv16sf3_round */
    case 2295:  /* *addv16sf3_round */
    case 2291:  /* *subv8hf3_round */
    case 2287:  /* *addv8hf3_round */
    case 2283:  /* *subv16hf3_round */
    case 2279:  /* *addv16hf3_round */
    case 2275:  /* *subv32hf3_round */
    case 2271:  /* *addv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2245:  /* kunpckdi */
    case 2244:  /* kunpcksi */
    case 2243:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 2171:  /* *avx512vl_storev8bf_mask */
    case 2170:  /* *avx512vl_storev16bf_mask */
    case 2169:  /* *avx512bw_storev32bf_mask */
    case 2168:  /* *avx512fp16_storev8hf_mask */
    case 2167:  /* *avx512vl_storev16hf_mask */
    case 2166:  /* *avx512bw_storev32hf_mask */
    case 2165:  /* *avx512vl_storev8hi_mask */
    case 2164:  /* *avx512vl_storev16hi_mask */
    case 2163:  /* *avx512bw_storev32hi_mask */
    case 2162:  /* *avx512vl_storev32qi_mask */
    case 2161:  /* *avx512vl_storev16qi_mask */
    case 2160:  /* *avx512bw_storev64qi_mask */
    case 2159:  /* *avx512vl_storev2df_mask */
    case 2158:  /* *avx512vl_storev4df_mask */
    case 2157:  /* *avx512f_storev8df_mask */
    case 2156:  /* *avx512vl_storev4sf_mask */
    case 2155:  /* *avx512vl_storev8sf_mask */
    case 2154:  /* *avx512f_storev16sf_mask */
    case 2153:  /* *avx512vl_storev2di_mask */
    case 2152:  /* *avx512vl_storev4di_mask */
    case 2151:  /* *avx512f_storev8di_mask */
    case 2150:  /* *avx512vl_storev4si_mask */
    case 2149:  /* *avx512vl_storev8si_mask */
    case 2148:  /* *avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 2123:  /* avx512f_storedf_mask */
    case 2122:  /* avx512f_storesf_mask */
    case 2121:  /* avx512f_storehf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 3767:  /* *fma4i_vmfnmadd_v2df */
    case 3766:  /* *fma4i_vmfnmadd_v4sf */
    case 2120:  /* *avx512f_loaddf_mask */
    case 2119:  /* *avx512f_loadsf_mask */
    case 2118:  /* *avx512f_loadhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2117:  /* avx512f_movdf_mask */
    case 2116:  /* avx512f_movsf_mask */
    case 2115:  /* avx512f_movhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 9106:  /* conflictv2di_mask */
    case 9104:  /* conflictv4di_mask */
    case 9102:  /* conflictv8di_mask */
    case 9100:  /* conflictv4si_mask */
    case 9098:  /* conflictv8si_mask */
    case 9096:  /* conflictv16si_mask */
    case 8678:  /* avx512f_vcvtph2ps512_mask */
    case 8675:  /* vcvtph2ps256_mask */
    case 8673:  /* *vcvtph2ps_load_mask */
    case 8027:  /* avx512er_rsqrt28v8df_mask */
    case 8023:  /* avx512er_rsqrt28v16sf_mask */
    case 8011:  /* avx512er_rcp28v8df_mask */
    case 8007:  /* avx512er_rcp28v16sf_mask */
    case 8003:  /* avx512er_exp2v8df_mask */
    case 7999:  /* avx512er_exp2v16sf_mask */
    case 6114:  /* avx512vl_getexpv2df_mask */
    case 6110:  /* avx512vl_getexpv4df_mask */
    case 6106:  /* avx512f_getexpv8df_mask */
    case 6102:  /* avx512vl_getexpv4sf_mask */
    case 6098:  /* avx512vl_getexpv8sf_mask */
    case 6094:  /* avx512f_getexpv16sf_mask */
    case 6090:  /* avx512fp16_getexpv8hf_mask */
    case 6086:  /* avx512vl_getexpv16hf_mask */
    case 6082:  /* avx512bw_getexpv32hf_mask */
    case 4414:  /* fixuns_notruncv2dfv2di2_mask */
    case 4412:  /* fixuns_notruncv4dfv4di2_mask */
    case 4409:  /* fixuns_notruncv8dfv8di2_mask */
    case 4406:  /* fix_notruncv2dfv2di2_mask */
    case 4404:  /* fix_notruncv4dfv4di2_mask */
    case 4401:  /* fix_notruncv8dfv8di2_mask */
    case 4363:  /* fixuns_notruncv4dfv4si2_mask */
    case 4359:  /* fixuns_notruncv8dfv8si2_mask */
    case 4352:  /* avx_cvtpd2dq256_mask */
    case 4349:  /* avx512f_cvtpd2dq512_mask */
    case 4242:  /* avx512dq_cvtps2uqqv4di_mask */
    case 4239:  /* avx512dq_cvtps2uqqv8di_mask */
    case 4234:  /* avx512dq_cvtps2qqv4di_mask */
    case 4231:  /* avx512dq_cvtps2qqv8di_mask */
    case 4227:  /* avx512vl_fixuns_notruncv4sfv4si_mask */
    case 4223:  /* avx512vl_fixuns_notruncv8sfv8si_mask */
    case 4219:  /* avx512f_fixuns_notruncv16sfv16si_mask */
    case 4215:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 4212:  /* sse2_fix_notruncv4sfv4si_mask */
    case 4210:  /* avx_fix_notruncv8sfv8si_mask */
    case 3924:  /* avx512fp16_vcvtph2qq_v2di_mask */
    case 3920:  /* avx512fp16_vcvtph2uqq_v2di_mask */
    case 3916:  /* avx512fp16_vcvtph2dq_v4si_mask */
    case 3912:  /* avx512fp16_vcvtph2udq_v4si_mask */
    case 3908:  /* avx512fp16_vcvtph2w_v8hi_mask */
    case 3904:  /* avx512fp16_vcvtph2uw_v8hi_mask */
    case 3900:  /* avx512fp16_vcvtph2qq_v4di_mask */
    case 3896:  /* avx512fp16_vcvtph2uqq_v4di_mask */
    case 3892:  /* avx512fp16_vcvtph2dq_v8si_mask */
    case 3888:  /* avx512fp16_vcvtph2udq_v8si_mask */
    case 3884:  /* avx512fp16_vcvtph2w_v16hi_mask */
    case 3880:  /* avx512fp16_vcvtph2uw_v16hi_mask */
    case 3876:  /* avx512fp16_vcvtph2qq_v8di_mask */
    case 3872:  /* avx512fp16_vcvtph2uqq_v8di_mask */
    case 3868:  /* avx512fp16_vcvtph2dq_v16si_mask */
    case 3864:  /* avx512fp16_vcvtph2udq_v16si_mask */
    case 3860:  /* avx512fp16_vcvtph2w_v32hi_mask */
    case 3856:  /* avx512fp16_vcvtph2uw_v32hi_mask */
    case 2558:  /* rsqrt14v2df_mask */
    case 2556:  /* rsqrt14v4df_mask */
    case 2554:  /* rsqrt14v8df_mask */
    case 2552:  /* rsqrt14v4sf_mask */
    case 2550:  /* rsqrt14v8sf_mask */
    case 2548:  /* rsqrt14v16sf_mask */
    case 2546:  /* avx512fp16_rsqrtv8hf2_mask */
    case 2544:  /* avx512fp16_rsqrtv16hf2_mask */
    case 2542:  /* avx512fp16_rsqrtv32hf2_mask */
    case 2486:  /* rcp14v2df_mask */
    case 2484:  /* rcp14v4df_mask */
    case 2482:  /* rcp14v8df_mask */
    case 2480:  /* rcp14v4sf_mask */
    case 2478:  /* rcp14v8sf_mask */
    case 2476:  /* rcp14v16sf_mask */
    case 2471:  /* avx512fp16_rcpv8hf2_mask */
    case 2469:  /* avx512fp16_rcpv16hf2_mask */
    case 2467:  /* avx512fp16_rcpv32hf2_mask */
    case 2102:  /* *avx512vl_loadv8bf_mask */
    case 2101:  /* *avx512vl_loadv16bf_mask */
    case 2100:  /* *avx512bw_loadv32bf_mask */
    case 2099:  /* *avx512fp16_loadv8hf_mask */
    case 2098:  /* *avx512vl_loadv16hf_mask */
    case 2097:  /* *avx512bw_loadv32hf_mask */
    case 2096:  /* *avx512vl_loadv8hi_mask */
    case 2095:  /* *avx512vl_loadv16hi_mask */
    case 2094:  /* *avx512bw_loadv32hi_mask */
    case 2093:  /* *avx512vl_loadv32qi_mask */
    case 2092:  /* *avx512vl_loadv16qi_mask */
    case 2091:  /* *avx512bw_loadv64qi_mask */
    case 2078:  /* *avx512vl_loadv2df_mask */
    case 2077:  /* *avx512vl_loadv4df_mask */
    case 2076:  /* *avx512f_loadv8df_mask */
    case 2075:  /* *avx512vl_loadv4sf_mask */
    case 2074:  /* *avx512vl_loadv8sf_mask */
    case 2073:  /* *avx512f_loadv16sf_mask */
    case 2072:  /* *avx512vl_loadv2di_mask */
    case 2071:  /* *avx512vl_loadv4di_mask */
    case 2070:  /* *avx512f_loadv8di_mask */
    case 2069:  /* *avx512vl_loadv4si_mask */
    case 2068:  /* *avx512vl_loadv8si_mask */
    case 2067:  /* *avx512f_loadv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2066:  /* *vmovv2df_constm1_pternlog_false_dep */
    case 2065:  /* *vmovv4df_constm1_pternlog_false_dep */
    case 2064:  /* *vmovv8df_constm1_pternlog_false_dep */
    case 2063:  /* *vmovv4sf_constm1_pternlog_false_dep */
    case 2062:  /* *vmovv8sf_constm1_pternlog_false_dep */
    case 2061:  /* *vmovv16sf_constm1_pternlog_false_dep */
    case 2060:  /* *vmovv8bf_constm1_pternlog_false_dep */
    case 2059:  /* *vmovv16bf_constm1_pternlog_false_dep */
    case 2058:  /* *vmovv32bf_constm1_pternlog_false_dep */
    case 2057:  /* *vmovv8hf_constm1_pternlog_false_dep */
    case 2056:  /* *vmovv16hf_constm1_pternlog_false_dep */
    case 2055:  /* *vmovv32hf_constm1_pternlog_false_dep */
    case 2054:  /* *vmovv1ti_constm1_pternlog_false_dep */
    case 2053:  /* *vmovv2ti_constm1_pternlog_false_dep */
    case 2052:  /* *vmovv4ti_constm1_pternlog_false_dep */
    case 2051:  /* *vmovv2di_constm1_pternlog_false_dep */
    case 2050:  /* *vmovv4di_constm1_pternlog_false_dep */
    case 2049:  /* *vmovv8di_constm1_pternlog_false_dep */
    case 2048:  /* *vmovv4si_constm1_pternlog_false_dep */
    case 2047:  /* *vmovv8si_constm1_pternlog_false_dep */
    case 2046:  /* *vmovv16si_constm1_pternlog_false_dep */
    case 2045:  /* *vmovv8hi_constm1_pternlog_false_dep */
    case 2044:  /* *vmovv16hi_constm1_pternlog_false_dep */
    case 2043:  /* *vmovv32hi_constm1_pternlog_false_dep */
    case 2042:  /* *vmovv16qi_constm1_pternlog_false_dep */
    case 2041:  /* *vmovv32qi_constm1_pternlog_false_dep */
    case 2040:  /* *vmovv64qi_constm1_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 7598:  /* *sse2_maskmovdqu */
    case 7597:  /* *sse2_maskmovdqu */
    case 2010:  /* *mmx_maskmovq */
    case 2009:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6270:  /* sse2_shufpd_v2df */
    case 6269:  /* sse2_shufpd_v2di */
    case 1994:  /* *punpckwd */
    case 1993:  /* *punpckwd */
    case 1992:  /* *punpckwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4593:  /* *avx512dq_vextracti64x2_1 */
    case 4592:  /* *avx512dq_vextractf64x2_1 */
    case 1997:  /* *pshufwv2hi_1 */
    case 1996:  /* *pshufwv2bf_1 */
    case 1995:  /* *pshufwv2hf_1 */
    case 1959:  /* *mmx_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 8222:  /* avx2_permv4df_1 */
    case 8220:  /* avx2_permv4di_1 */
    case 7489:  /* sse2_pshuflw_1 */
    case 7483:  /* sse2_pshufd_1 */
    case 4597:  /* *avx512f_vextracti32x4_1 */
    case 4596:  /* *avx512f_vextractf32x4_1 */
    case 1958:  /* mmx_pshufwv4hi_1 */
    case 1957:  /* mmx_pshufwv4bf_1 */
    case 1956:  /* mmx_pshufwv4hf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 7517:  /* *vec_extractv4si_zext_mem */
    case 7515:  /* *vec_extractv4si_zext */
    case 7506:  /* *vec_extractv16qi_zext */
    case 7505:  /* *vec_extractv8hi_zext */
    case 7504:  /* *vec_extractv8hi_zext */
    case 7503:  /* *vec_extractv16qi_zext */
    case 7502:  /* *vec_extractv16qi_zext */
    case 1991:  /* *pextrb_zext */
    case 1990:  /* *pextrb_zext */
    case 1989:  /* *pextrb_zext */
    case 1987:  /* *pextrw_zext */
    case 1986:  /* *pextrw_zext */
    case 1978:  /* *vec_extractv2si_zext_mem */
    case 1953:  /* *mmx_pextrb_zext */
    case 1952:  /* *mmx_pextrb_zext */
    case 1951:  /* *mmx_pextrb_zext */
    case 1949:  /* *mmx_pextrw_zext */
    case 1948:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 7520:  /* *vec_extractv4ti */
    case 7519:  /* *vec_extractv2ti */
    case 7516:  /* *vec_extractv4si_mem */
    case 7514:  /* *vec_extractv4si */
    case 7508:  /* *vec_extractv8hi_mem */
    case 7507:  /* *vec_extractv16qi_mem */
    case 7501:  /* *vec_extractv8hi */
    case 7500:  /* *vec_extractv16qi */
    case 6147:  /* *vec_extractv4dfdf_valign */
    case 6146:  /* *vec_extractv8dfdf_valign */
    case 6145:  /* *vec_extractv8sfsf_valign */
    case 6144:  /* *vec_extractv16sfsf_valign */
    case 6143:  /* *vec_extractv4didi_valign */
    case 6142:  /* *vec_extractv8didi_valign */
    case 6141:  /* *vec_extractv8sisi_valign */
    case 6140:  /* *vec_extractv16sisi_valign */
    case 4653:  /* *vec_extractbf */
    case 4652:  /* *vec_extracthf */
    case 4589:  /* *vec_extractv4sf_mem */
    case 4588:  /* *sse4_1_extractps */
    case 1988:  /* *pextrb */
    case 1985:  /* *pextrwv2bf */
    case 1984:  /* *pextrwv2hf */
    case 1983:  /* *pextrw */
    case 1950:  /* *mmx_pextrb */
    case 1947:  /* *mmx_pextrwv4bf */
    case 1946:  /* *mmx_pextrwv4hf */
    case 1945:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7426:  /* sse4_1_pinsrq */
    case 7425:  /* sse4_1_pinsrd */
    case 7424:  /* sse2_pinsrbf */
    case 7423:  /* sse2_pinsrph */
    case 7422:  /* sse2_pinsrw */
    case 7421:  /* sse4_1_pinsrb */
    case 4575:  /* *vec_setv4sf_sse4_1 */
    case 1982:  /* *pinsrb */
    case 1981:  /* *pinsrw */
    case 1980:  /* *pinsrw */
    case 1979:  /* *pinsrw */
    case 1944:  /* *mmx_pinsrb */
    case 1943:  /* *mmx_pinsrw */
    case 1942:  /* *mmx_pinsrw */
    case 1941:  /* *mmx_pinsrw */
    case 1940:  /* *mmx_pinsrd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7349:  /* sse2_packssdw */
    case 7343:  /* sse2_packsswb */
    case 7150:  /* *nandv2di3 */
    case 7149:  /* *norv2di3 */
    case 7148:  /* *nandv4di3 */
    case 7147:  /* *norv4di3 */
    case 7146:  /* *nandv4si3 */
    case 7145:  /* *norv4si3 */
    case 7144:  /* *nandv8si3 */
    case 7143:  /* *norv8si3 */
    case 7142:  /* *nandv8hi3 */
    case 7141:  /* *norv8hi3 */
    case 7140:  /* *nandv16hi3 */
    case 7139:  /* *norv16hi3 */
    case 7138:  /* *nandv32hi3 */
    case 7137:  /* *norv32hi3 */
    case 7136:  /* *nandv16qi3 */
    case 7135:  /* *norv16qi3 */
    case 7134:  /* *nandv32qi3 */
    case 7133:  /* *norv32qi3 */
    case 7132:  /* *nandv64qi3 */
    case 7131:  /* *norv64qi3 */
    case 7130:  /* *nandv8di3 */
    case 7129:  /* *norv8di3 */
    case 7128:  /* *nandv16si3 */
    case 7127:  /* *norv16si3 */
    case 1919:  /* mmx_packssdw */
    case 1917:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 8064:  /* xop_pcmov_v2df */
    case 8063:  /* xop_pcmov_v4df256 */
    case 8062:  /* xop_pcmov_v4sf */
    case 8061:  /* xop_pcmov_v8sf256 */
    case 8060:  /* xop_pcmov_v8hf */
    case 8059:  /* xop_pcmov_v16hf256 */
    case 8058:  /* xop_pcmov_v1ti */
    case 8057:  /* xop_pcmov_v2ti256 */
    case 8056:  /* xop_pcmov_v2di */
    case 8055:  /* xop_pcmov_v4di256 */
    case 8054:  /* xop_pcmov_v4si */
    case 8053:  /* xop_pcmov_v8si256 */
    case 8052:  /* xop_pcmov_v8hi */
    case 8051:  /* xop_pcmov_v16hi256 */
    case 8050:  /* xop_pcmov_v16qi */
    case 8049:  /* xop_pcmov_v32qi256 */
    case 1887:  /* *xop_pcmov_v2bf */
    case 1886:  /* *xop_pcmov_v2hf */
    case 1885:  /* *xop_pcmov_v2hi */
    case 1884:  /* *xop_pcmov_v2qi */
    case 1883:  /* *xop_pcmov_v4qi */
    case 1882:  /* *xop_pcmov_v4bf */
    case 1881:  /* *xop_pcmov_v4hf */
    case 1880:  /* *xop_pcmov_v2sf */
    case 1879:  /* *xop_pcmov_v2si */
    case 1878:  /* *xop_pcmov_v4hi */
    case 1877:  /* *xop_pcmov_v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1876:  /* *mmx_pblendvb_v4qi_2 */
    case 1869:  /* *mmx_pblendvb_v8qi_2 */
    case 1868:  /* *mmx_pblendvb_v8qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 1875:  /* *mmx_pblendvb_v2hi_1 */
    case 1874:  /* *mmx_pblendvb_v2qi_1 */
    case 1873:  /* *mmx_pblendvb_v4qi_1 */
    case 1867:  /* *mmx_pblendvb_v8qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 8119:  /* xop_maskcmp_unsv2di3 */
    case 8118:  /* xop_maskcmp_unsv4si3 */
    case 8117:  /* xop_maskcmp_unsv8hi3 */
    case 8116:  /* xop_maskcmp_unsv16qi3 */
    case 8115:  /* xop_maskcmpv2di3 */
    case 8114:  /* xop_maskcmpv4si3 */
    case 8113:  /* xop_maskcmpv8hi3 */
    case 8112:  /* xop_maskcmpv16qi3 */
    case 1865:  /* *xop_maskcmp_unsv2hi3 */
    case 1864:  /* *xop_maskcmp_unsv2qi3 */
    case 1863:  /* *xop_maskcmp_unsv4qi3 */
    case 1862:  /* *xop_maskcmp_unsv2si3 */
    case 1861:  /* *xop_maskcmp_unsv4hi3 */
    case 1860:  /* *xop_maskcmp_unsv8qi3 */
    case 1859:  /* *xop_maskcmpv2hi3 */
    case 1858:  /* *xop_maskcmpv2qi3 */
    case 1857:  /* *xop_maskcmpv4qi3 */
    case 1856:  /* *xop_maskcmpv2si3 */
    case 1855:  /* *xop_maskcmpv4hi3 */
    case 1854:  /* *xop_maskcmpv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6677:  /* *sse4_1_mulv2siv2di3 */
    case 6675:  /* *vec_widen_smult_even_v8si */
    case 6673:  /* *vec_widen_smult_even_v16si */
    case 6671:  /* *vec_widen_umult_even_v4si */
    case 6669:  /* *vec_widen_umult_even_v8si */
    case 6667:  /* *vec_widen_umult_even_v16si */
    case 1795:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 2006:  /* uavgv2hi3_ceil */
    case 2005:  /* uavgv2qi3_ceil */
    case 2004:  /* uavgv4qi3_ceil */
    case 2003:  /* *mmx_uavgv4hi3 */
    case 2002:  /* *mmx_uavgv8qi3 */
    case 1794:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 7633:  /* ssse3_pmaddubsw */
    case 7632:  /* ssse3_pmaddubsw128 */
    case 7623:  /* avx2_pmaddubsw256 */
    case 6686:  /* *sse2_pmaddwd */
    case 6685:  /* *avx2_pmaddwd */
    case 1793:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6665:  /* *umulv8hi3_highpart */
    case 6663:  /* *smulv8hi3_highpart */
    case 6661:  /* *umulv16hi3_highpart */
    case 6659:  /* *smulv16hi3_highpart */
    case 6657:  /* *umulv32hi3_highpart */
    case 6655:  /* *smulv32hi3_highpart */
    case 1792:  /* umulv2hi3_highpart */
    case 1791:  /* smulv2hi3_highpart */
    case 1790:  /* *mmx_umulv4hi3_highpart */
    case 1789:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 6278:  /* sse2_movsd_v2df */
    case 6277:  /* sse2_movsd_v2di */
    case 4574:  /* avx512fp16_movv8bf */
    case 4573:  /* avx512fp16_movv8hf */
    case 4572:  /* avx512fp16_movv8hi */
    case 4539:  /* sse_movss_v4sf */
    case 4538:  /* sse_movss_v4si */
    case 1733:  /* *mmx_movss_v2si */
    case 1732:  /* *mmx_movss_v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 6513:  /* *avx512f_pshufd_truncv2div2si_1 */
    case 1725:  /* mmx_pi2fw */
    case 1724:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 7747:  /* avx2_pblenddv4si */
    case 7746:  /* avx2_pblenddv8si */
    case 7745:  /* *avx2_pblendbf */
    case 7744:  /* *avx2_pblendph */
    case 7743:  /* *avx2_pblendw */
    case 7742:  /* sse4_1_pblendbf */
    case 7741:  /* sse4_1_pblendph */
    case 7740:  /* sse4_1_pblendw */
    case 7700:  /* sse4_1_blendpd */
    case 7699:  /* avx_blendpd256 */
    case 7698:  /* sse4_1_blendps */
    case 7697:  /* avx_blendps256 */
    case 2147:  /* avx512vl_blendmv8bf */
    case 2146:  /* avx512vl_blendmv16bf */
    case 2145:  /* avx512bw_blendmv32bf */
    case 2144:  /* avx512fp16_blendmv8hf */
    case 2143:  /* avx512vl_blendmv16hf */
    case 2142:  /* avx512bw_blendmv32hf */
    case 2141:  /* avx512vl_blendmv8hi */
    case 2140:  /* avx512vl_blendmv16hi */
    case 2139:  /* avx512bw_blendmv32hi */
    case 2138:  /* avx512vl_blendmv32qi */
    case 2137:  /* avx512vl_blendmv16qi */
    case 2136:  /* avx512bw_blendmv64qi */
    case 2135:  /* avx512vl_blendmv2df */
    case 2134:  /* avx512vl_blendmv4df */
    case 2133:  /* avx512f_blendmv8df */
    case 2132:  /* avx512vl_blendmv4sf */
    case 2131:  /* avx512vl_blendmv8sf */
    case 2130:  /* avx512f_blendmv16sf */
    case 2129:  /* avx512vl_blendmv2di */
    case 2128:  /* avx512vl_blendmv4di */
    case 2127:  /* avx512f_blendmv8di */
    case 2126:  /* avx512vl_blendmv4si */
    case 2125:  /* avx512vl_blendmv8si */
    case 2124:  /* avx512f_blendmv16si */
    case 1965:  /* *mmx_pblendw32 */
    case 1964:  /* *mmx_pblendw32 */
    case 1963:  /* *mmx_pblendw32 */
    case 1962:  /* *mmx_pblendw64 */
    case 1961:  /* *mmx_pblendw64 */
    case 1960:  /* *mmx_pblendw64 */
    case 1716:  /* *mmx_blendps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4585:  /* sse4_1_insertps_v4sf */
    case 4584:  /* sse4_1_insertps_v4si */
    case 1715:  /* sse4_1_insertps_v2si */
    case 1714:  /* sse4_1_insertps_v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1710:  /* *mmx_haddsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2704:  /* *sse3_hsubv2df3_low */
    case 1709:  /* *mmx_hsubv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2702:  /* sse3_hsubv2df3 */
    case 1708:  /* mmx_hsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2703:  /* *sse3_haddv2df3_low */
    case 1707:  /* *mmx_haddv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2701:  /* *sse3_haddv2df3 */
    case 1706:  /* *mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7948:  /* ptesttf2 */
    case 7947:  /* *avx_ptestv4df */
    case 7946:  /* *avx_ptestv8sf */
    case 7945:  /* *avx_ptestv2ti */
    case 7944:  /* *avx_ptestv4di */
    case 7943:  /* *avx_ptestv8si */
    case 7942:  /* *avx_ptestv16hi */
    case 7941:  /* *avx_ptestv32qi */
    case 7940:  /* *sse4_1_ptestv2df */
    case 7939:  /* *sse4_1_ptestv4sf */
    case 7938:  /* *sse4_1_ptestv1ti */
    case 7937:  /* *sse4_1_ptestv2di */
    case 7936:  /* *sse4_1_ptestv4si */
    case 7935:  /* *sse4_1_ptestv8hi */
    case 7934:  /* *sse4_1_ptestv16qi */
    case 7933:  /* avx_vtestpd */
    case 7932:  /* avx_vtestpd256 */
    case 7931:  /* avx_vtestps */
    case 7930:  /* avx_vtestps256 */
    case 2242:  /* kortestdi_ccz */
    case 2241:  /* kortestsi_ccz */
    case 2240:  /* kortesthi_ccz */
    case 2239:  /* kortestqi_ccz */
    case 2238:  /* kortestdi_ccc */
    case 2237:  /* kortestsi_ccc */
    case 2236:  /* kortesthi_ccc */
    case 2235:  /* kortestqi_ccc */
    case 2234:  /* *kortestdi */
    case 2233:  /* *kortestsi */
    case 2232:  /* *kortesthi */
    case 2231:  /* *kortestqi */
    case 2230:  /* ktestdi */
    case 2229:  /* ktestsi */
    case 2228:  /* ktesthi */
    case 2227:  /* ktestqi */
    case 1650:  /* tpause */
    case 1646:  /* umwait */
    case 1641:  /* enqcmds_di */
    case 1640:  /* enqcmd_di */
    case 1639:  /* enqcmds_si */
    case 1638:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1635:  /* movdir64b_di */
    case 1634:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1626:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1615:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1651:  /* tpause_rex64 */
    case 1647:  /* umwait_rex64 */
    case 1584:  /* lwp_lwpinsdi */
    case 1583:  /* lwp_lwpinssi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1574:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 7604:  /* sse3_monitor_di */
    case 7603:  /* sse3_monitor_si */
    case 1627:  /* *wrpkru */
    case 1623:  /* monitorx_di */
    case 1622:  /* monitorx_si */
    case 1621:  /* mwaitx */
    case 1582:  /* lwp_lwpvaldi */
    case 1581:  /* lwp_lwpvalsi */
    case 1570:  /* xsetbv_rex64 */
    case 1568:  /* xrstors64 */
    case 1567:  /* xrstor64 */
    case 1566:  /* xrstors_rex64 */
    case 1565:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1546:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1545:  /* rdtscp */
    case 1544:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 9027:  /* avx512dq_vmfpclassv2df */
    case 9025:  /* avx512dq_vmfpclassv4sf */
    case 9023:  /* avx512dq_vmfpclassv8hf */
    case 7306:  /* *avx512vl_testnmv2di3_zext */
    case 7305:  /* *avx512vl_testnmv2di3_zext */
    case 7304:  /* *avx512vl_testnmv2di3_zext */
    case 7303:  /* *avx512vl_testnmv4di3_zext */
    case 7302:  /* *avx512vl_testnmv4di3_zext */
    case 7301:  /* *avx512vl_testnmv4di3_zext */
    case 7300:  /* *avx512f_testnmv8di3_zext */
    case 7299:  /* *avx512f_testnmv8di3_zext */
    case 7298:  /* *avx512f_testnmv8di3_zext */
    case 7297:  /* *avx512vl_testnmv4si3_zext */
    case 7296:  /* *avx512vl_testnmv4si3_zext */
    case 7295:  /* *avx512vl_testnmv4si3_zext */
    case 7294:  /* *avx512vl_testnmv8si3_zext */
    case 7293:  /* *avx512vl_testnmv8si3_zext */
    case 7292:  /* *avx512vl_testnmv8si3_zext */
    case 7291:  /* *avx512f_testnmv16si3_zext */
    case 7290:  /* *avx512f_testnmv16si3_zext */
    case 7289:  /* *avx512f_testnmv16si3_zext */
    case 7288:  /* *avx512vl_testnmv8hi3_zext */
    case 7287:  /* *avx512vl_testnmv8hi3_zext */
    case 7286:  /* *avx512vl_testnmv8hi3_zext */
    case 7285:  /* *avx512vl_testnmv16hi3_zext */
    case 7284:  /* *avx512vl_testnmv16hi3_zext */
    case 7283:  /* *avx512vl_testnmv16hi3_zext */
    case 7282:  /* *avx512bw_testnmv32hi3_zext */
    case 7281:  /* *avx512bw_testnmv32hi3_zext */
    case 7280:  /* *avx512bw_testnmv32hi3_zext */
    case 7279:  /* *avx512vl_testnmv16qi3_zext */
    case 7278:  /* *avx512vl_testnmv16qi3_zext */
    case 7277:  /* *avx512vl_testnmv16qi3_zext */
    case 7276:  /* *avx512vl_testnmv32qi3_zext */
    case 7275:  /* *avx512vl_testnmv32qi3_zext */
    case 7274:  /* *avx512vl_testnmv32qi3_zext */
    case 7273:  /* *avx512bw_testnmv64qi3_zext */
    case 7272:  /* *avx512bw_testnmv64qi3_zext */
    case 7271:  /* *avx512bw_testnmv64qi3_zext */
    case 7234:  /* *avx512vl_testmv2di3_zext */
    case 7233:  /* *avx512vl_testmv2di3_zext */
    case 7232:  /* *avx512vl_testmv2di3_zext */
    case 7231:  /* *avx512vl_testmv4di3_zext */
    case 7230:  /* *avx512vl_testmv4di3_zext */
    case 7229:  /* *avx512vl_testmv4di3_zext */
    case 7228:  /* *avx512f_testmv8di3_zext */
    case 7227:  /* *avx512f_testmv8di3_zext */
    case 7226:  /* *avx512f_testmv8di3_zext */
    case 7225:  /* *avx512vl_testmv4si3_zext */
    case 7224:  /* *avx512vl_testmv4si3_zext */
    case 7223:  /* *avx512vl_testmv4si3_zext */
    case 7222:  /* *avx512vl_testmv8si3_zext */
    case 7221:  /* *avx512vl_testmv8si3_zext */
    case 7220:  /* *avx512vl_testmv8si3_zext */
    case 7219:  /* *avx512f_testmv16si3_zext */
    case 7218:  /* *avx512f_testmv16si3_zext */
    case 7217:  /* *avx512f_testmv16si3_zext */
    case 7216:  /* *avx512vl_testmv8hi3_zext */
    case 7215:  /* *avx512vl_testmv8hi3_zext */
    case 7214:  /* *avx512vl_testmv8hi3_zext */
    case 7213:  /* *avx512vl_testmv16hi3_zext */
    case 7212:  /* *avx512vl_testmv16hi3_zext */
    case 7211:  /* *avx512vl_testmv16hi3_zext */
    case 7210:  /* *avx512bw_testmv32hi3_zext */
    case 7209:  /* *avx512bw_testmv32hi3_zext */
    case 7208:  /* *avx512bw_testmv32hi3_zext */
    case 7207:  /* *avx512vl_testmv16qi3_zext */
    case 7206:  /* *avx512vl_testmv16qi3_zext */
    case 7205:  /* *avx512vl_testmv16qi3_zext */
    case 7204:  /* *avx512vl_testmv32qi3_zext */
    case 7203:  /* *avx512vl_testmv32qi3_zext */
    case 7202:  /* *avx512vl_testmv32qi3_zext */
    case 7201:  /* *avx512bw_testmv64qi3_zext */
    case 7200:  /* *avx512bw_testmv64qi3_zext */
    case 7199:  /* *avx512bw_testmv64qi3_zext */
    case 6330:  /* *avx512f_permvar_truncv4div4si_1 */
    case 6329:  /* *avx512f_permvar_truncv16hiv16qi_1 */
    case 6316:  /* *avx512f_permvar_truncv32hiv32qi_1 */
    case 6300:  /* *avx512f_vpermvar_truncv8div8si_1 */
    case 6298:  /* *avx512f_permvar_truncv8siv8hi_1 */
    case 6296:  /* *avx512bw_permvar_truncv16siv16hi_1 */
    case 1540:  /* sse4_2_crc32di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 7602:  /* sse3_mwait */
    case 1658:  /* uwrmsr */
    case 1655:  /* patchable_area */
    case 1611:  /* wrussdi */
    case 1610:  /* wrusssi */
    case 1609:  /* wrssdi */
    case 1608:  /* wrsssi */
    case 1569:  /* xsetbv */
    case 1564:  /* xrstors */
    case 1563:  /* xrstor */
    case 1536:  /* prefetchi */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1533:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1528:  /* *stack_protect_set_4s_di_di */
    case 1527:  /* *stack_protect_set_4s_si_di */
    case 1526:  /* *stack_protect_set_4z_di_di */
    case 1525:  /* *stack_protect_set_4z_si_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1524:  /* *stack_protect_set_3_di_di */
    case 1523:  /* *stack_protect_set_3_di_si */
    case 1522:  /* *stack_protect_set_3_si_di */
    case 1521:  /* *stack_protect_set_3_si_si */
    case 1520:  /* *stack_protect_set_2_di_di */
    case 1519:  /* *stack_protect_set_2_si_di */
    case 1518:  /* *stack_protect_set_2_di_si */
    case 1517:  /* *stack_protect_set_2_si_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1510:  /* adjust_stack_and_probe_di */
    case 1509:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 7737:  /* *sse4_1_pblendvb_lt */
    case 7736:  /* *avx2_pblendvb_lt */
    case 7710:  /* *sse4_1_blendvpd_lt */
    case 7709:  /* *avx_blendvpd256_lt */
    case 7708:  /* *sse4_1_blendvps_lt */
    case 7707:  /* *avx_blendvps256_lt */
    case 1476:  /* *ieee_mindf3_1 */
    case 1475:  /* *ieee_minsf3_1 */
    case 1474:  /* *ieee_maxdf3_1 */
    case 1473:  /* *ieee_maxsf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 1453:  /* *movsicc_noc_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1452:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 3309:  /* *fma_fmadd_v2df */
    case 3307:  /* *fma_fmadd_v4df */
    case 3303:  /* *fma_fmadd_v8df */
    case 3302:  /* *fma_fmadd_df */
    case 3300:  /* *fma_fmadd_v4sf */
    case 3298:  /* *fma_fmadd_v8sf */
    case 3294:  /* *fma_fmadd_v16sf */
    case 3293:  /* *fma_fmadd_sf */
    case 3292:  /* *fma_fmadd_hf */
    case 3290:  /* *fma_fmadd_v8hf */
    case 3288:  /* *fma_fmadd_v16hf */
    case 3284:  /* *fma_fmadd_v32hf */
    case 3283:  /* *fma_fmadd_v4df */
    case 3282:  /* *fma_fmadd_v8sf */
    case 3281:  /* *fma_fmadd_v2df */
    case 3280:  /* *fma_fmadd_v4sf */
    case 3279:  /* *fma_fmadd_df */
    case 3278:  /* *fma_fmadd_sf */
    case 1460:  /* *xop_pcmov_df */
    case 1459:  /* *xop_pcmov_sf */
    case 1458:  /* *movsfcc_1_387 */
    case 1457:  /* *movdfcc_1 */
    case 1456:  /* *movxfcc_1 */
    case 1454:  /* *movqicc_noc */
    case 1451:  /* *movdicc_noc */
    case 1450:  /* *movsicc_noc */
    case 1449:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1440:  /* *strlenqi_1 */
    case 1439:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1438:  /* *cmpstrnqi_1 */
    case 1437:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1436:  /* *cmpstrnqi_nz_1 */
    case 1435:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1434:  /* *rep_stosqi */
    case 1433:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1432:  /* *rep_stossi */
    case 1431:  /* *rep_stossi */
    case 1430:  /* *rep_stosdi_rex64 */
    case 1429:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1428:  /* *strsetqi_1 */
    case 1427:  /* *strsetqi_1 */
    case 1426:  /* *strsethi_1 */
    case 1425:  /* *strsethi_1 */
    case 1424:  /* *strsetsi_1 */
    case 1423:  /* *strsetsi_1 */
    case 1422:  /* *strsetdi_rex_1 */
    case 1421:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1420:  /* *rep_movqi */
    case 1419:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 1418:  /* *rep_movsi */
    case 1417:  /* *rep_movsi */
    case 1416:  /* *rep_movdi_rex64 */
    case 1415:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 1414:  /* *strmovqi_1 */
    case 1413:  /* *strmovqi_1 */
    case 1412:  /* *strmovhi_1 */
    case 1411:  /* *strmovhi_1 */
    case 1410:  /* *strmovsi_1 */
    case 1409:  /* *strmovsi_1 */
    case 1408:  /* *strmovdi_rex_1 */
    case 1407:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1397:  /* fistdi2_ceil */
    case 1396:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 9457:  /* atomic_storedi_fpu */
    case 9452:  /* atomic_loaddi_fpu */
    case 1401:  /* fistsi2_ceil */
    case 1400:  /* fistsi2_floor */
    case 1399:  /* fisthi2_ceil */
    case 1398:  /* fisthi2_floor */
    case 1389:  /* frndintxf2_trunc_i387 */
    case 1388:  /* frndintxf2_ceil_i387 */
    case 1387:  /* frndintxf2_floor_i387 */
    case 1386:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1372:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1530:  /* stack_protect_test_1_di */
    case 1529:  /* stack_protect_test_1_si */
    case 1369:  /* fyl2xp1xf3_i387 */
    case 1368:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1367:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1366:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1572:  /* xgetbv_rex64 */
    case 1542:  /* rdpmc_rex64 */
    case 1370:  /* fxtractxf3_i387 */
    case 1365:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1362:  /* fprem1xf4_i387 */
    case 1361:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 1351:  /* *fop_df_6_i387 */
    case 1350:  /* *fop_xf_6_i387 */
    case 1349:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1348:  /* *fop_df_5_i387 */
    case 1347:  /* *fop_xf_5_i387 */
    case 1346:  /* *fop_xf_5_i387 */
    case 1342:  /* *fop_xf_3_i387 */
    case 1341:  /* *fop_df_3_i387 */
    case 1340:  /* *fop_sf_3_i387 */
    case 1339:  /* *fop_xf_3_i387 */
    case 1338:  /* *fop_df_3_i387 */
    case 1337:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1345:  /* *fop_df_4_i387 */
    case 1344:  /* *fop_xf_4_i387 */
    case 1343:  /* *fop_xf_4_i387 */
    case 1336:  /* *fop_xf_2_i387 */
    case 1335:  /* *fop_df_2_i387 */
    case 1334:  /* *fop_sf_2_i387 */
    case 1333:  /* *fop_xf_2_i387 */
    case 1332:  /* *fop_df_2_i387 */
    case 1331:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1318:  /* *tls_dynamic_gnu2_combine_64_di */
    case 1317:  /* *tls_dynamic_gnu2_combine_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1312:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1311:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1310:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 1309:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1308:  /* *add_tp_di */
    case 1307:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1303:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1302:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1299:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1298:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1297:  /* *tls_global_dynamic_64_di */
    case 1296:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1295:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1293:  /* parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1292:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1275:  /* *tbm_tzmsk_di */
    case 1274:  /* *tbm_tzmsk_si */
    case 1273:  /* *tbm_t1mskc_di */
    case 1272:  /* *tbm_t1mskc_si */
    case 1271:  /* *tbm_blsic_di */
    case 1270:  /* *tbm_blsic_si */
    case 1263:  /* *tbm_blcic_di */
    case 1262:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1261:  /* *tbm_blci_di */
    case 1260:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1257:  /* tbm_bextri_di */
    case 1256:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 1251:  /* *bmi2_bzhi_zero_extendsidi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1250:  /* *bmi2_bzhi_zero_extendsidi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1245:  /* *bmi2_bzhi_di3_1_ccz */
    case 1244:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1243:  /* *bmi2_bzhi_di3 */
    case 1242:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1241:  /* *bmi_blsr_di_ccz */
    case 1240:  /* *bmi_blsr_si_ccz */
    case 1233:  /* *bmi_blsi_di_ccno */
    case 1232:  /* *bmi_blsi_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1239:  /* *bmi_blsr_di_cmp */
    case 1238:  /* *bmi_blsr_si_cmp */
    case 1231:  /* *bmi_blsi_di_cmp */
    case 1230:  /* *bmi_blsi_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 1269:  /* *tbm_blsfill_di */
    case 1268:  /* *tbm_blsfill_si */
    case 1267:  /* *tbm_blcs_di */
    case 1266:  /* *tbm_blcs_si */
    case 1265:  /* *tbm_blcmsk_di */
    case 1264:  /* *tbm_blcmsk_si */
    case 1259:  /* *tbm_blcfill_di */
    case 1258:  /* *tbm_blcfill_si */
    case 1237:  /* *bmi_blsr_di */
    case 1236:  /* *bmi_blsr_si */
    case 1235:  /* *bmi_blsmsk_di */
    case 1234:  /* *bmi_blsmsk_si */
    case 1229:  /* *bmi_blsi_di */
    case 1228:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1227:  /* *bmi_bextr_di_ccz */
    case 1226:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1221:  /* *lzcnt_di_falsedep */
    case 1220:  /* *tzcnt_di_falsedep */
    case 1219:  /* *lzcnt_si_falsedep */
    case 1218:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1508:  /* probe_stack_1_di */
    case 1507:  /* probe_stack_1_si */
    case 1506:  /* allocate_stack_worker_probe_di */
    case 1505:  /* allocate_stack_worker_probe_si */
    case 1395:  /* *fistdi2_ceil_1 */
    case 1394:  /* *fistdi2_floor_1 */
    case 1393:  /* *fistsi2_ceil_1 */
    case 1392:  /* *fistsi2_floor_1 */
    case 1391:  /* *fisthi2_ceil_1 */
    case 1390:  /* *fisthi2_floor_1 */
    case 1385:  /* frndintxf2_trunc */
    case 1384:  /* frndintxf2_ceil */
    case 1383:  /* frndintxf2_floor */
    case 1382:  /* frndintxf2_roundeven */
    case 1223:  /* lzcnt_hi */
    case 1222:  /* tzcnt_hi */
    case 1217:  /* lzcnt_di */
    case 1216:  /* tzcnt_di */
    case 1215:  /* lzcnt_si */
    case 1214:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1203:  /* *bsr_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      break;

    case 1202:  /* *bsr_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0), 0));
      break;

    case 1201:  /* bsr_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 1198:  /* bsr_rex64_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 1200:  /* bsr_1 */
    case 1197:  /* bsr_rex64_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1199:  /* bsr */
    case 1196:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1283:  /* *popcountsi2_zext_2_falsedep */
    case 1213:  /* *clzsi2_lzcnt_zext_2_falsedep */
    case 1212:  /* *clzsi2_lzcnt_zext_2_falsedep */
    case 1195:  /* *ctzsidi2_uext_falsedep */
    case 1194:  /* *ctzsidi2_sext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1281:  /* *popcountsi2_zext_falsedep */
    case 1210:  /* *clzsi2_lzcnt_zext_falsedep */
    case 1209:  /* *clzsi2_lzcnt_zext_falsedep */
    case 1191:  /* *ctzsi2_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1280:  /* *popcountsi2_zext */
    case 1208:  /* *clzsi2_lzcnt_zext */
    case 1190:  /* *ctzsi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 1279:  /* *popcountdi2_falsedep */
    case 1278:  /* *popcountsi2_falsedep */
    case 1207:  /* *clzdi2_lzcnt_falsedep */
    case 1206:  /* *clzsi2_lzcnt_falsedep */
    case 1189:  /* *ctzdi2_falsedep */
    case 1188:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1183:  /* *tzcntdi_1_falsedep */
    case 1182:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1185:  /* *bsfdi_1 */
    case 1184:  /* *bsfsi_1 */
    case 1181:  /* *tzcntdi_1 */
    case 1180:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7692:  /* sse4a_vmmovntv2df */
    case 7691:  /* sse4a_vmmovntv4sf */
    case 4283:  /* sse2_cvtsd2siq */
    case 4281:  /* sse2_cvtsd2si */
    case 4275:  /* avx512f_vcvtsd2usiq */
    case 4273:  /* avx512f_vcvtsd2usi */
    case 4267:  /* avx512f_vcvtss2usiq */
    case 4265:  /* avx512f_vcvtss2usi */
    case 4243:  /* *avx512dq_cvtps2uqqv2di */
    case 4235:  /* *avx512dq_cvtps2qqv2di */
    case 4174:  /* sse_cvtss2siq */
    case 4172:  /* sse_cvtss2si */
    case 3998:  /* avx512fp16_vcvtsh2siq */
    case 3996:  /* avx512fp16_vcvtsh2usiq */
    case 3994:  /* avx512fp16_vcvtsh2si */
    case 3992:  /* avx512fp16_vcvtsh2usi */
    case 1174:  /* set_got_offset_rex64 */
    case 1173:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1171:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1600:  /* rdseeddi */
    case 1599:  /* rdseedsi */
    case 1598:  /* rdseedhi */
    case 1597:  /* rdranddi */
    case 1596:  /* rdrandsi */
    case 1595:  /* rdrandhi */
    case 1573:  /* fnstenv */
    case 1170:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 1166:  /* *simple_return_indirect_internaldi */
    case 1165:  /* *simple_return_indirect_internalsi */
    case 1164:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7601:  /* sse2_clflush */
    case 7599:  /* sse_ldmxcsr */
    case 1659:  /* ldtilecfg */
    case 1656:  /* hreset */
    case 1652:  /* cldemote */
    case 1649:  /* umonitor_di */
    case 1648:  /* umonitor_si */
    case 1645:  /* senduipi */
    case 1625:  /* clzero_di */
    case 1624:  /* clzero_si */
    case 1620:  /* clflushopt */
    case 1619:  /* clwb */
    case 1617:  /* xabort */
    case 1613:  /* clrssbsy */
    case 1607:  /* rstorssp */
    case 1605:  /* incsspdi */
    case 1604:  /* incsspsi */
    case 1594:  /* ptwritedi */
    case 1593:  /* ptwritesi */
    case 1592:  /* wrgsbasedi */
    case 1591:  /* wrfsbasedi */
    case 1590:  /* wrgsbasesi */
    case 1589:  /* wrfsbasesi */
    case 1578:  /* lwp_llwpcbdi */
    case 1577:  /* lwp_llwpcbsi */
    case 1550:  /* fxrstor64 */
    case 1549:  /* fxrstor */
    case 1178:  /* split_stack_return */
    case 1169:  /* pad */
    case 1168:  /* nops */
    case 1160:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 9450:  /* mfence_sse2 */
    case 9449:  /* *sse_sfence */
    case 9448:  /* *sse2_lfence */
    case 1601:  /* *pause */
    case 1159:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1157:  /* *sibcall_value_pop_memory */
    case 1156:  /* *sibcall_value_pop */
    case 1155:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1150:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4582:  /* *vec_setv2di_0_zero_extendsi */
    case 4581:  /* *vec_setv4di_0_zero_extendsi */
    case 4580:  /* *vec_setv8di_0_zero_extendsi */
    case 4570:  /* *vec_setv2di_0_zero_extendhi */
    case 4569:  /* *vec_setv4di_0_zero_extendhi */
    case 4568:  /* *vec_setv8di_0_zero_extendhi */
    case 4567:  /* *vec_setv4si_0_zero_extendhi */
    case 4566:  /* *vec_setv8si_0_zero_extendhi */
    case 4565:  /* *vec_setv16si_0_zero_extendhi */
    case 4163:  /* avx512fp16_vcvtsd2sh_mem */
    case 4161:  /* avx512fp16_vcvtss2sh_mem */
    case 4151:  /* avx512fp16_vcvtsh2ss_mem */
    case 4149:  /* avx512fp16_vcvtsh2sd_mem */
    case 2535:  /* *sse2_vmsqrtv2df2 */
    case 2531:  /* *sse_vmsqrtv4sf2 */
    case 2527:  /* *avx512fp16_vmsqrtv8hf2 */
    case 1149:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1146:  /* *sibcall_pop_memory */
    case 1145:  /* *sibcall_pop */
    case 1144:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1139:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 1138:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 1135:  /* *tablejump_1 */
    case 1134:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 1133:  /* *indirect_jump */
    case 1132:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 1131:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1130:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 9447:  /* vpdpwuuds_v4si */
    case 9446:  /* vpdpwuud_v4si */
    case 9445:  /* vpdpwsuds_v4si */
    case 9444:  /* vpdpwsud_v4si */
    case 9443:  /* vpdpwusds_v4si */
    case 9442:  /* vpdpwusd_v4si */
    case 9441:  /* vpdpwuuds_v8si */
    case 9440:  /* vpdpwuud_v8si */
    case 9439:  /* vpdpwsuds_v8si */
    case 9438:  /* vpdpwsud_v8si */
    case 9437:  /* vpdpwusds_v8si */
    case 9436:  /* vpdpwusd_v8si */
    case 9423:  /* vpdpbuuds_v4si */
    case 9422:  /* vpdpbuud_v4si */
    case 9421:  /* vpdpbsuds_v4si */
    case 9420:  /* vpdpbsud_v4si */
    case 9419:  /* vpdpbssds_v4si */
    case 9418:  /* vpdpbssd_v4si */
    case 9417:  /* vpdpbuuds_v8si */
    case 9416:  /* vpdpbuud_v8si */
    case 9415:  /* vpdpbsuds_v8si */
    case 9414:  /* vpdpbsud_v8si */
    case 9413:  /* vpdpbssds_v8si */
    case 9412:  /* vpdpbssd_v8si */
    case 9396:  /* avx512f_dpbf16ps_v4sf */
    case 9394:  /* avx512f_dpbf16ps_v8sf */
    case 9392:  /* avx512f_dpbf16ps_v16sf */
    case 9364:  /* vpclmulqdq_v2di */
    case 9363:  /* vpclmulqdq_v4di */
    case 9362:  /* vpclmulqdq_v8di */
    case 9343:  /* vpdpwssds_v4si */
    case 9342:  /* vpdpwssds_v8si */
    case 9341:  /* vpdpwssds_v16si */
    case 9334:  /* vpdpwssd_v4si */
    case 9333:  /* vpdpwssd_v8si */
    case 9332:  /* vpdpwssd_v16si */
    case 9325:  /* vpdpbusds_v4si */
    case 9324:  /* vpdpbusds_v8si */
    case 9323:  /* vpdpbusds_v16si */
    case 9316:  /* vpdpbusd_v4si */
    case 9315:  /* vpdpbusd_v8si */
    case 9314:  /* vpdpbusd_v16si */
    case 9295:  /* vpshldv_v2di */
    case 9294:  /* vpshldv_v4si */
    case 9293:  /* vpshldv_v8hi */
    case 9292:  /* vpshldv_v4di */
    case 9291:  /* vpshldv_v8si */
    case 9290:  /* vpshldv_v16hi */
    case 9289:  /* vpshldv_v8di */
    case 9288:  /* vpshldv_v16si */
    case 9287:  /* vpshldv_v32hi */
    case 9268:  /* vpshrdv_v2di */
    case 9267:  /* vpshrdv_v4si */
    case 9266:  /* vpshrdv_v8hi */
    case 9265:  /* vpshrdv_v4di */
    case 9264:  /* vpshrdv_v8si */
    case 9263:  /* vpshrdv_v16hi */
    case 9262:  /* vpshrdv_v8di */
    case 9261:  /* vpshrdv_v16si */
    case 9260:  /* vpshrdv_v32hi */
    case 9258:  /* vpshld_v2di */
    case 9256:  /* vpshld_v4si */
    case 9254:  /* vpshld_v8hi */
    case 9252:  /* vpshld_v4di */
    case 9250:  /* vpshld_v8si */
    case 9248:  /* vpshld_v16hi */
    case 9246:  /* vpshld_v8di */
    case 9244:  /* vpshld_v16si */
    case 9242:  /* vpshld_v32hi */
    case 9240:  /* vpshrd_v2di */
    case 9238:  /* vpshrd_v4si */
    case 9236:  /* vpshrd_v8hi */
    case 9234:  /* vpshrd_v4di */
    case 9232:  /* vpshrd_v8si */
    case 9230:  /* vpshrd_v16hi */
    case 9228:  /* vpshrd_v8di */
    case 9226:  /* vpshrd_v16si */
    case 9224:  /* vpshrd_v32hi */
    case 9216:  /* vgf2p8affineqb_v16qi */
    case 9214:  /* vgf2p8affineqb_v32qi */
    case 9212:  /* vgf2p8affineqb_v64qi */
    case 9210:  /* vgf2p8affineinvqb_v16qi */
    case 9208:  /* vgf2p8affineinvqb_v32qi */
    case 9206:  /* vgf2p8affineinvqb_v64qi */
    case 9171:  /* avx5124vnniw_vp4dpwssds */
    case 9168:  /* avx5124vnniw_vp4dpwssd */
    case 9165:  /* avx5124fmaddps_4fnmaddss */
    case 9162:  /* avx5124fmaddps_4fnmaddps */
    case 9159:  /* avx5124fmaddps_4fmaddss */
    case 9156:  /* avx5124fmaddps_4fmaddps */
    case 9135:  /* vpmadd52huqv2di */
    case 9134:  /* vpmadd52luqv2di */
    case 9133:  /* vpmadd52huqv4di */
    case 9132:  /* vpmadd52luqv4di */
    case 9131:  /* vpmadd52huqv8di */
    case 9130:  /* vpmadd52luqv8di */
    case 9119:  /* vsha512rnds2 */
    case 9115:  /* vsm3msg2 */
    case 9114:  /* vsm3msg1 */
    case 9113:  /* sha256rnds2 */
    case 9110:  /* sha1rnds4 */
    case 9081:  /* *avx512bw_dbpsadbwv32hi */
    case 9079:  /* *avx512bw_dbpsadbwv16hi */
    case 9077:  /* *avx512bw_dbpsadbwv8hi */
    case 8995:  /* avx512dq_rangepv2df */
    case 8993:  /* avx512dq_rangepv4df */
    case 8989:  /* avx512dq_rangepv8df */
    case 8987:  /* avx512dq_rangepv4sf */
    case 8985:  /* avx512dq_rangepv8sf */
    case 8981:  /* avx512dq_rangepv16sf */
    case 8980:  /* *expandv8hi_mask */
    case 8979:  /* *expandv16hi_mask */
    case 8978:  /* *expandv32hi_mask */
    case 8977:  /* *expandv32qi_mask */
    case 8976:  /* *expandv16qi_mask */
    case 8975:  /* *expandv64qi_mask */
    case 8974:  /* *expandv2df_mask */
    case 8973:  /* *expandv2di_mask */
    case 8972:  /* *expandv4sf_mask */
    case 8971:  /* *expandv4si_mask */
    case 8970:  /* *expandv4df_mask */
    case 8969:  /* *expandv4di_mask */
    case 8968:  /* *expandv8sf_mask */
    case 8967:  /* *expandv8si_mask */
    case 8966:  /* *expandv8df_mask */
    case 8965:  /* *expandv8di_mask */
    case 8964:  /* *expandv16sf_mask */
    case 8963:  /* *expandv16si_mask */
    case 8962:  /* expandv8hi_mask */
    case 8961:  /* expandv16hi_mask */
    case 8960:  /* expandv32hi_mask */
    case 8959:  /* expandv32qi_mask */
    case 8958:  /* expandv16qi_mask */
    case 8957:  /* expandv64qi_mask */
    case 8956:  /* expandv2df_mask */
    case 8955:  /* expandv2di_mask */
    case 8954:  /* expandv4sf_mask */
    case 8953:  /* expandv4si_mask */
    case 8952:  /* expandv4df_mask */
    case 8951:  /* expandv4di_mask */
    case 8950:  /* expandv8sf_mask */
    case 8949:  /* expandv8si_mask */
    case 8948:  /* expandv8df_mask */
    case 8947:  /* expandv8di_mask */
    case 8946:  /* expandv16sf_mask */
    case 8945:  /* expandv16si_mask */
    case 8926:  /* compressv8hi_mask */
    case 8925:  /* compressv16hi_mask */
    case 8924:  /* compressv32hi_mask */
    case 8923:  /* compressv32qi_mask */
    case 8922:  /* compressv16qi_mask */
    case 8921:  /* compressv64qi_mask */
    case 8920:  /* avx512vl_compressv2df_mask */
    case 8919:  /* avx512vl_compressv2di_mask */
    case 8918:  /* avx512vl_compressv4sf_mask */
    case 8917:  /* avx512vl_compressv4si_mask */
    case 8916:  /* avx512vl_compressv4df_mask */
    case 8915:  /* avx512vl_compressv4di_mask */
    case 8914:  /* avx512vl_compressv8sf_mask */
    case 8913:  /* avx512vl_compressv8si_mask */
    case 8912:  /* avx512f_compressv8df_mask */
    case 8911:  /* avx512f_compressv8di_mask */
    case 8910:  /* avx512f_compressv16sf_mask */
    case 8909:  /* avx512f_compressv16si_mask */
    case 8500:  /* *avx_vperm2f128v4df_full */
    case 8499:  /* *avx_vperm2f128v8sf_full */
    case 8498:  /* *avx_vperm2f128v8si_full */
    case 8478:  /* avx512vl_vpermt2varv8bf3 */
    case 8476:  /* avx512vl_vpermt2varv16bf3 */
    case 8474:  /* avx512bw_vpermt2varv32bf3 */
    case 8472:  /* avx512fp16_vpermt2varv8hf3 */
    case 8470:  /* avx512vl_vpermt2varv16hf3 */
    case 8468:  /* avx512bw_vpermt2varv32hf3 */
    case 8466:  /* avx512vl_vpermt2varv16qi3 */
    case 8464:  /* avx512vl_vpermt2varv32qi3 */
    case 8462:  /* avx512bw_vpermt2varv64qi3 */
    case 8460:  /* avx512vl_vpermt2varv8hi3 */
    case 8458:  /* avx512vl_vpermt2varv16hi3 */
    case 8456:  /* avx512bw_vpermt2varv32hi3 */
    case 8454:  /* avx512vl_vpermt2varv2df3 */
    case 8452:  /* avx512vl_vpermt2varv2di3 */
    case 8450:  /* avx512vl_vpermt2varv4sf3 */
    case 8448:  /* avx512vl_vpermt2varv4si3 */
    case 8446:  /* avx512vl_vpermt2varv4df3 */
    case 8444:  /* avx512vl_vpermt2varv4di3 */
    case 8442:  /* avx512vl_vpermt2varv8sf3 */
    case 8440:  /* avx512vl_vpermt2varv8si3 */
    case 8438:  /* avx512f_vpermt2varv8df3 */
    case 8436:  /* avx512f_vpermt2varv8di3 */
    case 8434:  /* avx512f_vpermt2varv16sf3 */
    case 8432:  /* avx512f_vpermt2varv16si3 */
    case 8228:  /* avx2_permv2ti */
    case 8138:  /* pclmulqdq */
    case 8127:  /* xop_pcom_tfv2di3 */
    case 8126:  /* xop_pcom_tfv4si3 */
    case 8125:  /* xop_pcom_tfv8hi3 */
    case 8124:  /* xop_pcom_tfv16qi3 */
    case 8080:  /* xop_pperm */
    case 7735:  /* sse4_1_pblendvb */
    case 7734:  /* avx2_pblendvb */
    case 7727:  /* sse4_1_mpsadbw */
    case 7726:  /* avx2_mpsadbw */
    case 7722:  /* sse4_1_dppd */
    case 7721:  /* avx_dppd256 */
    case 7720:  /* sse4_1_dpps */
    case 7719:  /* avx_dpps256 */
    case 7706:  /* sse4_1_blendvsd */
    case 7705:  /* sse4_1_blendvss */
    case 7704:  /* sse4_1_blendvpd */
    case 7703:  /* avx_blendvpd256 */
    case 7702:  /* sse4_1_blendvps */
    case 7701:  /* avx_blendvps256 */
    case 7693:  /* sse4a_extrqi */
    case 7664:  /* ssse3_palignrdi */
    case 7663:  /* ssse3_palignrv1ti */
    case 7662:  /* avx2_palignrv2ti */
    case 7661:  /* avx512bw_palignrv4ti */
    case 6138:  /* *avx512vl_alignv2di */
    case 6136:  /* *avx512vl_alignv4di */
    case 6134:  /* *avx512f_alignv8di */
    case 6132:  /* *avx512vl_alignv4si */
    case 6130:  /* *avx512vl_alignv8si */
    case 6128:  /* *avx512f_alignv16si */
    case 3803:  /* fma_fcmaddc_v4sf_pair */
    case 3802:  /* fma_fmaddc_v4sf_pair */
    case 3801:  /* fma_fcmaddc_v8sf_pair */
    case 3800:  /* fma_fmaddc_v8sf_pair */
    case 3799:  /* fma_fcmaddc_v16sf_pair */
    case 3798:  /* fma_fmaddc_v16sf_pair */
    case 3784:  /* fma_fcmaddc_v8hf */
    case 3782:  /* fma_fmaddc_v8hf */
    case 3780:  /* fma_fcmaddc_v16hf */
    case 3778:  /* fma_fmaddc_v16hf */
    case 3774:  /* fma_fcmaddc_v32hf */
    case 3770:  /* fma_fmaddc_v32hf */
    case 3564:  /* *fma_fmaddsub_v2df */
    case 3562:  /* *fma_fmaddsub_v4df */
    case 3558:  /* *fma_fmaddsub_v8df */
    case 3556:  /* *fma_fmaddsub_v4sf */
    case 3554:  /* *fma_fmaddsub_v8sf */
    case 3550:  /* *fma_fmaddsub_v16sf */
    case 3548:  /* *fma_fmaddsub_v8hf */
    case 3546:  /* *fma_fmaddsub_v16hf */
    case 3542:  /* *fma_fmaddsub_v32hf */
    case 3541:  /* *fma_fmaddsub_v2df */
    case 3540:  /* *fma_fmaddsub_v4df */
    case 3539:  /* *fma_fmaddsub_v4sf */
    case 3538:  /* *fma_fmaddsub_v8sf */
    case 3112:  /* avx512vl_ucmpv2di3 */
    case 3110:  /* avx512vl_ucmpv4di3 */
    case 3108:  /* avx512f_ucmpv8di3 */
    case 3106:  /* avx512vl_ucmpv4si3 */
    case 3104:  /* avx512vl_ucmpv8si3 */
    case 3102:  /* avx512f_ucmpv16si3 */
    case 3040:  /* avx512vl_ucmpv8hi3 */
    case 3038:  /* avx512vl_ucmpv16hi3 */
    case 3036:  /* avx512bw_ucmpv32hi3 */
    case 3034:  /* avx512vl_ucmpv32qi3 */
    case 3032:  /* avx512vl_ucmpv16qi3 */
    case 3030:  /* avx512bw_ucmpv64qi3 */
    case 2956:  /* avx512vl_cmpv8hi3 */
    case 2954:  /* avx512vl_cmpv16hi3 */
    case 2952:  /* avx512bw_cmpv32hi3 */
    case 2950:  /* avx512vl_cmpv32qi3 */
    case 2948:  /* avx512vl_cmpv16qi3 */
    case 2946:  /* avx512bw_cmpv64qi3 */
    case 2839:  /* avx512vl_cmpv2df3 */
    case 2837:  /* avx512vl_cmpv4df3 */
    case 2833:  /* avx512f_cmpv8df3 */
    case 2831:  /* avx512vl_cmpv4sf3 */
    case 2829:  /* avx512vl_cmpv8sf3 */
    case 2825:  /* avx512f_cmpv16sf3 */
    case 2823:  /* avx512fp16_cmpv8hf3 */
    case 2821:  /* avx512vl_cmpv16hf3 */
    case 2817:  /* avx512bw_cmpv32hf3 */
    case 2815:  /* avx512vl_cmpv2di3 */
    case 2813:  /* avx512vl_cmpv4di3 */
    case 2809:  /* avx512f_cmpv8di3 */
    case 2807:  /* avx512vl_cmpv4si3 */
    case 2805:  /* avx512vl_cmpv8si3 */
    case 2801:  /* avx512f_cmpv16si3 */
    case 2760:  /* avx_cmpv2df3 */
    case 2759:  /* avx_cmpv4df3 */
    case 2758:  /* avx_cmpv4sf3 */
    case 2757:  /* avx_cmpv8sf3 */
    case 1889:  /* mmx_ppermv32 */
    case 1888:  /* mmx_ppermv64 */
    case 1872:  /* mmx_pblendvb_v2hi */
    case 1871:  /* mmx_pblendvb_v2qi */
    case 1870:  /* mmx_pblendvb_v4qi */
    case 1866:  /* mmx_pblendvb_v8qi */
    case 1717:  /* mmx_blendvps */
    case 1455:  /* movhf_mask */
    case 1129:  /* setcc_hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2798:  /* sse2_maskcmpv2df3 */
    case 2797:  /* avx_maskcmpv4df3 */
    case 2796:  /* sse_maskcmpv4sf3 */
    case 2795:  /* avx_maskcmpv8sf3 */
    case 2794:  /* *sse2_maskcmpv2df3_comm */
    case 2793:  /* *avx_maskcmpv4df3_comm */
    case 2792:  /* *sse_maskcmpv4sf3_comm */
    case 2791:  /* *avx_maskcmpv8sf3_comm */
    case 1330:  /* *fop_df_1 */
    case 1329:  /* *fop_sf_1 */
    case 1328:  /* *fop_xf_1_i387 */
    case 1321:  /* *fop_df_comm */
    case 1320:  /* *fop_sf_comm */
    case 1319:  /* *fop_xf_comm_i387 */
    case 1128:  /* setcc_df_sse */
    case 1127:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1119:  /* *btdi_setcdi_mask */
    case 1118:  /* *btsi_setcsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0), 1));
      break;

    case 1117:  /* *btdi_setncqi_2 */
    case 1116:  /* *btsi_setncqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 1115:  /* *btdi_setncdi */
    case 1114:  /* *btsi_setncsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 1113:  /* *btdi_setncqi */
    case 1112:  /* *btsi_setncqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1111:  /* *btdi_setcqi */
    case 1110:  /* *btsi_setcqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 1109:  /* *jcc_btdi_mask_1 */
    case 1108:  /* *jcc_btsi_mask_1 */
    case 1107:  /* *jcc_btdi_mask_1 */
    case 1106:  /* *jcc_btsi_mask_1 */
    case 1105:  /* *jcc_btdi_mask_1 */
    case 1104:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1103:  /* *jcc_btdi_mask */
    case 1102:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1101:  /* *jcc_btdi */
    case 1100:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1099:  /* *btdi_mask */
    case 1098:  /* *btsi_mask */
    case 1097:  /* *btdi_mask */
    case 1096:  /* *btsi_mask */
    case 1095:  /* *btdi_mask */
    case 1094:  /* *btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 1));
      break;

    case 1093:  /* *btdi */
    case 1092:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1091:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 1090:  /* *btrq_imm */
    case 1089:  /* *btsq_imm */
    case 1088:  /* *btrhi_2 */
    case 1087:  /* *btrqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 1249:  /* *bmi2_bzhi_di3_3 */
    case 1248:  /* *bmi2_bzhi_si3_3 */
    case 1247:  /* *bmi2_bzhi_di3_2 */
    case 1246:  /* *bmi2_bzhi_si3_2 */
    case 1086:  /* *btrhi_1 */
    case 1085:  /* *btrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 1084:  /* *btrdi_mask_1 */
    case 1083:  /* *btrsi_mask_1 */
    case 1078:  /* *btcdi_mask_1 */
    case 1077:  /* *btsdi_mask_1 */
    case 1076:  /* *btcsi_mask_1 */
    case 1075:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1082:  /* *btrdi_mask */
    case 1081:  /* *btrsi_mask */
    case 1074:  /* *btcdi_mask */
    case 1073:  /* *btsdi_mask */
    case 1072:  /* *btcsi_mask */
    case 1071:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1080:  /* *btrdi */
    case 1079:  /* *btrsi */
    case 1070:  /* *btcdi */
    case 1069:  /* *btsdi */
    case 1068:  /* *btcsi */
    case 1067:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1066:  /* ashrdi3_carry */
    case 1065:  /* lshrdi3_carry */
    case 1064:  /* ashrsi3_carry */
    case 1063:  /* lshrsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1039:  /* ix86_rotrti3_doubleword */
    case 1038:  /* ix86_rotrdi3_doubleword */
    case 1037:  /* ix86_rotlti3_doubleword */
    case 1036:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1018:  /* *extendti2_doubleword_highpart */
    case 1017:  /* *extenddi2_doubleword_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 961:  /* *x86_64_shrd_ndd_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7419:  /* vec_interleave_lowv4si */
    case 7417:  /* *avx512f_interleave_lowv16si */
    case 7415:  /* avx2_interleave_lowv8si */
    case 7413:  /* vec_interleave_highv4si */
    case 7411:  /* *avx512f_interleave_highv16si */
    case 7409:  /* avx2_interleave_highv8si */
    case 7407:  /* vec_interleave_lowv8bf */
    case 7405:  /* vec_interleave_lowv8hf */
    case 7403:  /* vec_interleave_lowv8hi */
    case 7401:  /* avx2_interleave_lowv16bf */
    case 7399:  /* avx2_interleave_lowv16hf */
    case 7397:  /* avx2_interleave_lowv16hi */
    case 7395:  /* *avx512bw_interleave_lowv32bf */
    case 7393:  /* *avx512bw_interleave_lowv32hf */
    case 7391:  /* *avx512bw_interleave_lowv32hi */
    case 7389:  /* vec_interleave_highv8bf */
    case 7387:  /* vec_interleave_highv8hf */
    case 7385:  /* vec_interleave_highv8hi */
    case 7383:  /* avx2_interleave_highv16bf */
    case 7381:  /* avx2_interleave_highv16hf */
    case 7379:  /* avx2_interleave_highv16hi */
    case 7377:  /* avx512bw_interleave_highv32bf */
    case 7375:  /* avx512bw_interleave_highv32hf */
    case 7373:  /* avx512bw_interleave_highv32hi */
    case 7371:  /* vec_interleave_lowv16qi */
    case 7369:  /* avx2_interleave_lowv32qi */
    case 7367:  /* avx512bw_interleave_lowv64qi */
    case 7365:  /* vec_interleave_highv16qi */
    case 7363:  /* avx2_interleave_highv32qi */
    case 7361:  /* avx512bw_interleave_highv64qi */
    case 7126:  /* *xnorv2di3 */
    case 7125:  /* *xnorv4di3 */
    case 7124:  /* *xnorv4si3 */
    case 7123:  /* *xnorv8si3 */
    case 7122:  /* *xnorv8hi3 */
    case 7121:  /* *xnorv16hi3 */
    case 7120:  /* *xnorv32hi3 */
    case 7119:  /* *xnorv16qi3 */
    case 7118:  /* *xnorv32qi3 */
    case 7117:  /* *xnorv64qi3 */
    case 7116:  /* *xnorv8di3 */
    case 7115:  /* *xnorv16si3 */
    case 6267:  /* vec_interleave_lowv2di */
    case 6265:  /* *avx512f_interleave_lowv8di */
    case 6263:  /* avx2_interleave_lowv4di */
    case 6261:  /* vec_interleave_highv2di */
    case 6259:  /* *avx512f_interleave_highv8di */
    case 6257:  /* avx2_interleave_highv4di */
    case 4669:  /* *vec_interleave_lowv2df */
    case 4666:  /* avx_unpcklpd256 */
    case 4662:  /* avx512f_unpcklpd512 */
    case 4659:  /* *vec_interleave_highv2df */
    case 4656:  /* avx_unpckhpd256 */
    case 4654:  /* *avx512f_unpckhpd512 */
    case 4516:  /* vec_interleave_lowv4sf */
    case 4513:  /* avx_unpcklps256 */
    case 4511:  /* *avx512f_unpcklps512 */
    case 4509:  /* vec_interleave_highv4sf */
    case 4507:  /* avx_unpckhps256 */
    case 4505:  /* *avx512f_unpckhps512 */
    case 4504:  /* sse_movlhps_v8bf */
    case 4503:  /* sse_movlhps_v8hf */
    case 4502:  /* sse_movlhps_v8hi */
    case 4501:  /* sse_movlhps */
    case 4500:  /* sse_movhlps */
    case 1928:  /* mmx_punpckldq */
    case 1927:  /* mmx_punpckhdq */
    case 1926:  /* mmx_punpcklwd */
    case 1925:  /* mmx_punpckhwd */
    case 1924:  /* mmx_punpcklbw_low */
    case 1923:  /* mmx_punpcklbw */
    case 1922:  /* mmx_punpckhbw_low */
    case 1921:  /* mmx_punpckhbw */
    case 1730:  /* *vec_interleave_highv2sf */
    case 1729:  /* *vec_interleave_lowv2sf */
    case 1050:  /* *bmi2_rorxsi3_1_zext */
    case 982:  /* *bmi2_ashrsi3_1_zext */
    case 981:  /* *bmi2_lshrsi3_1_zext */
    case 913:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 8648:  /* avx_vec_concatv8df */
    case 8647:  /* avx_vec_concatv16sf */
    case 8646:  /* avx_vec_concatv8di */
    case 8645:  /* avx_vec_concatv16si */
    case 8644:  /* avx_vec_concatv32bf */
    case 8643:  /* avx_vec_concatv32hf */
    case 8642:  /* avx_vec_concatv32hi */
    case 8641:  /* avx_vec_concatv64qi */
    case 8640:  /* avx_vec_concatv4df */
    case 8639:  /* avx_vec_concatv8sf */
    case 8638:  /* avx_vec_concatv4di */
    case 8637:  /* avx_vec_concatv8si */
    case 8636:  /* avx_vec_concatv16bf */
    case 8635:  /* avx_vec_concatv16hf */
    case 8634:  /* avx_vec_concatv16hi */
    case 8633:  /* avx_vec_concatv32qi */
    case 8631:  /* avx512bw_lshrvv32hi */
    case 8629:  /* avx512bw_ashlvv32hi */
    case 8627:  /* avx512vl_lshrvv16hi */
    case 8625:  /* avx512vl_ashlvv16hi */
    case 8623:  /* avx512vl_lshrvv8hi */
    case 8621:  /* avx512vl_ashlvv8hi */
    case 8619:  /* avx2_lshrvv2di */
    case 8617:  /* avx2_ashlvv2di */
    case 8615:  /* avx2_lshrvv4di */
    case 8613:  /* avx2_ashlvv4di */
    case 8611:  /* avx512f_lshrvv8di */
    case 8609:  /* avx512f_ashlvv8di */
    case 8607:  /* avx2_lshrvv4si */
    case 8605:  /* avx2_ashlvv4si */
    case 8603:  /* avx2_lshrvv8si */
    case 8601:  /* avx2_ashlvv8si */
    case 8599:  /* avx512f_lshrvv16si */
    case 8597:  /* avx512f_ashlvv16si */
    case 8595:  /* avx512bw_ashrvv32hi */
    case 8593:  /* avx512vl_ashrvv16hi */
    case 8591:  /* avx512vl_ashrvv8hi */
    case 8589:  /* avx512f_ashrvv8di */
    case 8587:  /* avx2_ashrvv4di */
    case 8585:  /* avx2_ashrvv2di */
    case 8583:  /* avx512f_ashrvv16si */
    case 8581:  /* avx2_ashrvv8si */
    case 8579:  /* avx2_ashrvv4si */
    case 8091:  /* xop_rotrv2di3 */
    case 8090:  /* xop_rotrv4si3 */
    case 8089:  /* xop_rotrv8hi3 */
    case 8088:  /* xop_rotrv16qi3 */
    case 8087:  /* xop_rotlv2di3 */
    case 8086:  /* xop_rotlv4si3 */
    case 8085:  /* xop_rotlv8hi3 */
    case 8084:  /* xop_rotlv16qi3 */
    case 7532:  /* *vec_concatv2di_0 */
    case 7531:  /* vec_concatv2di */
    case 7530:  /* *vec_concatv4si_0 */
    case 7529:  /* *vec_concatv8hi_0 */
    case 7528:  /* *vec_concatv16qi_0 */
    case 7525:  /* *vec_concatv4si */
    case 7524:  /* *vec_concatv8hi */
    case 7523:  /* *vec_concatv16qi */
    case 7522:  /* *vec_concatv2si */
    case 7521:  /* *vec_concatv2si_sse4_1 */
    case 7102:  /* xorv1ti3 */
    case 7101:  /* iorv1ti3 */
    case 7100:  /* andv1ti3 */
    case 7099:  /* *xorv8hi3 */
    case 7098:  /* *iorv8hi3 */
    case 7097:  /* *andv8hi3 */
    case 7096:  /* *xorv16hi3 */
    case 7095:  /* *iorv16hi3 */
    case 7094:  /* *andv16hi3 */
    case 7093:  /* *xorv32hi3 */
    case 7092:  /* *iorv32hi3 */
    case 7091:  /* *andv32hi3 */
    case 7090:  /* *xorv16qi3 */
    case 7089:  /* *iorv16qi3 */
    case 7088:  /* *andv16qi3 */
    case 7087:  /* *xorv32qi3 */
    case 7086:  /* *iorv32qi3 */
    case 7085:  /* *andv32qi3 */
    case 7084:  /* *xorv64qi3 */
    case 7083:  /* *iorv64qi3 */
    case 7082:  /* *andv64qi3 */
    case 7080:  /* *xorv2di3 */
    case 7078:  /* *iorv2di3 */
    case 7076:  /* *andv2di3 */
    case 7074:  /* *xorv4di3 */
    case 7072:  /* *iorv4di3 */
    case 7070:  /* *andv4di3 */
    case 7068:  /* *xorv8di3 */
    case 7066:  /* *iorv8di3 */
    case 7064:  /* *andv8di3 */
    case 7062:  /* *xorv4si3 */
    case 7060:  /* *iorv4si3 */
    case 7058:  /* *andv4si3 */
    case 7056:  /* *xorv8si3 */
    case 7054:  /* *iorv8si3 */
    case 7052:  /* *andv8si3 */
    case 7050:  /* *xorv16si3 */
    case 7048:  /* *iorv16si3 */
    case 7046:  /* *andv16si3 */
    case 7014:  /* *one_cmplv2di2 */
    case 7012:  /* *one_cmplv4di2 */
    case 7010:  /* *one_cmplv4si2 */
    case 7008:  /* *one_cmplv8si2 */
    case 7007:  /* *one_cmplv8hi2 */
    case 7006:  /* *one_cmplv16hi2 */
    case 7005:  /* *one_cmplv32hi2 */
    case 7004:  /* *one_cmplv16qi2 */
    case 7003:  /* *one_cmplv32qi2 */
    case 7002:  /* *one_cmplv64qi2 */
    case 7000:  /* *one_cmplv8di2 */
    case 6998:  /* *one_cmplv16si2 */
    case 6997:  /* *sse2_gtv4si3 */
    case 6996:  /* *sse2_gtv8hi3 */
    case 6995:  /* *sse2_gtv16qi3 */
    case 6994:  /* avx2_gtv4di3 */
    case 6993:  /* avx2_gtv8si3 */
    case 6992:  /* avx2_gtv16hi3 */
    case 6991:  /* avx2_gtv32qi3 */
    case 6990:  /* sse4_2_gtv2di3 */
    case 6989:  /* *sse2_eqv4si3 */
    case 6988:  /* *sse2_eqv8hi3 */
    case 6987:  /* *sse2_eqv16qi3 */
    case 6986:  /* *sse4_1_eqv2di3 */
    case 6963:  /* *avx2_eqv4di3 */
    case 6962:  /* *avx2_eqv8si3 */
    case 6961:  /* *avx2_eqv16hi3 */
    case 6960:  /* *avx2_eqv32qi3 */
    case 6959:  /* *uminv16qi3 */
    case 6958:  /* *umaxv16qi3 */
    case 6956:  /* *sse4_1_uminv4si3 */
    case 6954:  /* *sse4_1_umaxv4si3 */
    case 6952:  /* *sse4_1_uminv8hi3 */
    case 6950:  /* *sse4_1_umaxv8hi3 */
    case 6949:  /* *sminv8hi3 */
    case 6948:  /* *smaxv8hi3 */
    case 6946:  /* *sse4_1_sminv4si3 */
    case 6944:  /* *sse4_1_smaxv4si3 */
    case 6942:  /* *sse4_1_sminv16qi3 */
    case 6940:  /* *sse4_1_smaxv16qi3 */
    case 6938:  /* *uminv8hi3 */
    case 6936:  /* *umaxv8hi3 */
    case 6934:  /* *sminv8hi3 */
    case 6932:  /* *smaxv8hi3 */
    case 6930:  /* *uminv16hi3 */
    case 6928:  /* *umaxv16hi3 */
    case 6926:  /* *sminv16hi3 */
    case 6924:  /* *smaxv16hi3 */
    case 6922:  /* *uminv32hi3 */
    case 6920:  /* *umaxv32hi3 */
    case 6918:  /* *sminv32hi3 */
    case 6916:  /* *smaxv32hi3 */
    case 6914:  /* *uminv32qi3 */
    case 6912:  /* *umaxv32qi3 */
    case 6910:  /* *sminv32qi3 */
    case 6908:  /* *smaxv32qi3 */
    case 6906:  /* *uminv16qi3 */
    case 6904:  /* *umaxv16qi3 */
    case 6902:  /* *sminv16qi3 */
    case 6900:  /* *smaxv16qi3 */
    case 6898:  /* *uminv64qi3 */
    case 6896:  /* *umaxv64qi3 */
    case 6894:  /* *sminv64qi3 */
    case 6892:  /* *smaxv64qi3 */
    case 6890:  /* *avx512f_uminv2di3 */
    case 6888:  /* *avx512f_umaxv2di3 */
    case 6886:  /* *avx512f_sminv2di3 */
    case 6884:  /* *avx512f_smaxv2di3 */
    case 6882:  /* *avx512f_uminv4di3 */
    case 6880:  /* *avx512f_umaxv4di3 */
    case 6878:  /* *avx512f_sminv4di3 */
    case 6876:  /* *avx512f_smaxv4di3 */
    case 6874:  /* *avx512f_uminv8di3 */
    case 6872:  /* *avx512f_umaxv8di3 */
    case 6870:  /* *avx512f_sminv8di3 */
    case 6868:  /* *avx512f_smaxv8di3 */
    case 6866:  /* *avx512f_uminv4si3 */
    case 6864:  /* *avx512f_umaxv4si3 */
    case 6862:  /* *avx512f_sminv4si3 */
    case 6860:  /* *avx512f_smaxv4si3 */
    case 6858:  /* *avx512f_uminv8si3 */
    case 6856:  /* *avx512f_umaxv8si3 */
    case 6854:  /* *avx512f_sminv8si3 */
    case 6852:  /* *avx512f_smaxv8si3 */
    case 6850:  /* *avx512f_uminv16si3 */
    case 6848:  /* *avx512f_umaxv16si3 */
    case 6846:  /* *avx512f_sminv16si3 */
    case 6844:  /* *avx512f_smaxv16si3 */
    case 6843:  /* *avx2_uminv8si3 */
    case 6842:  /* *avx2_umaxv8si3 */
    case 6841:  /* *avx2_sminv8si3 */
    case 6840:  /* *avx2_smaxv8si3 */
    case 6839:  /* *avx2_uminv16hi3 */
    case 6838:  /* *avx2_umaxv16hi3 */
    case 6837:  /* *avx2_sminv16hi3 */
    case 6836:  /* *avx2_smaxv16hi3 */
    case 6835:  /* *avx2_uminv32qi3 */
    case 6834:  /* *avx2_umaxv32qi3 */
    case 6833:  /* *avx2_sminv32qi3 */
    case 6832:  /* *avx2_smaxv32qi3 */
    case 6830:  /* avx512vl_rorv2di */
    case 6828:  /* avx512vl_rolv2di */
    case 6826:  /* avx512vl_rorv4di */
    case 6824:  /* avx512vl_rolv4di */
    case 6822:  /* avx512f_rorv8di */
    case 6820:  /* avx512f_rolv8di */
    case 6818:  /* avx512vl_rorv4si */
    case 6816:  /* avx512vl_rolv4si */
    case 6814:  /* avx512vl_rorv8si */
    case 6812:  /* avx512vl_rolv8si */
    case 6810:  /* avx512f_rorv16si */
    case 6808:  /* avx512f_rolv16si */
    case 6806:  /* avx512vl_rorvv2di */
    case 6804:  /* avx512vl_rolvv2di */
    case 6802:  /* avx512vl_rorvv4di */
    case 6800:  /* avx512vl_rolvv4di */
    case 6798:  /* avx512f_rorvv8di */
    case 6796:  /* avx512f_rolvv8di */
    case 6794:  /* avx512vl_rorvv4si */
    case 6792:  /* avx512vl_rolvv4si */
    case 6790:  /* avx512vl_rorvv8si */
    case 6788:  /* avx512vl_rolvv8si */
    case 6786:  /* avx512f_rorvv16si */
    case 6784:  /* avx512f_rolvv16si */
    case 6783:  /* sse2_lshrv1ti3 */
    case 6782:  /* sse2_ashlv1ti3 */
    case 6781:  /* avx2_lshrv2ti3 */
    case 6780:  /* avx2_ashlv2ti3 */
    case 6779:  /* avx512bw_lshrv1ti3 */
    case 6778:  /* avx512bw_ashlv1ti3 */
    case 6777:  /* avx512bw_lshrv2ti3 */
    case 6776:  /* avx512bw_ashlv2ti3 */
    case 6775:  /* avx512bw_lshrv4ti3 */
    case 6774:  /* avx512bw_ashlv4ti3 */
    case 6773:  /* *rotrv1ti3_internal */
    case 6772:  /* *rotlv1ti3_internal */
    case 6771:  /* *ashrv1ti3_internal */
    case 6770:  /* *lshrv1ti3_internal */
    case 6769:  /* *ashlv1ti3_internal */
    case 6767:  /* lshrv8di3 */
    case 6765:  /* ashlv8di3 */
    case 6763:  /* lshrv16si3 */
    case 6761:  /* ashlv16si3 */
    case 6759:  /* lshrv32hi3 */
    case 6757:  /* ashlv32hi3 */
    case 6756:  /* lshrv2di3 */
    case 6755:  /* ashlv2di3 */
    case 6754:  /* lshrv4di3 */
    case 6753:  /* ashlv4di3 */
    case 6752:  /* lshrv4si3 */
    case 6751:  /* ashlv4si3 */
    case 6750:  /* lshrv8si3 */
    case 6749:  /* ashlv8si3 */
    case 6748:  /* lshrv8hi3 */
    case 6747:  /* ashlv8hi3 */
    case 6746:  /* lshrv16hi3 */
    case 6745:  /* ashlv16hi3 */
    case 6743:  /* *lshrv2di3 */
    case 6741:  /* *ashlv2di3 */
    case 6739:  /* *lshrv4di3 */
    case 6737:  /* *ashlv4di3 */
    case 6735:  /* *lshrv4si3 */
    case 6733:  /* *ashlv4si3 */
    case 6731:  /* *lshrv8si3 */
    case 6729:  /* *ashlv8si3 */
    case 6727:  /* *lshrv8hi3 */
    case 6725:  /* *ashlv8hi3 */
    case 6723:  /* *lshrv16hi3 */
    case 6721:  /* *ashlv16hi3 */
    case 6719:  /* *ashrv8di3 */
    case 6717:  /* *ashrv16si3 */
    case 6715:  /* *ashrv4di3 */
    case 6713:  /* *ashrv32hi3 */
    case 6712:  /* ashrv4si3 */
    case 6711:  /* ashrv8si3 */
    case 6710:  /* ashrv8hi3 */
    case 6709:  /* ashrv16hi3 */
    case 6707:  /* *ashrv2di3 */
    case 6705:  /* *ashrv4si3 */
    case 6703:  /* *ashrv8si3 */
    case 6701:  /* *ashrv8hi3 */
    case 6699:  /* *ashrv16hi3 */
    case 6697:  /* *sse4_1_mulv4si3 */
    case 6695:  /* *avx2_mulv8si3 */
    case 6693:  /* *avx512f_mulv16si3 */
    case 6691:  /* *avx512dq_mulv2di3 */
    case 6689:  /* *avx512dq_mulv4di3 */
    case 6687:  /* *avx512dq_mulv8di3 */
    case 6653:  /* *mulv8hi3 */
    case 6651:  /* *mulv16hi3 */
    case 6649:  /* *mulv32hi3 */
    case 6647:  /* *sse2_ussubv8hi3 */
    case 6645:  /* *sse2_sssubv8hi3 */
    case 6643:  /* *sse2_usaddv8hi3 */
    case 6641:  /* *sse2_ssaddv8hi3 */
    case 6639:  /* *avx2_ussubv16hi3 */
    case 6637:  /* *avx2_sssubv16hi3 */
    case 6635:  /* *avx2_usaddv16hi3 */
    case 6633:  /* *avx2_ssaddv16hi3 */
    case 6631:  /* *avx512bw_ussubv32hi3 */
    case 6629:  /* *avx512bw_sssubv32hi3 */
    case 6627:  /* *avx512bw_usaddv32hi3 */
    case 6625:  /* *avx512bw_ssaddv32hi3 */
    case 6623:  /* *sse2_ussubv16qi3 */
    case 6621:  /* *sse2_sssubv16qi3 */
    case 6619:  /* *sse2_usaddv16qi3 */
    case 6617:  /* *sse2_ssaddv16qi3 */
    case 6615:  /* *avx2_ussubv32qi3 */
    case 6613:  /* *avx2_sssubv32qi3 */
    case 6611:  /* *avx2_usaddv32qi3 */
    case 6609:  /* *avx2_ssaddv32qi3 */
    case 6607:  /* *avx512bw_ussubv64qi3 */
    case 6605:  /* *avx512bw_sssubv64qi3 */
    case 6603:  /* *avx512bw_usaddv64qi3 */
    case 6601:  /* *avx512bw_ssaddv64qi3 */
    case 6576:  /* *subv2di3 */
    case 6575:  /* *addv2di3 */
    case 6574:  /* *subv4di3 */
    case 6573:  /* *addv4di3 */
    case 6572:  /* *subv8di3 */
    case 6571:  /* *addv8di3 */
    case 6570:  /* *subv4si3 */
    case 6569:  /* *addv4si3 */
    case 6568:  /* *subv8si3 */
    case 6567:  /* *addv8si3 */
    case 6566:  /* *subv16si3 */
    case 6565:  /* *addv16si3 */
    case 6564:  /* *subv8hi3 */
    case 6563:  /* *addv8hi3 */
    case 6562:  /* *subv16hi3 */
    case 6561:  /* *addv16hi3 */
    case 6560:  /* *subv32hi3 */
    case 6559:  /* *addv32hi3 */
    case 6558:  /* *subv16qi3 */
    case 6557:  /* *addv16qi3 */
    case 6556:  /* *subv32qi3 */
    case 6555:  /* *addv32qi3 */
    case 6554:  /* *subv64qi3 */
    case 6553:  /* *addv64qi3 */
    case 6281:  /* vec_concatv2df */
    case 4550:  /* *vec_concatv8hf_0 */
    case 4549:  /* *vec_concatv4sf_0 */
    case 4548:  /* *vec_concatv8hf */
    case 4547:  /* *vec_concatv4sf */
    case 4546:  /* *vec_concatv2sf_sse */
    case 4545:  /* *vec_concatv2sf_sse4_1 */
    case 3277:  /* *xortf3 */
    case 3276:  /* *iortf3 */
    case 3275:  /* *andtf3 */
    case 3274:  /* xordf3 */
    case 3273:  /* iordf3 */
    case 3272:  /* anddf3 */
    case 3271:  /* xorsf3 */
    case 3270:  /* iorsf3 */
    case 3269:  /* andsf3 */
    case 3268:  /* xorhf3 */
    case 3267:  /* iorhf3 */
    case 3266:  /* andhf3 */
    case 3265:  /* xorbf3 */
    case 3264:  /* iorbf3 */
    case 3263:  /* andbf3 */
    case 3256:  /* *bit_and_float_vector_all_ones */
    case 3255:  /* *bit_and_float_vector_all_ones */
    case 3254:  /* *bit_and_float_vector_all_ones */
    case 3253:  /* *bit_and_float_vector_all_ones */
    case 3252:  /* *bit_and_float_vector_all_ones */
    case 3251:  /* *bit_and_float_vector_all_ones */
    case 3250:  /* *bit_and_float_vector_all_ones */
    case 3249:  /* *bit_and_float_vector_all_ones */
    case 3248:  /* *bit_and_float_vector_all_ones */
    case 3246:  /* *xorv8df3 */
    case 3244:  /* *iorv8df3 */
    case 3242:  /* *andv8df3 */
    case 3240:  /* *xorv16sf3 */
    case 3238:  /* *iorv16sf3 */
    case 3236:  /* *andv16sf3 */
    case 3235:  /* *xorv32hf3 */
    case 3234:  /* *iorv32hf3 */
    case 3233:  /* *andv32hf3 */
    case 3231:  /* *xorv2df3 */
    case 3229:  /* *iorv2df3 */
    case 3227:  /* *andv2df3 */
    case 3225:  /* *xorv4df3 */
    case 3223:  /* *iorv4df3 */
    case 3221:  /* *andv4df3 */
    case 3219:  /* *xorv4sf3 */
    case 3217:  /* *iorv4sf3 */
    case 3215:  /* *andv4sf3 */
    case 3213:  /* *xorv8sf3 */
    case 3211:  /* *iorv8sf3 */
    case 3209:  /* *andv8sf3 */
    case 3208:  /* *xorv8hf3 */
    case 3207:  /* *iorv8hf3 */
    case 3206:  /* *andv8hf3 */
    case 3205:  /* *xorv16hf3 */
    case 3204:  /* *iorv16hf3 */
    case 3203:  /* *andv16hf3 */
    case 2615:  /* *sminv2df3 */
    case 2613:  /* *smaxv2df3 */
    case 2611:  /* *sminv4df3 */
    case 2609:  /* *smaxv4df3 */
    case 2605:  /* *sminv8df3 */
    case 2601:  /* *smaxv8df3 */
    case 2599:  /* *sminv4sf3 */
    case 2597:  /* *smaxv4sf3 */
    case 2595:  /* *sminv8sf3 */
    case 2593:  /* *smaxv8sf3 */
    case 2589:  /* *sminv16sf3 */
    case 2585:  /* *smaxv16sf3 */
    case 2583:  /* *sminv8hf3 */
    case 2581:  /* *smaxv8hf3 */
    case 2579:  /* *sminv16hf3 */
    case 2577:  /* *smaxv16hf3 */
    case 2573:  /* *sminv32hf3 */
    case 2569:  /* *smaxv32hf3 */
    case 2460:  /* sse2_divv2df3 */
    case 2458:  /* avx_divv4df3 */
    case 2454:  /* avx512f_divv8df3 */
    case 2452:  /* sse_divv4sf3 */
    case 2450:  /* avx_divv8sf3 */
    case 2446:  /* avx512f_divv16sf3 */
    case 2444:  /* avx512fp16_divv8hf3 */
    case 2442:  /* avx512fp16_divv16hf3 */
    case 2438:  /* avx512fp16_divv32hf3 */
    case 2404:  /* *mulv2df3 */
    case 2400:  /* *mulv4df3 */
    case 2396:  /* *mulv8df3 */
    case 2392:  /* *mulv4sf3 */
    case 2388:  /* *mulv8sf3 */
    case 2384:  /* *mulv16sf3 */
    case 2380:  /* *mulv8hf3 */
    case 2376:  /* *mulv16hf3 */
    case 2372:  /* *mulv32hf3 */
    case 2338:  /* *subv2df3 */
    case 2334:  /* *addv2df3 */
    case 2330:  /* *subv4df3 */
    case 2326:  /* *addv4df3 */
    case 2322:  /* *subv8df3 */
    case 2318:  /* *addv8df3 */
    case 2314:  /* *subv4sf3 */
    case 2310:  /* *addv4sf3 */
    case 2306:  /* *subv8sf3 */
    case 2302:  /* *addv8sf3 */
    case 2298:  /* *subv16sf3 */
    case 2294:  /* *addv16sf3 */
    case 2290:  /* *subv8hf3 */
    case 2286:  /* *addv8hf3 */
    case 2282:  /* *subv16hf3 */
    case 2278:  /* *addv16hf3 */
    case 2274:  /* *subv32hf3 */
    case 2270:  /* *addv32hf3 */
    case 2175:  /* *sse2_movq128_v2df_1 */
    case 2174:  /* *sse2_movq128_v2di_1 */
    case 1972:  /* *mmx_concatv2si */
    case 1907:  /* *mmx_xorv2si3 */
    case 1906:  /* *mmx_iorv2si3 */
    case 1905:  /* *mmx_andv2si3 */
    case 1904:  /* *mmx_xorv4hi3 */
    case 1903:  /* *mmx_iorv4hi3 */
    case 1902:  /* *mmx_andv4hi3 */
    case 1901:  /* *mmx_xorv8qi3 */
    case 1900:  /* *mmx_iorv8qi3 */
    case 1899:  /* *mmx_andv8qi3 */
    case 1853:  /* *gtv2hi3 */
    case 1852:  /* *gtv2qi3 */
    case 1851:  /* *gtv4qi3 */
    case 1850:  /* mmx_gtv2si3 */
    case 1849:  /* mmx_gtv4hi3 */
    case 1848:  /* mmx_gtv8qi3 */
    case 1847:  /* *eqv2hi3 */
    case 1846:  /* *eqv2qi3 */
    case 1845:  /* *eqv4qi3 */
    case 1844:  /* *mmx_eqv2si3 */
    case 1843:  /* *mmx_eqv4hi3 */
    case 1842:  /* *mmx_eqv8qi3 */
    case 1838:  /* ashrv2hi3 */
    case 1837:  /* lshrv2hi3 */
    case 1836:  /* ashlv2hi3 */
    case 1835:  /* mmx_lshrv1si3 */
    case 1834:  /* mmx_ashlv1si3 */
    case 1833:  /* mmx_lshrv1di3 */
    case 1832:  /* mmx_ashlv1di3 */
    case 1831:  /* mmx_lshrv2si3 */
    case 1830:  /* mmx_ashlv2si3 */
    case 1829:  /* mmx_lshrv4hi3 */
    case 1828:  /* mmx_ashlv4hi3 */
    case 1827:  /* mmx_ashrv2si3 */
    case 1826:  /* mmx_ashrv4hi3 */
    case 1819:  /* uminv2hi3 */
    case 1818:  /* umaxv2hi3 */
    case 1817:  /* uminv2qi3 */
    case 1816:  /* umaxv2qi3 */
    case 1815:  /* uminv4qi3 */
    case 1814:  /* umaxv4qi3 */
    case 1813:  /* *mmx_uminv8qi3 */
    case 1812:  /* *mmx_umaxv8qi3 */
    case 1811:  /* uminv2si3 */
    case 1810:  /* umaxv2si3 */
    case 1809:  /* uminv4hi3 */
    case 1808:  /* umaxv4hi3 */
    case 1807:  /* sminv2hi3 */
    case 1806:  /* smaxv2hi3 */
    case 1805:  /* sminv2qi3 */
    case 1804:  /* smaxv2qi3 */
    case 1803:  /* sminv4qi3 */
    case 1802:  /* smaxv4qi3 */
    case 1801:  /* *mmx_sminv4hi3 */
    case 1800:  /* *mmx_smaxv4hi3 */
    case 1799:  /* sminv2si3 */
    case 1798:  /* smaxv2si3 */
    case 1797:  /* sminv8qi3 */
    case 1796:  /* smaxv8qi3 */
    case 1788:  /* mulv2hi3 */
    case 1787:  /* *mmx_mulv4hi3 */
    case 1786:  /* mulv2si3 */
    case 1785:  /* *ussubv2hi3 */
    case 1784:  /* *sssubv2hi3 */
    case 1783:  /* *usaddv2hi3 */
    case 1782:  /* *ssaddv2hi3 */
    case 1781:  /* *ussubv2qi3 */
    case 1780:  /* *sssubv2qi3 */
    case 1779:  /* *usaddv2qi3 */
    case 1778:  /* *ssaddv2qi3 */
    case 1777:  /* *ussubv4qi3 */
    case 1776:  /* *sssubv4qi3 */
    case 1775:  /* *usaddv4qi3 */
    case 1774:  /* *ssaddv4qi3 */
    case 1773:  /* *mmx_ussubv4hi3 */
    case 1772:  /* *mmx_sssubv4hi3 */
    case 1771:  /* *mmx_usaddv4hi3 */
    case 1770:  /* *mmx_ssaddv4hi3 */
    case 1769:  /* *mmx_ussubv8qi3 */
    case 1768:  /* *mmx_sssubv8qi3 */
    case 1767:  /* *mmx_usaddv8qi3 */
    case 1766:  /* *mmx_ssaddv8qi3 */
    case 1763:  /* subv2hi3 */
    case 1762:  /* addv2hi3 */
    case 1761:  /* subv4qi3 */
    case 1760:  /* addv4qi3 */
    case 1759:  /* *mmx_subv1di3 */
    case 1758:  /* *mmx_addv1di3 */
    case 1757:  /* *mmx_subv2si3 */
    case 1756:  /* *mmx_addv2si3 */
    case 1755:  /* *mmx_subv4hi3 */
    case 1754:  /* *mmx_addv4hi3 */
    case 1753:  /* *mmx_subv8qi3 */
    case 1752:  /* *mmx_addv8qi3 */
    case 1750:  /* xorv4hf3 */
    case 1749:  /* iorv4hf3 */
    case 1748:  /* andv4hf3 */
    case 1747:  /* xorv2hf3 */
    case 1746:  /* iorv2hf3 */
    case 1745:  /* andv2hf3 */
    case 1734:  /* *mmx_concatv2sf */
    case 1721:  /* xorv2sf3 */
    case 1720:  /* iorv2sf3 */
    case 1719:  /* andv2sf3 */
    case 1713:  /* mmx_gev2sf3 */
    case 1712:  /* mmx_gtv2sf3 */
    case 1711:  /* *mmx_eqv2sf3 */
    case 1698:  /* *mmx_sminv2sf3 */
    case 1697:  /* *mmx_smaxv2sf3 */
    case 1696:  /* *mmx_mulv2sf3 */
    case 1695:  /* *mmx_subv2sf3 */
    case 1694:  /* *mmx_addv2sf3 */
    case 1466:  /* sminhf3 */
    case 1465:  /* smaxhf3 */
    case 1464:  /* smindf3 */
    case 1463:  /* smaxdf3 */
    case 1462:  /* sminsf3 */
    case 1461:  /* smaxsf3 */
    case 1325:  /* *divhf */
    case 1324:  /* *mulhf */
    case 1323:  /* *subhf */
    case 1322:  /* *addhf */
    case 1045:  /* *bmi2_rorxdi3_1 */
    case 1044:  /* *bmi2_rorxsi3_1 */
    case 975:  /* *bmi2_ashrdi3_1 */
    case 974:  /* *bmi2_lshrdi3_1 */
    case 973:  /* *bmi2_ashrsi3_1 */
    case 972:  /* *bmi2_lshrsi3_1 */
    case 910:  /* *bmi2_ashldi3_1 */
    case 909:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 968:  /* *x86_shrd_ndd_2 */
    case 904:  /* *x86_shld_ndd_2 */
    case 897:  /* *x86_64_shld_ndd_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 967:  /* *x86_shrd_2 */
    case 960:  /* *x86_64_shrd_2 */
    case 903:  /* *x86_shld_2 */
    case 896:  /* *x86_64_shld_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 966:  /* *x86_shrd_shld_1_nozext */
    case 959:  /* *x86_64_shrd_shld_1_nozext */
    case 902:  /* *x86_shld_shrd_1_nozext */
    case 895:  /* *x86_64_shld_shrd_1_nozext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 965:  /* x86_shrd_ndd_1 */
    case 958:  /* x86_64_shrd_ndd_1 */
    case 901:  /* x86_shld_ndd_1 */
    case 894:  /* x86_64_shld_ndd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 964:  /* x86_shrd_1 */
    case 957:  /* x86_64_shrd_1 */
    case 900:  /* x86_shld_1 */
    case 893:  /* x86_64_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 963:  /* x86_shrd_ndd */
    case 956:  /* x86_64_shrd_ndd */
    case 899:  /* x86_shld_ndd */
    case 892:  /* x86_64_shld_ndd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 962:  /* x86_shrd */
    case 955:  /* x86_64_shrd */
    case 898:  /* x86_shld */
    case 891:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1035:  /* *rotrdi3_mask_1 */
    case 1034:  /* *rotldi3_mask_1 */
    case 1033:  /* *rotrsi3_mask_1 */
    case 1032:  /* *rotlsi3_mask_1 */
    case 1031:  /* *rotrhi3_mask_1 */
    case 1030:  /* *rotlhi3_mask_1 */
    case 1029:  /* *rotrqi3_mask_1 */
    case 1028:  /* *rotlqi3_mask_1 */
    case 946:  /* *ashrti3_doubleword_mask_1 */
    case 945:  /* *lshrti3_doubleword_mask_1 */
    case 944:  /* *ashrdi3_doubleword_mask_1 */
    case 943:  /* *lshrdi3_doubleword_mask_1 */
    case 938:  /* *ashrdi3_mask_1 */
    case 937:  /* *lshrdi3_mask_1 */
    case 936:  /* *ashrsi3_mask_1 */
    case 935:  /* *lshrsi3_mask_1 */
    case 908:  /* *ashldi3_mask_1 */
    case 907:  /* *ashlsi3_mask_1 */
    case 884:  /* *ashlti3_doubleword_mask_1 */
    case 883:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 1027:  /* *rotrdi3_mask */
    case 1026:  /* *rotldi3_mask */
    case 1025:  /* *rotrsi3_mask */
    case 1024:  /* *rotlsi3_mask */
    case 1023:  /* *rotrhi3_mask */
    case 1022:  /* *rotlhi3_mask */
    case 1021:  /* *rotrqi3_mask */
    case 1020:  /* *rotlqi3_mask */
    case 942:  /* *ashrti3_doubleword_mask */
    case 941:  /* *lshrti3_doubleword_mask */
    case 940:  /* *ashrdi3_doubleword_mask */
    case 939:  /* *lshrdi3_doubleword_mask */
    case 934:  /* *ashrdi3_mask */
    case 933:  /* *lshrdi3_mask */
    case 932:  /* *ashrsi3_mask */
    case 931:  /* *lshrsi3_mask */
    case 906:  /* *ashldi3_mask */
    case 905:  /* *ashlsi3_mask */
    case 882:  /* *ashlti3_doubleword_mask */
    case 881:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 880:  /* *one_cmplqi_extdi_1 */
    case 879:  /* *one_cmplqi_extsi_1 */
    case 878:  /* *one_cmplqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 2269:  /* *nabsv2df2 */
    case 2268:  /* *nabsv4df2 */
    case 2267:  /* *nabsv8df2 */
    case 2266:  /* *nabsv4sf2 */
    case 2265:  /* *nabsv8sf2 */
    case 2264:  /* *nabsv16sf2 */
    case 1742:  /* *mmx_nabsv4hf2 */
    case 1741:  /* *mmx_nabsv2hf2 */
    case 1693:  /* *mmx_nabsv2sf2 */
    case 857:  /* *nabsdf2_1 */
    case 856:  /* *nabssf2_1 */
    case 843:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 828:  /* *negvdi3 */
    case 827:  /* *negvsi3 */
    case 826:  /* *negvhi3 */
    case 825:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 824:  /* *negqi_extdi_1 */
    case 823:  /* *negqi_extsi_1 */
    case 822:  /* *negqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 821:  /* *negdi_ccc_2 */
    case 820:  /* *negsi_ccc_2 */
    case 819:  /* *neghi_ccc_2 */
    case 818:  /* *negqi_ccc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 817:  /* *negdi_ccc_1 */
    case 816:  /* *negsi_ccc_1 */
    case 815:  /* *neghi_ccc_1 */
    case 814:  /* *negqi_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 877:  /* *one_cmplsi2_2_zext */
    case 813:  /* *negsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 876:  /* *one_cmpldi2_2 */
    case 875:  /* *one_cmplsi2_2 */
    case 874:  /* *one_cmplhi2_2 */
    case 873:  /* *one_cmplqi2_2 */
    case 812:  /* *negdi_2 */
    case 811:  /* *negsi_2 */
    case 810:  /* *neghi_2 */
    case 809:  /* *negqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 978:  /* *highpartdisi2 */
    case 808:  /* *neghi_1_slp */
    case 807:  /* *negqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 8401:  /* avx512cd_maskw_vec_dupv4si */
    case 8400:  /* avx512cd_maskw_vec_dupv8si */
    case 8399:  /* avx512cd_maskw_vec_dupv16si */
    case 8398:  /* avx512cd_maskb_vec_dupv2di */
    case 8397:  /* avx512cd_maskb_vec_dupv4di */
    case 8396:  /* avx512cd_maskb_vec_dupv8di */
    case 2214:  /* *knotsi_1_zext */
    case 1285:  /* *popcounthi2_2 */
    case 1284:  /* *popcounthi2_1 */
    case 1282:  /* *popcountsi2_zext_2 */
    case 1211:  /* *clzsi2_lzcnt_zext_2 */
    case 1193:  /* *ctzsidi2_uext */
    case 1192:  /* *ctzsidi2_sext */
    case 1062:  /* rcrdi2 */
    case 1061:  /* rcrsi2 */
    case 840:  /* *nabsdi2_1 */
    case 839:  /* *nabssi2_1 */
    case 838:  /* *nabshi2_1 */
    case 837:  /* *nabsqi2_1 */
    case 832:  /* *nabsti2_doubleword */
    case 831:  /* *nabsdi2_doubleword */
    case 806:  /* *negsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 9385:  /* *vcvtneps2bf16_v4sf */
    case 8535:  /* vec_set_hi_v32qi */
    case 8533:  /* vec_set_hi_v16bf */
    case 8532:  /* vec_set_hi_v16hf */
    case 8531:  /* vec_set_hi_v16hi */
    case 8526:  /* vec_set_hi_v8sf */
    case 8524:  /* vec_set_hi_v8si */
    case 8518:  /* vec_set_hi_v4df */
    case 8516:  /* vec_set_hi_v4di */
    case 7453:  /* vec_set_hi_v8di */
    case 7451:  /* vec_set_hi_v8df */
    case 7445:  /* vec_set_hi_v16si */
    case 7443:  /* vec_set_hi_v16sf */
    case 7114:  /* *iornotv2di3 */
    case 7113:  /* *iornotv4di3 */
    case 7112:  /* *iornotv4si3 */
    case 7111:  /* *iornotv8si3 */
    case 7110:  /* *iornotv8hi3 */
    case 7109:  /* *iornotv16hi3 */
    case 7108:  /* *iornotv32hi3 */
    case 7107:  /* *iornotv16qi3 */
    case 7106:  /* *iornotv32qi3 */
    case 7105:  /* *iornotv64qi3 */
    case 7104:  /* *iornotv8di3 */
    case 7103:  /* *iornotv16si3 */
    case 7039:  /* *andnotv2di3 */
    case 7038:  /* *andnotv4di3 */
    case 7037:  /* *andnotv4si3 */
    case 7036:  /* *andnotv8si3 */
    case 7035:  /* *andnotv8hi3 */
    case 7034:  /* *andnotv16hi3 */
    case 7033:  /* *andnotv32hi3 */
    case 7032:  /* *andnotv16qi3 */
    case 7031:  /* *andnotv32qi3 */
    case 7030:  /* *andnotv64qi3 */
    case 7029:  /* *andnotv8di3 */
    case 7028:  /* *andnotv16si3 */
    case 6512:  /* avx512vl_us_truncatev2div2si2 */
    case 6511:  /* avx512vl_truncatev2div2si2 */
    case 6510:  /* avx512vl_ss_truncatev2div2si2 */
    case 6454:  /* avx512vl_us_truncatev4siv4hi2 */
    case 6453:  /* avx512vl_truncatev4siv4hi2 */
    case 6452:  /* avx512vl_ss_truncatev4siv4hi2 */
    case 6451:  /* avx512vl_us_truncatev2div2hi2 */
    case 6450:  /* avx512vl_truncatev2div2hi2 */
    case 6449:  /* avx512vl_ss_truncatev2div2hi2 */
    case 6448:  /* avx512vl_us_truncatev4div4hi2 */
    case 6447:  /* avx512vl_truncatev4div4hi2 */
    case 6446:  /* avx512vl_ss_truncatev4div4hi2 */
    case 6354:  /* avx512vl_us_truncatev8hiv8qi2 */
    case 6353:  /* avx512vl_truncatev8hiv8qi2 */
    case 6352:  /* avx512vl_ss_truncatev8hiv8qi2 */
    case 6351:  /* avx512vl_us_truncatev4siv4qi2 */
    case 6350:  /* avx512vl_truncatev4siv4qi2 */
    case 6349:  /* avx512vl_ss_truncatev4siv4qi2 */
    case 6348:  /* avx512vl_us_truncatev8siv8qi2 */
    case 6347:  /* avx512vl_truncatev8siv8qi2 */
    case 6346:  /* avx512vl_ss_truncatev8siv8qi2 */
    case 6345:  /* avx512vl_us_truncatev2div2qi2 */
    case 6344:  /* avx512vl_truncatev2div2qi2 */
    case 6343:  /* avx512vl_ss_truncatev2div2qi2 */
    case 6342:  /* avx512vl_us_truncatev4div4qi2 */
    case 6341:  /* avx512vl_truncatev4div4qi2 */
    case 6340:  /* avx512vl_ss_truncatev4div4qi2 */
    case 6275:  /* sse2_loadhpd */
    case 4535:  /* sse_loadhps */
    case 4454:  /* *sse2_cvtpd2ps */
    case 4332:  /* *avx512dq_floatunsv2div2sf2 */
    case 4331:  /* *avx512dq_floatv2div2sf2 */
    case 4138:  /* *avx512fp16_vcvtpd2ph_v2df */
    case 4133:  /* *avx512fp16_vcvtps2ph_v4sf */
    case 4132:  /* *avx512fp16_vcvtpd2ph_v4df */
    case 3987:  /* *avx512fp16_vcvtuqq2ph_v2di */
    case 3986:  /* *avx512fp16_vcvtqq2ph_v2di */
    case 3977:  /* *avx512fp16_vcvtuqq2ph_v4di */
    case 3976:  /* *avx512fp16_vcvtqq2ph_v4di */
    case 3975:  /* *avx512fp16_vcvtudq2ph_v4si */
    case 3974:  /* *avx512fp16_vcvtdq2ph_v4si */
    case 3262:  /* *andnotv1ti3 */
    case 3261:  /* *andnottf3 */
    case 3260:  /* *andnotdf3 */
    case 3259:  /* *andnotsf3 */
    case 3258:  /* *andnothf3 */
    case 3257:  /* *andnotbf3 */
    case 3201:  /* avx512f_andnotv8df3 */
    case 3199:  /* avx512f_andnotv16sf3 */
    case 3198:  /* avx512fp16_andnotv32hf3 */
    case 3196:  /* sse2_andnotv2df3 */
    case 3194:  /* avx_andnotv4df3 */
    case 3192:  /* sse_andnotv4sf3 */
    case 3190:  /* avx_andnotv8sf3 */
    case 3189:  /* avx512fp16_andnotv8hf3 */
    case 3188:  /* avx512fp16_andnotv16hf3 */
    case 2523:  /* sse2_vmsqrtv2df2 */
    case 2519:  /* sse_vmsqrtv4sf2 */
    case 2515:  /* avx512fp16_vmsqrtv8hf2 */
    case 2173:  /* *sse2_movq128_v2df */
    case 2172:  /* *sse2_movq128_v2di */
    case 1895:  /* mmx_andnotv2si3 */
    case 1894:  /* mmx_andnotv4hi3 */
    case 1893:  /* mmx_andnotv8qi3 */
    case 1744:  /* *mmx_andnotv4hf3 */
    case 1743:  /* *mmx_andnotv2hf3 */
    case 1718:  /* *mmx_andnotv2sf3 */
    case 1152:  /* *sibcall_value */
    case 1151:  /* *sibcall_value */
    case 1148:  /* *call_value */
    case 1147:  /* *call_value */
    case 799:  /* *concatditi3_7 */
    case 798:  /* *concatditi3_7 */
    case 797:  /* *concatditi3_7 */
    case 796:  /* *concatsidi3_7 */
    case 795:  /* *concatsidi3_7 */
    case 794:  /* *concatsidi3_7 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 793:  /* *concatditi3_6 */
    case 792:  /* *concatditi3_6 */
    case 791:  /* *concatditi3_6 */
    case 790:  /* *concatsidi3_6 */
    case 789:  /* *concatsidi3_6 */
    case 788:  /* *concatsidi3_6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 781:  /* *concatditi3_4 */
    case 780:  /* *concatditi3_4 */
    case 779:  /* *concatditi3_4 */
    case 778:  /* *concatsidi3_4 */
    case 777:  /* *concatsidi3_4 */
    case 776:  /* *concatsidi3_4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 775:  /* *concatditi3_3 */
    case 774:  /* *concatditi3_3 */
    case 773:  /* *concatditi3_3 */
    case 772:  /* *concatsidi3_3 */
    case 771:  /* *concatsidi3_3 */
    case 770:  /* *concatsidi3_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 769:  /* *concatditi3_2 */
    case 768:  /* *concatditi3_2 */
    case 767:  /* *concatditi3_2 */
    case 766:  /* *concatsidi3_2 */
    case 765:  /* *concatsidi3_2 */
    case 764:  /* *concatsidi3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 763:  /* *concatditi3_1 */
    case 762:  /* *concatditi3_1 */
    case 761:  /* *concatditi3_1 */
    case 760:  /* *concatsidi3_1 */
    case 759:  /* *concatsidi3_1 */
    case 758:  /* *concatsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 749:  /* *xorsi_2_zext_imm */
    case 748:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 730:  /* *xor2andn */
    case 729:  /* *xor2andn */
    case 728:  /* *xor2andn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 712:  /* *andn_di_ccno */
    case 711:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 2205:  /* kandndi */
    case 2204:  /* kandnsi */
    case 2203:  /* kandnhi */
    case 2202:  /* kandnqi */
    case 1898:  /* *andnotv2hi3 */
    case 1897:  /* *andnotv2qi3 */
    case 1896:  /* *andnotv4qi3 */
    case 1301:  /* *tls_local_dynamic_base_64_di */
    case 1300:  /* *tls_local_dynamic_base_64_si */
    case 1154:  /* *sibcall_value_memory */
    case 1153:  /* *sibcall_value_memory */
    case 890:  /* *ashlti3_doubleword_highpart */
    case 889:  /* *ashlti3_doubleword_highpart */
    case 888:  /* *ashldi3_doubleword_highpart */
    case 887:  /* *ashldi3_doubleword_highpart */
    case 734:  /* *xorsi_1_zext_imm */
    case 733:  /* *iorsi_1_zext_imm */
    case 710:  /* *andnhi_1 */
    case 709:  /* *andnqi_1 */
    case 708:  /* *andndi_1 */
    case 707:  /* *andnsi_1 */
    case 706:  /* *andnti3_doubleword */
    case 705:  /* *andndi3_doubleword */
    case 704:  /* *andnti3_doubleword_bmi */
    case 703:  /* *andndi3_doubleword_bmi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 702:  /* *xorqi_extdi_3 */
    case 701:  /* *iorqi_extdi_3 */
    case 700:  /* *andqi_extdi_3 */
    case 699:  /* *xorqi_extsi_3 */
    case 698:  /* *iorqi_extsi_3 */
    case 697:  /* *andqi_extsi_3 */
    case 696:  /* *xorqi_exthi_3 */
    case 695:  /* *iorqi_exthi_3 */
    case 694:  /* *andqi_exthi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 684:  /* *xorqi_extdi_1_cc */
    case 683:  /* *iorqi_extdi_1_cc */
    case 682:  /* *andqi_extdi_1_cc */
    case 681:  /* *xorqi_extsi_1_cc */
    case 680:  /* *iorqi_extsi_1_cc */
    case 679:  /* *andqi_extsi_1_cc */
    case 678:  /* *xorqi_exthi_1_cc */
    case 677:  /* *iorqi_exthi_1_cc */
    case 676:  /* *andqi_exthi_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 610:  /* *testti_not_doubleword */
    case 609:  /* *testdi_not_doubleword */
    case 608:  /* *testdi_not */
    case 607:  /* *testsi_not */
    case 606:  /* *testhi_not */
    case 605:  /* *testqi_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 604:  /* *testqi_ext_3 */
    case 603:  /* *testqi_ext_3 */
    case 602:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 600:  /* *testqi_extdi_2 */
    case 599:  /* *testqi_extsi_2 */
    case 598:  /* *testqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 597:  /* *testqi_extdi_1 */
    case 596:  /* *testqi_extsi_1 */
    case 595:  /* *testqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 589:  /* udivmodhiqi3 */
    case 588:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 586:  /* *udivmodsi4_noext_zext_2 */
    case 585:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 584:  /* *udivmodsi4_noext_zext_1 */
    case 583:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 582:  /* *udivmoddi4_noext */
    case 581:  /* *divmoddi4_noext */
    case 580:  /* *udivmodsi4_noext */
    case 579:  /* *divmodsi4_noext */
    case 578:  /* *udivmodhi4_noext */
    case 577:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 576:  /* *udivmodsi4_pow2_zext_2 */
    case 575:  /* *udivmodsi4_zext_2 */
    case 574:  /* *divmodsi4_zext_2 */
    case 562:  /* udivmodsi4_zext_2 */
    case 561:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 573:  /* *udivmodsi4_pow2_zext_1 */
    case 572:  /* *udivmodsi4_zext_1 */
    case 571:  /* *divmodsi4_zext_1 */
    case 560:  /* udivmodsi4_zext_1 */
    case 559:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 552:  /* *umulsi3_highpart_zext */
    case 551:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 554:  /* *umulsi3_highpart_1 */
    case 553:  /* *smulsi3_highpart_1 */
    case 550:  /* *umuldi3_highpart_1 */
    case 549:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 548:  /* *umulsi3_highpart_zext */
    case 547:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 546:  /* umuldi3_highpart */
    case 545:  /* smuldi3_highpart */
    case 544:  /* umulsi3_highpart */
    case 543:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 542:  /* *umulqihi3_1 */
    case 541:  /* *mulqihi3_1 */
    case 540:  /* *mulditi3_1 */
    case 539:  /* *mulsidi3_1 */
    case 538:  /* *umulditi3_1 */
    case 537:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 587:  /* *divmodsi4_const */
    case 570:  /* *udivmoddi4_pow2 */
    case 569:  /* *udivmodsi4_pow2 */
    case 568:  /* *udivmoddi4 */
    case 567:  /* *udivmodsi4 */
    case 566:  /* *udivmodhi4 */
    case 565:  /* *divmoddi4 */
    case 564:  /* *divmodsi4 */
    case 563:  /* *divmodhi4 */
    case 558:  /* udivmoddi4_1 */
    case 557:  /* udivmodsi4_1 */
    case 556:  /* divmoddi4_1 */
    case 555:  /* divmodsi4_1 */
    case 536:  /* *bmi2_umulditi3_1 */
    case 535:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 532:  /* *umulvdi4 */
    case 531:  /* *umulvsi4 */
    case 530:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 510:  /* *subdi3_eq_1 */
    case 509:  /* *subsi3_eq_1 */
    case 508:  /* *subhi3_eq_1 */
    case 507:  /* *subqi3_eq_1 */
    case 506:  /* *subdi3_ne */
    case 505:  /* *subsi3_ne */
    case 504:  /* *subhi3_ne */
    case 503:  /* *subqi3_ne */
    case 502:  /* *subdi3_eq */
    case 501:  /* *subsi3_eq */
    case 500:  /* *subhi3_eq */
    case 499:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 490:  /* *adddi3_ne */
    case 489:  /* *addsi3_ne */
    case 488:  /* *addhi3_ne */
    case 487:  /* *addqi3_ne */
    case 486:  /* *adddi3_eq */
    case 485:  /* *addsi3_eq */
    case 484:  /* *addhi3_eq */
    case 483:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 480:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 479:  /* *adddi3_cc_overflow_2 */
    case 478:  /* *addsi3_cc_overflow_2 */
    case 477:  /* *addhi3_cc_overflow_2 */
    case 476:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 475:  /* *adddi3_cconly_overflow_2 */
    case 474:  /* *addsi3_cconly_overflow_2 */
    case 473:  /* *addhi3_cconly_overflow_2 */
    case 472:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 471:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 482:  /* *addti3_doubleword_cc_overflow_1 */
    case 481:  /* *adddi3_doubleword_cc_overflow_1 */
    case 470:  /* adddi3_cc_overflow_1 */
    case 469:  /* addsi3_cc_overflow_1 */
    case 468:  /* addhi3_cc_overflow_1 */
    case 467:  /* addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 466:  /* *adddi3_cconly_overflow_1 */
    case 465:  /* *addsi3_cconly_overflow_1 */
    case 464:  /* *addhi3_cconly_overflow_1 */
    case 463:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 455:  /* subborrowdi */
    case 454:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 453:  /* subdi3_carry_ccgz */
    case 452:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 451:  /* *subdi3_carry_ccc_1 */
    case 450:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 449:  /* subdi3_carry_ccc */
    case 448:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 445:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 436:  /* subdi3_carry */
    case 435:  /* subsi3_carry */
    case 434:  /* subhi3_carry */
    case 433:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 432:  /* *addcarrydi_1 */
    case 431:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 430:  /* addcarrydi */
    case 429:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 428:  /* *addsi3_carry_zext_0r */
    case 427:  /* *addsi3_carry_zext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 426:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 425:  /* *adddi3_carry_0r */
    case 424:  /* *addsi3_carry_0r */
    case 423:  /* *addhi3_carry_0r */
    case 422:  /* *addqi3_carry_0r */
    case 421:  /* *adddi3_carry_0 */
    case 420:  /* *addsi3_carry_0 */
    case 419:  /* *addhi3_carry_0 */
    case 418:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 417:  /* adddi3_carry */
    case 416:  /* addsi3_carry */
    case 415:  /* addhi3_carry */
    case 414:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 413:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 412:  /* *dec_cmovdi */
    case 411:  /* *dec_cmovsi */
    case 410:  /* *dec_cmovhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 409:  /* *subdi_3 */
    case 408:  /* *subsi_3 */
    case 407:  /* *subhi_3 */
    case 406:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 405:  /* *subvdi4_overflow_2 */
    case 404:  /* *subvsi4_overflow_2 */
    case 403:  /* *subvhi4_overflow_2 */
    case 402:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 401:  /* *subvdi4_overflow_1 */
    case 400:  /* *subvsi4_overflow_1 */
    case 399:  /* *subvhi4_overflow_1 */
    case 398:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 379:  /* *subqi_extdi_0 */
    case 378:  /* *subqi_extsi_0 */
    case 377:  /* *subqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 368:  /* *subqi_extdi_1_slp */
    case 367:  /* *subqi_extsi_1_slp */
    case 366:  /* *subqi_exthi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 518:  /* *subdi3_ne_0 */
    case 517:  /* *subsi3_ne_0 */
    case 516:  /* *subhi3_ne_0 */
    case 515:  /* *subqi3_ne_0 */
    case 514:  /* *subdi3_eq_0 */
    case 513:  /* *subsi3_eq_0 */
    case 512:  /* *subhi3_eq_0 */
    case 511:  /* *subqi3_eq_0 */
    case 358:  /* *subti3_doubleword_zext */
    case 357:  /* *subdi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 5884:  /* *avx512vl_vpternlogv2df_2 */
    case 5883:  /* *avx512vl_vpternlogv2df_2 */
    case 5882:  /* *avx512vl_vpternlogv2df_2 */
    case 5881:  /* *avx512vl_vpternlogv2df_2 */
    case 5880:  /* *avx512vl_vpternlogv2df_2 */
    case 5879:  /* *avx512vl_vpternlogv2df_2 */
    case 5878:  /* *avx512vl_vpternlogv2df_2 */
    case 5877:  /* *avx512vl_vpternlogv2df_2 */
    case 5876:  /* *avx512vl_vpternlogv2df_2 */
    case 5875:  /* *avx512vl_vpternlogv2df_2 */
    case 5874:  /* *avx512vl_vpternlogv2df_2 */
    case 5873:  /* *avx512vl_vpternlogv2df_2 */
    case 5872:  /* *avx512vl_vpternlogv2df_2 */
    case 5871:  /* *avx512vl_vpternlogv2df_2 */
    case 5870:  /* *avx512vl_vpternlogv2df_2 */
    case 5869:  /* *avx512vl_vpternlogv2df_2 */
    case 5868:  /* *avx512vl_vpternlogv2df_2 */
    case 5867:  /* *avx512vl_vpternlogv2df_2 */
    case 5866:  /* *avx512vl_vpternlogv2df_2 */
    case 5865:  /* *avx512vl_vpternlogv2df_2 */
    case 5864:  /* *avx512vl_vpternlogv2df_2 */
    case 5863:  /* *avx512vl_vpternlogv2df_2 */
    case 5862:  /* *avx512vl_vpternlogv2df_2 */
    case 5861:  /* *avx512vl_vpternlogv2df_2 */
    case 5860:  /* *avx512vl_vpternlogv2df_2 */
    case 5859:  /* *avx512vl_vpternlogv2df_2 */
    case 5858:  /* *avx512vl_vpternlogv2df_2 */
    case 5857:  /* *avx512vl_vpternlogv4df_2 */
    case 5856:  /* *avx512vl_vpternlogv4df_2 */
    case 5855:  /* *avx512vl_vpternlogv4df_2 */
    case 5854:  /* *avx512vl_vpternlogv4df_2 */
    case 5853:  /* *avx512vl_vpternlogv4df_2 */
    case 5852:  /* *avx512vl_vpternlogv4df_2 */
    case 5851:  /* *avx512vl_vpternlogv4df_2 */
    case 5850:  /* *avx512vl_vpternlogv4df_2 */
    case 5849:  /* *avx512vl_vpternlogv4df_2 */
    case 5848:  /* *avx512vl_vpternlogv4df_2 */
    case 5847:  /* *avx512vl_vpternlogv4df_2 */
    case 5846:  /* *avx512vl_vpternlogv4df_2 */
    case 5845:  /* *avx512vl_vpternlogv4df_2 */
    case 5844:  /* *avx512vl_vpternlogv4df_2 */
    case 5843:  /* *avx512vl_vpternlogv4df_2 */
    case 5842:  /* *avx512vl_vpternlogv4df_2 */
    case 5841:  /* *avx512vl_vpternlogv4df_2 */
    case 5840:  /* *avx512vl_vpternlogv4df_2 */
    case 5839:  /* *avx512vl_vpternlogv4df_2 */
    case 5838:  /* *avx512vl_vpternlogv4df_2 */
    case 5837:  /* *avx512vl_vpternlogv4df_2 */
    case 5836:  /* *avx512vl_vpternlogv4df_2 */
    case 5835:  /* *avx512vl_vpternlogv4df_2 */
    case 5834:  /* *avx512vl_vpternlogv4df_2 */
    case 5833:  /* *avx512vl_vpternlogv4df_2 */
    case 5832:  /* *avx512vl_vpternlogv4df_2 */
    case 5831:  /* *avx512vl_vpternlogv4df_2 */
    case 5830:  /* *avx512f_vpternlogv8df_2 */
    case 5829:  /* *avx512f_vpternlogv8df_2 */
    case 5828:  /* *avx512f_vpternlogv8df_2 */
    case 5827:  /* *avx512f_vpternlogv8df_2 */
    case 5826:  /* *avx512f_vpternlogv8df_2 */
    case 5825:  /* *avx512f_vpternlogv8df_2 */
    case 5824:  /* *avx512f_vpternlogv8df_2 */
    case 5823:  /* *avx512f_vpternlogv8df_2 */
    case 5822:  /* *avx512f_vpternlogv8df_2 */
    case 5821:  /* *avx512f_vpternlogv8df_2 */
    case 5820:  /* *avx512f_vpternlogv8df_2 */
    case 5819:  /* *avx512f_vpternlogv8df_2 */
    case 5818:  /* *avx512f_vpternlogv8df_2 */
    case 5817:  /* *avx512f_vpternlogv8df_2 */
    case 5816:  /* *avx512f_vpternlogv8df_2 */
    case 5815:  /* *avx512f_vpternlogv8df_2 */
    case 5814:  /* *avx512f_vpternlogv8df_2 */
    case 5813:  /* *avx512f_vpternlogv8df_2 */
    case 5812:  /* *avx512f_vpternlogv8df_2 */
    case 5811:  /* *avx512f_vpternlogv8df_2 */
    case 5810:  /* *avx512f_vpternlogv8df_2 */
    case 5809:  /* *avx512f_vpternlogv8df_2 */
    case 5808:  /* *avx512f_vpternlogv8df_2 */
    case 5807:  /* *avx512f_vpternlogv8df_2 */
    case 5806:  /* *avx512f_vpternlogv8df_2 */
    case 5805:  /* *avx512f_vpternlogv8df_2 */
    case 5804:  /* *avx512f_vpternlogv8df_2 */
    case 5803:  /* *avx512vl_vpternlogv4sf_2 */
    case 5802:  /* *avx512vl_vpternlogv4sf_2 */
    case 5801:  /* *avx512vl_vpternlogv4sf_2 */
    case 5800:  /* *avx512vl_vpternlogv4sf_2 */
    case 5799:  /* *avx512vl_vpternlogv4sf_2 */
    case 5798:  /* *avx512vl_vpternlogv4sf_2 */
    case 5797:  /* *avx512vl_vpternlogv4sf_2 */
    case 5796:  /* *avx512vl_vpternlogv4sf_2 */
    case 5795:  /* *avx512vl_vpternlogv4sf_2 */
    case 5794:  /* *avx512vl_vpternlogv4sf_2 */
    case 5793:  /* *avx512vl_vpternlogv4sf_2 */
    case 5792:  /* *avx512vl_vpternlogv4sf_2 */
    case 5791:  /* *avx512vl_vpternlogv4sf_2 */
    case 5790:  /* *avx512vl_vpternlogv4sf_2 */
    case 5789:  /* *avx512vl_vpternlogv4sf_2 */
    case 5788:  /* *avx512vl_vpternlogv4sf_2 */
    case 5787:  /* *avx512vl_vpternlogv4sf_2 */
    case 5786:  /* *avx512vl_vpternlogv4sf_2 */
    case 5785:  /* *avx512vl_vpternlogv4sf_2 */
    case 5784:  /* *avx512vl_vpternlogv4sf_2 */
    case 5783:  /* *avx512vl_vpternlogv4sf_2 */
    case 5782:  /* *avx512vl_vpternlogv4sf_2 */
    case 5781:  /* *avx512vl_vpternlogv4sf_2 */
    case 5780:  /* *avx512vl_vpternlogv4sf_2 */
    case 5779:  /* *avx512vl_vpternlogv4sf_2 */
    case 5778:  /* *avx512vl_vpternlogv4sf_2 */
    case 5777:  /* *avx512vl_vpternlogv4sf_2 */
    case 5776:  /* *avx512vl_vpternlogv8sf_2 */
    case 5775:  /* *avx512vl_vpternlogv8sf_2 */
    case 5774:  /* *avx512vl_vpternlogv8sf_2 */
    case 5773:  /* *avx512vl_vpternlogv8sf_2 */
    case 5772:  /* *avx512vl_vpternlogv8sf_2 */
    case 5771:  /* *avx512vl_vpternlogv8sf_2 */
    case 5770:  /* *avx512vl_vpternlogv8sf_2 */
    case 5769:  /* *avx512vl_vpternlogv8sf_2 */
    case 5768:  /* *avx512vl_vpternlogv8sf_2 */
    case 5767:  /* *avx512vl_vpternlogv8sf_2 */
    case 5766:  /* *avx512vl_vpternlogv8sf_2 */
    case 5765:  /* *avx512vl_vpternlogv8sf_2 */
    case 5764:  /* *avx512vl_vpternlogv8sf_2 */
    case 5763:  /* *avx512vl_vpternlogv8sf_2 */
    case 5762:  /* *avx512vl_vpternlogv8sf_2 */
    case 5761:  /* *avx512vl_vpternlogv8sf_2 */
    case 5760:  /* *avx512vl_vpternlogv8sf_2 */
    case 5759:  /* *avx512vl_vpternlogv8sf_2 */
    case 5758:  /* *avx512vl_vpternlogv8sf_2 */
    case 5757:  /* *avx512vl_vpternlogv8sf_2 */
    case 5756:  /* *avx512vl_vpternlogv8sf_2 */
    case 5755:  /* *avx512vl_vpternlogv8sf_2 */
    case 5754:  /* *avx512vl_vpternlogv8sf_2 */
    case 5753:  /* *avx512vl_vpternlogv8sf_2 */
    case 5752:  /* *avx512vl_vpternlogv8sf_2 */
    case 5751:  /* *avx512vl_vpternlogv8sf_2 */
    case 5750:  /* *avx512vl_vpternlogv8sf_2 */
    case 5749:  /* *avx512f_vpternlogv16sf_2 */
    case 5748:  /* *avx512f_vpternlogv16sf_2 */
    case 5747:  /* *avx512f_vpternlogv16sf_2 */
    case 5746:  /* *avx512f_vpternlogv16sf_2 */
    case 5745:  /* *avx512f_vpternlogv16sf_2 */
    case 5744:  /* *avx512f_vpternlogv16sf_2 */
    case 5743:  /* *avx512f_vpternlogv16sf_2 */
    case 5742:  /* *avx512f_vpternlogv16sf_2 */
    case 5741:  /* *avx512f_vpternlogv16sf_2 */
    case 5740:  /* *avx512f_vpternlogv16sf_2 */
    case 5739:  /* *avx512f_vpternlogv16sf_2 */
    case 5738:  /* *avx512f_vpternlogv16sf_2 */
    case 5737:  /* *avx512f_vpternlogv16sf_2 */
    case 5736:  /* *avx512f_vpternlogv16sf_2 */
    case 5735:  /* *avx512f_vpternlogv16sf_2 */
    case 5734:  /* *avx512f_vpternlogv16sf_2 */
    case 5733:  /* *avx512f_vpternlogv16sf_2 */
    case 5732:  /* *avx512f_vpternlogv16sf_2 */
    case 5731:  /* *avx512f_vpternlogv16sf_2 */
    case 5730:  /* *avx512f_vpternlogv16sf_2 */
    case 5729:  /* *avx512f_vpternlogv16sf_2 */
    case 5728:  /* *avx512f_vpternlogv16sf_2 */
    case 5727:  /* *avx512f_vpternlogv16sf_2 */
    case 5726:  /* *avx512f_vpternlogv16sf_2 */
    case 5725:  /* *avx512f_vpternlogv16sf_2 */
    case 5724:  /* *avx512f_vpternlogv16sf_2 */
    case 5723:  /* *avx512f_vpternlogv16sf_2 */
    case 5722:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5721:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5720:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5719:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5718:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5717:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5716:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5715:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5714:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5713:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5712:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5711:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5710:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5709:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5708:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5707:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5706:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5705:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5704:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5703:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5702:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5701:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5700:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5699:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5698:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5697:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5696:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5695:  /* *avx512vl_vpternlogv16hf_2 */
    case 5694:  /* *avx512vl_vpternlogv16hf_2 */
    case 5693:  /* *avx512vl_vpternlogv16hf_2 */
    case 5692:  /* *avx512vl_vpternlogv16hf_2 */
    case 5691:  /* *avx512vl_vpternlogv16hf_2 */
    case 5690:  /* *avx512vl_vpternlogv16hf_2 */
    case 5689:  /* *avx512vl_vpternlogv16hf_2 */
    case 5688:  /* *avx512vl_vpternlogv16hf_2 */
    case 5687:  /* *avx512vl_vpternlogv16hf_2 */
    case 5686:  /* *avx512vl_vpternlogv16hf_2 */
    case 5685:  /* *avx512vl_vpternlogv16hf_2 */
    case 5684:  /* *avx512vl_vpternlogv16hf_2 */
    case 5683:  /* *avx512vl_vpternlogv16hf_2 */
    case 5682:  /* *avx512vl_vpternlogv16hf_2 */
    case 5681:  /* *avx512vl_vpternlogv16hf_2 */
    case 5680:  /* *avx512vl_vpternlogv16hf_2 */
    case 5679:  /* *avx512vl_vpternlogv16hf_2 */
    case 5678:  /* *avx512vl_vpternlogv16hf_2 */
    case 5677:  /* *avx512vl_vpternlogv16hf_2 */
    case 5676:  /* *avx512vl_vpternlogv16hf_2 */
    case 5675:  /* *avx512vl_vpternlogv16hf_2 */
    case 5674:  /* *avx512vl_vpternlogv16hf_2 */
    case 5673:  /* *avx512vl_vpternlogv16hf_2 */
    case 5672:  /* *avx512vl_vpternlogv16hf_2 */
    case 5671:  /* *avx512vl_vpternlogv16hf_2 */
    case 5670:  /* *avx512vl_vpternlogv16hf_2 */
    case 5669:  /* *avx512vl_vpternlogv16hf_2 */
    case 5668:  /* *avx512bw_vpternlogv32hf_2 */
    case 5667:  /* *avx512bw_vpternlogv32hf_2 */
    case 5666:  /* *avx512bw_vpternlogv32hf_2 */
    case 5665:  /* *avx512bw_vpternlogv32hf_2 */
    case 5664:  /* *avx512bw_vpternlogv32hf_2 */
    case 5663:  /* *avx512bw_vpternlogv32hf_2 */
    case 5662:  /* *avx512bw_vpternlogv32hf_2 */
    case 5661:  /* *avx512bw_vpternlogv32hf_2 */
    case 5660:  /* *avx512bw_vpternlogv32hf_2 */
    case 5659:  /* *avx512bw_vpternlogv32hf_2 */
    case 5658:  /* *avx512bw_vpternlogv32hf_2 */
    case 5657:  /* *avx512bw_vpternlogv32hf_2 */
    case 5656:  /* *avx512bw_vpternlogv32hf_2 */
    case 5655:  /* *avx512bw_vpternlogv32hf_2 */
    case 5654:  /* *avx512bw_vpternlogv32hf_2 */
    case 5653:  /* *avx512bw_vpternlogv32hf_2 */
    case 5652:  /* *avx512bw_vpternlogv32hf_2 */
    case 5651:  /* *avx512bw_vpternlogv32hf_2 */
    case 5650:  /* *avx512bw_vpternlogv32hf_2 */
    case 5649:  /* *avx512bw_vpternlogv32hf_2 */
    case 5648:  /* *avx512bw_vpternlogv32hf_2 */
    case 5647:  /* *avx512bw_vpternlogv32hf_2 */
    case 5646:  /* *avx512bw_vpternlogv32hf_2 */
    case 5645:  /* *avx512bw_vpternlogv32hf_2 */
    case 5644:  /* *avx512bw_vpternlogv32hf_2 */
    case 5643:  /* *avx512bw_vpternlogv32hf_2 */
    case 5642:  /* *avx512bw_vpternlogv32hf_2 */
    case 5641:  /* *avx512vl_vpternlogv2di_2 */
    case 5640:  /* *avx512vl_vpternlogv2di_2 */
    case 5639:  /* *avx512vl_vpternlogv2di_2 */
    case 5638:  /* *avx512vl_vpternlogv2di_2 */
    case 5637:  /* *avx512vl_vpternlogv2di_2 */
    case 5636:  /* *avx512vl_vpternlogv2di_2 */
    case 5635:  /* *avx512vl_vpternlogv2di_2 */
    case 5634:  /* *avx512vl_vpternlogv2di_2 */
    case 5633:  /* *avx512vl_vpternlogv2di_2 */
    case 5632:  /* *avx512vl_vpternlogv2di_2 */
    case 5631:  /* *avx512vl_vpternlogv2di_2 */
    case 5630:  /* *avx512vl_vpternlogv2di_2 */
    case 5629:  /* *avx512vl_vpternlogv2di_2 */
    case 5628:  /* *avx512vl_vpternlogv2di_2 */
    case 5627:  /* *avx512vl_vpternlogv2di_2 */
    case 5626:  /* *avx512vl_vpternlogv2di_2 */
    case 5625:  /* *avx512vl_vpternlogv2di_2 */
    case 5624:  /* *avx512vl_vpternlogv2di_2 */
    case 5623:  /* *avx512vl_vpternlogv2di_2 */
    case 5622:  /* *avx512vl_vpternlogv2di_2 */
    case 5621:  /* *avx512vl_vpternlogv2di_2 */
    case 5620:  /* *avx512vl_vpternlogv2di_2 */
    case 5619:  /* *avx512vl_vpternlogv2di_2 */
    case 5618:  /* *avx512vl_vpternlogv2di_2 */
    case 5617:  /* *avx512vl_vpternlogv2di_2 */
    case 5616:  /* *avx512vl_vpternlogv2di_2 */
    case 5615:  /* *avx512vl_vpternlogv2di_2 */
    case 5614:  /* *avx512vl_vpternlogv4di_2 */
    case 5613:  /* *avx512vl_vpternlogv4di_2 */
    case 5612:  /* *avx512vl_vpternlogv4di_2 */
    case 5611:  /* *avx512vl_vpternlogv4di_2 */
    case 5610:  /* *avx512vl_vpternlogv4di_2 */
    case 5609:  /* *avx512vl_vpternlogv4di_2 */
    case 5608:  /* *avx512vl_vpternlogv4di_2 */
    case 5607:  /* *avx512vl_vpternlogv4di_2 */
    case 5606:  /* *avx512vl_vpternlogv4di_2 */
    case 5605:  /* *avx512vl_vpternlogv4di_2 */
    case 5604:  /* *avx512vl_vpternlogv4di_2 */
    case 5603:  /* *avx512vl_vpternlogv4di_2 */
    case 5602:  /* *avx512vl_vpternlogv4di_2 */
    case 5601:  /* *avx512vl_vpternlogv4di_2 */
    case 5600:  /* *avx512vl_vpternlogv4di_2 */
    case 5599:  /* *avx512vl_vpternlogv4di_2 */
    case 5598:  /* *avx512vl_vpternlogv4di_2 */
    case 5597:  /* *avx512vl_vpternlogv4di_2 */
    case 5596:  /* *avx512vl_vpternlogv4di_2 */
    case 5595:  /* *avx512vl_vpternlogv4di_2 */
    case 5594:  /* *avx512vl_vpternlogv4di_2 */
    case 5593:  /* *avx512vl_vpternlogv4di_2 */
    case 5592:  /* *avx512vl_vpternlogv4di_2 */
    case 5591:  /* *avx512vl_vpternlogv4di_2 */
    case 5590:  /* *avx512vl_vpternlogv4di_2 */
    case 5589:  /* *avx512vl_vpternlogv4di_2 */
    case 5588:  /* *avx512vl_vpternlogv4di_2 */
    case 5587:  /* *avx512f_vpternlogv8di_2 */
    case 5586:  /* *avx512f_vpternlogv8di_2 */
    case 5585:  /* *avx512f_vpternlogv8di_2 */
    case 5584:  /* *avx512f_vpternlogv8di_2 */
    case 5583:  /* *avx512f_vpternlogv8di_2 */
    case 5582:  /* *avx512f_vpternlogv8di_2 */
    case 5581:  /* *avx512f_vpternlogv8di_2 */
    case 5580:  /* *avx512f_vpternlogv8di_2 */
    case 5579:  /* *avx512f_vpternlogv8di_2 */
    case 5578:  /* *avx512f_vpternlogv8di_2 */
    case 5577:  /* *avx512f_vpternlogv8di_2 */
    case 5576:  /* *avx512f_vpternlogv8di_2 */
    case 5575:  /* *avx512f_vpternlogv8di_2 */
    case 5574:  /* *avx512f_vpternlogv8di_2 */
    case 5573:  /* *avx512f_vpternlogv8di_2 */
    case 5572:  /* *avx512f_vpternlogv8di_2 */
    case 5571:  /* *avx512f_vpternlogv8di_2 */
    case 5570:  /* *avx512f_vpternlogv8di_2 */
    case 5569:  /* *avx512f_vpternlogv8di_2 */
    case 5568:  /* *avx512f_vpternlogv8di_2 */
    case 5567:  /* *avx512f_vpternlogv8di_2 */
    case 5566:  /* *avx512f_vpternlogv8di_2 */
    case 5565:  /* *avx512f_vpternlogv8di_2 */
    case 5564:  /* *avx512f_vpternlogv8di_2 */
    case 5563:  /* *avx512f_vpternlogv8di_2 */
    case 5562:  /* *avx512f_vpternlogv8di_2 */
    case 5561:  /* *avx512f_vpternlogv8di_2 */
    case 5560:  /* *avx512vl_vpternlogv4si_2 */
    case 5559:  /* *avx512vl_vpternlogv4si_2 */
    case 5558:  /* *avx512vl_vpternlogv4si_2 */
    case 5557:  /* *avx512vl_vpternlogv4si_2 */
    case 5556:  /* *avx512vl_vpternlogv4si_2 */
    case 5555:  /* *avx512vl_vpternlogv4si_2 */
    case 5554:  /* *avx512vl_vpternlogv4si_2 */
    case 5553:  /* *avx512vl_vpternlogv4si_2 */
    case 5552:  /* *avx512vl_vpternlogv4si_2 */
    case 5551:  /* *avx512vl_vpternlogv4si_2 */
    case 5550:  /* *avx512vl_vpternlogv4si_2 */
    case 5549:  /* *avx512vl_vpternlogv4si_2 */
    case 5548:  /* *avx512vl_vpternlogv4si_2 */
    case 5547:  /* *avx512vl_vpternlogv4si_2 */
    case 5546:  /* *avx512vl_vpternlogv4si_2 */
    case 5545:  /* *avx512vl_vpternlogv4si_2 */
    case 5544:  /* *avx512vl_vpternlogv4si_2 */
    case 5543:  /* *avx512vl_vpternlogv4si_2 */
    case 5542:  /* *avx512vl_vpternlogv4si_2 */
    case 5541:  /* *avx512vl_vpternlogv4si_2 */
    case 5540:  /* *avx512vl_vpternlogv4si_2 */
    case 5539:  /* *avx512vl_vpternlogv4si_2 */
    case 5538:  /* *avx512vl_vpternlogv4si_2 */
    case 5537:  /* *avx512vl_vpternlogv4si_2 */
    case 5536:  /* *avx512vl_vpternlogv4si_2 */
    case 5535:  /* *avx512vl_vpternlogv4si_2 */
    case 5534:  /* *avx512vl_vpternlogv4si_2 */
    case 5533:  /* *avx512vl_vpternlogv8si_2 */
    case 5532:  /* *avx512vl_vpternlogv8si_2 */
    case 5531:  /* *avx512vl_vpternlogv8si_2 */
    case 5530:  /* *avx512vl_vpternlogv8si_2 */
    case 5529:  /* *avx512vl_vpternlogv8si_2 */
    case 5528:  /* *avx512vl_vpternlogv8si_2 */
    case 5527:  /* *avx512vl_vpternlogv8si_2 */
    case 5526:  /* *avx512vl_vpternlogv8si_2 */
    case 5525:  /* *avx512vl_vpternlogv8si_2 */
    case 5524:  /* *avx512vl_vpternlogv8si_2 */
    case 5523:  /* *avx512vl_vpternlogv8si_2 */
    case 5522:  /* *avx512vl_vpternlogv8si_2 */
    case 5521:  /* *avx512vl_vpternlogv8si_2 */
    case 5520:  /* *avx512vl_vpternlogv8si_2 */
    case 5519:  /* *avx512vl_vpternlogv8si_2 */
    case 5518:  /* *avx512vl_vpternlogv8si_2 */
    case 5517:  /* *avx512vl_vpternlogv8si_2 */
    case 5516:  /* *avx512vl_vpternlogv8si_2 */
    case 5515:  /* *avx512vl_vpternlogv8si_2 */
    case 5514:  /* *avx512vl_vpternlogv8si_2 */
    case 5513:  /* *avx512vl_vpternlogv8si_2 */
    case 5512:  /* *avx512vl_vpternlogv8si_2 */
    case 5511:  /* *avx512vl_vpternlogv8si_2 */
    case 5510:  /* *avx512vl_vpternlogv8si_2 */
    case 5509:  /* *avx512vl_vpternlogv8si_2 */
    case 5508:  /* *avx512vl_vpternlogv8si_2 */
    case 5507:  /* *avx512vl_vpternlogv8si_2 */
    case 5506:  /* *avx512f_vpternlogv16si_2 */
    case 5505:  /* *avx512f_vpternlogv16si_2 */
    case 5504:  /* *avx512f_vpternlogv16si_2 */
    case 5503:  /* *avx512f_vpternlogv16si_2 */
    case 5502:  /* *avx512f_vpternlogv16si_2 */
    case 5501:  /* *avx512f_vpternlogv16si_2 */
    case 5500:  /* *avx512f_vpternlogv16si_2 */
    case 5499:  /* *avx512f_vpternlogv16si_2 */
    case 5498:  /* *avx512f_vpternlogv16si_2 */
    case 5497:  /* *avx512f_vpternlogv16si_2 */
    case 5496:  /* *avx512f_vpternlogv16si_2 */
    case 5495:  /* *avx512f_vpternlogv16si_2 */
    case 5494:  /* *avx512f_vpternlogv16si_2 */
    case 5493:  /* *avx512f_vpternlogv16si_2 */
    case 5492:  /* *avx512f_vpternlogv16si_2 */
    case 5491:  /* *avx512f_vpternlogv16si_2 */
    case 5490:  /* *avx512f_vpternlogv16si_2 */
    case 5489:  /* *avx512f_vpternlogv16si_2 */
    case 5488:  /* *avx512f_vpternlogv16si_2 */
    case 5487:  /* *avx512f_vpternlogv16si_2 */
    case 5486:  /* *avx512f_vpternlogv16si_2 */
    case 5485:  /* *avx512f_vpternlogv16si_2 */
    case 5484:  /* *avx512f_vpternlogv16si_2 */
    case 5483:  /* *avx512f_vpternlogv16si_2 */
    case 5482:  /* *avx512f_vpternlogv16si_2 */
    case 5481:  /* *avx512f_vpternlogv16si_2 */
    case 5480:  /* *avx512f_vpternlogv16si_2 */
    case 5479:  /* *avx512vl_vpternlogv8hi_2 */
    case 5478:  /* *avx512vl_vpternlogv8hi_2 */
    case 5477:  /* *avx512vl_vpternlogv8hi_2 */
    case 5476:  /* *avx512vl_vpternlogv8hi_2 */
    case 5475:  /* *avx512vl_vpternlogv8hi_2 */
    case 5474:  /* *avx512vl_vpternlogv8hi_2 */
    case 5473:  /* *avx512vl_vpternlogv8hi_2 */
    case 5472:  /* *avx512vl_vpternlogv8hi_2 */
    case 5471:  /* *avx512vl_vpternlogv8hi_2 */
    case 5470:  /* *avx512vl_vpternlogv8hi_2 */
    case 5469:  /* *avx512vl_vpternlogv8hi_2 */
    case 5468:  /* *avx512vl_vpternlogv8hi_2 */
    case 5467:  /* *avx512vl_vpternlogv8hi_2 */
    case 5466:  /* *avx512vl_vpternlogv8hi_2 */
    case 5465:  /* *avx512vl_vpternlogv8hi_2 */
    case 5464:  /* *avx512vl_vpternlogv8hi_2 */
    case 5463:  /* *avx512vl_vpternlogv8hi_2 */
    case 5462:  /* *avx512vl_vpternlogv8hi_2 */
    case 5461:  /* *avx512vl_vpternlogv8hi_2 */
    case 5460:  /* *avx512vl_vpternlogv8hi_2 */
    case 5459:  /* *avx512vl_vpternlogv8hi_2 */
    case 5458:  /* *avx512vl_vpternlogv8hi_2 */
    case 5457:  /* *avx512vl_vpternlogv8hi_2 */
    case 5456:  /* *avx512vl_vpternlogv8hi_2 */
    case 5455:  /* *avx512vl_vpternlogv8hi_2 */
    case 5454:  /* *avx512vl_vpternlogv8hi_2 */
    case 5453:  /* *avx512vl_vpternlogv8hi_2 */
    case 5452:  /* *avx512vl_vpternlogv16hi_2 */
    case 5451:  /* *avx512vl_vpternlogv16hi_2 */
    case 5450:  /* *avx512vl_vpternlogv16hi_2 */
    case 5449:  /* *avx512vl_vpternlogv16hi_2 */
    case 5448:  /* *avx512vl_vpternlogv16hi_2 */
    case 5447:  /* *avx512vl_vpternlogv16hi_2 */
    case 5446:  /* *avx512vl_vpternlogv16hi_2 */
    case 5445:  /* *avx512vl_vpternlogv16hi_2 */
    case 5444:  /* *avx512vl_vpternlogv16hi_2 */
    case 5443:  /* *avx512vl_vpternlogv16hi_2 */
    case 5442:  /* *avx512vl_vpternlogv16hi_2 */
    case 5441:  /* *avx512vl_vpternlogv16hi_2 */
    case 5440:  /* *avx512vl_vpternlogv16hi_2 */
    case 5439:  /* *avx512vl_vpternlogv16hi_2 */
    case 5438:  /* *avx512vl_vpternlogv16hi_2 */
    case 5437:  /* *avx512vl_vpternlogv16hi_2 */
    case 5436:  /* *avx512vl_vpternlogv16hi_2 */
    case 5435:  /* *avx512vl_vpternlogv16hi_2 */
    case 5434:  /* *avx512vl_vpternlogv16hi_2 */
    case 5433:  /* *avx512vl_vpternlogv16hi_2 */
    case 5432:  /* *avx512vl_vpternlogv16hi_2 */
    case 5431:  /* *avx512vl_vpternlogv16hi_2 */
    case 5430:  /* *avx512vl_vpternlogv16hi_2 */
    case 5429:  /* *avx512vl_vpternlogv16hi_2 */
    case 5428:  /* *avx512vl_vpternlogv16hi_2 */
    case 5427:  /* *avx512vl_vpternlogv16hi_2 */
    case 5426:  /* *avx512vl_vpternlogv16hi_2 */
    case 5425:  /* *avx512bw_vpternlogv32hi_2 */
    case 5424:  /* *avx512bw_vpternlogv32hi_2 */
    case 5423:  /* *avx512bw_vpternlogv32hi_2 */
    case 5422:  /* *avx512bw_vpternlogv32hi_2 */
    case 5421:  /* *avx512bw_vpternlogv32hi_2 */
    case 5420:  /* *avx512bw_vpternlogv32hi_2 */
    case 5419:  /* *avx512bw_vpternlogv32hi_2 */
    case 5418:  /* *avx512bw_vpternlogv32hi_2 */
    case 5417:  /* *avx512bw_vpternlogv32hi_2 */
    case 5416:  /* *avx512bw_vpternlogv32hi_2 */
    case 5415:  /* *avx512bw_vpternlogv32hi_2 */
    case 5414:  /* *avx512bw_vpternlogv32hi_2 */
    case 5413:  /* *avx512bw_vpternlogv32hi_2 */
    case 5412:  /* *avx512bw_vpternlogv32hi_2 */
    case 5411:  /* *avx512bw_vpternlogv32hi_2 */
    case 5410:  /* *avx512bw_vpternlogv32hi_2 */
    case 5409:  /* *avx512bw_vpternlogv32hi_2 */
    case 5408:  /* *avx512bw_vpternlogv32hi_2 */
    case 5407:  /* *avx512bw_vpternlogv32hi_2 */
    case 5406:  /* *avx512bw_vpternlogv32hi_2 */
    case 5405:  /* *avx512bw_vpternlogv32hi_2 */
    case 5404:  /* *avx512bw_vpternlogv32hi_2 */
    case 5403:  /* *avx512bw_vpternlogv32hi_2 */
    case 5402:  /* *avx512bw_vpternlogv32hi_2 */
    case 5401:  /* *avx512bw_vpternlogv32hi_2 */
    case 5400:  /* *avx512bw_vpternlogv32hi_2 */
    case 5399:  /* *avx512bw_vpternlogv32hi_2 */
    case 5398:  /* *avx512vl_vpternlogv16qi_2 */
    case 5397:  /* *avx512vl_vpternlogv16qi_2 */
    case 5396:  /* *avx512vl_vpternlogv16qi_2 */
    case 5395:  /* *avx512vl_vpternlogv16qi_2 */
    case 5394:  /* *avx512vl_vpternlogv16qi_2 */
    case 5393:  /* *avx512vl_vpternlogv16qi_2 */
    case 5392:  /* *avx512vl_vpternlogv16qi_2 */
    case 5391:  /* *avx512vl_vpternlogv16qi_2 */
    case 5390:  /* *avx512vl_vpternlogv16qi_2 */
    case 5389:  /* *avx512vl_vpternlogv16qi_2 */
    case 5388:  /* *avx512vl_vpternlogv16qi_2 */
    case 5387:  /* *avx512vl_vpternlogv16qi_2 */
    case 5386:  /* *avx512vl_vpternlogv16qi_2 */
    case 5385:  /* *avx512vl_vpternlogv16qi_2 */
    case 5384:  /* *avx512vl_vpternlogv16qi_2 */
    case 5383:  /* *avx512vl_vpternlogv16qi_2 */
    case 5382:  /* *avx512vl_vpternlogv16qi_2 */
    case 5381:  /* *avx512vl_vpternlogv16qi_2 */
    case 5380:  /* *avx512vl_vpternlogv16qi_2 */
    case 5379:  /* *avx512vl_vpternlogv16qi_2 */
    case 5378:  /* *avx512vl_vpternlogv16qi_2 */
    case 5377:  /* *avx512vl_vpternlogv16qi_2 */
    case 5376:  /* *avx512vl_vpternlogv16qi_2 */
    case 5375:  /* *avx512vl_vpternlogv16qi_2 */
    case 5374:  /* *avx512vl_vpternlogv16qi_2 */
    case 5373:  /* *avx512vl_vpternlogv16qi_2 */
    case 5372:  /* *avx512vl_vpternlogv16qi_2 */
    case 5371:  /* *avx512vl_vpternlogv32qi_2 */
    case 5370:  /* *avx512vl_vpternlogv32qi_2 */
    case 5369:  /* *avx512vl_vpternlogv32qi_2 */
    case 5368:  /* *avx512vl_vpternlogv32qi_2 */
    case 5367:  /* *avx512vl_vpternlogv32qi_2 */
    case 5366:  /* *avx512vl_vpternlogv32qi_2 */
    case 5365:  /* *avx512vl_vpternlogv32qi_2 */
    case 5364:  /* *avx512vl_vpternlogv32qi_2 */
    case 5363:  /* *avx512vl_vpternlogv32qi_2 */
    case 5362:  /* *avx512vl_vpternlogv32qi_2 */
    case 5361:  /* *avx512vl_vpternlogv32qi_2 */
    case 5360:  /* *avx512vl_vpternlogv32qi_2 */
    case 5359:  /* *avx512vl_vpternlogv32qi_2 */
    case 5358:  /* *avx512vl_vpternlogv32qi_2 */
    case 5357:  /* *avx512vl_vpternlogv32qi_2 */
    case 5356:  /* *avx512vl_vpternlogv32qi_2 */
    case 5355:  /* *avx512vl_vpternlogv32qi_2 */
    case 5354:  /* *avx512vl_vpternlogv32qi_2 */
    case 5353:  /* *avx512vl_vpternlogv32qi_2 */
    case 5352:  /* *avx512vl_vpternlogv32qi_2 */
    case 5351:  /* *avx512vl_vpternlogv32qi_2 */
    case 5350:  /* *avx512vl_vpternlogv32qi_2 */
    case 5349:  /* *avx512vl_vpternlogv32qi_2 */
    case 5348:  /* *avx512vl_vpternlogv32qi_2 */
    case 5347:  /* *avx512vl_vpternlogv32qi_2 */
    case 5346:  /* *avx512vl_vpternlogv32qi_2 */
    case 5345:  /* *avx512vl_vpternlogv32qi_2 */
    case 5344:  /* *avx512bw_vpternlogv64qi_2 */
    case 5343:  /* *avx512bw_vpternlogv64qi_2 */
    case 5342:  /* *avx512bw_vpternlogv64qi_2 */
    case 5341:  /* *avx512bw_vpternlogv64qi_2 */
    case 5340:  /* *avx512bw_vpternlogv64qi_2 */
    case 5339:  /* *avx512bw_vpternlogv64qi_2 */
    case 5338:  /* *avx512bw_vpternlogv64qi_2 */
    case 5337:  /* *avx512bw_vpternlogv64qi_2 */
    case 5336:  /* *avx512bw_vpternlogv64qi_2 */
    case 5335:  /* *avx512bw_vpternlogv64qi_2 */
    case 5334:  /* *avx512bw_vpternlogv64qi_2 */
    case 5333:  /* *avx512bw_vpternlogv64qi_2 */
    case 5332:  /* *avx512bw_vpternlogv64qi_2 */
    case 5331:  /* *avx512bw_vpternlogv64qi_2 */
    case 5330:  /* *avx512bw_vpternlogv64qi_2 */
    case 5329:  /* *avx512bw_vpternlogv64qi_2 */
    case 5328:  /* *avx512bw_vpternlogv64qi_2 */
    case 5327:  /* *avx512bw_vpternlogv64qi_2 */
    case 5326:  /* *avx512bw_vpternlogv64qi_2 */
    case 5325:  /* *avx512bw_vpternlogv64qi_2 */
    case 5324:  /* *avx512bw_vpternlogv64qi_2 */
    case 5323:  /* *avx512bw_vpternlogv64qi_2 */
    case 5322:  /* *avx512bw_vpternlogv64qi_2 */
    case 5321:  /* *avx512bw_vpternlogv64qi_2 */
    case 5320:  /* *avx512bw_vpternlogv64qi_2 */
    case 5319:  /* *avx512bw_vpternlogv64qi_2 */
    case 5318:  /* *avx512bw_vpternlogv64qi_2 */
    case 346:  /* *leahi_general_3b */
    case 345:  /* *leaqi_general_3b */
    case 344:  /* *leahi_general_3 */
    case 343:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8040:  /* xop_pmacssdd */
    case 8039:  /* xop_pmacsdd */
    case 8038:  /* xop_pmacssww */
    case 8037:  /* xop_pmacsww */
    case 6073:  /* *avx512vl_vpternlogv2df_3 */
    case 6072:  /* *avx512vl_vpternlogv2df_3 */
    case 6071:  /* *avx512vl_vpternlogv2df_3 */
    case 6070:  /* *avx512vl_vpternlogv2df_3 */
    case 6069:  /* *avx512vl_vpternlogv2df_3 */
    case 6068:  /* *avx512vl_vpternlogv2df_3 */
    case 6067:  /* *avx512vl_vpternlogv2df_3 */
    case 6066:  /* *avx512vl_vpternlogv2df_3 */
    case 6065:  /* *avx512vl_vpternlogv2df_3 */
    case 6064:  /* *avx512vl_vpternlogv4df_3 */
    case 6063:  /* *avx512vl_vpternlogv4df_3 */
    case 6062:  /* *avx512vl_vpternlogv4df_3 */
    case 6061:  /* *avx512vl_vpternlogv4df_3 */
    case 6060:  /* *avx512vl_vpternlogv4df_3 */
    case 6059:  /* *avx512vl_vpternlogv4df_3 */
    case 6058:  /* *avx512vl_vpternlogv4df_3 */
    case 6057:  /* *avx512vl_vpternlogv4df_3 */
    case 6056:  /* *avx512vl_vpternlogv4df_3 */
    case 6055:  /* *avx512f_vpternlogv8df_3 */
    case 6054:  /* *avx512f_vpternlogv8df_3 */
    case 6053:  /* *avx512f_vpternlogv8df_3 */
    case 6052:  /* *avx512f_vpternlogv8df_3 */
    case 6051:  /* *avx512f_vpternlogv8df_3 */
    case 6050:  /* *avx512f_vpternlogv8df_3 */
    case 6049:  /* *avx512f_vpternlogv8df_3 */
    case 6048:  /* *avx512f_vpternlogv8df_3 */
    case 6047:  /* *avx512f_vpternlogv8df_3 */
    case 6046:  /* *avx512vl_vpternlogv4sf_3 */
    case 6045:  /* *avx512vl_vpternlogv4sf_3 */
    case 6044:  /* *avx512vl_vpternlogv4sf_3 */
    case 6043:  /* *avx512vl_vpternlogv4sf_3 */
    case 6042:  /* *avx512vl_vpternlogv4sf_3 */
    case 6041:  /* *avx512vl_vpternlogv4sf_3 */
    case 6040:  /* *avx512vl_vpternlogv4sf_3 */
    case 6039:  /* *avx512vl_vpternlogv4sf_3 */
    case 6038:  /* *avx512vl_vpternlogv4sf_3 */
    case 6037:  /* *avx512vl_vpternlogv8sf_3 */
    case 6036:  /* *avx512vl_vpternlogv8sf_3 */
    case 6035:  /* *avx512vl_vpternlogv8sf_3 */
    case 6034:  /* *avx512vl_vpternlogv8sf_3 */
    case 6033:  /* *avx512vl_vpternlogv8sf_3 */
    case 6032:  /* *avx512vl_vpternlogv8sf_3 */
    case 6031:  /* *avx512vl_vpternlogv8sf_3 */
    case 6030:  /* *avx512vl_vpternlogv8sf_3 */
    case 6029:  /* *avx512vl_vpternlogv8sf_3 */
    case 6028:  /* *avx512f_vpternlogv16sf_3 */
    case 6027:  /* *avx512f_vpternlogv16sf_3 */
    case 6026:  /* *avx512f_vpternlogv16sf_3 */
    case 6025:  /* *avx512f_vpternlogv16sf_3 */
    case 6024:  /* *avx512f_vpternlogv16sf_3 */
    case 6023:  /* *avx512f_vpternlogv16sf_3 */
    case 6022:  /* *avx512f_vpternlogv16sf_3 */
    case 6021:  /* *avx512f_vpternlogv16sf_3 */
    case 6020:  /* *avx512f_vpternlogv16sf_3 */
    case 6019:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6018:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6017:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6016:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6015:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6014:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6013:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6012:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6011:  /* *avx512fp16_vpternlogv8hf_3 */
    case 6010:  /* *avx512vl_vpternlogv16hf_3 */
    case 6009:  /* *avx512vl_vpternlogv16hf_3 */
    case 6008:  /* *avx512vl_vpternlogv16hf_3 */
    case 6007:  /* *avx512vl_vpternlogv16hf_3 */
    case 6006:  /* *avx512vl_vpternlogv16hf_3 */
    case 6005:  /* *avx512vl_vpternlogv16hf_3 */
    case 6004:  /* *avx512vl_vpternlogv16hf_3 */
    case 6003:  /* *avx512vl_vpternlogv16hf_3 */
    case 6002:  /* *avx512vl_vpternlogv16hf_3 */
    case 6001:  /* *avx512bw_vpternlogv32hf_3 */
    case 6000:  /* *avx512bw_vpternlogv32hf_3 */
    case 5999:  /* *avx512bw_vpternlogv32hf_3 */
    case 5998:  /* *avx512bw_vpternlogv32hf_3 */
    case 5997:  /* *avx512bw_vpternlogv32hf_3 */
    case 5996:  /* *avx512bw_vpternlogv32hf_3 */
    case 5995:  /* *avx512bw_vpternlogv32hf_3 */
    case 5994:  /* *avx512bw_vpternlogv32hf_3 */
    case 5993:  /* *avx512bw_vpternlogv32hf_3 */
    case 5992:  /* *avx512vl_vpternlogv2di_3 */
    case 5991:  /* *avx512vl_vpternlogv2di_3 */
    case 5990:  /* *avx512vl_vpternlogv2di_3 */
    case 5989:  /* *avx512vl_vpternlogv2di_3 */
    case 5988:  /* *avx512vl_vpternlogv2di_3 */
    case 5987:  /* *avx512vl_vpternlogv2di_3 */
    case 5986:  /* *avx512vl_vpternlogv2di_3 */
    case 5985:  /* *avx512vl_vpternlogv2di_3 */
    case 5984:  /* *avx512vl_vpternlogv2di_3 */
    case 5983:  /* *avx512vl_vpternlogv4di_3 */
    case 5982:  /* *avx512vl_vpternlogv4di_3 */
    case 5981:  /* *avx512vl_vpternlogv4di_3 */
    case 5980:  /* *avx512vl_vpternlogv4di_3 */
    case 5979:  /* *avx512vl_vpternlogv4di_3 */
    case 5978:  /* *avx512vl_vpternlogv4di_3 */
    case 5977:  /* *avx512vl_vpternlogv4di_3 */
    case 5976:  /* *avx512vl_vpternlogv4di_3 */
    case 5975:  /* *avx512vl_vpternlogv4di_3 */
    case 5974:  /* *avx512f_vpternlogv8di_3 */
    case 5973:  /* *avx512f_vpternlogv8di_3 */
    case 5972:  /* *avx512f_vpternlogv8di_3 */
    case 5971:  /* *avx512f_vpternlogv8di_3 */
    case 5970:  /* *avx512f_vpternlogv8di_3 */
    case 5969:  /* *avx512f_vpternlogv8di_3 */
    case 5968:  /* *avx512f_vpternlogv8di_3 */
    case 5967:  /* *avx512f_vpternlogv8di_3 */
    case 5966:  /* *avx512f_vpternlogv8di_3 */
    case 5965:  /* *avx512vl_vpternlogv4si_3 */
    case 5964:  /* *avx512vl_vpternlogv4si_3 */
    case 5963:  /* *avx512vl_vpternlogv4si_3 */
    case 5962:  /* *avx512vl_vpternlogv4si_3 */
    case 5961:  /* *avx512vl_vpternlogv4si_3 */
    case 5960:  /* *avx512vl_vpternlogv4si_3 */
    case 5959:  /* *avx512vl_vpternlogv4si_3 */
    case 5958:  /* *avx512vl_vpternlogv4si_3 */
    case 5957:  /* *avx512vl_vpternlogv4si_3 */
    case 5956:  /* *avx512vl_vpternlogv8si_3 */
    case 5955:  /* *avx512vl_vpternlogv8si_3 */
    case 5954:  /* *avx512vl_vpternlogv8si_3 */
    case 5953:  /* *avx512vl_vpternlogv8si_3 */
    case 5952:  /* *avx512vl_vpternlogv8si_3 */
    case 5951:  /* *avx512vl_vpternlogv8si_3 */
    case 5950:  /* *avx512vl_vpternlogv8si_3 */
    case 5949:  /* *avx512vl_vpternlogv8si_3 */
    case 5948:  /* *avx512vl_vpternlogv8si_3 */
    case 5947:  /* *avx512f_vpternlogv16si_3 */
    case 5946:  /* *avx512f_vpternlogv16si_3 */
    case 5945:  /* *avx512f_vpternlogv16si_3 */
    case 5944:  /* *avx512f_vpternlogv16si_3 */
    case 5943:  /* *avx512f_vpternlogv16si_3 */
    case 5942:  /* *avx512f_vpternlogv16si_3 */
    case 5941:  /* *avx512f_vpternlogv16si_3 */
    case 5940:  /* *avx512f_vpternlogv16si_3 */
    case 5939:  /* *avx512f_vpternlogv16si_3 */
    case 5938:  /* *avx512vl_vpternlogv8hi_3 */
    case 5937:  /* *avx512vl_vpternlogv8hi_3 */
    case 5936:  /* *avx512vl_vpternlogv8hi_3 */
    case 5935:  /* *avx512vl_vpternlogv8hi_3 */
    case 5934:  /* *avx512vl_vpternlogv8hi_3 */
    case 5933:  /* *avx512vl_vpternlogv8hi_3 */
    case 5932:  /* *avx512vl_vpternlogv8hi_3 */
    case 5931:  /* *avx512vl_vpternlogv8hi_3 */
    case 5930:  /* *avx512vl_vpternlogv8hi_3 */
    case 5929:  /* *avx512vl_vpternlogv16hi_3 */
    case 5928:  /* *avx512vl_vpternlogv16hi_3 */
    case 5927:  /* *avx512vl_vpternlogv16hi_3 */
    case 5926:  /* *avx512vl_vpternlogv16hi_3 */
    case 5925:  /* *avx512vl_vpternlogv16hi_3 */
    case 5924:  /* *avx512vl_vpternlogv16hi_3 */
    case 5923:  /* *avx512vl_vpternlogv16hi_3 */
    case 5922:  /* *avx512vl_vpternlogv16hi_3 */
    case 5921:  /* *avx512vl_vpternlogv16hi_3 */
    case 5920:  /* *avx512bw_vpternlogv32hi_3 */
    case 5919:  /* *avx512bw_vpternlogv32hi_3 */
    case 5918:  /* *avx512bw_vpternlogv32hi_3 */
    case 5917:  /* *avx512bw_vpternlogv32hi_3 */
    case 5916:  /* *avx512bw_vpternlogv32hi_3 */
    case 5915:  /* *avx512bw_vpternlogv32hi_3 */
    case 5914:  /* *avx512bw_vpternlogv32hi_3 */
    case 5913:  /* *avx512bw_vpternlogv32hi_3 */
    case 5912:  /* *avx512bw_vpternlogv32hi_3 */
    case 5911:  /* *avx512vl_vpternlogv16qi_3 */
    case 5910:  /* *avx512vl_vpternlogv16qi_3 */
    case 5909:  /* *avx512vl_vpternlogv16qi_3 */
    case 5908:  /* *avx512vl_vpternlogv16qi_3 */
    case 5907:  /* *avx512vl_vpternlogv16qi_3 */
    case 5906:  /* *avx512vl_vpternlogv16qi_3 */
    case 5905:  /* *avx512vl_vpternlogv16qi_3 */
    case 5904:  /* *avx512vl_vpternlogv16qi_3 */
    case 5903:  /* *avx512vl_vpternlogv16qi_3 */
    case 5902:  /* *avx512vl_vpternlogv32qi_3 */
    case 5901:  /* *avx512vl_vpternlogv32qi_3 */
    case 5900:  /* *avx512vl_vpternlogv32qi_3 */
    case 5899:  /* *avx512vl_vpternlogv32qi_3 */
    case 5898:  /* *avx512vl_vpternlogv32qi_3 */
    case 5897:  /* *avx512vl_vpternlogv32qi_3 */
    case 5896:  /* *avx512vl_vpternlogv32qi_3 */
    case 5895:  /* *avx512vl_vpternlogv32qi_3 */
    case 5894:  /* *avx512vl_vpternlogv32qi_3 */
    case 5893:  /* *avx512bw_vpternlogv64qi_3 */
    case 5892:  /* *avx512bw_vpternlogv64qi_3 */
    case 5891:  /* *avx512bw_vpternlogv64qi_3 */
    case 5890:  /* *avx512bw_vpternlogv64qi_3 */
    case 5889:  /* *avx512bw_vpternlogv64qi_3 */
    case 5888:  /* *avx512bw_vpternlogv64qi_3 */
    case 5887:  /* *avx512bw_vpternlogv64qi_3 */
    case 5886:  /* *avx512bw_vpternlogv64qi_3 */
    case 5885:  /* *avx512bw_vpternlogv64qi_3 */
    case 1019:  /* *extendv2di2_highpart_stv */
    case 787:  /* *concatditi3_5 */
    case 786:  /* *concatditi3_5 */
    case 785:  /* *concatditi3_5 */
    case 784:  /* *concatsidi3_5 */
    case 783:  /* *concatsidi3_5 */
    case 782:  /* *concatsidi3_5 */
    case 354:  /* *leadi_general_4 */
    case 353:  /* *leadi_general_4 */
    case 352:  /* *leasi_general_4 */
    case 351:  /* *leasi_general_4 */
    case 350:  /* *leahi_general_4 */
    case 349:  /* *leahi_general_4 */
    case 348:  /* *leaqi_general_4 */
    case 347:  /* *leaqi_general_4 */
    case 342:  /* *leahi_general_2b */
    case 341:  /* *leaqi_general_2b */
    case 340:  /* *leahi_general_2 */
    case 339:  /* *leaqi_general_2 */
    case 338:  /* *leahi_general_1 */
    case 337:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 336:  /* *addvdi4_overflow_2 */
    case 335:  /* *addvsi4_overflow_2 */
    case 334:  /* *addvhi4_overflow_2 */
    case 333:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 332:  /* *addvdi4_overflow_1 */
    case 331:  /* *addvsi4_overflow_1 */
    case 330:  /* *addvhi4_overflow_1 */
    case 329:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 529:  /* *mulvdi4_1 */
    case 528:  /* *mulvsi4_1 */
    case 527:  /* *mulvhi4_1 */
    case 397:  /* *subvti4_doubleword_1 */
    case 396:  /* *subvdi4_doubleword_1 */
    case 393:  /* subvdi4_1 */
    case 392:  /* subvsi4_1 */
    case 391:  /* subvhi4_1 */
    case 390:  /* subvqi4_1 */
    case 328:  /* *addvti4_doubleword_1 */
    case 327:  /* *addvdi4_doubleword_1 */
    case 324:  /* addvdi4_1 */
    case 323:  /* addvsi4_1 */
    case 322:  /* addvhi4_1 */
    case 321:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 534:  /* *umulvqi4 */
    case 533:  /* *mulvqi4 */
    case 526:  /* *mulvhi4 */
    case 525:  /* *mulvdi4 */
    case 524:  /* *mulvsi4 */
    case 395:  /* *subvti4_doubleword */
    case 394:  /* *subvdi4_doubleword */
    case 389:  /* *subvdi4 */
    case 388:  /* *subvsi4 */
    case 387:  /* *subvhi4 */
    case 386:  /* *subvqi4 */
    case 326:  /* *addvti4_doubleword */
    case 325:  /* *addvdi4_doubleword */
    case 320:  /* *addvdi4 */
    case 319:  /* *addvsi4 */
    case 318:  /* *addvhi4 */
    case 317:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 693:  /* *xorqi_extdi_2 */
    case 692:  /* *iorqi_extdi_2 */
    case 691:  /* *andqi_extdi_2 */
    case 690:  /* *xorqi_extsi_2 */
    case 689:  /* *iorqi_extsi_2 */
    case 688:  /* *andqi_extsi_2 */
    case 687:  /* *xorqi_exthi_2 */
    case 686:  /* *iorqi_exthi_2 */
    case 685:  /* *andqi_exthi_2 */
    case 316:  /* *subqi_extdi_2 */
    case 315:  /* *addqi_extdi_2 */
    case 314:  /* *subqi_extsi_2 */
    case 313:  /* *addqi_extsi_2 */
    case 312:  /* *subqi_exthi_2 */
    case 311:  /* *addqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 1016:  /* *ashrqi_extdi_1 */
    case 1015:  /* *lshrqi_extdi_1 */
    case 1014:  /* *ashrqi_extsi_1 */
    case 1013:  /* *lshrqi_extsi_1 */
    case 1012:  /* *ashrqi_exthi_1 */
    case 1011:  /* *lshrqi_exthi_1 */
    case 930:  /* *ashlqi_extdi_1 */
    case 929:  /* *ashlqi_extsi_1 */
    case 928:  /* *ashlqi_exthi_1 */
    case 675:  /* *xorqi_extdi_1 */
    case 674:  /* *iorqi_extdi_1 */
    case 673:  /* *andqi_extdi_1 */
    case 672:  /* *xorqi_extsi_1 */
    case 671:  /* *iorqi_extsi_1 */
    case 670:  /* *andqi_extsi_1 */
    case 669:  /* *xorqi_exthi_1 */
    case 668:  /* *iorqi_exthi_1 */
    case 667:  /* *andqi_exthi_1 */
    case 385:  /* *subqi_extdi_1 */
    case 384:  /* *subqi_extsi_1 */
    case 383:  /* *subqi_exthi_1 */
    case 310:  /* *addqi_extdi_1 */
    case 309:  /* *addqi_extsi_1 */
    case 308:  /* *addqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 666:  /* *xorqi_ext2di_0 */
    case 665:  /* *iorqi_ext2di_0 */
    case 664:  /* *andqi_ext2di_0 */
    case 663:  /* *xorqi_ext2si_0 */
    case 662:  /* *iorqi_ext2si_0 */
    case 661:  /* *andqi_ext2si_0 */
    case 660:  /* *xorqi_ext2hi_0 */
    case 659:  /* *iorqi_ext2hi_0 */
    case 658:  /* *andqi_ext2hi_0 */
    case 382:  /* *subqi_ext2di_0 */
    case 381:  /* *subqi_ext2si_0 */
    case 380:  /* *subqi_ext2hi_0 */
    case 307:  /* *addqi_ext2di_0 */
    case 306:  /* *addqi_ext2si_0 */
    case 305:  /* *addqi_ext2hi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 657:  /* *xorqi_extdi_0 */
    case 656:  /* *iorqi_extdi_0 */
    case 655:  /* *andqi_extdi_0 */
    case 654:  /* *xorqi_extsi_0 */
    case 653:  /* *iorqi_extsi_0 */
    case 652:  /* *andqi_extsi_0 */
    case 651:  /* *xorqi_exthi_0 */
    case 650:  /* *iorqi_exthi_0 */
    case 649:  /* *andqi_exthi_0 */
    case 304:  /* *addqi_extdi_0 */
    case 303:  /* *addqi_extsi_0 */
    case 302:  /* *addqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1010:  /* *ashrdi3_cconly */
    case 1009:  /* *lshrdi3_cconly */
    case 1008:  /* *ashrsi3_cconly */
    case 1007:  /* *lshrsi3_cconly */
    case 1006:  /* *ashrhi3_cconly */
    case 1005:  /* *lshrhi3_cconly */
    case 1004:  /* *ashrqi3_cconly */
    case 1003:  /* *lshrqi3_cconly */
    case 927:  /* *ashldi3_cconly */
    case 926:  /* *ashlsi3_cconly */
    case 925:  /* *ashlhi3_cconly */
    case 924:  /* *ashlqi3_cconly */
    case 757:  /* *xordi_3 */
    case 756:  /* *iordi_3 */
    case 755:  /* *xorsi_3 */
    case 754:  /* *iorsi_3 */
    case 753:  /* *xorhi_3 */
    case 752:  /* *iorhi_3 */
    case 751:  /* *xorqi_3 */
    case 750:  /* *iorqi_3 */
    case 301:  /* *adddi_5 */
    case 300:  /* *addsi_5 */
    case 299:  /* *addhi_5 */
    case 298:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 297:  /* *addsi_4 */
    case 296:  /* *addhi_4 */
    case 295:  /* *addqi_4 */
    case 294:  /* *adddi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 293:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 292:  /* *adddi_3 */
    case 291:  /* *addsi_3 */
    case 290:  /* *addhi_3 */
    case 289:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1002:  /* *ashrsi3_cmp_zext */
    case 1001:  /* *lshrsi3_cmp_zext */
    case 923:  /* *ashlsi3_cmp_zext */
    case 747:  /* *xorsi_2_zext */
    case 746:  /* *iorsi_2_zext */
    case 644:  /* *andsi_2_zext */
    case 376:  /* *subsi_2_zext */
    case 288:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1000:  /* *ashrdi3_cmp */
    case 999:  /* *lshrdi3_cmp */
    case 998:  /* *ashrsi3_cmp */
    case 997:  /* *lshrsi3_cmp */
    case 996:  /* *ashrhi3_cmp */
    case 995:  /* *lshrhi3_cmp */
    case 994:  /* *ashrqi3_cmp */
    case 993:  /* *lshrqi3_cmp */
    case 922:  /* *ashldi3_cmp */
    case 921:  /* *ashlsi3_cmp */
    case 920:  /* *ashlhi3_cmp */
    case 919:  /* *ashlqi3_cmp */
    case 745:  /* *xordi_2 */
    case 744:  /* *iordi_2 */
    case 743:  /* *xorsi_2 */
    case 742:  /* *iorsi_2 */
    case 741:  /* *xorhi_2 */
    case 740:  /* *iorhi_2 */
    case 739:  /* *xorqi_2 */
    case 738:  /* *iorqi_2 */
    case 648:  /* *andsi_2 */
    case 647:  /* *andhi_2 */
    case 646:  /* *andqi_2 */
    case 645:  /* *andqi_2_maybe_si */
    case 643:  /* *anddi_2 */
    case 375:  /* *subdi_2 */
    case 374:  /* *subsi_2 */
    case 373:  /* *subhi_2 */
    case 372:  /* *subqi_2 */
    case 287:  /* *adddi_2 */
    case 286:  /* *addsi_2 */
    case 285:  /* *addhi_2 */
    case 284:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 642:  /* *xorqi_extdi_2_slp */
    case 641:  /* *iorqi_extdi_2_slp */
    case 640:  /* *andqi_extdi_2_slp */
    case 639:  /* *xorqi_extsi_2_slp */
    case 638:  /* *iorqi_extsi_2_slp */
    case 637:  /* *andqi_extsi_2_slp */
    case 636:  /* *xorqi_exthi_2_slp */
    case 635:  /* *iorqi_exthi_2_slp */
    case 634:  /* *andqi_exthi_2_slp */
    case 371:  /* *subqi_extdi_2_slp */
    case 370:  /* *subqi_extsi_2_slp */
    case 369:  /* *subqi_exthi_2_slp */
    case 283:  /* *addqi_extdi_2_slp */
    case 282:  /* *addqi_extsi_2_slp */
    case 281:  /* *addqi_exthi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 633:  /* *xorqi_extdi_1_slp */
    case 632:  /* *iorqi_extdi_1_slp */
    case 631:  /* *andqi_extdi_1_slp */
    case 630:  /* *xorqi_extsi_1_slp */
    case 629:  /* *iorqi_extsi_1_slp */
    case 628:  /* *andqi_extsi_1_slp */
    case 627:  /* *xorqi_exthi_1_slp */
    case 626:  /* *iorqi_exthi_1_slp */
    case 625:  /* *andqi_exthi_1_slp */
    case 280:  /* *addqi_extdi_1_slp */
    case 279:  /* *addqi_extsi_1_slp */
    case 278:  /* *addqi_exthi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1060:  /* *rotrhi3_1_slp */
    case 1059:  /* *rotlhi3_1_slp */
    case 1058:  /* *rotrqi3_1_slp */
    case 1057:  /* *rotlqi3_1_slp */
    case 992:  /* *ashrhi3_1_slp */
    case 991:  /* *lshrhi3_1_slp */
    case 990:  /* *ashrqi3_1_slp */
    case 989:  /* *lshrqi3_1_slp */
    case 918:  /* *ashlhi3_1_slp */
    case 917:  /* *ashlqi3_1_slp */
    case 624:  /* *xorhi_1_slp */
    case 623:  /* *iorhi_1_slp */
    case 622:  /* *andhi_1_slp */
    case 621:  /* *xorqi_1_slp */
    case 620:  /* *iorqi_1_slp */
    case 619:  /* *andqi_1_slp */
    case 365:  /* *subhi_1_slp */
    case 364:  /* *subqi_1_slp */
    case 277:  /* *addhi_1_slp */
    case 276:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 2209:  /* kxnordi */
    case 2208:  /* kxnorsi */
    case 2207:  /* kxnorhi */
    case 2206:  /* kxnorqi */
    case 1052:  /* *rotrsi3_1_zext */
    case 1051:  /* *rotlsi3_1_zext */
    case 984:  /* *ashrsi3_1_zext */
    case 983:  /* *lshrsi3_1_zext */
    case 971:  /* *ashrsi3_cvt_zext */
    case 954:  /* ashrti3_doubleword_lowpart */
    case 953:  /* lshrti3_doubleword_lowpart */
    case 952:  /* ashrdi3_doubleword_lowpart */
    case 951:  /* lshrdi3_doubleword_lowpart */
    case 914:  /* *ashlsi3_1_zext */
    case 737:  /* *notxorqi_1 */
    case 732:  /* *xorsi_1_zext */
    case 731:  /* *iorsi_1_zext */
    case 725:  /* *notxordi_1 */
    case 724:  /* *notxorsi_1 */
    case 723:  /* *notxorhi_1 */
    case 615:  /* *andsi_1_zext */
    case 522:  /* *mulsi3_1_zext */
    case 447:  /* *subsi3_carry_zext_0r */
    case 446:  /* *subsi3_carry_zext_0 */
    case 363:  /* *subsi_1_zext */
    case 273:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 270:  /* *addti3_doubleword_concat_zext */
    case 269:  /* *addti3_doubleword_concat_zext */
    case 268:  /* *addti3_doubleword_concat_zext */
    case 267:  /* *adddi3_doubleword_concat_zext */
    case 266:  /* *adddi3_doubleword_concat_zext */
    case 265:  /* *adddi3_doubleword_concat_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 264:  /* *addti3_doubleword_concat */
    case 263:  /* *addti3_doubleword_concat */
    case 262:  /* *addti3_doubleword_concat */
    case 261:  /* *adddi3_doubleword_concat */
    case 260:  /* *adddi3_doubleword_concat */
    case 259:  /* *adddi3_doubleword_concat */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 498:  /* *adddi3_ne_0 */
    case 497:  /* *addsi3_ne_0 */
    case 496:  /* *addhi3_ne_0 */
    case 495:  /* *addqi3_ne_0 */
    case 494:  /* *adddi3_eq_0 */
    case 493:  /* *addsi3_eq_0 */
    case 492:  /* *addhi3_eq_0 */
    case 491:  /* *addqi3_eq_0 */
    case 258:  /* *addti3_doubleword_zext */
    case 257:  /* *adddi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 2226:  /* klshiftrtdi */
    case 2225:  /* kashiftdi */
    case 2224:  /* klshiftrtsi */
    case 2223:  /* kashiftsi */
    case 2222:  /* klshiftrthi */
    case 2221:  /* kashifthi */
    case 2220:  /* klshiftrtqi */
    case 2219:  /* kashiftqi */
    case 2218:  /* kadddi */
    case 2217:  /* kaddsi */
    case 2216:  /* kaddhi */
    case 2215:  /* kaddqi */
    case 2201:  /* kxordi */
    case 2200:  /* kiordi */
    case 2199:  /* kanddi */
    case 2198:  /* kxorsi */
    case 2197:  /* kiorsi */
    case 2196:  /* kandsi */
    case 2195:  /* kxorhi */
    case 2194:  /* kiorhi */
    case 2193:  /* kandhi */
    case 2192:  /* kxorqi */
    case 2191:  /* kiorqi */
    case 2190:  /* kandqi */
    case 1916:  /* *xorv2hi3 */
    case 1915:  /* *iorv2hi3 */
    case 1914:  /* *andv2hi3 */
    case 1913:  /* *xorv2qi3 */
    case 1912:  /* *iorv2qi3 */
    case 1911:  /* *andv2qi3 */
    case 1910:  /* *xorv4qi3 */
    case 1909:  /* *iorv4qi3 */
    case 1908:  /* *andv4qi3 */
    case 1841:  /* ashrv2qi3 */
    case 1840:  /* lshrv2qi3 */
    case 1839:  /* ashlv2qi3 */
    case 1765:  /* subv2qi3 */
    case 1764:  /* addv2qi3 */
    case 1504:  /* pro_epilogue_adjust_stack_sub_di */
    case 1503:  /* pro_epilogue_adjust_stack_sub_si */
    case 1502:  /* pro_epilogue_adjust_stack_add_di */
    case 1501:  /* pro_epilogue_adjust_stack_add_si */
    case 1500:  /* *umindi3_1 */
    case 1499:  /* *umaxdi3_1 */
    case 1498:  /* *smindi3_1 */
    case 1497:  /* *smaxdi3_1 */
    case 1496:  /* *uminsi3_1 */
    case 1495:  /* *umaxsi3_1 */
    case 1494:  /* *sminsi3_1 */
    case 1493:  /* *smaxsi3_1 */
    case 1492:  /* *uminhi3_1 */
    case 1491:  /* *umaxhi3_1 */
    case 1490:  /* *sminhi3_1 */
    case 1489:  /* *smaxhi3_1 */
    case 1488:  /* *uminqi3_1 */
    case 1487:  /* *umaxqi3_1 */
    case 1486:  /* *sminqi3_1 */
    case 1485:  /* *smaxqi3_1 */
    case 1484:  /* *uminti3_doubleword */
    case 1483:  /* *umaxti3_doubleword */
    case 1482:  /* *sminti3_doubleword */
    case 1481:  /* *smaxti3_doubleword */
    case 1480:  /* *umindi3_doubleword */
    case 1479:  /* *umaxdi3_doubleword */
    case 1478:  /* *smindi3_doubleword */
    case 1477:  /* *smaxdi3_doubleword */
    case 1056:  /* *rotrhi3_1 */
    case 1055:  /* *rotlhi3_1 */
    case 1054:  /* *rotrqi3_1 */
    case 1053:  /* *rotlqi3_1 */
    case 1049:  /* *rotrdi3_1 */
    case 1048:  /* *rotldi3_1 */
    case 1047:  /* *rotrsi3_1 */
    case 1046:  /* *rotlsi3_1 */
    case 988:  /* *lshrhi3_1 */
    case 987:  /* *lshrqi3_1 */
    case 986:  /* *ashrhi3_1 */
    case 985:  /* *ashrqi3_1 */
    case 980:  /* *lshrdi3_1 */
    case 979:  /* *lshrsi3_1 */
    case 977:  /* *ashrdi3_1 */
    case 976:  /* *ashrsi3_1 */
    case 970:  /* ashrdi3_cvt */
    case 969:  /* ashrsi3_cvt */
    case 950:  /* ashrti3_doubleword */
    case 949:  /* lshrti3_doubleword */
    case 948:  /* ashrdi3_doubleword */
    case 947:  /* lshrdi3_doubleword */
    case 916:  /* *ashlqi3_1 */
    case 915:  /* *ashlhi3_1 */
    case 912:  /* *ashldi3_1 */
    case 911:  /* *ashlsi3_1 */
    case 886:  /* ashlti3_doubleword */
    case 885:  /* ashldi3_doubleword */
    case 736:  /* *xorqi_1 */
    case 735:  /* *iorqi_1 */
    case 727:  /* *xordi_1_btc */
    case 726:  /* *iordi_1_bts */
    case 722:  /* *xordi_1 */
    case 721:  /* *iordi_1 */
    case 720:  /* *xorsi_1 */
    case 719:  /* *iorsi_1 */
    case 718:  /* *xorhi_1 */
    case 717:  /* *iorhi_1 */
    case 716:  /* *xorti3_doubleword */
    case 715:  /* *iorti3_doubleword */
    case 714:  /* *xordi3_doubleword */
    case 713:  /* *iordi3_doubleword */
    case 618:  /* *andqi_1 */
    case 617:  /* *andsi_1 */
    case 616:  /* *andhi_1 */
    case 614:  /* *anddi_1_btr */
    case 613:  /* *anddi_1 */
    case 612:  /* *andti3_doubleword */
    case 611:  /* *anddi3_doubleword */
    case 523:  /* *mulqi3_1 */
    case 521:  /* *muldi3_1 */
    case 520:  /* *mulsi3_1 */
    case 519:  /* *mulhi3_1 */
    case 444:  /* *subdi3_carry_0r */
    case 443:  /* *subsi3_carry_0r */
    case 442:  /* *subhi3_carry_0r */
    case 441:  /* *subqi3_carry_0r */
    case 440:  /* *subdi3_carry_0 */
    case 439:  /* *subsi3_carry_0 */
    case 438:  /* *subhi3_carry_0 */
    case 437:  /* *subqi3_carry_0 */
    case 362:  /* *subdi_1 */
    case 361:  /* *subsi_1 */
    case 360:  /* *subhi_1 */
    case 359:  /* *subqi_1 */
    case 356:  /* *subti3_doubleword */
    case 355:  /* *subdi3_doubleword */
    case 275:  /* *addqi_1 */
    case 274:  /* *addhi_1 */
    case 272:  /* *adddi_1 */
    case 271:  /* *addsi_1 */
    case 256:  /* *addti3_doubleword */
    case 255:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 7600:  /* sse_stmxcsr */
    case 1660:  /* sttilecfg */
    case 1629:  /* rdpid_rex64 */
    case 1628:  /* rdpid */
    case 1588:  /* rdgsbasedi */
    case 1587:  /* rdfsbasedi */
    case 1586:  /* rdgsbasesi */
    case 1585:  /* rdfsbasesi */
    case 1580:  /* lwp_slwpcbdi */
    case 1579:  /* lwp_slwpcbsi */
    case 1575:  /* fnstsw */
    case 1548:  /* fxsave64 */
    case 1547:  /* fxsave */
    case 1543:  /* rdtsc */
    case 1535:  /* *prefetch_prefetchwt1 */
    case 1360:  /* x86_fnstsw_1 */
    case 1306:  /* *load_tp_x32_zext */
    case 1305:  /* *load_tp_di */
    case 1304:  /* *load_tp_si */
    case 1172:  /* set_got_rex64 */
    case 227:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 252:  /* floatunssixf2_i387_with_xmm */
    case 251:  /* floatunssidf2_i387_with_xmm */
    case 250:  /* floatunssisf2_i387_with_xmm */
    case 226:  /* fix_truncsi_i387 */
    case 225:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 245:  /* floatdixf2_i387_with_xmm */
    case 244:  /* floatdidf2_i387_with_xmm */
    case 243:  /* floatdisf2_i387_with_xmm */
    case 224:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 2263:  /* *negv2df2 */
    case 2262:  /* *absv2df2 */
    case 2261:  /* *negv4df2 */
    case 2260:  /* *absv4df2 */
    case 2259:  /* *negv8df2 */
    case 2258:  /* *absv8df2 */
    case 2257:  /* *negv4sf2 */
    case 2256:  /* *absv4sf2 */
    case 2255:  /* *negv8sf2 */
    case 2254:  /* *absv8sf2 */
    case 2253:  /* *negv16sf2 */
    case 2252:  /* *absv16sf2 */
    case 2251:  /* *negv8hf2 */
    case 2250:  /* *absv8hf2 */
    case 2249:  /* *negv16hf2 */
    case 2248:  /* *absv16hf2 */
    case 2247:  /* *negv32hf2 */
    case 2246:  /* *absv32hf2 */
    case 1740:  /* *mmx_negv4hf */
    case 1739:  /* *mmx_absv4hf */
    case 1738:  /* *mmx_negv2hf */
    case 1737:  /* *mmx_absv2hf */
    case 1692:  /* *mmx_negv2sf2 */
    case 1691:  /* *mmx_absv2sf2 */
    case 1179:  /* ffssi2_no_cmove */
    case 855:  /* *negdf2_1 */
    case 854:  /* *absdf2_1 */
    case 853:  /* *negsf2_1 */
    case 852:  /* *abssf2_1 */
    case 851:  /* *neghf2_1 */
    case 850:  /* *abshf2_1 */
    case 842:  /* *negtf2_1 */
    case 841:  /* *abstf2_1 */
    case 220:  /* fix_truncdi_i387_fisttp */
    case 219:  /* fix_truncsi_i387_fisttp */
    case 218:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 213:  /* *fixuns_truncdf_1 */
    case 212:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 188:  /* *extendqisi_ext_1 */
    case 187:  /* *extendqisi_ext_1 */
    case 186:  /* *extendqisi_ext_1 */
    case 185:  /* *extendqihi_ext_1 */
    case 184:  /* *extendqihi_ext_1 */
    case 183:  /* *extendqihi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 9435:  /* vcvtneobf162ps_v16bf */
    case 9434:  /* vcvtneoph2ps_v16hf */
    case 9433:  /* vcvtneobf162ps_v8bf */
    case 9432:  /* vcvtneoph2ps_v8hf */
    case 9431:  /* vcvtneebf162ps_v16bf */
    case 9430:  /* vcvtneeph2ps_v16hf */
    case 9429:  /* vcvtneebf162ps_v8bf */
    case 9428:  /* vcvtneeph2ps_v8hf */
    case 9427:  /* vbcstnesh2ps_v4sf */
    case 9426:  /* vbcstnesh2ps_v8sf */
    case 9425:  /* vbcstnebf162ps_v4sf */
    case 9424:  /* vbcstnebf162ps_v8sf */
    case 9126:  /* avx512f_pd512_pd */
    case 9125:  /* avx512f_ps512_ps */
    case 9124:  /* avx512f_si512_si */
    case 8378:  /* *avx512dq_broadcastv8sf */
    case 8376:  /* *avx512dq_broadcastv16sf */
    case 8374:  /* *avx512dq_broadcastv4si */
    case 8372:  /* *avx512dq_broadcastv8si */
    case 8370:  /* *avx512dq_broadcastv16si */
    case 8282:  /* avx512vl_vec_dupv8bf */
    case 8280:  /* avx512vl_vec_dupv16bf */
    case 8278:  /* avx512bw_vec_dupv32bf */
    case 8276:  /* avx512fp16_vec_dupv8hf */
    case 8274:  /* avx512vl_vec_dupv16hf */
    case 8272:  /* avx512bw_vec_dupv32hf */
    case 8270:  /* avx512vl_vec_dupv8hi */
    case 8268:  /* avx512vl_vec_dupv16hi */
    case 8266:  /* avx512bw_vec_dupv32hi */
    case 8264:  /* avx512vl_vec_dupv32qi */
    case 8262:  /* avx512vl_vec_dupv16qi */
    case 8260:  /* avx512bw_vec_dupv64qi */
    case 8258:  /* avx512vl_vec_dupv2df */
    case 8256:  /* avx512vl_vec_dupv4df */
    case 8254:  /* avx512f_vec_dupv8df */
    case 8252:  /* avx512vl_vec_dupv4sf */
    case 8250:  /* avx512vl_vec_dupv8sf */
    case 8248:  /* avx512f_vec_dupv16sf */
    case 8246:  /* avx512vl_vec_dupv2di */
    case 8244:  /* avx512vl_vec_dupv4di */
    case 8242:  /* avx512f_vec_dupv8di */
    case 8240:  /* avx512vl_vec_dupv4si */
    case 8238:  /* avx512vl_vec_dupv8si */
    case 8236:  /* avx512f_vec_dupv16si */
    case 8235:  /* avx512bw_vec_dupv32bf_1 */
    case 8234:  /* avx512bw_vec_dupv32hf_1 */
    case 8233:  /* avx512bw_vec_dupv64qi_1 */
    case 8232:  /* avx512bw_vec_dupv32hi_1 */
    case 8231:  /* avx512f_vec_dupv8di_1 */
    case 8230:  /* avx512f_vec_dupv16si_1 */
    case 8229:  /* avx2_vec_dupv4df */
    case 8164:  /* avx2_pbroadcastv16bf_1 */
    case 8163:  /* avx2_pbroadcastv16hf_1 */
    case 8162:  /* avx2_pbroadcastv4di_1 */
    case 8161:  /* avx2_pbroadcastv8si_1 */
    case 8160:  /* avx2_pbroadcastv16hi_1 */
    case 8159:  /* avx2_pbroadcastv32qi_1 */
    case 8158:  /* avx2_pbroadcastv8bf */
    case 8157:  /* avx2_pbroadcastv16bf */
    case 8156:  /* avx2_pbroadcastv32bf */
    case 8155:  /* avx2_pbroadcastv8hf */
    case 8154:  /* avx2_pbroadcastv16hf */
    case 8153:  /* avx2_pbroadcastv32hf */
    case 8152:  /* avx2_pbroadcastv2di */
    case 8151:  /* avx2_pbroadcastv4di */
    case 8150:  /* avx2_pbroadcastv4si */
    case 8149:  /* avx2_pbroadcastv8si */
    case 8148:  /* avx2_pbroadcastv8hi */
    case 8147:  /* avx2_pbroadcastv16hi */
    case 8146:  /* avx2_pbroadcastv32hi */
    case 8145:  /* avx2_pbroadcastv16qi */
    case 8144:  /* avx2_pbroadcastv32qi */
    case 8143:  /* avx2_pbroadcastv64qi */
    case 8142:  /* avx2_pbroadcastv8di */
    case 8141:  /* avx2_pbroadcastv16si */
    case 7918:  /* sse4_1_zero_extendv2siv2di2 */
    case 7916:  /* sse4_1_sign_extendv2siv2di2 */
    case 7894:  /* sse4_1_zero_extendv2hiv2di2 */
    case 7892:  /* sse4_1_sign_extendv2hiv2di2 */
    case 7882:  /* avx2_zero_extendv4hiv4di2 */
    case 7880:  /* avx2_sign_extendv4hiv4di2 */
    case 7867:  /* sse4_1_zero_extendv2qiv2di2 */
    case 7865:  /* sse4_1_sign_extendv2qiv2di2 */
    case 7855:  /* avx2_zero_extendv4qiv4di2 */
    case 7853:  /* avx2_sign_extendv4qiv4di2 */
    case 7843:  /* avx512f_zero_extendv8qiv8di2 */
    case 7841:  /* avx512f_sign_extendv8qiv8di2 */
    case 7827:  /* sse4_1_zero_extendv4hiv4si2 */
    case 7825:  /* sse4_1_sign_extendv4hiv4si2 */
    case 7799:  /* sse4_1_zero_extendv4qiv4si2 */
    case 7797:  /* sse4_1_sign_extendv4qiv4si2 */
    case 7787:  /* avx2_zero_extendv8qiv8si2 */
    case 7785:  /* avx2_sign_extendv8qiv8si2 */
    case 7767:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 7765:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 7513:  /* *vec_extractv4si_0_zext */
    case 7512:  /* *vec_extractv4si_0_zext_sse4 */
    case 6540:  /* *avx512f_us_truncatev8div16qi2_store_2 */
    case 6539:  /* *avx512f_truncatev8div16qi2_store_2 */
    case 6538:  /* *avx512f_ss_truncatev8div16qi2_store_2 */
    case 6534:  /* avx512f_us_truncatev8div16qi2 */
    case 6533:  /* avx512f_truncatev8div16qi2 */
    case 6532:  /* avx512f_ss_truncatev8div16qi2 */
    case 6519:  /* *avx512vl_us_truncatev2div2si2_store_2 */
    case 6518:  /* *avx512vl_truncatev2div2si2_store_2 */
    case 6517:  /* *avx512vl_ss_truncatev2div2si2_store_2 */
    case 6497:  /* *avx512vl_us_truncatev2div2hi2_store_2 */
    case 6496:  /* *avx512vl_truncatev2div2hi2_store_2 */
    case 6495:  /* *avx512vl_ss_truncatev2div2hi2_store_2 */
    case 6467:  /* *avx512vl_us_truncatev4div4hi2_store_2 */
    case 6466:  /* *avx512vl_truncatev4div4hi2_store_2 */
    case 6465:  /* *avx512vl_ss_truncatev4div4hi2_store_2 */
    case 6464:  /* *avx512vl_us_truncatev4siv4hi2_store_2 */
    case 6463:  /* *avx512vl_truncatev4siv4hi2_store_2 */
    case 6462:  /* *avx512vl_ss_truncatev4siv4hi2_store_2 */
    case 6421:  /* *avx512vl_us_truncatev8siv8qi2_store_2 */
    case 6420:  /* *avx512vl_truncatev8siv8qi2_store_2 */
    case 6419:  /* *avx512vl_ss_truncatev8siv8qi2_store_2 */
    case 6418:  /* *avx512vl_us_truncatev8hiv8qi2_store_2 */
    case 6417:  /* *avx512vl_truncatev8hiv8qi2_store_2 */
    case 6416:  /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */
    case 6385:  /* *avx512vl_us_truncatev4div4qi2_store_2 */
    case 6384:  /* *avx512vl_truncatev4div4qi2_store_2 */
    case 6383:  /* *avx512vl_ss_truncatev4div4qi2_store_2 */
    case 6382:  /* *avx512vl_us_truncatev4siv4qi2_store_2 */
    case 6381:  /* *avx512vl_truncatev4siv4qi2_store_2 */
    case 6380:  /* *avx512vl_ss_truncatev4siv4qi2_store_2 */
    case 6361:  /* *avx512vl_us_truncatev2div2qi2_store_2 */
    case 6360:  /* *avx512vl_truncatev2div2qi2_store_2 */
    case 6359:  /* *avx512vl_ss_truncatev2div2qi2_store_2 */
    case 4583:  /* *vec_setv2di_0_zero_extendsi_1 */
    case 4571:  /* *vec_setv2di_0_zero_extendhi_1 */
    case 4544:  /* avx512f_vec_dupv8df_1 */
    case 4543:  /* avx512f_vec_dupv16sf_1 */
    case 4542:  /* avx2_vec_dupv8sf_1 */
    case 4541:  /* avx2_vec_dupv4sf */
    case 4540:  /* avx2_vec_dupv8sf */
    case 4496:  /* sse2_cvtps2pd */
    case 4465:  /* vec_unpacks_lo_v16sf */
    case 4464:  /* *avx_cvtps2pd256_2 */
    case 4435:  /* sse2_cvttpd2dq */
    case 4429:  /* avx512dq_fixuns_truncv2sfv2di2 */
    case 4427:  /* avx512dq_fix_truncv2sfv2di2 */
    case 4376:  /* *fixuns_truncv2dfv2si2 */
    case 4345:  /* sse2_cvtdq2pd */
    case 4344:  /* avx_cvtdq2pd256_2 */
    case 4343:  /* avx512f_cvtdq2pd512_2 */
    case 4341:  /* *floatunsv2siv2df2 */
    case 4289:  /* sse2_cvttsd2siq */
    case 4287:  /* sse2_cvttsd2si */
    case 4279:  /* avx512f_vcvttsd2usiq */
    case 4277:  /* avx512f_vcvttsd2usi */
    case 4271:  /* avx512f_vcvttss2usiq */
    case 4269:  /* avx512f_vcvttss2usi */
    case 4180:  /* sse_cvttss2siq */
    case 4178:  /* sse_cvttss2si */
    case 4167:  /* sse_cvttps2pi */
    case 4116:  /* avx512fp16_float_extend_phv2df2 */
    case 4110:  /* avx512fp16_float_extend_phv4sf2 */
    case 4108:  /* avx512fp16_float_extend_phv4df2 */
    case 4090:  /* avx512fp16_fixuns_truncdi2 */
    case 4088:  /* avx512fp16_fix_truncdi2 */
    case 4086:  /* avx512fp16_fixuns_truncsi2 */
    case 4084:  /* avx512fp16_fix_truncsi2 */
    case 4078:  /* avx512fp16_fixuns_truncv2di2 */
    case 4076:  /* avx512fp16_fix_truncv2di2 */
    case 4066:  /* avx512fp16_fixuns_truncv4di2 */
    case 4064:  /* avx512fp16_fix_truncv4di2 */
    case 4062:  /* avx512fp16_fixuns_truncv4si2 */
    case 4060:  /* avx512fp16_fix_truncv4si2 */
    case 1998:  /* *vec_dupv2hi */
    case 1977:  /* *vec_extractv2si_1_zext */
    case 1975:  /* *vec_extractv2si_0_zext */
    case 1974:  /* *vec_extractv2si_0_zext_sse4 */
    case 1967:  /* *vec_dupv4hi */
    case 1936:  /* sse4_1_zero_extendv2qiv2hi2 */
    case 1935:  /* sse4_1_sign_extendv2qiv2hi2 */
    case 1934:  /* sse4_1_zero_extendv2qiv2si2 */
    case 1933:  /* sse4_1_sign_extendv2qiv2si2 */
    case 1932:  /* sse4_1_zero_extendv2hiv2si2 */
    case 1931:  /* sse4_1_sign_extendv2hiv2si2 */
    case 1930:  /* sse4_1_zero_extendv4qiv4hi2 */
    case 1929:  /* sse4_1_sign_extendv4qiv4hi2 */
    case 869:  /* *one_cmplsi2_1_zext */
    case 211:  /* *fixuns_truncdfsi2_avx512f_zext */
    case 210:  /* *fixuns_truncsfsi2_avx512f_zext */
    case 209:  /* *fixuns_trunchfsi2zext */
    case 181:  /* *extendqisi2_zext */
    case 179:  /* *extendhisi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 175:  /* extendditi2 */
    case 174:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1512:  /* probe_stack_range_di */
    case 1511:  /* probe_stack_range_si */
    case 1316:  /* *tls_dynamic_gnu2_call_64_di */
    case 1315:  /* *tls_dynamic_gnu2_call_64_si */
    case 1225:  /* bmi_bextr_di */
    case 1224:  /* bmi_bextr_si */
    case 152:  /* push2p_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 2176:  /* movdi_to_sse */
    case 1516:  /* stack_protect_set_1_di_di */
    case 1515:  /* stack_protect_set_1_si_di */
    case 1514:  /* stack_protect_set_1_di_si */
    case 1513:  /* stack_protect_set_1_si_si */
    case 1379:  /* lrintxfdi2 */
    case 153:  /* pop2p_di */
    case 149:  /* pop2_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 9456:  /* atomic_storedi_1 */
    case 9455:  /* atomic_storesi_1 */
    case 9454:  /* atomic_storehi_1 */
    case 9453:  /* atomic_storeqi_1 */
    case 9378:  /* avx512vp2intersect_2intersectv16si */
    case 9377:  /* avx512vp2intersect_2intersectv4si */
    case 9376:  /* avx512vp2intersect_2intersectv8si */
    case 9375:  /* avx512vp2intersect_2intersectv2di */
    case 9374:  /* avx512vp2intersect_2intersectv4di */
    case 9373:  /* avx512vp2intersect_2intersectv8di */
    case 9369:  /* avx512vl_vpshufbitqmbv32qi */
    case 9367:  /* avx512vl_vpshufbitqmbv16qi */
    case 9365:  /* avx512vl_vpshufbitqmbv64qi */
    case 9361:  /* vaesenclast_v64qi */
    case 9360:  /* vaesenclast_v16qi */
    case 9359:  /* vaesenclast_v32qi */
    case 9358:  /* vaesenc_v64qi */
    case 9357:  /* vaesenc_v16qi */
    case 9356:  /* vaesenc_v32qi */
    case 9355:  /* vaesdeclast_v64qi */
    case 9354:  /* vaesdeclast_v16qi */
    case 9353:  /* vaesdeclast_v32qi */
    case 9352:  /* vaesdec_v64qi */
    case 9351:  /* vaesdec_v16qi */
    case 9350:  /* vaesdec_v32qi */
    case 9222:  /* vgf2p8mulb_v16qi */
    case 9220:  /* vgf2p8mulb_v32qi */
    case 9218:  /* vgf2p8mulb_v64qi */
    case 9152:  /* vpmultishiftqbv32qi */
    case 9150:  /* vpmultishiftqbv16qi */
    case 9148:  /* vpmultishiftqbv64qi */
    case 9123:  /* vsm4rnds4_v4si */
    case 9122:  /* vsm4rnds4_v8si */
    case 9121:  /* vsm4key4_v4si */
    case 9120:  /* vsm4key4_v8si */
    case 9118:  /* vsha512msg2 */
    case 9117:  /* vsha512msg1 */
    case 9112:  /* sha256msg2 */
    case 9111:  /* sha256msg1 */
    case 9109:  /* sha1nexte */
    case 9108:  /* sha1msg2 */
    case 9107:  /* sha1msg1 */
    case 9061:  /* avx512vl_getmantv2df */
    case 9057:  /* avx512vl_getmantv4df */
    case 9053:  /* avx512f_getmantv8df */
    case 9049:  /* avx512vl_getmantv4sf */
    case 9045:  /* avx512vl_getmantv8sf */
    case 9041:  /* avx512f_getmantv16sf */
    case 9037:  /* avx512fp16_getmantv8hf */
    case 9033:  /* avx512vl_getmantv16hf */
    case 9029:  /* avx512bw_getmantv32hf */
    case 9021:  /* avx512dq_fpclassv2df */
    case 9019:  /* avx512dq_fpclassv4df */
    case 9017:  /* avx512dq_fpclassv8df */
    case 9015:  /* avx512dq_fpclassv4sf */
    case 9013:  /* avx512dq_fpclassv8sf */
    case 9011:  /* avx512dq_fpclassv16sf */
    case 9009:  /* avx512dq_fpclassv8hf */
    case 9007:  /* avx512dq_fpclassv16hf */
    case 9005:  /* avx512dq_fpclassv32hf */
    case 8691:  /* *avx512f_vcvtps2ph512 */
    case 8687:  /* *avx512f_vcvtps2ph512 */
    case 8685:  /* *vcvtps2ph256 */
    case 8683:  /* vcvtps2ph256 */
    case 8682:  /* *vcvtps2ph_store */
    case 8412:  /* avx_vpermilvarv2df3 */
    case 8410:  /* avx_vpermilvarv4df3 */
    case 8408:  /* avx512f_vpermilvarv8df3 */
    case 8406:  /* avx_vpermilvarv4sf3 */
    case 8404:  /* avx_vpermilvarv8sf3 */
    case 8402:  /* avx512f_vpermilvarv16sf3 */
    case 8203:  /* avx512bw_permvarv32bf */
    case 8201:  /* avx512vl_permvarv16bf */
    case 8199:  /* avx512vl_permvarv8bf */
    case 8197:  /* avx512bw_permvarv32hf */
    case 8195:  /* avx512vl_permvarv16hf */
    case 8193:  /* avx512fp16_permvarv8hf */
    case 8191:  /* avx512bw_permvarv32hi */
    case 8189:  /* avx512vl_permvarv16hi */
    case 8187:  /* avx512vl_permvarv8hi */
    case 8185:  /* avx512vl_permvarv32qi */
    case 8183:  /* avx512vl_permvarv16qi */
    case 8181:  /* avx512bw_permvarv64qi */
    case 8179:  /* avx2_permvarv4df */
    case 8177:  /* avx2_permvarv4di */
    case 8175:  /* avx512f_permvarv8df */
    case 8173:  /* avx512f_permvarv8di */
    case 8171:  /* avx512f_permvarv16sf */
    case 8169:  /* avx512f_permvarv16si */
    case 8167:  /* avx2_permvarv8sf */
    case 8165:  /* avx2_permvarv8si */
    case 8137:  /* aeskeygenassist */
    case 8135:  /* aesdeclast */
    case 8134:  /* aesdec */
    case 8133:  /* aesenclast */
    case 8132:  /* aesenc */
    case 7966:  /* sse4_1_roundpd */
    case 7965:  /* avx_roundpd256 */
    case 7964:  /* sse4_1_roundps */
    case 7963:  /* avx_roundps256 */
    case 7732:  /* sse4_1_packusdw */
    case 7730:  /* avx2_packusdw */
    case 7728:  /* avx512bw_packusdw */
    case 7696:  /* sse4a_insertq */
    case 7694:  /* sse4a_extrq */
    case 7657:  /* ssse3_psignv2si3 */
    case 7656:  /* ssse3_psignv4hi3 */
    case 7655:  /* ssse3_psignv8qi3 */
    case 7654:  /* ssse3_psignv4si3 */
    case 7653:  /* avx2_psignv8si3 */
    case 7652:  /* ssse3_psignv8hi3 */
    case 7651:  /* avx2_psignv16hi3 */
    case 7650:  /* ssse3_psignv16qi3 */
    case 7649:  /* avx2_psignv32qi3 */
    case 7646:  /* ssse3_pshufbv16qi3 */
    case 7644:  /* avx2_pshufbv32qi3 */
    case 7642:  /* avx512bw_pshufbv64qi3 */
    case 7628:  /* avx512bw_pmaddubsw512v32hi */
    case 7626:  /* avx512bw_pmaddubsw512v16hi */
    case 7624:  /* avx512bw_pmaddubsw512v8hi */
    case 7549:  /* *sse2_psadbw */
    case 7548:  /* *avx2_psadbw */
    case 7547:  /* *avx512f_psadbw */
    case 7491:  /* *avx512bw_pshufhwv32hi */
    case 7485:  /* *avx512bw_pshuflwv32hi */
    case 7359:  /* sse2_packuswb */
    case 7357:  /* avx2_packuswb */
    case 7355:  /* avx512bw_packuswb */
    case 7197:  /* avx512vl_testnmv2di3 */
    case 7195:  /* avx512vl_testnmv4di3 */
    case 7193:  /* avx512f_testnmv8di3 */
    case 7191:  /* avx512vl_testnmv4si3 */
    case 7189:  /* avx512vl_testnmv8si3 */
    case 7187:  /* avx512f_testnmv16si3 */
    case 7185:  /* avx512vl_testnmv8hi3 */
    case 7183:  /* avx512vl_testnmv16hi3 */
    case 7181:  /* avx512bw_testnmv32hi3 */
    case 7179:  /* avx512vl_testnmv16qi3 */
    case 7177:  /* avx512vl_testnmv32qi3 */
    case 7175:  /* avx512bw_testnmv64qi3 */
    case 7173:  /* avx512vl_testmv2di3 */
    case 7171:  /* avx512vl_testmv4di3 */
    case 7169:  /* avx512f_testmv8di3 */
    case 7167:  /* avx512vl_testmv4si3 */
    case 7165:  /* avx512vl_testmv8si3 */
    case 7163:  /* avx512f_testmv16si3 */
    case 7161:  /* avx512vl_testmv8hi3 */
    case 7159:  /* avx512vl_testmv16hi3 */
    case 7157:  /* avx512bw_testmv32hi3 */
    case 7155:  /* avx512vl_testmv16qi3 */
    case 7153:  /* avx512vl_testmv32qi3 */
    case 7151:  /* avx512bw_testmv64qi3 */
    case 6683:  /* avx512bw_pmaddwd512v8hi */
    case 6681:  /* avx512bw_pmaddwd512v16hi */
    case 6679:  /* avx512bw_pmaddwd512v32hi */
    case 6228:  /* avx512vl_rndscalev2df */
    case 6224:  /* avx512vl_rndscalev4df */
    case 6220:  /* avx512f_rndscalev8df */
    case 6216:  /* avx512vl_rndscalev4sf */
    case 6212:  /* avx512vl_rndscalev8sf */
    case 6208:  /* avx512f_rndscalev16sf */
    case 6204:  /* avx512fp16_rndscalev8hf */
    case 6200:  /* avx512vl_rndscalev16hf */
    case 6196:  /* avx512bw_rndscalev32hf */
    case 4714:  /* avx512vl_scalefv2df */
    case 4710:  /* avx512vl_scalefv4df */
    case 4706:  /* avx512f_scalefv8df */
    case 4702:  /* avx512vl_scalefv4sf */
    case 4698:  /* avx512vl_scalefv8sf */
    case 4694:  /* avx512f_scalefv16sf */
    case 4690:  /* avx512fp16_scalefv8hf */
    case 4686:  /* avx512vl_scalefv16hf */
    case 4682:  /* avx512bw_scalefv32hf */
    case 3832:  /* avx512fp16_fcmulc_v8hf */
    case 3830:  /* avx512fp16_fmulc_v8hf */
    case 3828:  /* avx512vl_fcmulc_v16hf */
    case 3826:  /* avx512vl_fmulc_v16hf */
    case 3822:  /* avx512bw_fcmulc_v32hf */
    case 3818:  /* avx512bw_fmulc_v32hf */
    case 3100:  /* *avx512vl_eqv2di3_1 */
    case 3098:  /* *avx512vl_eqv2di3_1 */
    case 3096:  /* *avx512vl_eqv4di3_1 */
    case 3094:  /* *avx512vl_eqv4di3_1 */
    case 3092:  /* *avx512f_eqv8di3_1 */
    case 3090:  /* *avx512f_eqv8di3_1 */
    case 3088:  /* *avx512vl_eqv4si3_1 */
    case 3086:  /* *avx512vl_eqv4si3_1 */
    case 3084:  /* *avx512vl_eqv8si3_1 */
    case 3082:  /* *avx512vl_eqv8si3_1 */
    case 3080:  /* *avx512f_eqv16si3_1 */
    case 3078:  /* *avx512f_eqv16si3_1 */
    case 3028:  /* *avx512vl_eqv8hi3_1 */
    case 3026:  /* *avx512vl_eqv8hi3_1 */
    case 3024:  /* *avx512vl_eqv16hi3_1 */
    case 3022:  /* *avx512vl_eqv16hi3_1 */
    case 3020:  /* *avx512bw_eqv32hi3_1 */
    case 3018:  /* *avx512bw_eqv32hi3_1 */
    case 3016:  /* *avx512vl_eqv32qi3_1 */
    case 3014:  /* *avx512vl_eqv32qi3_1 */
    case 3012:  /* *avx512vl_eqv16qi3_1 */
    case 3010:  /* *avx512vl_eqv16qi3_1 */
    case 3008:  /* *avx512bw_eqv64qi3_1 */
    case 3006:  /* *avx512bw_eqv64qi3_1 */
    case 2741:  /* *reducepv2df */
    case 2737:  /* *reducepv4df */
    case 2733:  /* *reducepv8df */
    case 2729:  /* *reducepv4sf */
    case 2725:  /* *reducepv8sf */
    case 2721:  /* *reducepv16sf */
    case 2717:  /* *reducepv8hf */
    case 2713:  /* *reducepv16hf */
    case 2709:  /* *reducepv32hf */
    case 2663:  /* ieee_minv2df3 */
    case 2661:  /* ieee_maxv2df3 */
    case 2659:  /* ieee_minv4df3 */
    case 2657:  /* ieee_maxv4df3 */
    case 2653:  /* ieee_minv8df3 */
    case 2649:  /* ieee_maxv8df3 */
    case 2647:  /* ieee_minv4sf3 */
    case 2645:  /* ieee_maxv4sf3 */
    case 2643:  /* ieee_minv8sf3 */
    case 2641:  /* ieee_maxv8sf3 */
    case 2637:  /* ieee_minv16sf3 */
    case 2633:  /* ieee_maxv16sf3 */
    case 2631:  /* ieee_minv8hf3 */
    case 2629:  /* ieee_maxv8hf3 */
    case 2627:  /* ieee_minv16hf3 */
    case 2625:  /* ieee_maxv16hf3 */
    case 2621:  /* ieee_minv32hf3 */
    case 2617:  /* ieee_maxv32hf3 */
    case 2007:  /* *mmx_psadbw */
    case 1955:  /* mmx_pshufbv4qi3 */
    case 1954:  /* mmx_pshufbv8qi3 */
    case 1920:  /* mmx_packusdw */
    case 1918:  /* mmx_packuswb */
    case 1705:  /* mmx_rsqit1v2sf3 */
    case 1703:  /* mmx_rcpit2v2sf3 */
    case 1702:  /* mmx_rcpit1v2sf3 */
    case 1700:  /* mmx_ieee_minv2sf3 */
    case 1699:  /* mmx_ieee_maxv2sf3 */
    case 1562:  /* xsaves64 */
    case 1561:  /* xsavec64 */
    case 1560:  /* xsaveopt64 */
    case 1559:  /* xsave64 */
    case 1558:  /* xsaves_rex64 */
    case 1557:  /* xsavec_rex64 */
    case 1556:  /* xsaveopt_rex64 */
    case 1555:  /* xsave_rex64 */
    case 1539:  /* sse4_2_crc32si */
    case 1538:  /* sse4_2_crc32hi */
    case 1537:  /* sse4_2_crc32qi */
    case 1472:  /* *ieee_smindf3 */
    case 1471:  /* *ieee_smaxdf3 */
    case 1470:  /* *ieee_sminsf3 */
    case 1469:  /* *ieee_smaxsf3 */
    case 1468:  /* *ieee_sminhf3 */
    case 1467:  /* *ieee_smaxhf3 */
    case 1377:  /* sse4_1_rounddf2 */
    case 1376:  /* sse4_1_roundsf2 */
    case 1375:  /* sse4_1_roundhf2 */
    case 1374:  /* avx512f_scalefdf2 */
    case 1373:  /* avx512f_scalefsf2 */
    case 1255:  /* bmi2_pext_di3 */
    case 1254:  /* bmi2_pext_si3 */
    case 1253:  /* bmi2_pdep_di3 */
    case 1252:  /* bmi2_pdep_si3 */
    case 148:  /* push2_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 140:  /* *insvdi_lowpart_1 */
    case 139:  /* *insvdi_lowpart_1 */
    case 138:  /* *insvdi_lowpart_1 */
    case 137:  /* *insvti_lowpart_1 */
    case 136:  /* *insvti_lowpart_1 */
    case 135:  /* *insvti_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 134:  /* *insvti_highpart_1 */
    case 133:  /* *insvti_highpart_1 */
    case 132:  /* *insvti_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 125:  /* *insvqi_2 */
    case 124:  /* *insvqi_2 */
    case 123:  /* *insvqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 872:  /* *one_cmplhi_1_slp */
    case 871:  /* *one_cmplqi_1_slp */
    case 131:  /* *insvqi_3 */
    case 130:  /* *insvqi_3 */
    case 129:  /* *insvqi_3 */
    case 128:  /* *insvqi_3 */
    case 127:  /* *insvqi_3 */
    case 126:  /* *insvqi_3 */
    case 122:  /* *insvqi_1 */
    case 121:  /* *insvqi_1 */
    case 120:  /* *insvqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 116:  /* *extzvqi */
    case 115:  /* *extzvqi */
    case 114:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 2213:  /* knotdi */
    case 2212:  /* knotsi */
    case 2211:  /* knothi */
    case 2210:  /* knotqi */
    case 1751:  /* negv2qi2 */
    case 1448:  /* *x86_movdicc_0_m1_neg */
    case 1447:  /* *x86_movsicc_0_m1_neg */
    case 1446:  /* *x86_movhicc_0_m1_neg */
    case 1445:  /* *x86_movqicc_0_m1_neg */
    case 1444:  /* *x86_movdicc_0_m1_se */
    case 1443:  /* *x86_movsicc_0_m1_se */
    case 1442:  /* *x86_movdicc_0_m1 */
    case 1441:  /* *x86_movsicc_0_m1 */
    case 1286:  /* popcounthi2 */
    case 1277:  /* popcountdi2 */
    case 1276:  /* popcountsi2 */
    case 1205:  /* clzdi2_lzcnt */
    case 1204:  /* clzsi2_lzcnt */
    case 1187:  /* ctzdi2 */
    case 1186:  /* ctzsi2 */
    case 849:  /* *negxf2_i387_1 */
    case 848:  /* *absxf2_i387_1 */
    case 847:  /* *negdf2_i387_1 */
    case 846:  /* *absdf2_i387_1 */
    case 845:  /* *negsf2_i387_1 */
    case 844:  /* *abssf2_i387_1 */
    case 836:  /* *absdi2_1 */
    case 835:  /* *abssi2_1 */
    case 834:  /* *abshi2_1 */
    case 833:  /* *absqi2_1 */
    case 830:  /* *absti2_doubleword */
    case 829:  /* *absdi2_doubleword */
    case 805:  /* *negdi_1 */
    case 804:  /* *negsi_1 */
    case 803:  /* *neghi_1 */
    case 802:  /* *negqi_1 */
    case 801:  /* *negti2_doubleword */
    case 800:  /* *negdi2_doubleword */
    case 223:  /* *fix_truncdi_i387_1 */
    case 222:  /* *fix_truncsi_i387_1 */
    case 221:  /* *fix_trunchi_i387_1 */
    case 171:  /* zero_extendqihi2_and */
    case 168:  /* zero_extendhisi2_and */
    case 167:  /* zero_extendqisi2_and */
    case 110:  /* *extvdi_1_0 */
    case 109:  /* *extvsi_1_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 106:  /* *movstrictqi_extdi_1 */
    case 105:  /* *movstrictqi_extsi_1 */
    case 104:  /* *movstrictqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1143:  /* *sibcall_memory */
    case 1142:  /* *sibcall_memory */
    case 103:  /* *movstricthi_xor */
    case 102:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 162:  /* *swapxf */
    case 99:  /* *swaphi */
    case 98:  /* *swapqi */
    case 97:  /* swapdi */
    case 96:  /* swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 9390:  /* avx512f_cvtneps2bf16_v8sf */
    case 9388:  /* avx512f_cvtneps2bf16_v16sf */
    case 9387:  /* vcvtneps2bf16_v8sf */
    case 9204:  /* vpopcountv8hi */
    case 9202:  /* vpopcountv16hi */
    case 9200:  /* vpopcountv32hi */
    case 9198:  /* vpopcountv32qi */
    case 9196:  /* vpopcountv16qi */
    case 9194:  /* vpopcountv64qi */
    case 9184:  /* vpopcountv2di */
    case 9182:  /* vpopcountv4di */
    case 9180:  /* vpopcountv8di */
    case 9178:  /* vpopcountv4si */
    case 9176:  /* vpopcountv8si */
    case 9174:  /* vpopcountv16si */
    case 9129:  /* avx512f_pd512_256pd */
    case 9128:  /* avx512f_ps512_256ps */
    case 9127:  /* avx512f_si512_256si */
    case 9093:  /* clzv2di2 */
    case 9091:  /* clzv4di2 */
    case 9089:  /* clzv8di2 */
    case 9087:  /* clzv4si2 */
    case 9085:  /* clzv8si2 */
    case 9083:  /* clzv16si2 */
    case 8578:  /* avx_pd256_pd */
    case 8577:  /* avx_ps256_ps */
    case 8576:  /* avx_si256_si */
    case 8394:  /* *avx512dq_broadcastv4df_1 */
    case 8392:  /* *avx512dq_broadcastv4di_1 */
    case 8390:  /* *avx512dq_broadcastv8df_1 */
    case 8388:  /* *avx512dq_broadcastv8di_1 */
    case 8386:  /* *avx512dq_broadcastv16si_1 */
    case 8384:  /* *avx512dq_broadcastv16sf_1 */
    case 8382:  /* *avx512vl_broadcastv8sf_1 */
    case 8380:  /* *avx512vl_broadcastv8si_1 */
    case 8361:  /* vec_dupv4df */
    case 8360:  /* vec_dupv4di */
    case 8359:  /* vec_dupv8sf */
    case 8358:  /* vec_dupv8si */
    case 8357:  /* *vec_dupv8bf */
    case 8356:  /* *vec_dupv16bf */
    case 8355:  /* *vec_dupv8hf */
    case 8354:  /* *vec_dupv16hf */
    case 8353:  /* *vec_dupv4si */
    case 8352:  /* *vec_dupv8si */
    case 8351:  /* *vec_dupv8hi */
    case 8350:  /* *vec_dupv16hi */
    case 8349:  /* *vec_dupv16qi */
    case 8348:  /* *vec_dupv32qi */
    case 8342:  /* *vec_dupv2di */
    case 8341:  /* *vec_dupv4si */
    case 8340:  /* vec_dupv4sf */
    case 8338:  /* *avx512vl_vec_dup_gprv2df */
    case 8336:  /* *avx512vl_vec_dup_gprv4df */
    case 8334:  /* *avx512f_vec_dup_gprv8df */
    case 8332:  /* *avx512vl_vec_dup_gprv4sf */
    case 8330:  /* *avx512vl_vec_dup_gprv8sf */
    case 8328:  /* *avx512f_vec_dup_gprv16sf */
    case 8326:  /* *avx512vl_vec_dup_gprv2di */
    case 8324:  /* *avx512vl_vec_dup_gprv4di */
    case 8322:  /* *avx512f_vec_dup_gprv8di */
    case 8320:  /* *avx512vl_vec_dup_gprv4si */
    case 8318:  /* *avx512vl_vec_dup_gprv8si */
    case 8316:  /* *avx512f_vec_dup_gprv16si */
    case 8314:  /* *avx512vl_vec_dup_gprv8bf */
    case 8312:  /* *avx512vl_vec_dup_gprv16bf */
    case 8310:  /* *avx512bw_vec_dup_gprv32bf */
    case 8308:  /* *avx512fp16_vec_dup_gprv8hf */
    case 8306:  /* *avx512vl_vec_dup_gprv16hf */
    case 8304:  /* *avx512bw_vec_dup_gprv32hf */
    case 8302:  /* *avx512vl_vec_dup_gprv8hi */
    case 8300:  /* *avx512vl_vec_dup_gprv16hi */
    case 8298:  /* *avx512bw_vec_dup_gprv32hi */
    case 8296:  /* *avx512vl_vec_dup_gprv32qi */
    case 8294:  /* *avx512vl_vec_dup_gprv16qi */
    case 8292:  /* *avx512bw_vec_dup_gprv64qi */
    case 8290:  /* *avx512f_broadcastv8di */
    case 8288:  /* *avx512f_broadcastv8df */
    case 8286:  /* *avx512f_broadcastv16si */
    case 8284:  /* *avx512f_broadcastv16sf */
    case 7922:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 7920:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 7912:  /* avx2_zero_extendv4siv4di2 */
    case 7910:  /* avx2_sign_extendv4siv4di2 */
    case 7906:  /* avx512f_zero_extendv8siv8di2 */
    case 7904:  /* avx512f_sign_extendv8siv8di2 */
    case 7898:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 7896:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 7886:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 7884:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 7878:  /* avx512f_zero_extendv8hiv8di2 */
    case 7876:  /* avx512f_sign_extendv8hiv8di2 */
    case 7871:  /* *sse4_1_zero_extendv2qiv2di2_1 */
    case 7869:  /* *sse4_1_sign_extendv2qiv2di2_1 */
    case 7859:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 7857:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 7847:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 7845:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 7831:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 7829:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 7819:  /* avx2_zero_extendv8hiv8si2 */
    case 7817:  /* avx2_sign_extendv8hiv8si2 */
    case 7811:  /* avx512f_zero_extendv16hiv16si2 */
    case 7809:  /* avx512f_sign_extendv16hiv16si2 */
    case 7803:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 7801:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 7791:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 7789:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 7783:  /* *avx512f_zero_extendv16qiv16si2 */
    case 7781:  /* *avx512f_sign_extendv16qiv16si2 */
    case 7771:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 7769:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 7759:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 7757:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 7751:  /* avx2_zero_extendv16qiv16hi2 */
    case 7749:  /* avx2_sign_extendv16qiv16hi2 */
    case 7676:  /* *absv2di2 */
    case 7675:  /* *absv4di2 */
    case 7674:  /* *absv8di2 */
    case 7673:  /* *absv4si2 */
    case 7672:  /* *absv8si2 */
    case 7671:  /* *absv16si2 */
    case 7670:  /* *absv8hi2 */
    case 7669:  /* *absv16hi2 */
    case 7668:  /* *absv32hi2 */
    case 7667:  /* *absv16qi2 */
    case 7666:  /* *absv32qi2 */
    case 7665:  /* *absv64qi2 */
    case 7518:  /* *vec_extractv2di_1 */
    case 7511:  /* *vec_extractv2di_0_sse */
    case 7510:  /* *vec_extractv2di_0 */
    case 7509:  /* *vec_extractv4si_0 */
    case 7499:  /* *vec_extractv8hi_0_mem */
    case 7498:  /* *vec_extractv16qi_0_mem */
    case 6537:  /* *avx512f_us_truncatev8div16qi2_store_1 */
    case 6536:  /* *avx512f_truncatev8div16qi2_store_1 */
    case 6535:  /* *avx512f_ss_truncatev8div16qi2_store_1 */
    case 6516:  /* *avx512vl_us_truncatev2div2si2_store_1 */
    case 6515:  /* *avx512vl_truncatev2div2si2_store_1 */
    case 6514:  /* *avx512vl_ss_truncatev2div2si2_store_1 */
    case 6494:  /* *avx512vl_us_truncatev2div2hi2_store_1 */
    case 6493:  /* *avx512vl_truncatev2div2hi2_store_1 */
    case 6492:  /* *avx512vl_ss_truncatev2div2hi2_store_1 */
    case 6461:  /* *avx512vl_us_truncatev4div4hi2_store_1 */
    case 6460:  /* *avx512vl_truncatev4div4hi2_store_1 */
    case 6459:  /* *avx512vl_ss_truncatev4div4hi2_store_1 */
    case 6458:  /* *avx512vl_us_truncatev4siv4hi2_store_1 */
    case 6457:  /* *avx512vl_truncatev4siv4hi2_store_1 */
    case 6456:  /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
    case 6415:  /* *avx512vl_us_truncatev8siv8qi2_store_1 */
    case 6414:  /* *avx512vl_truncatev8siv8qi2_store_1 */
    case 6413:  /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
    case 6412:  /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
    case 6411:  /* *avx512vl_truncatev8hiv8qi2_store_1 */
    case 6410:  /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
    case 6379:  /* *avx512vl_us_truncatev4div4qi2_store_1 */
    case 6378:  /* *avx512vl_truncatev4div4qi2_store_1 */
    case 6377:  /* *avx512vl_ss_truncatev4div4qi2_store_1 */
    case 6376:  /* *avx512vl_us_truncatev4siv4qi2_store_1 */
    case 6375:  /* *avx512vl_truncatev4siv4qi2_store_1 */
    case 6374:  /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
    case 6358:  /* *avx512vl_us_truncatev2div2qi2_store_1 */
    case 6357:  /* *avx512vl_truncatev2div2qi2_store_1 */
    case 6356:  /* *avx512vl_ss_truncatev2div2qi2_store_1 */
    case 6328:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 6327:  /* *avx512vl_truncatev16hiv16qi2 */
    case 6326:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 6325:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 6324:  /* *avx512vl_truncatev8siv8hi2 */
    case 6323:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 6322:  /* *avx512vl_us_truncatev4div4si2 */
    case 6321:  /* *avx512vl_truncatev4div4si2 */
    case 6320:  /* *avx512vl_ss_truncatev4div4si2 */
    case 6315:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 6314:  /* avx512bw_truncatev32hiv32qi2 */
    case 6313:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 6295:  /* *avx512f_us_truncatev8div8hi2 */
    case 6294:  /* *avx512f_truncatev8div8hi2 */
    case 6293:  /* *avx512f_ss_truncatev8div8hi2 */
    case 6292:  /* *avx512f_us_truncatev8div8si2 */
    case 6291:  /* *avx512f_truncatev8div8si2 */
    case 6290:  /* *avx512f_ss_truncatev8div8si2 */
    case 6289:  /* *avx512f_us_truncatev16siv16hi2 */
    case 6288:  /* *avx512f_truncatev16siv16hi2 */
    case 6287:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 6286:  /* *avx512f_us_truncatev16siv16qi2 */
    case 6285:  /* *avx512f_truncatev16siv16qi2 */
    case 6284:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 6279:  /* vec_dupv2df */
    case 6274:  /* *vec_extractv2df_0_sse */
    case 6273:  /* sse2_storelpd */
    case 6272:  /* *vec_extractv2df_1_sse */
    case 6271:  /* sse2_storehpd */
    case 4651:  /* *vec_extractv8bf_0 */
    case 4650:  /* *vec_extractv16bf_0 */
    case 4649:  /* *vec_extractv32bf_0 */
    case 4648:  /* *vec_extractv8hf_0 */
    case 4647:  /* *vec_extractv16hf_0 */
    case 4646:  /* *vec_extractv32hf_0 */
    case 4645:  /* vec_extract_hi_v32qi */
    case 4644:  /* vec_extract_lo_v32qi */
    case 4643:  /* vec_extract_hi_v64qi */
    case 4642:  /* vec_extract_lo_v64qi */
    case 4641:  /* vec_extract_hi_v16bf */
    case 4640:  /* vec_extract_hi_v16hf */
    case 4639:  /* vec_extract_hi_v16hi */
    case 4638:  /* vec_extract_lo_v16bf */
    case 4637:  /* vec_extract_lo_v16hf */
    case 4636:  /* vec_extract_lo_v16hi */
    case 4635:  /* vec_extract_hi_v32bf */
    case 4634:  /* vec_extract_hi_v32hf */
    case 4633:  /* vec_extract_hi_v32hi */
    case 4632:  /* vec_extract_lo_v32bf */
    case 4631:  /* vec_extract_lo_v32hf */
    case 4630:  /* vec_extract_lo_v32hi */
    case 4629:  /* vec_extract_hi_v8sf */
    case 4628:  /* vec_extract_hi_v8si */
    case 4625:  /* vec_extract_lo_v8sf */
    case 4624:  /* vec_extract_lo_v8si */
    case 4621:  /* vec_extract_hi_v4df */
    case 4620:  /* vec_extract_hi_v4di */
    case 4617:  /* vec_extract_lo_v4df */
    case 4616:  /* vec_extract_lo_v4di */
    case 4613:  /* vec_extract_lo_v16si */
    case 4612:  /* vec_extract_lo_v16sf */
    case 4609:  /* vec_extract_hi_v16si */
    case 4608:  /* vec_extract_hi_v16sf */
    case 4605:  /* vec_extract_hi_v8di */
    case 4604:  /* vec_extract_hi_v8df */
    case 4601:  /* vec_extract_lo_v8di */
    case 4600:  /* vec_extract_lo_v8df */
    case 4587:  /* *vec_extractv4sf_0 */
    case 4536:  /* sse_storelps */
    case 4534:  /* sse_storehps */
    case 4498:  /* sse2_cvtps2pd_1 */
    case 4462:  /* avx_cvtps2pd256 */
    case 4458:  /* avx512f_cvtps2pd512 */
    case 4455:  /* truncv2dfv2sf2 */
    case 4452:  /* avx_cvtpd2ps256 */
    case 4448:  /* *avx512f_cvtpd2ps512 */
    case 4433:  /* *fixuns_truncv4sfv4si2 */
    case 4431:  /* *fixuns_truncv8sfv8si2 */
    case 4425:  /* fixuns_truncv4sfv4di2 */
    case 4423:  /* fix_truncv4sfv4di2 */
    case 4419:  /* fixuns_truncv8sfv8di2 */
    case 4415:  /* fix_truncv8sfv8di2 */
    case 4397:  /* fixuns_truncv2dfv2di2 */
    case 4395:  /* fix_truncv2dfv2di2 */
    case 4393:  /* fixuns_truncv4dfv4di2 */
    case 4391:  /* fix_truncv4dfv4di2 */
    case 4387:  /* fixuns_truncv8dfv8di2 */
    case 4383:  /* fix_truncv8dfv8di2 */
    case 4381:  /* fixuns_truncv4dfv4si2 */
    case 4379:  /* fix_truncv4dfv4si2 */
    case 4372:  /* fixuns_truncv8dfv8si2 */
    case 4368:  /* fix_truncv8dfv8si2 */
    case 4339:  /* floatunsv4siv4df2 */
    case 4337:  /* floatunsv8siv8df2 */
    case 4329:  /* floatunsv4div4sf2 */
    case 4327:  /* floatv4div4sf2 */
    case 4323:  /* floatunsv8div8sf2 */
    case 4319:  /* floatv8div8sf2 */
    case 4315:  /* floatunsv2div2df2 */
    case 4311:  /* floatv2div2df2 */
    case 4307:  /* floatunsv4div4df2 */
    case 4303:  /* floatv4div4df2 */
    case 4299:  /* floatunsv8div8df2 */
    case 4295:  /* floatv8div8df2 */
    case 4293:  /* floatv4siv4df2 */
    case 4291:  /* floatv8siv8df2 */
    case 4261:  /* fixuns_truncv2dfv2si2 */
    case 4260:  /* sse2_cvttpd2pi */
    case 4258:  /* floatunsv2siv2df2 */
    case 4257:  /* sse2_cvtpi2pd */
    case 4255:  /* fix_truncv4sfv4si2 */
    case 4253:  /* fix_truncv8sfv8si2 */
    case 4249:  /* fixuns_truncv16sfv16si2 */
    case 4245:  /* fix_truncv16sfv16si2 */
    case 4205:  /* *floatunsv4siv4sf2 */
    case 4201:  /* *floatunsv8siv8sf2 */
    case 4197:  /* *floatunsv16siv16sf2 */
    case 4195:  /* floatv4siv4sf2 */
    case 4193:  /* floatv8siv8sf2 */
    case 4189:  /* floatv16siv16sf2 */
    case 4128:  /* avx512fp16_vcvtps2ph_v8sf */
    case 4124:  /* avx512fp16_vcvtps2ph_v16sf */
    case 4120:  /* avx512fp16_vcvtpd2ph_v8df */
    case 4118:  /* *avx512fp16_float_extend_phv2df2_load */
    case 4114:  /* *avx512fp16_float_extend_phv4sf2_load */
    case 4112:  /* *avx512fp16_float_extend_phv4df2_load */
    case 4104:  /* avx512fp16_float_extend_phv8sf2 */
    case 4100:  /* avx512fp16_float_extend_phv16sf2 */
    case 4096:  /* avx512fp16_float_extend_phv8df2 */
    case 4095:  /* avx512fp16_fixuns_truncdi2_mem */
    case 4094:  /* avx512fp16_fix_truncdi2_mem */
    case 4093:  /* avx512fp16_fixuns_truncsi2_mem */
    case 4092:  /* avx512fp16_fix_truncsi2_mem */
    case 4082:  /* *avx512fp16_fixuns_truncv2di2_load */
    case 4080:  /* *avx512fp16_fix_truncv2di2_load */
    case 4074:  /* *avx512fp16_fixuns_truncv4di2_load */
    case 4072:  /* *avx512fp16_fix_truncv4di2_load */
    case 4070:  /* *avx512fp16_fixuns_truncv4si2_load */
    case 4068:  /* *avx512fp16_fix_truncv4si2_load */
    case 4056:  /* avx512fp16_fixuns_truncv8di2 */
    case 4052:  /* avx512fp16_fix_truncv8di2 */
    case 4048:  /* avx512fp16_fixuns_truncv16si2 */
    case 4044:  /* avx512fp16_fix_truncv16si2 */
    case 4040:  /* avx512fp16_fixuns_truncv8si2 */
    case 4036:  /* avx512fp16_fix_truncv8si2 */
    case 4032:  /* avx512fp16_fixuns_truncv32hi2 */
    case 4028:  /* avx512fp16_fix_truncv32hi2 */
    case 4024:  /* avx512fp16_fixuns_truncv16hi2 */
    case 4020:  /* avx512fp16_fix_truncv16hi2 */
    case 4016:  /* avx512fp16_fixuns_truncv8hi2 */
    case 4012:  /* avx512fp16_fix_truncv8hi2 */
    case 3970:  /* avx512fp16_vcvtuqq2ph_v8di */
    case 3966:  /* avx512fp16_vcvtqq2ph_v8di */
    case 3962:  /* avx512fp16_vcvtudq2ph_v16si */
    case 3958:  /* avx512fp16_vcvtdq2ph_v16si */
    case 3954:  /* avx512fp16_vcvtudq2ph_v8si */
    case 3950:  /* avx512fp16_vcvtdq2ph_v8si */
    case 3946:  /* avx512fp16_vcvtuw2ph_v32hi */
    case 3942:  /* avx512fp16_vcvtw2ph_v32hi */
    case 3938:  /* avx512fp16_vcvtuw2ph_v16hi */
    case 3934:  /* avx512fp16_vcvtw2ph_v16hi */
    case 3930:  /* avx512fp16_vcvtuw2ph_v8hi */
    case 3926:  /* avx512fp16_vcvtw2ph_v8hi */
    case 2513:  /* sse2_sqrtv2df2 */
    case 2511:  /* avx_sqrtv4df2 */
    case 2507:  /* avx512f_sqrtv8df2 */
    case 2505:  /* sse_sqrtv4sf2 */
    case 2503:  /* avx_sqrtv8sf2 */
    case 2499:  /* avx512f_sqrtv16sf2 */
    case 2497:  /* avx512fp16_sqrtv8hf2 */
    case 2495:  /* avx512fp16_sqrtv16hf2 */
    case 2491:  /* avx512fp16_sqrtv32hf2 */
    case 2001:  /* *vec_dupv2hi */
    case 2000:  /* *vec_dupv2bf */
    case 1999:  /* *vec_dupv2hf */
    case 1976:  /* *vec_extractv2si_1 */
    case 1973:  /* *vec_extractv2si_0 */
    case 1971:  /* *vec_dupv2si */
    case 1970:  /* *vec_dupv4hi */
    case 1969:  /* *vec_dupv4bf */
    case 1968:  /* *vec_dupv4hf */
    case 1966:  /* mmx_pswapdv2si2 */
    case 1939:  /* truncv2siv2hi2 */
    case 1938:  /* truncv2siv2qi2 */
    case 1937:  /* truncv2hiv2qi2 */
    case 1892:  /* one_cmplv2hi2 */
    case 1891:  /* one_cmplv2qi2 */
    case 1890:  /* one_cmplv4qi2 */
    case 1825:  /* absv2hi2 */
    case 1824:  /* absv2qi2 */
    case 1823:  /* absv4qi2 */
    case 1822:  /* ssse3_absv2si2 */
    case 1821:  /* ssse3_absv4hi2 */
    case 1820:  /* ssse3_absv8qi2 */
    case 1736:  /* *vec_extractv2sf_1 */
    case 1735:  /* *vec_extractv2sf_0 */
    case 1731:  /* *vec_dupv2sf */
    case 1728:  /* *mmx_movsldup */
    case 1727:  /* *mmx_movshdup */
    case 1726:  /* mmx_pswapdv2sf2 */
    case 1723:  /* mmx_floatv2siv2sf2 */
    case 1722:  /* mmx_fix_truncv2sfv2si2 */
    case 1359:  /* *sqrtdf2_sse */
    case 1358:  /* *sqrtsf2_sse */
    case 1357:  /* sqrthf2 */
    case 1354:  /* sqrtxf2 */
    case 1291:  /* *bswaphi2_movbe */
    case 1290:  /* *bswapdi2 */
    case 1289:  /* *bswapsi2 */
    case 1288:  /* *bswapdi2_movbe */
    case 1287:  /* *bswapsi2_movbe */
    case 1043:  /* rotr64ti2_doubleword */
    case 1042:  /* rotl64ti2_doubleword */
    case 1041:  /* rotr32di2_doubleword */
    case 1040:  /* rotl32di2_doubleword */
    case 870:  /* *one_cmplqi2_1 */
    case 868:  /* *one_cmpldi2_1 */
    case 867:  /* *one_cmplsi2_1 */
    case 866:  /* *one_cmplhi2_1 */
    case 865:  /* *one_cmplti2_doubleword */
    case 864:  /* *one_cmpldi2_doubleword */
    case 863:  /* *negxf2_i387 */
    case 862:  /* *absxf2_i387 */
    case 861:  /* *negdf2_i387 */
    case 860:  /* *absdf2_i387 */
    case 859:  /* *negsf2_i387 */
    case 858:  /* *abssf2_i387 */
    case 249:  /* *floatunsdidf2_avx512 */
    case 248:  /* *floatunssidf2_avx512 */
    case 247:  /* *floatunsdisf2_avx512 */
    case 246:  /* *floatunssisf2_avx512 */
    case 242:  /* *floatdidf2_i387 */
    case 241:  /* *floatdisf2_i387 */
    case 240:  /* floatunsdihf2 */
    case 239:  /* floatdihf2 */
    case 238:  /* floatunssihf2 */
    case 237:  /* floatsihf2 */
    case 236:  /* *floatdidf2 */
    case 235:  /* *floatsidf2 */
    case 234:  /* *floatdisf2 */
    case 233:  /* *floatsisf2 */
    case 232:  /* floatdixf2 */
    case 231:  /* floatsixf2 */
    case 230:  /* floathixf2 */
    case 229:  /* floathidf2 */
    case 228:  /* floathisf2 */
    case 217:  /* fix_truncdfdi_sse */
    case 216:  /* fix_truncdfsi_sse */
    case 215:  /* fix_truncsfdi_sse */
    case 214:  /* fix_truncsfsi_sse */
    case 208:  /* fixuns_truncdfsi2_avx512f */
    case 207:  /* fixuns_truncsfsi2_avx512f */
    case 206:  /* fixuns_truncdfdi2 */
    case 205:  /* fixuns_truncsfdi2 */
    case 204:  /* fixuns_trunchfdi2 */
    case 203:  /* fix_trunchfdi2 */
    case 202:  /* fixuns_trunchfsi2 */
    case 201:  /* fix_trunchfsi2 */
    case 200:  /* truncsfbf2 */
    case 199:  /* *truncdfhf2 */
    case 198:  /* *truncsfhf2 */
    case 197:  /* truncxfdf2 */
    case 196:  /* truncxfsf2 */
    case 195:  /* truncdfsf2 */
    case 194:  /* *extenddfxf2_i387 */
    case 193:  /* *extendsfxf2_i387 */
    case 191:  /* *extendhfdf2 */
    case 190:  /* *extendhfsf2 */
    case 189:  /* *extendsfdf2 */
    case 182:  /* extendqihi2 */
    case 180:  /* extendqisi2 */
    case 178:  /* extendhisi2 */
    case 177:  /* extendhidi2 */
    case 176:  /* extendqidi2 */
    case 173:  /* *extendsidi2_rex64 */
    case 172:  /* *zero_extendqihi2 */
    case 170:  /* *zero_extendhisi2 */
    case 169:  /* *zero_extendqisi2 */
    case 166:  /* zero_extendhidi2 */
    case 165:  /* zero_extendqidi2 */
    case 164:  /* *zero_extendsidi2 */
    case 163:  /* zero_extendditi2 */
    case 113:  /* *extzvdi */
    case 112:  /* *extzvsi */
    case 111:  /* *extzvhi */
    case 108:  /* *extvsi */
    case 107:  /* *extvhi */
    case 95:  /* *movabsdi_2 */
    case 94:  /* *movabssi_2 */
    case 93:  /* *movabshi_2 */
    case 92:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1141:  /* *sibcall */
    case 1140:  /* *sibcall */
    case 1137:  /* *call */
    case 1136:  /* *call */
    case 1126:  /* *setcc_qi_slp */
    case 119:  /* insvdi_1 */
    case 118:  /* insvsi_1 */
    case 117:  /* insvhi_1 */
    case 101:  /* *movstricthi_1 */
    case 100:  /* *movstrictqi_1 */
    case 91:  /* *movabsdi_1 */
    case 90:  /* *movabssi_1 */
    case 89:  /* *movabshi_1 */
    case 88:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 9461:  /* storedi_via_sse */
    case 9460:  /* loaddi_via_sse */
    case 9459:  /* storedi_via_fpu */
    case 9458:  /* loaddi_via_fpu */
    case 9105:  /* *conflictv2di */
    case 9103:  /* *conflictv4di */
    case 9101:  /* *conflictv8di */
    case 9099:  /* *conflictv4si */
    case 9097:  /* *conflictv8si */
    case 9095:  /* *conflictv16si */
    case 8676:  /* *avx512f_vcvtph2ps512 */
    case 8674:  /* vcvtph2ps256 */
    case 8672:  /* *vcvtph2ps_load */
    case 8136:  /* aesimc */
    case 8109:  /* xop_frczv4df2 */
    case 8108:  /* xop_frczv8sf2 */
    case 8107:  /* xop_frczv2df2 */
    case 8106:  /* xop_frczv4sf2 */
    case 8105:  /* xop_frczdf2 */
    case 8104:  /* xop_frczsf2 */
    case 8025:  /* *avx512er_rsqrt28v8df */
    case 8021:  /* *avx512er_rsqrt28v16sf */
    case 8009:  /* *avx512er_rcp28v8df */
    case 8005:  /* *avx512er_rcp28v16sf */
    case 8001:  /* avx512er_exp2v8df */
    case 7997:  /* avx512er_exp2v16sf */
    case 7748:  /* sse4_1_phminposuw */
    case 7725:  /* sse4_1_movntdqa */
    case 7724:  /* avx2_movntdqa */
    case 7723:  /* avx512f_movntdqa */
    case 7690:  /* sse4a_movntdf */
    case 7689:  /* sse4a_movntsf */
    case 7587:  /* sse2_pmovmskb */
    case 7586:  /* avx2_pmovmskb */
    case 7553:  /* sse2_movmskpd */
    case 7552:  /* avx_movmskpd256 */
    case 7551:  /* sse_movmskps */
    case 7550:  /* avx_movmskps256 */
    case 6112:  /* avx512vl_getexpv2df */
    case 6108:  /* avx512vl_getexpv4df */
    case 6104:  /* avx512f_getexpv8df */
    case 6100:  /* avx512vl_getexpv4sf */
    case 6096:  /* avx512vl_getexpv8sf */
    case 6092:  /* avx512f_getexpv16sf */
    case 6088:  /* avx512fp16_getexpv8hf */
    case 6084:  /* avx512vl_getexpv16hf */
    case 6080:  /* avx512bw_getexpv32hf */
    case 4477:  /* avx512vl_cvtq2maskv2di */
    case 4476:  /* avx512vl_cvtq2maskv4di */
    case 4475:  /* avx512f_cvtq2maskv8di */
    case 4474:  /* avx512vl_cvtd2maskv4si */
    case 4473:  /* avx512vl_cvtd2maskv8si */
    case 4472:  /* avx512f_cvtd2maskv16si */
    case 4471:  /* avx512vl_cvtw2maskv8hi */
    case 4470:  /* avx512vl_cvtw2maskv16hi */
    case 4469:  /* avx512bw_cvtw2maskv32hi */
    case 4468:  /* avx512vl_cvtb2maskv32qi */
    case 4467:  /* avx512vl_cvtb2maskv16qi */
    case 4466:  /* avx512bw_cvtb2maskv64qi */
    case 4413:  /* fixuns_notruncv2dfv2di2 */
    case 4411:  /* fixuns_notruncv4dfv4di2 */
    case 4407:  /* fixuns_notruncv8dfv8di2 */
    case 4405:  /* fix_notruncv2dfv2di2 */
    case 4403:  /* fix_notruncv4dfv4di2 */
    case 4399:  /* fix_notruncv8dfv8di2 */
    case 4361:  /* fixuns_notruncv4dfv4si2 */
    case 4357:  /* fixuns_notruncv8dfv8si2 */
    case 4351:  /* avx_cvtpd2dq256 */
    case 4347:  /* avx512f_cvtpd2dq512 */
    case 4286:  /* sse2_cvtsd2siq_2 */
    case 4285:  /* sse2_cvtsd2si_2 */
    case 4259:  /* sse2_cvtpd2pi */
    case 4241:  /* *avx512dq_cvtps2uqqv4di */
    case 4237:  /* *avx512dq_cvtps2uqqv8di */
    case 4233:  /* *avx512dq_cvtps2qqv4di */
    case 4229:  /* *avx512dq_cvtps2qqv8di */
    case 4225:  /* *avx512vl_fixuns_notruncv4sfv4si */
    case 4221:  /* *avx512vl_fixuns_notruncv8sfv8si */
    case 4217:  /* *avx512f_fixuns_notruncv16sfv16si */
    case 4213:  /* avx512f_fix_notruncv16sfv16si */
    case 4211:  /* sse2_fix_notruncv4sfv4si */
    case 4209:  /* avx_fix_notruncv8sfv8si */
    case 4177:  /* sse_cvtss2siq_2 */
    case 4176:  /* sse_cvtss2si_2 */
    case 4003:  /* avx512fp16_vcvtsh2siq_2 */
    case 4002:  /* avx512fp16_vcvtsh2usiq_2 */
    case 4001:  /* avx512fp16_vcvtsh2si_2 */
    case 4000:  /* avx512fp16_vcvtsh2usi_2 */
    case 3922:  /* avx512fp16_vcvtph2qq_v2di */
    case 3918:  /* avx512fp16_vcvtph2uqq_v2di */
    case 3914:  /* avx512fp16_vcvtph2dq_v4si */
    case 3910:  /* avx512fp16_vcvtph2udq_v4si */
    case 3906:  /* avx512fp16_vcvtph2w_v8hi */
    case 3902:  /* avx512fp16_vcvtph2uw_v8hi */
    case 3898:  /* avx512fp16_vcvtph2qq_v4di */
    case 3894:  /* avx512fp16_vcvtph2uqq_v4di */
    case 3890:  /* avx512fp16_vcvtph2dq_v8si */
    case 3886:  /* avx512fp16_vcvtph2udq_v8si */
    case 3882:  /* avx512fp16_vcvtph2w_v16hi */
    case 3878:  /* avx512fp16_vcvtph2uw_v16hi */
    case 3874:  /* avx512fp16_vcvtph2qq_v8di */
    case 3870:  /* avx512fp16_vcvtph2uqq_v8di */
    case 3866:  /* avx512fp16_vcvtph2dq_v16si */
    case 3862:  /* avx512fp16_vcvtph2udq_v16si */
    case 3858:  /* avx512fp16_vcvtph2w_v32hi */
    case 3854:  /* avx512fp16_vcvtph2uw_v32hi */
    case 2557:  /* *rsqrt14v2df */
    case 2555:  /* *rsqrt14v4df */
    case 2553:  /* *rsqrt14v8df */
    case 2551:  /* *rsqrt14v4sf */
    case 2549:  /* *rsqrt14v8sf */
    case 2547:  /* *rsqrt14v16sf */
    case 2545:  /* avx512fp16_rsqrtv8hf2 */
    case 2543:  /* avx512fp16_rsqrtv16hf2 */
    case 2541:  /* avx512fp16_rsqrtv32hf2 */
    case 2540:  /* sse_rsqrtv4sf2 */
    case 2539:  /* avx_rsqrtv8sf2 */
    case 2485:  /* *rcp14v2df */
    case 2483:  /* *rcp14v4df */
    case 2481:  /* *rcp14v8df */
    case 2479:  /* *rcp14v4sf */
    case 2477:  /* *rcp14v8sf */
    case 2475:  /* *rcp14v16sf */
    case 2470:  /* avx512fp16_rcpv8hf2 */
    case 2468:  /* avx512fp16_rcpv16hf2 */
    case 2466:  /* avx512fp16_rcpv32hf2 */
    case 2463:  /* sse_rcpv4sf2 */
    case 2462:  /* avx_rcpv8sf2 */
    case 2189:  /* sse2_movntv2di */
    case 2188:  /* avx_movntv4di */
    case 2187:  /* avx512f_movntv8di */
    case 2186:  /* sse2_movntv2df */
    case 2185:  /* avx_movntv4df */
    case 2184:  /* avx512f_movntv8df */
    case 2183:  /* sse_movntv4sf */
    case 2182:  /* avx_movntv8sf */
    case 2181:  /* avx512f_movntv16sf */
    case 2180:  /* sse2_movntidi */
    case 2179:  /* sse2_movntisi */
    case 2178:  /* sse3_lddqu */
    case 2177:  /* avx_lddqu256 */
    case 2114:  /* *avx512vl_loadv8bf */
    case 2113:  /* *avx512vl_loadv16bf */
    case 2112:  /* *avx512bw_loadv32bf */
    case 2111:  /* *avx512fp16_loadv8hf */
    case 2110:  /* *avx512vl_loadv16hf */
    case 2109:  /* *avx512bw_loadv32hf */
    case 2108:  /* *avx512vl_loadv8hi */
    case 2107:  /* *avx512vl_loadv16hi */
    case 2106:  /* *avx512bw_loadv32hi */
    case 2105:  /* *avx512vl_loadv32qi */
    case 2104:  /* *avx512vl_loadv16qi */
    case 2103:  /* *avx512bw_loadv64qi */
    case 2090:  /* *avx512vl_loadv2df */
    case 2089:  /* *avx512vl_loadv4df */
    case 2088:  /* *avx512f_loadv8df */
    case 2087:  /* *avx512vl_loadv4sf */
    case 2086:  /* *avx512vl_loadv8sf */
    case 2085:  /* *avx512f_loadv16sf */
    case 2084:  /* *avx512vl_loadv2di */
    case 2083:  /* *avx512vl_loadv4di */
    case 2082:  /* *avx512f_loadv8di */
    case 2081:  /* *avx512vl_loadv4si */
    case 2080:  /* *avx512vl_loadv8si */
    case 2079:  /* *avx512f_loadv16si */
    case 2008:  /* mmx_pmovmskb */
    case 1704:  /* mmx_rsqrtv2sf2 */
    case 1701:  /* mmx_rcpv2sf2 */
    case 1690:  /* sse_movntq */
    case 1657:  /* urdmsr */
    case 1633:  /* movdiridi */
    case 1632:  /* movdirisi */
    case 1603:  /* rdsspdi */
    case 1602:  /* rdsspsi */
    case 1571:  /* xgetbv */
    case 1554:  /* xsaves */
    case 1553:  /* xsavec */
    case 1552:  /* xsaveopt */
    case 1551:  /* xsave */
    case 1541:  /* rdpmc */
    case 1405:  /* movmsk_df */
    case 1404:  /* fxamxf2_i387 */
    case 1403:  /* fxamdf2_i387 */
    case 1402:  /* fxamsf2_i387 */
    case 1381:  /* lrintxfsi2 */
    case 1380:  /* lrintxfhi2 */
    case 1378:  /* rintxf2 */
    case 1371:  /* *f2xm1xf2_i387 */
    case 1364:  /* cosxf2 */
    case 1363:  /* sinxf2 */
    case 1356:  /* rsqrthf2 */
    case 1355:  /* *rsqrtsf2_sse */
    case 1353:  /* truncxfdf2_i387_noop_unspec */
    case 1352:  /* truncxfsf2_i387_noop_unspec */
    case 1327:  /* rcphf2 */
    case 1326:  /* *rcpsf2_sse */
    case 1314:  /* *tls_dynamic_gnu2_lea_64_di */
    case 1313:  /* *tls_dynamic_gnu2_lea_64_si */
    case 192:  /* extendbfsf2_1 */
    case 72:  /* popfldi1 */
    case 71:  /* popflsi1 */
    case 70:  /* pushfldi2 */
    case 69:  /* pushflsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1122:  /* *setcc_si_1_and */
    case 1121:  /* *setcc_hi_1_and */
    case 151:  /* popp_di */
    case 150:  /* pushp_di */
    case 80:  /* *movdi_or */
    case 79:  /* *movsi_or */
    case 78:  /* *movhi_or */
    case 77:  /* *movdi_and */
    case 76:  /* *movsi_and */
    case 75:  /* *movhi_and */
    case 74:  /* *movdi_xor */
    case 73:  /* *movsi_xor */
    case 68:  /* *popdi1_epilogue */
    case 67:  /* *popsi1_epilogue */
    case 64:  /* *pushdi2_prologue */
    case 63:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 9372:  /* *movp2hi_internal */
    case 9371:  /* *movp2qi_internal */
    case 9155:  /* *movv64si_internal */
    case 9154:  /* *movv64sf_internal */
    case 2039:  /* movv2df_internal */
    case 2038:  /* movv4df_internal */
    case 2037:  /* movv8df_internal */
    case 2036:  /* movv4sf_internal */
    case 2035:  /* movv8sf_internal */
    case 2034:  /* movv16sf_internal */
    case 2033:  /* movv8bf_internal */
    case 2032:  /* movv16bf_internal */
    case 2031:  /* movv32bf_internal */
    case 2030:  /* movv8hf_internal */
    case 2029:  /* movv16hf_internal */
    case 2028:  /* movv32hf_internal */
    case 2027:  /* movv1ti_internal */
    case 2026:  /* movv2ti_internal */
    case 2025:  /* movv4ti_internal */
    case 2024:  /* movv2di_internal */
    case 2023:  /* movv4di_internal */
    case 2022:  /* movv8di_internal */
    case 2021:  /* movv4si_internal */
    case 2020:  /* movv8si_internal */
    case 2019:  /* movv16si_internal */
    case 2018:  /* movv8hi_internal */
    case 2017:  /* movv16hi_internal */
    case 2016:  /* movv32hi_internal */
    case 2015:  /* movv16qi_internal */
    case 2014:  /* movv32qi_internal */
    case 2013:  /* movv64qi_internal */
    case 1689:  /* *pushv2qi2 */
    case 1688:  /* *movv2qi_internal */
    case 1687:  /* *pushv2bf2_rex64 */
    case 1686:  /* *pushv2hf2_rex64 */
    case 1685:  /* *pushv1si2_rex64 */
    case 1684:  /* *pushv2hi2_rex64 */
    case 1683:  /* *pushv4qi2_rex64 */
    case 1682:  /* *movv2sf_imm */
    case 1681:  /* *movv2si_imm */
    case 1680:  /* *movv4bf_imm */
    case 1679:  /* *movv4hf_imm */
    case 1678:  /* *movv4hi_imm */
    case 1677:  /* *movv8qi_imm */
    case 1676:  /* *movv2hf_imm */
    case 1675:  /* *movv2hi_imm */
    case 1674:  /* *movv4qi_imm */
    case 1673:  /* *movv2qi_imm */
    case 1672:  /* *movv2bf_internal */
    case 1671:  /* *movv2hf_internal */
    case 1670:  /* *movv1si_internal */
    case 1669:  /* *movv2hi_internal */
    case 1668:  /* *movv4qi_internal */
    case 1667:  /* *movv4bf_internal */
    case 1666:  /* *movv4hf_internal */
    case 1665:  /* *movv2sf_internal */
    case 1664:  /* *movv1di_internal */
    case 1663:  /* *movv2si_internal */
    case 1662:  /* *movv4hi_internal */
    case 1661:  /* *movv8qi_internal */
    case 1534:  /* *prefetch_3dnow */
    case 1125:  /* *setcc_qi */
    case 1124:  /* *setcc_si_1_movzbl */
    case 1123:  /* *setcc_hi_1_movzbl */
    case 1120:  /* *setcc_di_1 */
    case 254:  /* *leadi */
    case 253:  /* *leasi */
    case 161:  /* *movbf_internal */
    case 160:  /* *movhf_internal */
    case 159:  /* *movsf_internal */
    case 158:  /* *movdf_internal */
    case 157:  /* *movxf_internal */
    case 156:  /* *movtf_internal */
    case 155:  /* *pushsf */
    case 154:  /* *pushsf_rex64 */
    case 147:  /* *pushbf */
    case 146:  /* *pushhf */
    case 145:  /* *pushbf_rex64 */
    case 144:  /* *pushhf_rex64 */
    case 143:  /* *pushdf */
    case 142:  /* *pushxf */
    case 141:  /* *pushtf */
    case 87:  /* *movqi_internal */
    case 86:  /* *movhi_internal */
    case 85:  /* *movsi_internal */
    case 84:  /* *movdi_internal */
    case 83:  /* *movti_internal */
    case 82:  /* *movoi_internal_avx */
    case 81:  /* *movxi_internal_avx512f */
    case 66:  /* *popdi1 */
    case 65:  /* *popsi1 */
    case 62:  /* *pushhi2 */
    case 61:  /* *pushqi2 */
    case 60:  /* *pushsi2 */
    case 59:  /* *pushsi2_rex64 */
    case 58:  /* *pushdi2_rex64 */
    case 57:  /* *pushti2 */
    case 56:  /* *pushdi2 */
    case 55:  /* *pushv1ti2 */
    case 54:  /* *pushv1ti2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 8140:  /* avx_vzeroupper_callee_abi */
    case 2012:  /* *mmx_femms */
    case 2011:  /* *mmx_emms */
    case 1654:  /* serialize */
    case 1653:  /* speculation_barrier */
    case 1644:  /* testui */
    case 1643:  /* stui */
    case 1642:  /* clui */
    case 1637:  /* xresldtrk */
    case 1636:  /* xsusldtrk */
    case 1631:  /* wbnoinvd */
    case 1630:  /* wbinvd */
    case 1618:  /* xtest_1 */
    case 1616:  /* xend */
    case 1614:  /* nop_endbr */
    case 1612:  /* setssbsy */
    case 1606:  /* saveprevssp */
    case 1576:  /* fnclex */
    case 1532:  /* ud2 */
    case 1531:  /* trap */
    case 1406:  /* cld */
    case 1177:  /* *leave_rex64 */
    case 1176:  /* *leave */
    case 1175:  /* eh_return_internal */
    case 1167:  /* nop */
    case 1163:  /* simple_return_internal_long */
    case 1162:  /* interrupt_return */
    case 1161:  /* simple_return_internal */
    case 1158:  /* blockage */
    case 462:  /* *setcc_qi_negqi_ccc_2_ccc */
    case 461:  /* *setcc_qi_negqi_ccc_2_cc */
    case 460:  /* *setcc_qi_negqi_ccc_1_ccc */
    case 459:  /* *setcc_qi_negqi_ccc_1_cc */
    case 458:  /* *setccc */
    case 457:  /* *setcc_qi_addqi3_cconly_overflow_1_ccc */
    case 456:  /* *setcc_qi_addqi3_cconly_overflow_1_cc */
    case 53:  /* *x86_cmc */
    case 52:  /* x86_stc */
      break;

    case 51:  /* *cmpiuhf */
    case 49:  /* *cmpiudf */
    case 47:  /* *cmpiusf */
    case 45:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1294:  /* parityqi2_cmp */
    case 43:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 42:  /* *cmpuxf_i387 */
    case 41:  /* *cmpudf_i387 */
    case 40:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 39:  /* *cmpxf_si_i387 */
    case 38:  /* *cmpdf_si_i387 */
    case 37:  /* *cmpsf_si_i387 */
    case 36:  /* *cmpxf_hi_i387 */
    case 35:  /* *cmpdf_hi_i387 */
    case 34:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 7593:  /* *sse2_pmovmskb_lt */
    case 7592:  /* *avx2_pmovmskb_lt */
    case 7565:  /* *sse2_movmskpd_lt */
    case 7564:  /* *avx_movmskpd256_lt */
    case 7563:  /* *sse_movmskps_lt */
    case 7562:  /* *avx_movmskps256_lt */
    case 33:  /* *cmpdf_i387 */
    case 32:  /* *cmpsf_i387 */
    case 31:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 28:  /* *cmpqi_extdi_4 */
    case 27:  /* *cmpqi_extsi_4 */
    case 26:  /* *cmpqi_exthi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 25:  /* *cmpqi_extdi_3 */
    case 24:  /* *cmpqi_extsi_3 */
    case 23:  /* *cmpqi_exthi_3 */
    case 22:  /* *cmpqi_extdi_2 */
    case 21:  /* *cmpqi_extsi_2 */
    case 20:  /* *cmpqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 19:  /* *cmpqi_extdi_1 */
    case 18:  /* *cmpqi_extsi_1 */
    case 17:  /* *cmpqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 601:  /* *testti_doubleword */
    case 594:  /* *testsi_1 */
    case 593:  /* *testhi_1 */
    case 592:  /* *testqi_1 */
    case 591:  /* *testqi_1_maybe_si */
    case 590:  /* *testdi_1 */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 50:  /* *cmpihf */
    case 48:  /* *cmpidf */
    case 46:  /* *cmpisf */
    case 44:  /* *cmpixf_i387 */
    case 30:  /* *cmpti_doubleword */
    case 29:  /* *cmpdi_doubleword */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
