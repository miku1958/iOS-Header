//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectSimulatorMotionEventProvider : _UIMotionEffectEventProvider
{
    NSOperationQueue *_motionEventQueue;
    BOOL _shouldGenerateEvents;
    BOOL _startedSimulatorUpdates;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;

@end

