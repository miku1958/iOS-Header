//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/GTBaseStreamTransport_capture.h>

@class NSMutableArray, NSURL;

@interface GTSharedMemoryTransport_capture : GTBaseStreamTransport_capture
{
    struct sm_region_header *_outgoingShmem;
    struct sm_region_header *_incomingShmem;
    struct sm_region_header *_masterSMRegion;
    void *_outgoingBuffer;
    void *_incomingBuffer;
    GTBaseStreamTransport_capture *_relayTransport;
    CDUnknownFunctionPointerType _consumeBytesIMP;
    SEL _consumeBytesSEL;
    unsigned int _currentPacketBytesLeft;
    int _mode;
    BOOL _deferred;
    NSMutableArray *_bufferedMessages;
    char _sendName[64];
    char _receiveName[64];
}

@property (readonly, nonatomic) BOOL deferred; // @synthesize deferred=_deferred;
@property (strong, nonatomic) NSURL *url; // @dynamic url;

- (void)_accumulateMessageBytes;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)arg1;
- (BOOL)_clientConnect:(id *)arg1;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_copyFromSM:(void *)arg1 size:(unsigned long long)arg2;
- (void)_copyToSM:(const void *)arg1 size:(long long)arg2;
- (BOOL)_createAndRunSources:(id *)arg1;
- (void)_dequeueIncomingMessages;
- (void)_dequeuePacket;
- (id)_getSharedMemoryNameWithSuffix:(id)arg1;
- (BOOL)_initializeSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;
- (void)_invalidate;
- (void *)_mapSharedMemoryFile:(int)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned int)_nextMessageSerial;
- (BOOL)_openSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (void)_relayPacket;
- (BOOL)_serverConnect:(id *)arg1;
- (void)_setupIOBuffers;
- (void)_tearDownSharedMemory;
- (void)_updateReaderOffset:(unsigned long long)arg1;
- (void)_waitEAGAIN;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (id)connect;
- (BOOL)connected;
- (void)dealloc;
- (id)init;
- (id)initWithMode:(int)arg1;
- (id)initWithMode:(int)arg1 initialMessageSerial:(unsigned int)arg2;
- (BOOL)send:(id)arg1 inReplyTo:(id)arg2 error:(id *)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;
- (void)setRelayTransport:(id)arg1;

@end

