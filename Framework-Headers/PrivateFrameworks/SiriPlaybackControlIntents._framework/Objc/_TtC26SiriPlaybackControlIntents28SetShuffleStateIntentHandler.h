//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/SetShuffleStateIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents28SetShuffleStateIntentHandler : NSObject <SetShuffleStateIntentHandling>
{
    MISSING_TYPE *playbackController;
    MISSING_TYPE *deviceSelector;
    MISSING_TYPE *analyticsService;
}

- (void).cxx_destruct;
- (void)confirmSetShuffleState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSetShuffleState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)resolveDevicesForSetShuffleState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

