//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;
    double _allowableMovement;
    int _numberOfFullTaps;
    double _minimumFinalPressDuration;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTaps;
    UITouch *_touch;
    UIDelayedAction *_tapTimer;
}

@property (nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property (nonatomic) double minimumFinalPressDuration; // @synthesize minimumFinalPressDuration=_minimumFinalPressDuration;
@property (nonatomic) int numberOfFullTaps; // @synthesize numberOfFullTaps=_numberOfFullTaps;
@property (strong, nonatomic) UITouch *touch; // @synthesize touch=_touch;

- (void).cxx_destruct;
- (void)_resetGestureRecognizer;
- (void)_verifyMovementInAllowableRange;
- (void)clearTapTimer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)recognized:(id)arg1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)startRecognitionTimer:(double)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translationInWindowCoordinates;

@end

