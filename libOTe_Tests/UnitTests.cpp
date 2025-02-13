#include "UnitTests.h"

#include <cryptoTools/Common/Log.h>
#include <functional>


#include "libOTe_Tests/AknOt_Tests.h"
#include "libOTe_Tests/BaseOT_Tests.h"
#include "libOTe_Tests/OT_Tests.h"
#include "libOTe_Tests/NcoOT_Tests.h"
#include "libOTe_Tests/AknOt_Tests.h"
#include "libOTe_Tests/SilentOT_Tests.h"
#include "libOTe_Tests/bitpolymul_Tests.h"

using namespace osuCrypto;
namespace tests_libOTe
{
    TestCollection Tests([](TestCollection& tc)
    {
        //void OtExt_genBaseOts_Test()


        tc.add("Tools_Transpose_View_Test               ", Tools_Transpose_View_Test);
        tc.add("Tools_Transpose_Test                    ", Tools_Transpose_Test);

        tc.add("Tools_LinearCode_Test                   ", Tools_LinearCode_Test);
        tc.add("Tools_LinearCode_sub_Test               ", Tools_LinearCode_sub_Test);
        tc.add("Tools_LinearCode_rep_Test               ", Tools_LinearCode_rep_Test);

        tc.add("Tools_bitShift_test                     ", Tools_bitShift_test);
        tc.add("Tools_modp_test                         ", Tools_modp_test);
        tc.add("Tools_bitpolymul_test                   ", Tools_bitpolymul_test);
                                              

        tc.add("Tools_Pprf_test                         ", Tools_Pprf_test);
        tc.add("Tools_Pprf_trans_test                   ", Tools_Pprf_trans_test);
        tc.add("Tools_Pprf_inter_test                   ", Tools_Pprf_inter_test);

        tc.add("Bot_NaorPinkas_Test                     ", Bot_NaorPinkas_Test);
        tc.add("Bot_Simplest_Test                       ", Bot_Simplest_Test);

        tc.add("Bot_McQuoidRR_Moeller_EKE_Test          ", Bot_McQuoidRR_Moeller_EKE_Test);
        tc.add("Bot_McQuoidRR_Moeller_MR_Test           ", Bot_McQuoidRR_Moeller_MR_Test);
        tc.add("Bot_McQuoidRR_Moeller_F_Test            ", Bot_McQuoidRR_Moeller_F_Test);
        tc.add("Bot_McQuoidRR_Moeller_FM_Test           ", Bot_McQuoidRR_Moeller_FM_Test);
        tc.add("Bot_McQuoidRR_Ristrestto_F_Test         ", Bot_McQuoidRR_Ristrestto_F_Test);
        tc.add("Bot_McQuoidRR_Ristrestto_FM_Test        ", Bot_McQuoidRR_Ristrestto_FM_Test);

        tc.add("Bot_MasnyRindal_Test                    ", Bot_MasnyRindal_Test);
        tc.add("Bot_MasnyRindal_Kyber_Test              ", Bot_MasnyRindal_Kyber_Test);

        tc.add("OtExt_genBaseOts_Test                   ", OtExt_genBaseOts_Test);
        tc.add("OtExt_Chosen_Test                       ", OtExt_Chosen_Test);
        tc.add("OtExt_Iknp_Test                         ", OtExt_Iknp_Test);
        tc.add("OtExt_Kos_Test                          ", OtExt_Kos_Test);
        tc.add("OtExt_Kos_fs_Test                       ", OtExt_Kos_fs_Test);
        tc.add("OtExt_Kos_ro_Test                       ", OtExt_Kos_ro_Test);
        tc.add("OtExt_Silent_random_Test                ", OtExt_Silent_random_Test);
        tc.add("OtExt_Silent_correlated_Test            ", OtExt_Silent_correlated_Test);
        tc.add("OtExt_Silent_inplace_Test               ", OtExt_Silent_inplace_Test);
        tc.add("OtExt_Silent_paramSweep_Test            ", OtExt_Silent_paramSweep_Test);
        tc.add("OtExt_Silent_QuasiCyclic_Test           ", OtExt_Silent_QuasiCyclic_Test);
        tc.add("OtExt_Silent_baseOT_Test                ", OtExt_Silent_baseOT_Test);
        tc.add("OtExt_Silent_mal_Test                   ", OtExt_Silent_mal_Test);

        tc.add("DotExt_Kos_Test                         ", DotExt_Kos_Test);
        tc.add("DotExt_Iknp_Test                        ", DotExt_Iknp_Test);

        tc.add("NcoOt_Kkrt_Test                         ", NcoOt_Kkrt_Test);
        tc.add("NcoOt_Oos_Test                          ", NcoOt_Oos_Test);
        tc.add("NcoOt_Rr17_Test                         ", NcoOt_Rr17_Test);
        tc.add("NcoOt_genBaseOts_Test                   ", NcoOt_genBaseOts_Test);

        tc.add("AknOt_sendRecv1000_Test                 ", AknOt_sendRecv1000_Test);


    });



}
