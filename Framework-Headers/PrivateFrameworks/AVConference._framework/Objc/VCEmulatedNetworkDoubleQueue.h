//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCEmulatedNetwork.h>

@class VCEmulatedNetworkQueue;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork
{
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}

- (void)dealloc;
- (id)initWithPolicies:(id)arg1;
- (void)push:(id)arg1;
- (void)runUntilTime:(double)arg1;

@end

