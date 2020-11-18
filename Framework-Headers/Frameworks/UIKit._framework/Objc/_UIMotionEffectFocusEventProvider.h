//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIMotionEffectEventProvider.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider
{
    BOOL _isGeneratingEvents;
    struct CGPoint _focusPosition;
    struct CGPoint _lastReportedPosition;
}

@property (nonatomic) struct CGPoint focusPosition;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedInstance;
- (id)currentEvent;
- (id)init;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (BOOL)wantsSynchronizedUpdates;

@end

