//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrackingAvoidance/NSObject-Protocol.h>

@protocol TAEventProtocol, TATrackingAvoidanceServiceObserver;

@protocol TATrackingAvoidanceServiceProtocol <NSObject>
- (void)addObserver:(id<TATrackingAvoidanceServiceObserver>)arg1;
- (void)ingestTAEvent:(id<TAEventProtocol>)arg1;
- (void)removeObserver:(id<TATrackingAvoidanceServiceObserver>)arg1;
@end
