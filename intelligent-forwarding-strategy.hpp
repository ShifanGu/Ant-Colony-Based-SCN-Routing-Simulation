#ifndef NDNSIM_SCRATCH_INTELLIGENT_FORWARDING_STRATEGY_HPP
#define NDNSIM_SCRATCH_INTELLIGENT_FORWARDING_STRATEGY_HPP


#include <boost/random/mersenne_twister.hpp>
#include "face/face.hpp"
#include "fw/strategy.hpp"
#include "fw/algorithm.hpp"

namespace nfd {
namespace fw {

class IntelligentForwardingStrategy : public Strategy {
public:
  IntelligentForwardingStrategy(Forwarder& forwarder, const Name& name = STRATEGY_NAME);

  virtual ~IntelligentForwardingStrategy() override;

  virtual void
  afterReceiveInterest(const Face& inFace, const Interest& interest,
                       const shared_ptr<pit::Entry>& pitEntry) override;

public:
  static const Name STRATEGY_NAME;

protected:
  boost::random::mt19937 m_randomGenerator;
};

} // namespace fw
} // namespace nfd


#endif // NDNSIM_SCRATCH_INTELLIGENT_FORWARDING_STRATEGY_HPP
