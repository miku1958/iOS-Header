//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionScrubbingHandoffGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _initialLocation;
    double _hysteresis;
}

@property (nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;

+ (BOOL)_supportsTouchContinuation;
- (void)_beginGestureIfPossible;
- (BOOL)_gestureIsStillValid;
- (BOOL)_satisfiedHysteresis;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

