//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/SkipContentIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents24SkipContentIntentHandler : NSObject <SkipContentIntentHandling>
{
    MISSING_TYPE *playbackController;
    MISSING_TYPE *deviceSelector;
    MISSING_TYPE *analyticsService;
}

- (void).cxx_destruct;
- (void)confirmSkipContent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSkipContent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)resolveDevicesForSkipContent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
