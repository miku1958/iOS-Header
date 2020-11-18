//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSMutableData, NSMutableDictionary, NSObject, NSRunLoop;
@protocol NSStreamDelegate, OS_dispatch_queue;

@interface MRAVBufferedInputStream : NSInputStream
{
    unsigned long long _status;
    id<NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableData *_buffer;
}

- (void)_init;
- (void)_onRunLoop_notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (void)handleDataReceived:(id)arg1;
- (void)handleStreamDisconnect;
- (BOOL)hasBytesAvailable;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end

