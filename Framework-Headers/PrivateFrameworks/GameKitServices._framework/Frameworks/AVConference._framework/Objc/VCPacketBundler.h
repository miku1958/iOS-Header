//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPacketBundler : NSObject
{
    char *_buffer;
    unsigned int _bufferSize;
    unsigned int _maxPacketSize;
    struct _opaque_pthread_mutex_t _mutex;
    unsigned int _packetsPerBundle;
    int _payload;
    unsigned int _timestamp;
    unsigned int _encodedBufferSize;
    unsigned int _accessUnitDataSectionSize;
    unsigned int _bundledPackets;
    struct tagAccessUnitHeaderInfo _accessUnitHeaderInfo;
    BOOL _useRFC3640;
    BOOL _allowLargePackets;
    BOOL _isFull;
}

@property (nonatomic) BOOL allowLargePackets; // @synthesize allowLargePackets=_allowLargePackets;
@property (readonly, nonatomic) unsigned int bundledPackets; // @synthesize bundledPackets=_bundledPackets;
@property (readonly, nonatomic) char *encodedBuffer;
@property (readonly, nonatomic) unsigned int encodedBufferSize;
@property (readonly, nonatomic) BOOL isFull; // @synthesize isFull=_isFull;
@property (nonatomic) unsigned int maxPacketSize;
@property (readonly, nonatomic) unsigned int packetsPerBundle;
@property (nonatomic) int payload; // @synthesize payload=_payload;
@property (nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) BOOL useRFC3640; // @synthesize useRFC3640=_useRFC3640;

- (char *)accessUnitDataSectionHead;
- (unsigned int)accessUnitHeaderSectionSize;
- (unsigned int)accessUnitHeaderSectionSizeMaximum;
- (BOOL)allocateBundleBuffer:(unsigned int)arg1;
- (BOOL)bundleAudio:(void *)arg1 numInputBytes:(unsigned int)arg2 packetPayload:(id)arg3 timestamp:(unsigned int)arg4;
- (BOOL)bundleAudioLegacy:(void *)arg1 numInputBytes:(unsigned int)arg2 packetPayload:(id)arg3 timestamp:(unsigned int)arg4;
- (BOOL)bundleAudioRFC3640:(void *)arg1 numInputBytes:(unsigned int)arg2 packetPayload:(id)arg3 timestamp:(unsigned int)arg4;
- (unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;
- (void)dealloc;
- (char *)encodedBufferForRFC3640;
- (unsigned int)encodedBufferSizeForRFC3640;
- (id)init;
- (void)initLock;
- (void)lock;
- (BOOL)reallocateBufferWithMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;
- (void)releaseBundleBuffer;
- (void)resetBuffer;
- (BOOL)setPacketsPerBundle:(unsigned int)arg1;
- (void)unlock;

@end
