// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <vector>

namespace nok {

class StreamChannel {
public:
    virtual ~StreamChannel() {}

    virtual std::vector<float> get_data() = 0;

    static std::shared_ptr<StreamChannel> create(const std::vector<uint8_t> & data, bool looping);

    virtual void nextSamples(const std::vector<float> & requestedSamples, int32_t requestedLength, int32_t sampleRate) = 0;

    virtual void play() = 0;

    virtual void pause() = 0;

    virtual void stop() = 0;

    virtual float get_length() = 0;

    virtual float get_position() = 0;

    virtual void set_position(float pos) = 0;

    virtual float get_volume() = 0;

    virtual void set_volume(float vol) = 0;

    virtual bool get_finished() = 0;

    virtual void max(int32_t a, int32_t b) = 0;

    virtual void min(int32_t a, int32_t b) = 0;
};

}  // namespace nok
