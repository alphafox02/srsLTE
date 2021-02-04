/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2020 Software Radio Systems Limited
 *
 * By using this file, you agree to the terms and conditions set
 * forth in the LICENSE file which can be found at the top level of
 * the distribution.
 *
 */

#ifndef SRSLTE_SRSLTE_H
#define SRSLTE_SRSLTE_H

#ifdef __cplusplus
#include <complex>
extern "C" {
#else
#include <complex.h>
#endif

#include <math.h>

#include "srslte/config.h"
#include "srslte/version.h"

#include "srslte/phy/utils/bit.h"
#include "srslte/phy/utils/cexptab.h"
#include "srslte/phy/utils/convolution.h"
#include "srslte/phy/utils/debug.h"
#include "srslte/phy/utils/ringbuffer.h"
#include "srslte/phy/utils/vector.h"

#include "srslte/phy/common/phy_common.h"
#include "srslte/phy/common/sequence.h"
#include "srslte/phy/common/timestamp.h"
#include "srslte/phy/utils/phy_logger.h"

#include "srslte/phy/ch_estimation/chest_dl.h"
#include "srslte/phy/ch_estimation/chest_ul.h"
#include "srslte/phy/ch_estimation/dmrs_pdcch.h"
#include "srslte/phy/ch_estimation/dmrs_sch.h"
#include "srslte/phy/ch_estimation/refsignal_dl.h"
#include "srslte/phy/ch_estimation/refsignal_ul.h"
#include "srslte/phy/ch_estimation/wiener_dl.h"

#include "srslte/phy/resampling/decim.h"
#include "srslte/phy/resampling/interp.h"
#include "srslte/phy/resampling/resample_arb.h"

#include "srslte/phy/channel/ch_awgn.h"

#include "srslte/phy/dft/dft.h"
#include "srslte/phy/dft/dft_precoding.h"
#include "srslte/phy/dft/ofdm.h"
#include "srslte/phy/fec/cbsegm.h"
#include "srslte/phy/fec/convolutional/convcoder.h"
#include "srslte/phy/fec/convolutional/rm_conv.h"
#include "srslte/phy/fec/convolutional/viterbi.h"
#include "srslte/phy/fec/crc.h"
#include "srslte/phy/fec/turbo/rm_turbo.h"
#include "srslte/phy/fec/turbo/tc_interl.h"
#include "srslte/phy/fec/turbo/turbocoder.h"
#include "srslte/phy/fec/turbo/turbodecoder.h"

#include "srslte/phy/io/binsource.h"
#include "srslte/phy/io/filesink.h"
#include "srslte/phy/io/filesource.h"
#include "srslte/phy/io/netsink.h"
#include "srslte/phy/io/netsource.h"

#include "srslte/phy/modem/demod_hard.h"
#include "srslte/phy/modem/demod_soft.h"
#include "srslte/phy/modem/evm.h"
#include "srslte/phy/modem/mod.h"
#include "srslte/phy/modem/modem_table.h"

#include "srslte/phy/mimo/layermap.h"
#include "srslte/phy/mimo/precoding.h"

#include "srslte/phy/fec/softbuffer.h"
#include "srslte/phy/phch/cqi.h"
#include "srslte/phy/phch/dci.h"
#include "srslte/phy/phch/dci_nr.h"
#include "srslte/phy/phch/pbch.h"
#include "srslte/phy/phch/pcfich.h"
#include "srslte/phy/phch/pdcch.h"
#include "srslte/phy/phch/pdcch_nr.h"
#include "srslte/phy/phch/pdsch.h"
#include "srslte/phy/phch/phich.h"
#include "srslte/phy/phch/prach.h"
#include "srslte/phy/phch/pucch.h"
#include "srslte/phy/phch/pucch_proc.h"
#include "srslte/phy/phch/pusch.h"
#include "srslte/phy/phch/ra.h"
#include "srslte/phy/phch/ra_dl.h"
#include "srslte/phy/phch/ra_dl_nr.h"
#include "srslte/phy/phch/ra_nr.h"
#include "srslte/phy/phch/ra_ul.h"
#include "srslte/phy/phch/regs.h"
#include "srslte/phy/phch/sch.h"
#include "srslte/phy/phch/uci.h"

#include "srslte/phy/ue/ue_cell_search.h"
#include "srslte/phy/ue/ue_dl.h"
#include "srslte/phy/ue/ue_dl_nr.h"
#include "srslte/phy/ue/ue_mib.h"
#include "srslte/phy/ue/ue_sync.h"
#include "srslte/phy/ue/ue_ul.h"
#include "srslte/phy/ue/ue_ul_nr.h"

#include "srslte/phy/enb/enb_dl.h"
#include "srslte/phy/enb/enb_dl_nr.h"
#include "srslte/phy/enb/enb_ul.h"

#include "srslte/phy/scrambling/scrambling.h"

#include "srslte/phy/sync/cfo.h"
#include "srslte/phy/sync/cp.h"
#include "srslte/phy/sync/pss.h"
#include "srslte/phy/sync/refsignal_dl_sync.h"
#include "srslte/phy/sync/sfo.h"
#include "srslte/phy/sync/sss.h"
#include "srslte/phy/sync/sync.h"

#ifdef __cplusplus
}
#undef I // Fix complex.h #define I nastiness when using C++
#endif

#endif // SRSLTE_SRSLTE_H
