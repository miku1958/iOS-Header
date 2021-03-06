//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id<_UIMotionEffectEventConsumer> _consumer;
}

@property id<_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;

- (id)currentEvent;
- (double)fastUpdateIntervalForLogs;
- (void)setSlowUpdatesEnabled:(BOOL)arg1;
- (BOOL)shouldLogEvents;
- (double)slowUpdateIntervalForLogs;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (BOOL)wantsSynchronizedUpdates;

@end

