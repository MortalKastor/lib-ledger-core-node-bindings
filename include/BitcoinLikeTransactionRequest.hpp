// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKETRANSACTIONREQUEST_HPP
#define DJINNI_GENERATED_BITCOINLIKETRANSACTIONREQUEST_HPP

#include "../utils/optional.hpp"
#include <cstdint>
#include <iostream>
#include <memory>
#include <utility>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;
class BitcoinLikeOutput;

/** Structure representing a bitcoin transaction request. */
struct BitcoinLikeTransactionRequest final {
    /** List of BitcoinLikeOutput objects, UTXO (Unspent Transaction Outputs) consumed by transaction's inputs. */
    std::vector<std::shared_ptr<BitcoinLikeOutput>> utxo;
    /** List of BitcoinLikeOutput objects, transaction's output. */
    std::vector<std::shared_ptr<BitcoinLikeOutput>> outputs;
    /** Optional Amount object, amount of base fees. */
    std::shared_ptr<Amount> baseFees;
    /** Optional Amount object, amount of total fees. */
    std::shared_ptr<Amount> totalFees;
    /** Optional 32 bits integer, transaction's lock time (refer to BitcoinLikeTransaction class). */
    std::experimental::optional<int32_t> lockTime;

    BitcoinLikeTransactionRequest(std::vector<std::shared_ptr<BitcoinLikeOutput>> utxo_,
                                  std::vector<std::shared_ptr<BitcoinLikeOutput>> outputs_,
                                  std::shared_ptr<Amount> baseFees_,
                                  std::shared_ptr<Amount> totalFees_,
                                  std::experimental::optional<int32_t> lockTime_)
    : utxo(std::move(utxo_))
    , outputs(std::move(outputs_))
    , baseFees(std::move(baseFees_))
    , totalFees(std::move(totalFees_))
    , lockTime(std::move(lockTime_))
    {}

    BitcoinLikeTransactionRequest(const BitcoinLikeTransactionRequest& cpy) {
       this->utxo = cpy.utxo;
       this->outputs = cpy.outputs;
       this->baseFees = cpy.baseFees;
       this->totalFees = cpy.totalFees;
       this->lockTime = cpy.lockTime;
    }

    BitcoinLikeTransactionRequest() = default;


    BitcoinLikeTransactionRequest& operator=(const BitcoinLikeTransactionRequest& cpy) {
       this->utxo = cpy.utxo;
       this->outputs = cpy.outputs;
       this->baseFees = cpy.baseFees;
       this->totalFees = cpy.totalFees;
       this->lockTime = cpy.lockTime;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(utxo, outputs, baseFees, totalFees, lockTime);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(utxo, outputs, baseFees, totalFees, lockTime);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKETRANSACTIONREQUEST_HPP
