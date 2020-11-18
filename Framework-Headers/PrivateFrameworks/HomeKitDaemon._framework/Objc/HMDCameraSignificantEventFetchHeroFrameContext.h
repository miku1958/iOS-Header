//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMCameraSignificantEvent, HMDCameraSnapshotIDSRelayReceiver;

@interface HMDCameraSignificantEventFetchHeroFrameContext : HMFObject
{
    HMCameraSignificantEvent *_significantEvent;
    HMDCameraSnapshotIDSRelayReceiver *_relayReceiver;
}

@property (readonly) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property (readonly) HMCameraSignificantEvent *significantEvent; // @synthesize significantEvent=_significantEvent;

- (void).cxx_destruct;
- (id)initWithSignificantEvent:(id)arg1 relayReceiver:(id)arg2;

@end
