#pragma once
#include "../Common/BinanceScalping.h"

class LiveBinanceScalpingCurrency : public BinanceScalping {
private:
    std::vector<double> prices;

public:
    [[nodiscard]] auto get_prices() const -> const std::vector<double> &{
        return prices;
    }

    LiveBinanceScalpingCurrency(int8_t version, const std::string &host_, const std::string &port_,
                                const std::string &target_);

    void fetch_raw_data(size_t scalping_data_point) override;
};
