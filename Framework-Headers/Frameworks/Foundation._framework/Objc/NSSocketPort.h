//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPort.h>

@class NSData;

@interface NSSocketPort : NSPort
{
    void *_receiver;
    id _connectors;
    void *_loops;
    void *_data;
    id _signature;
    id _delegate;
    id _lock;
    unsigned long long _maxSize;
    unsigned long long _useCount;
    unsigned long long _reserved;
}

@property (readonly, copy) NSData *address;
@property (readonly) int protocol;
@property (readonly) int protocolFamily;
@property (readonly) int socket;
@property (readonly) int socketType;

+ (void)_fixNSSocketPortLeak;
+ (void)initialize;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
- (void)_handleMessage:(struct __CFData *)arg1 from:(struct __CFData *)arg2 socket:(struct __CFSocket *)arg3;
- (void)_incrementUseCount;
- (id)_initRemoteWithSignature:(id)arg1;
- (id)_initWithRetainedCFSocket:(struct __CFSocket *)arg1 protocolFamily:(int)arg2 socketType:(int)arg3 protocol:(int)arg4;
- (BOOL)_isDeallocating;
- (struct __CFSocket *)_sendingSocketForPort:(id)arg1 beforeTime:(double)arg2;
- (BOOL)_tryRetain;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)handleConnDeath:(id)arg1;
- (void)handlePortMessage:(id)arg1;
- (id)init;
- (id)initRemoteWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initRemoteWithTCPPort:(unsigned short)arg1 host:(id)arg2;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 socket:(int)arg4;
- (id)initWithTCPPort:(unsigned short)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;
- (id)signature;

@end

