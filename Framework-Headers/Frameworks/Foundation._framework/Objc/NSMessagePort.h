//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort
{
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithRemoteName:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (id)name;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;
- (BOOL)setName:(id)arg1;

@end

