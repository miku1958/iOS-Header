//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/SeekTimeIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents21SeekTimeIntentHandler : NSObject <SeekTimeIntentHandling>
{
    MISSING_TYPE *playbackController;
    MISSING_TYPE *deviceSelector;
    MISSING_TYPE *analyticsService;
}

- (void).cxx_destruct;
- (void)confirmSeekTime:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSeekTime:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)resolveDevicesForSeekTime:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolvePlayheadPositionForSeekTime:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
