//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HapticClient;

@interface AVHapticPlayerChannel : NSObject
{
    unsigned long long _chanID;
    unsigned long long _behavior;
    HapticClient *_client;
}

@property unsigned long long chanID; // @synthesize chanID=_chanID;
@property (weak) HapticClient *client; // @synthesize client=_client;
@property unsigned long long eventBehavior;

- (void).cxx_destruct;
- (BOOL)clearEvents:(double)arg1 error:(id *)arg2;
- (id)initWithChannelID:(id)arg1 client:(id)arg2;
- (void)invalidate;
- (BOOL)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id *)arg4;
- (BOOL)sendEvents:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (BOOL)setParameter:(unsigned long long)arg1 value:(float)arg2 atTime:(double)arg3 error:(id *)arg4;
- (BOOL)startEvent:(unsigned long long)arg1 atTime:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(long long)arg4 token:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)startEvent:(unsigned long long)arg1 atTime:(double)arg2 token:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)stopEvent:(unsigned long long)arg1 atTime:(double)arg2 error:(id *)arg3;

@end

