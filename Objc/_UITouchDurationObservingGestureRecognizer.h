//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer
{
    CADisplayLink *_displayLink;
    double _minimumDurationRequired;
    double _allowableMovement;
    double _touchForce;
    double _touchStartTimestamp;
    UIDelayedAction *_delayedAction;
    struct CGPoint _originalCentroid;
}

@property (nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property (readonly, nonatomic) UIDelayedAction *delayedAction; // @synthesize delayedAction=_delayedAction;
@property (readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (nonatomic) double minimumDurationRequired; // @synthesize minimumDurationRequired=_minimumDurationRequired;
@property (nonatomic) struct CGPoint originalCentroid; // @synthesize originalCentroid=_originalCentroid;
@property (readonly, nonatomic) double touchDuration;
@property (readonly, nonatomic) double touchForce; // @synthesize touchForce=_touchForce;
@property (nonatomic) double touchStartTimestamp; // @synthesize touchStartTimestamp=_touchStartTimestamp;

- (void).cxx_destruct;
- (void)_cancelOrFail;
- (void)_displayLinkDidFire:(id)arg1;
- (BOOL)_exceededNumberOfTouchesForEvent:(id)arg1;
- (void)_performDelayedBegin;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

