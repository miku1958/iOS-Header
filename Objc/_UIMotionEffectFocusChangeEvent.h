//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIMotionEffectEvent.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent
{
    struct CGPoint _focusPosition;
}

@property (readonly, nonatomic) struct CGPoint focusPosition; // @synthesize focusPosition=_focusPosition;

- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1 focusPosition:(struct CGPoint)arg2;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end

