//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearbyInteraction/NSObject-Protocol.h>

@class NSArray, NSError;

@protocol UWBSessionDelegateProxyProtocol <NSObject>
- (void)didRemoveNearbyObjects:(NSArray *)arg1 withReason:(unsigned long long)arg2;
- (void)didUpdateNearbyObjects:(NSArray *)arg1;
- (void)uwbSessionDidFailWithError:(NSError *)arg1;
- (void)uwbSessionDidInvalidateWithError:(NSError *)arg1;
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSystemDidChangeState:(unsigned long long)arg1;
@end
