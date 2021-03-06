//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct CSAudioCircularBufferImpl<unsigned short>;

struct CSAudioZeroFilterImpl<unsigned short>;

struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short>>> {
    struct __compressed_pair<CSAudioZeroFilterImpl<unsigned short>*, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short>>> {
        struct CSAudioZeroFilterImpl<unsigned short> *__value_;
    } __ptr_;
};

struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
    struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short>*, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
        struct CSAudioCircularBufferImpl<unsigned short> *__value_;
    } __ptr_;
};

