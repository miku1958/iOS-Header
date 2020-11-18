//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class EAAccessory, EASession, NSCondition, NSMutableData, NSObject, NSRecursiveLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EAInputStream : NSInputStream
{
    id _delegate;
    EAAccessory *_accessory;
    EASession *_session;
    int _sock;
    BOOL _useSocket;
    NSMutableData *_inputFromAccData;
    NSCondition *_inputFromAccCondition;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    NSObject<OS_dispatch_queue> *_inputFromAccQueue;
    NSObject<OS_dispatch_source> *_sockListenSource;
    char *_inputFromAccBuffer;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasNewBytesAvailable;
    BOOL _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
}

- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)endStream;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;
- (id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2;
- (void)open;
- (void)openCompleted;
- (void)processIncomingAccessoryData:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end
